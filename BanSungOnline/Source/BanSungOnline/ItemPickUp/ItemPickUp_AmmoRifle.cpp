// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp_AmmoRifle.h"

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/Weapon/WeaponRifle.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AItemPickUp_AmmoRifle::AItemPickUp_AmmoRifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickUp_AmmoRifle::OnOverlap);
}

// Called when the game starts or when spawned
void AItemPickUp_AmmoRifle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp_AmmoRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AItemPickUp_AmmoRifle::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra xem OtherActor có phải là nhân vật hay không
	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (IsValid(PlayerCharacter))
	{
		for (AWeapon* Weapon : PlayerCharacter->Weapons)
		{
			// Kiểm tra xem vũ khí có phải là Pistol không
			AWeaponRifle* Rifle = Cast<AWeaponRifle>(Weapon);
			if (IsValid(Rifle))
			{
				if (Rifle->Ammo < 280)
				{
					Rifle->Ammo += 40;

					if (Rifle->Ammo > 320)
					{
						Rifle->Ammo = 320;
					}
					// Phá hủy đối tượng nhặt đạn
					Destroy();
				}
				else
				{
					UKismetSystemLibrary::PrintString(this, TEXT("Số lượng đạn đã đầy."), true, true, FLinearColor::Yellow, 2.0f);
				}
				return; // Thoát hàm khi đã xử lý xong Pistol
			}
		}
	}
}
