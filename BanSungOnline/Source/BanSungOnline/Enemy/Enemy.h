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
	/*UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);*/

	bool bIsAttacking = false;


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

	virtual void AttackCharacter();
	int32 Timer = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UAnimationAsset* DeathAnimation;
	void PlayDeathAnimation();
	void CheckHealth();
	void OnDeathComplete();
	bool bIsDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	class UAnimSequence* AttackAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attack")
	UAnimationAsset* JumpAttackAnimation;  // Tấn công khi nhảy tới đối thủ

	// Biến cho projectile để tấn công tầm xa
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attack")
	TSubclassOf<class AProjectile> RangedAttackProjectile;*/

	// Hàm để thực hiện tấn công ngẫu nhiên
	void PerformRandomAttack(AActor* Target);



};
