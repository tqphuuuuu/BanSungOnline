// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp_AmmoPistol.h"

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/Weapon/WeaponPistol.h"
#include "Components/SphereComponent.h"


// Sets default values
AItemPickUp_AmmoPistol::AItemPickUp_AmmoPistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickUp_AmmoPistol::OnOverlap);

}

// Called when the game starts or when spawned
void AItemPickUp_AmmoPistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp_AmmoPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AItemPickUp_AmmoPistol::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra xem OtherActor có phải là nhân vật hay không
	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (IsValid(PlayerCharacter))
	{
		for (AWeapon* Weapon : PlayerCharacter->Weapons)
		{
			// Kiểm tra xem vũ khí có phải là Pistol không
			AWeaponPistol* Pistol = Cast<AWeaponPistol>(Weapon);
			if (IsValid(Pistol))
			{
				if (Pistol->Ammo < 225)
				{
					Pistol->Ammo += 15;

					if (Pistol->Ammo > 240)
					{
						Pistol->Ammo = 240;
					}
					// Phá hủy đối tượng nhặt đạn
					Destroy();
				}
				else
				{
					//UKismetSystemLibrary::PrintString(this, TEXT("Số lượng đạn đã đầy."), true, true, FLinearColor::Yellow, 2.0f);
				}
				return; // Thoát hàm khi đã xử lý xong Pistol
			}
		}
	}
}

