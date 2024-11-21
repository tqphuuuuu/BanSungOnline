// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/DefaultPhysicsVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DefaultPhysicsVolume_generated_h
#error "DefaultPhysicsVolume.generated.h already included, missing '#pragma once' in DefaultPhysicsVolume.h"
#endif
#define ENGINE_DefaultPhysicsVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADefaultPhysicsVolume(); \
	friend struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ADefaultPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADefaultPhysicsVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADefaultPhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPhysicsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADefaultPhysicsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPhysicsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultPhysicsVolume(ADefaultPhysicsVolume&&); \
	ADefaultPhysicsVolume(const ADefaultPhysicsVolume&); \
public: \
	ENGINE_API virtual ~ADefaultPhysicsVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADefaultPhysicsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
