// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
    
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));
	PawnSensingComponent->SightRadius = 2500.0f; // Adjust the range of sight
	PawnSensingComponent->SetPeripheralVisionAngle(60.0f); // Set the field of view
    
	/*
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthWidget"));
	WidgetComponent->SetupAttachment(RootComponent);
	*/
    
    	
    	
	//SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlap);
	
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UKismetSystemLibrary::PrintString(this,FString::SanitizeFloat(Health));
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemy::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AEnemy,Health);
}

void AEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*// Kiểm tra nếu OtherActor là nhân vật
	ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);
	if (PlayerCharacter && PlayerCharacter->IsA(ABanSungOFFLINE_CPlusCharacter::StaticClass()))
	{
		// Chạy animation tấn công
		if (AttackAnimation)
		{
			GetMesh()->PlayAnimation(AttackAnimation, true);
				
		}

	}
	AProjectiles *Projectiles = Cast<AProjectiles>(OtherActor);
	if (IsValid(Projectiles))
	{
		CheckHealth();
		if (Projectiles->Velocity.SquaredLength() > 0.1f)
		{

			Projectiles->Destroy();
		}
	}*/
}

