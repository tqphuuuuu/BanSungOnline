// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotifyState_Trail.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UParticleSystem;
class USkeletalMeshComponent;
#ifdef ENGINE_AnimNotifyState_Trail_generated_h
#error "AnimNotifyState_Trail.generated.h already included, missing '#pragma once' in AnimNotifyState_Trail.h"
#endif
#define ENGINE_AnimNotifyState_Trail_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_Trail(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_Trail, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_Trail)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotifyState_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotifyState_Trail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_Trail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyState_Trail(UAnimNotifyState_Trail&&); \
	UAnimNotifyState_Trail(const UAnimNotifyState_Trail&); \
public: \
	ENGINE_API virtual ~UAnimNotifyState_Trail();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyState_Trail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
