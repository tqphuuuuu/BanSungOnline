// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOnline/BanSungOnlinePlayerController.h"
#include "BanSungOnline/Projectitle/Projectitle_Pistol.h"
#include "BanSungOnline/Projectitle/Projectitle_Rifle.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AWeapon::AWeapon()
{
	bReplicates = true;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SetRootComponent(SphereComponent);
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun_Pistol"));
	GunMesh->SetupAttachment(SphereComponent);

	IsAttached = false;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeapon::ReLoadAmmo()
{	
	if (CurrentAmmo == MaxAmmo)  // Kiểm tra nếu băng đạn đã đầy
	{
		return;  // Không cần nạp đạn nếu băng đạn đã đầy
	}

	// Tính số đạn cần để nạp đầy băng đạn
	int32 AmmoNeededToFillClip  = MaxAmmo - CurrentAmmo;

	// Nếu đạn dự trữ đủ để nạp đầy băng
	if (Ammo >= AmmoNeededToFillClip)
	{
		// Nạp đầy băng đạn và trừ đạn dự trữ
		CurrentAmmo += AmmoNeededToFillClip;
		Ammo -= AmmoNeededToFillClip;
	} else {
		// Nếu không đủ đạn dự trữ, nạp hết đạn còn lại
		CurrentAmmo += Ammo;  
		Ammo = 0; 
	}
}


void AWeapon::Fire(FVector JerryPosition)
{
	if (Type == 0  )
	{
		FTransform x = GunMesh->GetSocketTransform("Socket_Point");
		AProjectitle_Pistol* Jerry = GetWorld()->SpawnActor<AProjectitle_Pistol>(ProjectitlesClass, x);
		Jerry->ProjectitleFly(JerryPosition);
	}
	else
	{
		if (Type == 1)
		{
			FTransform x = GunMesh->GetSocketTransform("Socket_Point");
			AProjectitle_Rifle* Jerry = GetWorld()->SpawnActor<AProjectitle_Rifle>(ProjectitlesClass, x);
			Jerry->ProjectitleFly(JerryPosition);
		}
	}
	CurrentAmmo--;
}

void AWeapon::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeapon,IsAttached);
	DOREPLIFETIME(AWeapon,CurrentAmmo);
	DOREPLIFETIME(AWeapon,Ammo);
	DOREPLIFETIME(AWeapon, Projectitle);


}
