// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CABLECOMPONENT_CableActor_generated_h
#error "CableActor.generated.h already included, missing '#pragma once' in CableActor.h"
#endif
#define CABLECOMPONENT_CableActor_generated_h

#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACableActor(); \
	friend struct Z_Construct_UClass_ACableActor_Statics; \
public: \
	DECLARE_CLASS(ACableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(ACableActor)


#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACableActor(ACableActor&&); \
	ACableActor(const ACableActor&); \
public: \
	NO_API virtual ~ACableActor();


#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_12_INCLASS \
	FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CABLECOMPONENT_API UClass* StaticClass<class ACableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS