// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BanSungOnlineCharacter.generated.h"

UCLASS(Blueprintable)
class ABanSungOnlineCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABanSungOnlineCharacter();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; 
	TArray<class AWeapon*> Weapons;
	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	void AddWeapon(AWeapon* NewWeapon);  // Hàm thêm vũ khí

	UPROPERTY(Replicated)
	FVector Mouse;

	void InitializeWeaponClasses();

	void PrintAllWeaponsInArray();

	void ShowWeapon(int32 Type);
	TSubclassOf<AWeapon> GetCurrentWeaponClass();

	//Kiểm tra hiển thị của súng
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool IsWeaponVisible(TSubclassOf<AWeapon> WeaponClass);

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Weapon");
	AWeapon* CurrentWeapon;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

