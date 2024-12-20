// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "GameFramework/Actor.h"
#include "WeaponRifle.generated.h"

UCLASS()
class BANSUNGONLINE_API AWeaponRifle : public AWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponRifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Fire(FVector JerryPosition) override;
};
