// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectitle.h"

#include <Kismet/GameplayStatics.h>

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/Enemy/Enemy.h"
#include "BanSungOnline/Enemy/Enemy_Boss.h"
#include "BanSungOnline/Weapon/Weapon.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"


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

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectitle::OnOverlap);
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
	SetActorLocation(GetActorLocation() + Velocity);
	
	FVector Temp = {1000.f, 1810.f, 92.f};
	/*if ((GetActorLocation() - Temp).SquaredLength() > 1000000)
		Destroy();*/
	
}

void AProjectitle::ProjectitleFly(FVector& JerryPosition)
{
	FVector Temp = (JerryPosition - GetActorLocation());
	JerryPosition.Normalize();
	Velocity = JerryPosition * SpeedAmmo;
	Velocity.Z = 0.0f;
}

// Hàm được gọi khi viên đạn va chạm với một đối tượng khác
void AProjectitle::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Kiểm tra nếu đối tượng va chạm là kẻ địch (Enermy)
	AEnemy* Enemy = Cast<AEnemy>(OtherActor);
	if (IsValid(Enemy))
	{
		Enemy->Health -= Damage;
	}
	else
	{

		// Kiểm tra xem đối tượng có tag "Wall" không
		if (OtherActor->ActorHasTag(TEXT("Wall")))
		{
		
			if (ExplosionEffect)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
			}
			Destroy();
		}
	}
}

// dùng để đại diện cho một thuộc tính sẽ được sao chép
//chứa thông tin về thuộc tính cần sao chép

//là một mảng tham chiếu chứa danh sách các thuộc tính cần sao chép
void AProjectitle::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AProjectitle, Velocity);
}
