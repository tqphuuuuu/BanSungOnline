// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOnline/BanSungOnlinePlayerController.h"
#include "BanSungOnline/Projectitle/Projectitle_Pistol.h"
#include "BanSungOnline/Projectitle/Projectitle_Rifle.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AWeapon::AWeapon()
{
	bReplicates = true;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SetRootComponent(SphereComponent);
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun_Pistol"));
	GunMesh->SetupAttachment(SphereComponent);

	IsAttached = false;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeapon::ReLoadAmmo()
{
	if (isReloadAmmo)
	{
		return; 
	}
	
	isReloadAmmo = true;

	FTimerHandle DelayTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle,[this]()
		{
			if (CurrentAmmo == MaxAmmo)
			{
				isReloadAmmo = false;
				return;
			}
			int32 AmmoNeededToFillClip = MaxAmmo - CurrentAmmo;

			if (Ammo >= AmmoNeededToFillClip)
			{
				CurrentAmmo += AmmoNeededToFillClip;
				Ammo -= AmmoNeededToFillClip;
			}
			else
			{
				CurrentAmmo += Ammo;
				Ammo = 0;
			}
		isReloadAmmo = false;
		},
		RaceReloadAmmo, 
		false
	);
}




void AWeapon::Fire(FVector JerryPosition)
{
	
}

void AWeapon::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeapon,IsAttached);
	DOREPLIFETIME(AWeapon,CurrentAmmo);
	DOREPLIFETIME(AWeapon,Ammo);
	DOREPLIFETIME(AWeapon, Projectitle);


}
