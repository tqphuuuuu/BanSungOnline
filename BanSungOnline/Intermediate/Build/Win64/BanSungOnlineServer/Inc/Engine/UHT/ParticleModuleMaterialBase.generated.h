// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Material/ParticleModuleMaterialBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleMaterialBase_generated_h
#error "ParticleModuleMaterialBase.generated.h already included, missing '#pragma once' in ParticleModuleMaterialBase.h"
#endif
#define ENGINE_ParticleModuleMaterialBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleMaterialBase(); \
	friend struct Z_Construct_UClass_UParticleModuleMaterialBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleMaterialBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleMaterialBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleMaterialBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleMaterialBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleMaterialBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleMaterialBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleMaterialBase(UParticleModuleMaterialBase&&); \
	UParticleModuleMaterialBase(const UParticleModuleMaterialBase&); \
public: \
	NO_API virtual ~UParticleModuleMaterialBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleMaterialBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
