// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/LightmassCharacterIndirectDetailVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmassCharacterIndirectDetailVolume_generated_h
#error "LightmassCharacterIndirectDetailVolume.generated.h already included, missing '#pragma once' in LightmassCharacterIndirectDetailVolume.h"
#endif
#define ENGINE_LightmassCharacterIndirectDetailVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALightmassCharacterIndirectDetailVolume(); \
	friend struct Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics; \
public: \
	DECLARE_CLASS(ALightmassCharacterIndirectDetailVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightmassCharacterIndirectDetailVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassCharacterIndirectDetailVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassCharacterIndirectDetailVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassCharacterIndirectDetailVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassCharacterIndirectDetailVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALightmassCharacterIndirectDetailVolume(ALightmassCharacterIndirectDetailVolume&&); \
	ALightmassCharacterIndirectDetailVolume(const ALightmassCharacterIndirectDetailVolume&); \
public: \
	ENGINE_API virtual ~ALightmassCharacterIndirectDetailVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALightmassCharacterIndirectDetailVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassCharacterIndirectDetailVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
