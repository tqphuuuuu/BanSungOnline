// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectitle_Pistol.h"


// Sets default values
AProjectitle_Pistol::AProjectitle_Pistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AProjectitle_Pistol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectitle_Pistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

