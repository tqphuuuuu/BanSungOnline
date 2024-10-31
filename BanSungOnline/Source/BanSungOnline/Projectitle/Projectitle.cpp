// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectitle.h"

#include <Kismet/GameplayStatics.h>

#include "BanSungOnline/BanSungOnlineCharacter.h"
#include "BanSungOnline/Enemy/Enemy.h"
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
	if ((GetActorLocation() - Temp).SquaredLength() > 1000000)
		Destroy();
}

void AProjectitle::ProjectitleFly(FVector& JerryPosition)
{
	FVector Temp = (JerryPosition - GetActorLocation());
	Temp.Normalize();
	Velocity = Temp * SpeedAmmo;
	Velocity.Z = 0.0f;
}

// Hàm được gọi khi viên đạn va chạm với một đối tượng khác
void AProjectitle::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	// Kiểm tra nếu đối tượng va chạm là kẻ địch (Enermy)
	AEnemy* Enermy = Cast<AEnemy>(OtherActor);
	if (IsValid(Enermy))
	{
		// Giảm máu của kẻ địch khi viên đạn va chạm
		Enermy->Health -= Damage; 

		UKismetSystemLibrary::PrintString(this,FString::SanitizeFloat(Enermy->Health));
		// Optional: Phá hủy viên đạn sau khi va chạm
		if (Velocity.SquaredLength() > 0.1f)
			Destroy();
	}

	// Nếu muốn viên đạn bị phá hủy sau khi va chạm với bất kỳ đối tượng nào
	// Destroy();
}

void AProjectitle::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AProjectitle, Velocity);
}
