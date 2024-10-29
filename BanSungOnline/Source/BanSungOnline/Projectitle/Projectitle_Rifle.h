// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectitle.h"
#include "GameFramework/Actor.h"
#include "Projectitle_Rifle.generated.h"

UCLASS()
class BANSUNGONLINE_API AProjectitle_Rifle : public AProjectitle
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectitle_Rifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
