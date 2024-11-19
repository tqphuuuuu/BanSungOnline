// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlinePlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BanSungOnlineCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Weapon/Weapon.h"
#include "Weapon/WeaponPistol.h"
#include "Weapon/WeaponRifle.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABanSungOnlinePlayerController::ABanSungOnlinePlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;

	/*
	Health = 40.0f ;
	MaxHealth = 40.0f ;*/
}

void ABanSungOnlinePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	if (HasAuthority())
	{
		//server
	}
	if (!HasAuthority())
	{
		//client
	}
}

void ABanSungOnlinePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (!HasAuthority())
	{
		FHitResult HitResult;
		GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, HitResult);
		FVector MouseLocation = HitResult.Location;

		Server_Test(MouseLocation);
	}

	
}
void ABanSungOnlinePlayerController::Server_Test_Implementation(FVector MouseLocation)
{
	ABanSungOnlineCharacter* CharacterPlayer = Cast<ABanSungOnlineCharacter>(GetPawn());
	if(IsValid(CharacterPlayer))
	{
		CharacterPlayer->Mouse = MouseLocation;
	}
}

void ABanSungOnlinePlayerController::WeaponFiring_Implementation(AWeapon* Weapon,  FVector MouseLocation)
{
	Weapon->Fire(MouseLocation);
}



void ABanSungOnlinePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnSetDestinationTriggered);
		InputComponent->BindAction("Mouse Click", IE_Released, this, &ABanSungOnlinePlayerController::OnMouseButtonReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ABanSungOnlinePlayerController::OnShooting);

		// Move W S A D
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnMoveAction);

		
		EnhancedInputComponent->BindAction(Key_BoardPisol, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnKeyBoard_Pistol);
		EnhancedInputComponent->BindAction(Key_BoardRifle, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnKeyBoard_Rifle);
		EnhancedInputComponent->BindAction(keyBoardReloadAmmo, ETriggerEvent::Started, this, &ABanSungOnlinePlayerController::OnKeyBoard_ReloadAmmo);

		
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABanSungOnlinePlayerController::OnInputStarted()
{
	StopMovement();
}

void ABanSungOnlinePlayerController::OnMouseButtonReleased()
{
	// Code xử lý khi nút chuột được thả
	bIsShooting = false;
}

// Triggered every frame when the input is held down
void ABanSungOnlinePlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());

	if (!MyCharacter) return;

	
	for (AWeapon* Weapon : MyCharacter->Weapons)
	{
		if (Weapon && MyCharacter->IsWeaponVisible(Weapon->GetClass()))
		{
			SelectedWeapon = Weapon;
			break;
		}
	}
	
	if (SelectedWeapon && SelectedWeapon->CurrentAmmo >= 1 )
	{
		if (SelectedWeapon == nullptr)
		{
			return;
		}
		if (MyCharacter->CurrentWeapon)
		{
			CachedDestination.Z = GetPawn()->GetActorLocation().Z;
			FVector Temp = CachedDestination - GetPawn()->GetActorLocation();
			WeaponFiring(SelectedWeapon, Temp);
		}
			
	}
	else
	{
		FireShooting = false;
	}
}



void ABanSungOnlinePlayerController::ReloadGun_Implementation()
{
	Cast<ABanSungOnlineCharacter>(GetPawn())->CurrentWeapon->ReLoadAmmo();
	SetFalse();

}

void ABanSungOnlinePlayerController::SetFalse_Implementation()
{
	isReloading = false;
}


void ABanSungOnlinePlayerController::ReplaceWeapon_Implementation(AWeapon* NewWeapon)
{
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());
	MyCharacter->CurrentWeapon = NewWeapon;
}
/*void ABanSungOnlinePlayerController::OnShooting()
{
	Cast<ABanSungOnlineCharacter>(GetPawn())->CurrentWeapon->ShootOneByOne = false;
	/*UKismetSystemLibrary::PrintString(GetWorld(), 	Cast<ABanSungOnlineCharacter>(GetPawn())->CurrentWeapon->ShootOneByOne
 ? TEXT("true") : TEXT("false"), true, true, FLinearColor::Green, 2.0f);#1#

}*/

void ABanSungOnlinePlayerController::OnShooting_Implementation()
{	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());

	if (!PlayerCharacter) return; // Kiểm tra nếu không có nhân vật nào thì thoát.

	if (PlayerCharacter->Weapons.Num() > 0 && PlayerCharacter->CurrentWeapon) // Kiểm tra có vũ khí nào hay không.
	{
		// Kiểm tra nếu vũ khí hiện tại là loại Pistol.
		if (PlayerCharacter->CurrentWeapon->IsA(AWeaponPistol::StaticClass()))
		{
			PlayerCharacter->CurrentWeapon->ShootOneByOne = false;
		}
	}
}
void ABanSungOnlinePlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABanSungOnlinePlayerController, CachedDestination);
	DOREPLIFETIME(ABanSungOnlinePlayerController, isReloading);
}


void ABanSungOnlinePlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}
	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void ABanSungOnlinePlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ABanSungOnlinePlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}
void ABanSungOnlinePlayerController::OnMoveAction(const FInputActionValue& Value)
{
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());
	const FVector2D MovementVector = Value.Get<FVector2D>();
	if (MyCharacter)
	{
		if (MyCharacter->Health > 0)
		{
			if (this != nullptr)
			{
				// find out which way is forward
				const FRotator Rotation = GetControlRotation();
				const FRotator YawRotation(0, Rotation.Yaw, 0);

				// get forward vector
				const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
				// get right vector .
				const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

				// add movement 
				GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
				GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
			}
		}
		
	}
	
}

void ABanSungOnlinePlayerController::OnKeyBoard_Pistol(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetCharacter());
	
	if (MyCharacter)
	{
		//MyCharacter->Cur_weapon = 0;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeaponPistol>(i))
			{
				Server_ShowWeapon(0);
				ShowWBCountBullet.Broadcast();
				ReplaceWeapon(i);
				break;
			}
		}
		
	}
		
}

void ABanSungOnlinePlayerController::OnKeyBoard_Rifle(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không


	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetCharacter());
	
	if (MyCharacter)
	{
		//MyCharacter->Cur_weapon = 1;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeaponRifle>(i))
			{
				Server_ShowWeapon(1);

				ReplaceWeapon(i);
				ShowWBCountBullet.Broadcast();
				break;
			}
		}
		
	}
		
}
void ABanSungOnlinePlayerController::OnKeyBoard_ReloadAmmo(const FInputActionValue& Value)
{
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());
	if (MyCharacter)
	{
		// Lấy loại vũ khí hiện tại
		TSubclassOf<AWeapon> CurrentWeaponClass = MyCharacter->GetCurrentWeaponClass();
        
		if (CurrentWeaponClass)
		{
			// Lặp qua từng vũ khí trong mảng Weapons
			for (AWeapon* Weapon : MyCharacter->Weapons)
			{
				if (Weapon && Weapon->IsA(CurrentWeaponClass)) // Kiểm tra xem vũ khí có phải là loại hiện tại
				{
					ReloadGun();
				}
			
			}
		}
		else
		{
			//UKismetSystemLibrary::PrintString(this, TEXT("Không có vũ khí nào được hiện."));
		}
	}
}

void ABanSungOnlinePlayerController::Server_ShowWeapon_Implementation(int32 Type)
{
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetCharacter());
	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(Type);
	}
}

bool ABanSungOnlinePlayerController::Server_ShowWeapon_Validate(int32 Type)
{
	return true;
}

