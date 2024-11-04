// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BanSungOnlineCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowHealth);


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

	UPROPERTY(Replicated)
	bool HiddenWeapon = false;
	void InitializeWeaponClasses();

	void PrintAllWeaponsInArray();

	void ShowWeapon(int32 Type);
	TSubclassOf<AWeapon> GetCurrentWeaponClass();

	//Kiểm tra hiển thị của súng
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool IsWeaponVisible(TSubclassOf<AWeapon> WeaponClass);

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Weapon");
	AWeapon* CurrentWeapon;

	// Biến hiện UI
	UPROPERTY(BlueprintReadOnly)
	int Cur_weapon = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", Replicated)
    float Health;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaxHealth",Replicated)
    float MaxHealth;

	UPROPERTY(BlueprintAssignable)
	FShowHealth ShowHealth;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

