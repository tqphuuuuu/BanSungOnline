// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ActivateCameraRigFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraRigAsset;
class UObject;
#ifdef GAMEPLAYCAMERAS_ActivateCameraRigFunctions_generated_h
#error "ActivateCameraRigFunctions.generated.h already included, missing '#pragma once' in ActivateCameraRigFunctions.h"
#endif
#define GAMEPLAYCAMERAS_ActivateCameraRigFunctions_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivatePersistentVisualCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentGlobalCameraRig); \
	DECLARE_FUNCTION(execActivatePersistentBaseCameraRig);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivateCameraRigFunctions(); \
	friend struct Z_Construct_UClass_UActivateCameraRigFunctions_Statics; \
public: \
	DECLARE_CLASS(UActivateCameraRigFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), GAMEPLAYCAMERAS_API) \
	DECLARE_SERIALIZER(UActivateCameraRigFunctions)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UActivateCameraRigFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActivateCameraRigFunctions(UActivateCameraRigFunctions&&); \
	UActivateCameraRigFunctions(const UActivateCameraRigFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UActivateCameraRigFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivateCameraRigFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivateCameraRigFunctions) \
	GAMEPLAYCAMERAS_API virtual ~UActivateCameraRigFunctions();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_21_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UActivateCameraRigFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS