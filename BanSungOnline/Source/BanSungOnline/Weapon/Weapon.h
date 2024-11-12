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

	UPROPERTY(Replicated)
	bool IsAttached = false;
	FTimerHandle RifleFireTimerHandle;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;
	//Ammo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo",Replicated)
	float Ammo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Max Ammo")
	float MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CurrentAmmo",Replicated)
	float CurrentAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpeedAmmo")
	float SpeedAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Type")
	int Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated);
	AProjectitle* Projectitle;

	UPROPERTY(Replicated)
	bool ShootOneByOne = false;

	UPROPERTY(Replicated)
	bool bCanFireRifle = true;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ReLoadAmmo();
	UFUNCTION(BlueprintCallable)
	virtual void Fire(FVector JerryPosition);
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

};
