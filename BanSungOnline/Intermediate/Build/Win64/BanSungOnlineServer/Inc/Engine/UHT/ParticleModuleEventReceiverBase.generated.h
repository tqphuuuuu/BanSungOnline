// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventReceiverBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleEventReceiverBase_generated_h
#error "ParticleModuleEventReceiverBase.generated.h already included, missing '#pragma once' in ParticleModuleEventReceiverBase.h"
#endif
#define ENGINE_ParticleModuleEventReceiverBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventReceiverBase(); \
	friend struct Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleEventReceiverBase, UParticleModuleEventBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleEventReceiverBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventReceiverBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventReceiverBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventReceiverBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventReceiverBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleEventReceiverBase(UParticleModuleEventReceiverBase&&); \
	UParticleModuleEventReceiverBase(const UParticleModuleEventReceiverBase&); \
public: \
	NO_API virtual ~UParticleModuleEventReceiverBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleEventReceiverBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS