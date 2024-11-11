// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemPickUp_Health.h"

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/BanSungOnlinePlayerController.h"
#include "Components/SphereComponent.h"


// Sets default values
AItemPickUp_Health::AItemPickUp_Health()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickUp_Health::OnOverlap);

}

// Called when the game starts or when spawned
void AItemPickUp_Health::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemPickUp_Health::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AItemPickUp_Health::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (IsValid(PlayerCharacter))
	{
		if (PlayerCharacter->Health >= PlayerCharacter->MaxHealth)
		{
			return;
		}
		
			
			if(PlayerCharacter->Health <= PlayerCharacter->MaxHealth -5)
			{
				PlayerCharacter->Health += 5;  
				Destroy(); 
				
			}
			else
			{
				PlayerCharacter->Health = PlayerCharacter->MaxHealth;
				Destroy();
			}
	}
}
