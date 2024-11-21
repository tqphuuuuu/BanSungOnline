// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMeshComponent;
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotifyState_generated_h
#error "AnimNotifyState.generated.h already included, missing '#pragma once' in AnimNotifyState.h"
#endif
#define ENGINE_AnimNotifyState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_RPC_WRAPPERS \
	ENGINE_API virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	ENGINE_API virtual FString GetNotifyName_Implementation() const; \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimNotifyState)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotifyState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyState(UAnimNotifyState&&); \
	UAnimNotifyState(const UAnimNotifyState&); \
public: \
	ENGINE_API virtual ~UAnimNotifyState();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
