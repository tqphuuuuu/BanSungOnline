// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Size/ParticleModuleSize.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleSize_generated_h
#error "ParticleModuleSize.generated.h already included, missing '#pragma once' in ParticleModuleSize.h"
#endif
#define ENGINE_ParticleModuleSize_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSize(); \
	friend struct Z_Construct_UClass_UParticleModuleSize_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleSize, UParticleModuleSizeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleSize)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSize) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSize); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleSize(UParticleModuleSize&&); \
	UParticleModuleSize(const UParticleModuleSize&); \
public: \
	ENGINE_API virtual ~UParticleModuleSize();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleSize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSize_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
