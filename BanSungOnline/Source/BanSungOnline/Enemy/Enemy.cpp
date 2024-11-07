// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/BanSungOnlinePlayerController.h"
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
    bReplicates = true;
	/*
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthWidget"));
	WidgetComponent->SetupAttachment(RootComponent);
	*/
    
    	
    	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnOverlap);
	
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
	if (Health <= 0)
	{
		CheckHealth();

	}
	Timer++;
	AttackCharacter();
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

 
void AEnemy::AttackCharacter()
{
	if (HasAuthority()) return; // Chỉ server mới thực hiện

	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
	FVector End = GetMesh()->GetSocketLocation(FName("B"));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this); 

	FHitResult HitResult;
	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(),Start,End,
		static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn), 
		false,
		IgnoreActors,
		EDrawDebugTrace::None,
		HitResult,
		true);
	
	if (bHit) {
		// Kiểm tra đối tượng bị hit có phải là nhân vật không
		ABanSungOnlineCharacter* PlayerController = Cast<ABanSungOnlineCharacter>(HitResult.GetActor());
		if (IsValid(PlayerController))
		{
			if (Health >= 0)
			{
				if (Timer >= 100)
				{
					Timer = 0;
					PlayerController->Health -= Damage;
					UKismetSystemLibrary::PrintString(this,FString::SanitizeFloat(PlayerController->Health));
					PlayerController->ChangeHealth();
				}
			}
		}
	}
}

void AEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra nếu OtherActor là nhân vật
	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (PlayerCharacter && PlayerCharacter->IsA(ABanSungOnlineCharacter::StaticClass()))
	{
		// Chạy animation tấn công
		if (AttackAnimation)
		{
			GetMesh()->PlayAnimation(AttackAnimation, true);
				
		}
	}

	AProjectitle *Projectiles = Cast<AProjectitle>(OtherActor);
	if (IsValid(Projectiles))
	{

		if (Projectiles->Velocity.SquaredLength() > 0.1f)
		{
			Projectiles->Destroy();
		}
	}
}

void AEnemy::CheckHealth()
{
	if (Health <= 0 && !bIsDead)
	{
		UKismetSystemLibrary::PrintString(this,"CheckHealth");
		bIsDead = true; 
		PlayDeathAnimation(); 

	}
}

void AEnemy::PlayDeathAnimation()
{
	
	UKismetSystemLibrary::PrintString(this,"PlayDeathAnimation");

	if (DeathAnimation)
	{
		GetMesh()->PlayAnimation(DeathAnimation, true); 
	}

	
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemy::OnDeathComplete, 2.0f, false); 
}

void AEnemy::OnDeathComplete()
{
	Destroy();
}