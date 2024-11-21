// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ActorDescContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorDescContainer_generated_h
#error "ActorDescContainer.generated.h already included, missing '#pragma once' in ActorDescContainer.h"
#endif
#define ENGINE_ActorDescContainer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUActorDescContainer(); \
	friend struct Z_Construct_UClass_UActorDescContainer_Statics; \
public: \
	DECLARE_CLASS(UActorDescContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UActorDescContainer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorDescContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorDescContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorDescContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDescContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorDescContainer(UActorDescContainer&&); \
	UActorDescContainer(const UActorDescContainer&); \
public: \
	ENGINE_API virtual ~UActorDescContainer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorDescContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
