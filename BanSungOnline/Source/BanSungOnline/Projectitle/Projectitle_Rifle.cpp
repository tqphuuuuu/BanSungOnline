// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectitle_Rifle.h"


// Sets default values
AProjectitle_Rifle::AProjectitle_Rifle()
{

	bReplicates = true;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Damage = 15;
	SpeedAmmo = 2000.0;
}

// Called when the game starts or when spawned
void AProjectitle_Rifle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectitle_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

