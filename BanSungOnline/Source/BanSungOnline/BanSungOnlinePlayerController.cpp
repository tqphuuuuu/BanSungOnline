// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlinePlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BanSungOnlineCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Weapon/Weapon.h"
#include "Weapon/WeaponPistol.h"
#include "Weapon/WeaponRifle.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABanSungOnlinePlayerController::ABanSungOnlinePlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void ABanSungOnlinePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	if (HasAuthority())
	{
		//server
	}
	if (!HasAuthority())
	{
		//client
	}
}

void ABanSungOnlinePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!HasAuthority())
	{
		FHitResult HitResult;
		GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, HitResult);
		FVector MouseLocation = HitResult.Location;

		// Gọi Server_Test từ client và truyền MouseLocation vào
		Server_Test(MouseLocation);
	}
	
}
void ABanSungOnlinePlayerController::Server_Test_Implementation(FVector MouseLocation)
{
	ABanSungOnlineCharacter* CharacterPlayer = Cast<ABanSungOnlineCharacter>(GetPawn());
	if(IsValid(CharacterPlayer))
	{
		CharacterPlayer->Mouse = MouseLocation;
	}
}

void ABanSungOnlinePlayerController::WeaponFiring_Implementation(AWeapon* Weapon,  FVector MouseLocation)
{
	Weapon->Fire(MouseLocation);
}

void ABanSungOnlinePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnSetDestinationTriggered);
		InputComponent->BindAction("Mouse Click", IE_Released, this, &ABanSungOnlinePlayerController::OnMouseButtonReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ABanSungOnlinePlayerController::OnShooting);

		// Move W S A D
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnMoveAction);

		
		EnhancedInputComponent->BindAction(Key_BoardPisol, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnKeyBoard_Pistol);
		EnhancedInputComponent->BindAction(Key_BoardRifle, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnKeyBoard_Rifle);
		
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABanSungOnlinePlayerController::OnInputStarted()
{
	StopMovement();
}

void ABanSungOnlinePlayerController::OnMouseButtonReleased()
{
	// Code xử lý khi nút chuột được thả
	bIsShooting = false;
}

// Triggered every frame when the input is held down
void ABanSungOnlinePlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetPawn());

	if (!MyCharacter) return;

	AWeapon* SelectedWeapon = nullptr;
	for (AWeapon* Weapon : MyCharacter->Weapons)
	{
		if (Weapon && MyCharacter->IsWeaponVisible(Weapon->GetClass()))
		{
			SelectedWeapon = Weapon;
			break;
		}
	}

	if (SelectedWeapon && SelectedWeapon->CurrentAmmo >= 1)
	{
		if (SelectedWeapon->Type == 1 && !isReloading)  // Rifle
		{
			if (bCanFireRifle)  // Kiểm tra xem có thể bắn không
			{
				WeaponFiring(SelectedWeapon, CachedDestination);
				bCanFireRifle = false;
				GetWorld()->GetTimerManager().SetTimer(RifleFireTimerHandle, [this](){bCanFireRifle = true;}, 0.25f, false);
			}
		}
		else if (SelectedWeapon->Type == 0 && !isReloading )  // Pistol
		{
			if (!ShootOneByOne)
			{
				WeaponFiring(SelectedWeapon, CachedDestination);
				ShootOneByOne = true;
			}
		}
	}
	else
	{
		FireShooting = false;
	}
}

void ABanSungOnlinePlayerController::OnShooting()
{
	ShootOneByOne = false;
}

void ABanSungOnlinePlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABanSungOnlinePlayerController, CachedDestination);
}


void ABanSungOnlinePlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}
	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void ABanSungOnlinePlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ABanSungOnlinePlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}
void ABanSungOnlinePlayerController::OnMoveAction(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();
	if (this != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector .
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
		GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABanSungOnlinePlayerController::OnKeyBoard_Pistol(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không
	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetCharacter());
	
	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(0);
		/*ShowWBCountBullet.Broadcast();*/
		//MyCharacter->Cur_weapon = 0;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeaponPistol>(i))
			{
				MyCharacter->CurrentWeapon = i;
				break;
			}
		}
		
	}
		
}

void ABanSungOnlinePlayerController::OnKeyBoard_Rifle(const FInputActionValue& Value)
{
	// Log để kiểm tra xem phím bàn phím có được nhấn hay không


	ABanSungOnlineCharacter* MyCharacter = Cast<ABanSungOnlineCharacter>(GetCharacter());
	
	if (MyCharacter)
	{
		MyCharacter->ShowWeapon(1);
		/*ShowWBCountBullet.Broadcast();*/
		//MyCharacter->Cur_weapon = 1;
		auto Weapon_Array = MyCharacter->Weapons;
		for (auto i:Weapon_Array)
		{
			if (Cast<AWeaponRifle>(i))
			{
				MyCharacter->CurrentWeapon = i;
				break;
			}
		}
		
	}
		
}