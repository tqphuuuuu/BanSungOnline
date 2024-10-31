// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "Enemy.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealth);


UCLASS()
class BANSUNGONLINE_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "AI")
	UPawnSensingComponent* PawnSensingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USphereComponent* SphereComponent;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
	*/
	
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimationAsset* DeathAnimation;*/

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	class UAnimSequence* AttackAnimation;*/
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", Replicated)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaxHealth")
	float MaxHealth;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Type")
	int Type;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
};
