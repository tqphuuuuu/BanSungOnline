// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Weapon/Weapon.h"
#include "BanSungOnlinePlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisplayWBBulletCount);


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ABanSungOnlinePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABanSungOnlinePlayerController();

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationClickAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationTouchAction;
	
	// Move Action
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
    UInputAction* MoveAction;

	// Tạo key board

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* Key_BoardPisol;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* Key_BoardRifle;

	/*UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Input,meta=(AllowPrivateAccess="true"))
	UInputAction* keyBoardReloadAmmo;*/

	UFUNCTION(Server, Unreliable)
	void Server_Test(FVector MouseLocation);

	UFUNCTION(Server,Unreliable)
	void WeaponFiring(AWeapon* Weapon, FVector MouseLocation);

	/*
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health" , Replicated)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Max Health", Replicated)
	float MaxHealth;*/

	UPROPERTY(BlueprintAssignable)
	FDisplayWBBulletCount ShowWBCountBullet;

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();

	virtual void Tick(float DeltaSeconds);

	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();
	void OnMouseButtonReleased();
	void OnMoveAction(const FInputActionValue& Value);
	void OnKeyBoard_Pistol(const FInputActionValue& Value);
	void OnKeyBoard_Rifle(const FInputActionValue& Value);
	//void OnKeyBoard_ReloadAmmo(const FInputActionValue& Value);

	bool ShootOneByOne;
	bool bCanFireRifle = true;
	bool isReloading = false;
	bool FireShooting = false;
	
	
	
	FTimerHandle RifleFireTimerHandle;
	bool bIsShooting = false;
	void OnShooting ();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

private:
	UPROPERTY(Replicated)
	FVector CachedDestination;

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};


