// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Orbit/ParticleModuleOrbitBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleOrbitBase_generated_h
#error "ParticleModuleOrbitBase.generated.h already included, missing '#pragma once' in ParticleModuleOrbitBase.h"
#endif
#define ENGINE_ParticleModuleOrbitBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrbitBase(); \
	friend struct Z_Construct_UClass_UParticleModuleOrbitBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrbitBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleOrbitBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleOrbitBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbitBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleOrbitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbitBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleOrbitBase(UParticleModuleOrbitBase&&); \
	UParticleModuleOrbitBase(const UParticleModuleOrbitBase&); \
public: \
	NO_API virtual ~UParticleModuleOrbitBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleOrbitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
