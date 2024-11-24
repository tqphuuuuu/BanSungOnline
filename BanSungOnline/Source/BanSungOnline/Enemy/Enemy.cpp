// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "EngineUtils.h"
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
	//SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AEnemy::OnEndOverlap);

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
	/*if (!HasAuthority())
		AttackCharacter();*/
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
	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
	FVector Offset = GetActorForwardVector() * 50.0f; 
	Start += Offset;
	FVector End = Start + GetActorForwardVector() * 100.0f;

	TArray<AActor*> IgnoreActors;

	// Thêm tất cả zombie vào IgnoreActors
	for (TActorIterator<AEnemy> It(GetWorld()); It; ++It)
	{
		AEnemy* Zombie = *It;
		if (Zombie && Zombie != this) // Bỏ qua zombie hiện tại
		{
			IgnoreActors.Add(Zombie);
		}
	}
	// Bỏ qua chính enemy này
	IgnoreActors.Add(this);

	FHitResult HitResult;
	bool bHit = UKismetSystemLibrary::SphereTraceSingle(
		GetWorld(),
		Start,
		End,
		50.0f, // Bán kính hình cầu
		static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn),
		false,
		IgnoreActors,
		EDrawDebugTrace::ForDuration,
		HitResult,
		true
	);

	if (bHit)
	{
		ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(HitResult.GetActor());
		if (IsValid(MyCharacter))
		{
			if (Health >= 0)
			{
				MyCharacter->ServerSetHealth(Damage);
			}
		}
		else
		{
			UKismetSystemLibrary::PrintString(this, HitResult.GetActor()->GetName());
		}
	}
}


void AEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProjectitle* Projectiles = Cast<AProjectitle>(OtherActor);
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
		bIsDead = true; 
		PlayDeathAnimation(); 

	}
}

void AEnemy::PlayDeathAnimation()
{
	if (DeathAnimation)
	{
		GetMesh()->PlayAnimation(DeathAnimation, true); 
	}

	
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemy::OnDeathComplete, 2.0f, false); 
}

void AEnemy::OnDeathComplete()
{
	 // Spawn vật phẩm nếu đã được cấu hình
	if (LootItems.Num() > 0)
	{
		int32 RandomIndex = FMath::RandRange(0, LootItems.Num() - 1); // Chọn ngẫu nhiên một vật phẩm
		TSubclassOf<AActor> SelectedItemClass = LootItems[RandomIndex];

		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = FRotator::ZeroRotator;

		GetWorld()->SpawnActor<AActor>(SelectedItemClass, SpawnLocation, SpawnRotation);
		
	}
	Destroy();
}

/*void AEnemy::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		// Đặt lại trạng thái tấn công
		bIsAttacking = false;
	}
}*/