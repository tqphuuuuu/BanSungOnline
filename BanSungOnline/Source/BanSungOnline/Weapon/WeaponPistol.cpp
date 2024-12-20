// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponPistol.h"

#include "BanSungOnline/Projectitle/Projectitle_Pistol.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AWeaponPistol::AWeaponPistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Damage = 10.0f;
    Ammo= 45;
    CurrentAmmo = 15;
    MaxAmmo = 15;
    Type = 0;
}

// Called when the game starts or when spawned
void AWeaponPistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponPistol::Fire(FVector JerryPosition)
{
	if (!ShootOneByOne && !isReloadAmmo)
	{
			FTransform x = GunMesh->GetSocketTransform("Socket_Point");
			AProjectitle_Pistol* Jerry = GetWorld()->SpawnActor<AProjectitle_Pistol>(ProjectitlesClass, x);
			Jerry->ProjectitleFly(JerryPosition);
			ShootOneByOne = true;
			CurrentAmmo--;
	}
}

