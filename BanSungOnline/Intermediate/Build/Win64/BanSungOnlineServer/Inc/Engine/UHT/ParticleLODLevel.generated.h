// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleLODLevel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleLODLevel_generated_h
#error "ParticleLODLevel.generated.h already included, missing '#pragma once' in ParticleLODLevel.h"
#endif
#define ENGINE_ParticleLODLevel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUParticleLODLevel(); \
	friend struct Z_Construct_UClass_UParticleLODLevel_Statics; \
public: \
	DECLARE_CLASS(UParticleLODLevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleLODLevel)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleLODLevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleLODLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleLODLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleLODLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleLODLevel(UParticleLODLevel&&); \
	UParticleLODLevel(const UParticleLODLevel&); \
public: \
	ENGINE_API virtual ~UParticleLODLevel();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleLODLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
