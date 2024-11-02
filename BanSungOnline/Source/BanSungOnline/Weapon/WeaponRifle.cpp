// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponRifle.h"

#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AWeaponRifle::AWeaponRifle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Damage = 20.0f;
	Ammo =120;
	MaxAmmo = 40;
	CurrentAmmo = 40;
	Type =1;
}

// Called when the game starts or when spawned
void AWeaponRifle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

