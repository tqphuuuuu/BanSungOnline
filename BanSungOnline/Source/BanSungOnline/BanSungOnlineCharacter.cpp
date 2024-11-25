// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Weapon/Weapon.h"
#include "Weapon/WeaponPistol.h"
#include "Weapon/WeaponRifle.h"

ABanSungOnlineCharacter::ABanSungOnlineCharacter()
{
	// Set size for player capsule
	bReplicates = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	Health = 40.0f;
	MaxHealth = 40.0f;
}

void ABanSungOnlineCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
	if (Health > 0)
	{
		FVector Location = GetActorLocation();
		FRotator Temp =  UKismetMathLibrary::FindLookAtRotation(Location , Mouse);
		Temp.Roll = GetActorRotation().Roll;
		Temp.Pitch = GetActorRotation().Pitch;
		SetActorRotation(Temp);
	}
}
void ABanSungOnlineCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABanSungOnlineCharacter, Mouse);
	DOREPLIFETIME(ABanSungOnlineCharacter, CurrentWeapon);
	DOREPLIFETIME(ABanSungOnlineCharacter, Health);
	DOREPLIFETIME(ABanSungOnlineCharacter, MaxHealth);
}

/// Kiểm tra xem có phải là vũ khí cần nhặt không
/*
TArray<UClass*> ValidWeaponClasses;  
void ABanSungOnlineCharacter::InitializeWeaponClasses()  
{  
	ValidWeaponClasses.Add(AWeaponPistol::StaticClass());  
	ValidWeaponClasses.Add(AWeaponRifle::StaticClass());  
}

//// Add vũ khí vào hàm
void ABanSungOnlineCharacter::AddWeapon(AWeapon* NewWeapon)  
{  
	if (NewWeapon)  
	{  
		for (UClass* WeaponClass : ValidWeaponClasses)  
		{  
			if (NewWeapon->GetClass() == WeaponClass)  
			{  
				Weapons.Add(NewWeapon);
				return;
			}  
		}  
		UE_LOG(LogTemp, Warning, TEXT("Ko phai sung"));  
	}  
}
*/

void ABanSungOnlineCharacter::ServerSetHealth_Implementation(float Damage)
{

	Health -= Damage;
}

void ABanSungOnlineCharacter::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor); // Gọi phương thức lớp cơ sở

	// Kiểm tra nếu đối tượng va chạm là Pistol hoặc Rifle thông qua AWeapon
	if (Cast<AWeapon>(OtherActor))
	{
		AWeapon* Weapon = Cast<AWeapon>(OtherActor);  // Kiểm tra nếu OtherActor là loại AWeapon
		if (IsValid(Weapon) && !Weapon->IsAttached)
		{
			Weapon->IsAttached = true;
			Weapons.Add(Weapon); 
			Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Socket_Weapon"));
			Weapon->IsAttached = true;
			Weapon->SetActorHiddenInGame(true);
		}
	}
}

///	Hàm Show Vũ khí
void ABanSungOnlineCharacter::ShowWeapon(int32 Type)
{
	if (Weapons.Num() == 0)
	{
		return;
	}
	
	// Ẩn tất cả vũ khí trước khi hiển thị vũ khí mới
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon)
		{
			Weapon->SetActorHiddenInGame(true);  // Ẩn vũ khí
		}
	}
	// Hiển thị vũ khí theo Type
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon && Weapon->Type == Type)  // Kiểm tra loại vũ khí
		{
			if (Type == 0)
			{
				
				Weapon->SetActorHiddenInGame(false);  // Hiển thị vũ khí
				
			}
			else if (Type == 1)
			{
				Weapon->SetActorHiddenInGame(false);  // Hiển thị vũ khí

			}
			return;  // Thoát vòng lặp sau khi tìm thấy và hiển thị vũ khí
		}
	}
}

TSubclassOf<AWeapon> ABanSungOnlineCharacter::GetCurrentWeaponClass()
{
	// Duyệt qua mảng Weapons để tìm vũ khí không bị ẩn
	for (AWeapon* Weapon : Weapons)
	{
		if (Weapon && !Weapon->IsHidden())
		{
			return Weapon->GetClass(); // Trả về loại vũ khí đầu tiên không bị ẩn
		}
	}

	return nullptr; // Nếu không có vũ khí nào, trả về nullptr
}



bool ABanSungOnlineCharacter::IsWeaponVisible(TSubclassOf<AWeapon> WeaponClass)
{
	for (AWeapon* Weapon : Weapons)
	{
		// Kiểm tra nếu vũ khí này không bị ẩn và thuộc lớp WeaponClass
		if (Weapon && !Weapon->IsHidden() && Weapon->IsA(WeaponClass))
		{
			return true;  // Nếu tìm thấy vũ khí phù hợp thì trả về true
		}
	}
	return false;
}

void ABanSungOnlineCharacter::OnRep_ChangeHealth()
{
	ShowHealth.Broadcast();
} 

