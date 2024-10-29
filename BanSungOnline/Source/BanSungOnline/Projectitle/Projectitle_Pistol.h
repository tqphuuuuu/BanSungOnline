// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectitle.h"
#include "GameFramework/Actor.h"
#include "Projectitle_Pistol.generated.h"

UCLASS()
class BANSUNGONLINE_API AProjectitle_Pistol : public AProjectitle
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectitle_Pistol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};