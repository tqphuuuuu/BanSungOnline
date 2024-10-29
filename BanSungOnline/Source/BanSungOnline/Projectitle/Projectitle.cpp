// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectitle.h"

#include "Components/SphereComponent.h"


// Sets default values
AProjectitle::AProjectitle()
{
	bReplicates = true;
	

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
    SetRootComponent(SphereComponent);
    	
    Projectiles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun_Pistol"));
    Projectiles->SetupAttachment(SphereComponent);
    //SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectitle::OnOverlap);
}

// Called when the game starts or when spawned
void AProjectitle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectitle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectitle::ProjectitleFly(FVector& JerryPosition)
{
	FVector  Temp = (JerryPosition - GetActorLocation());
	Temp.Normalize();
	Velocity = Temp * SpeedAmmo;
}