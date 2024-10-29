// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectitle.generated.h"

UCLASS()
class BANSUNGONLINE_API AProjectitle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectitle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* Projectiles;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	class USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun Properties")
	float SpeedAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun Properties")
	float Damage;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ProjectitleFly(FVector& JerryPosition);
	FVector Velocity = {0.f,0.f,0.f};
	

};