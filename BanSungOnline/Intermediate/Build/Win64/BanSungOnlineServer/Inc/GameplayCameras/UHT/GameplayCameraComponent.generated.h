// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FBlueprintCameraPose;
struct FBlueprintCameraVariableTable;
#ifdef GAMEPLAYCAMERAS_GameplayCameraComponent_generated_h
#error "GameplayCameraComponent.generated.h already included, missing '#pragma once' in GameplayCameraComponent.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraComponent_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInitialVariableTable); \
	DECLARE_FUNCTION(execSetInitialPose); \
	DECLARE_FUNCTION(execGetInitialPose); \
	DECLARE_FUNCTION(execDeactivateCamera); \
	DECLARE_FUNCTION(execActivateCameraForPlayerController); \
	DECLARE_FUNCTION(execActivateCameraForPlayerIndex);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCameraComponent(); \
	friend struct Z_Construct_UClass_UGameplayCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UGameplayCameraComponent)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayCameraComponent(UGameplayCameraComponent&&); \
	UGameplayCameraComponent(const UGameplayCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraComponent) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayCameraComponent();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_28_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UGameplayCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
