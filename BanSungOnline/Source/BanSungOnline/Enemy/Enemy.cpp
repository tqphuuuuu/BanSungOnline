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
	if (!HasAuthority())
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
		ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(HitResult.GetActor());
		if (IsValid(MyCharacter))
		{
			if (Health >= 0)
			{
				if (Timer >= 100)
				{
					Timer = 0;
					MyCharacter->ServerSetHealth(Damage);
					
				}
			}
		}
	}
}


void AEnemy::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*ABanSungOnlineCharacter* PlayerCharacter = Cast<ABanSungOnlineCharacter>(OtherActor);
	if (PlayerCharacter && !bIsAttacking) // Chỉ thực hiện tấn công nếu chưa tấn công
	{
		// Đặt trạng thái tấn công
		bIsAttacking = true;

		// Tấn công ngẫu nhiên
		int32 AttackType = FMath::RandRange(1, 3);

		switch (AttackType)
		{
		case 1:
			if (AttackAnimation)
			{
				GetMesh()->PlayAnimation(AttackAnimation, true);
			}
			break;

		/*case 2:
			if (JumpAttackAnimation)
			{
				FVector JumpDirection = (PlayerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
				LaunchCharacter(JumpDirection * 500.0f + FVector(0, 0, 300.0f), true, true);
				GetMesh()->PlayAnimation(JumpAttackAnimation, true);
			}
			break;#1#

		/*case 3:
			// Tấn công tầm xa
				if (RangedAttackProjectile)
				{
					FVector MuzzleLocation = GetActorLocation() + FVector(0, 0, 50.0f); // Vị trí phóng chiêu
					FRotator MuzzleRotation = UKismetMathLibrary::FindLookAtRotation(MuzzleLocation, PlayerCharacter->GetActorLocation());
				
					// Spawn đạn hoặc chiêu tấn công từ xa
					AProjectitle* Projectile = GetWorld()->SpawnActor<AProjectitle>(RangedAttackProjectile, MuzzleLocation, MuzzleRotation);
					if (Projectile)
					{
						Projectile->SetOwner(this); // Đặt chủ sở hữu là enemy này
					}
				}
			break;#1#

		default:
			break;
		}
	}*/

	// Xử lý nếu OtherActor là đạn
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