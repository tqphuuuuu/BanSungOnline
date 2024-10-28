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

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABanSungOnlinePlayerController::ABanSungOnlinePlayerController()
{
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
        		//EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ABanSungOFFLINE_CPlusPlayerController::OnMouseReleased);
        
        		/*
        		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ATestPlayerController::OnShooting);
        
        
        		InputComponent->BindAction("Mouse Click", IE_Released, this, &ATestPlayerController::OnMouseButtonReleased);
        		*/
        	
        
        
        		// Move W S A D
        		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABanSungOnlinePlayerController::OnMoveAction);

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
	
	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
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