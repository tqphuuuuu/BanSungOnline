// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnline/Projectitle/Projectitle.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class BANSUNGONLINE_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	USkeletalMeshComponent* GunMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	class USphereComponent* SphereComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess = "true"))
	TSubclassOf<AProjectitle> ProjectitlesClass;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Properties")
	float Damage;
	//Ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float Ammo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float CurrentAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float SpeedAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	int Type;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ReLoadAmmo();

	virtual void Fire(FVector JerryPosition);
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

};
