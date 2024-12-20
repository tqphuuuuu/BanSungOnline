// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerAnimationSupport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_SequencerAnimationSupport_generated_h
#error "SequencerAnimationSupport.generated.h already included, missing '#pragma once' in SequencerAnimationSupport.h"
#endif
#define ANIMGRAPHRUNTIME_SequencerAnimationSupport_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API USequencerAnimationSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerAnimationSupport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, USequencerAnimationSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerAnimationSupport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerAnimationSupport(USequencerAnimationSupport&&); \
	USequencerAnimationSupport(const USequencerAnimationSupport&); \
public: \
	ANIMGRAPHRUNTIME_API virtual ~USequencerAnimationSupport();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSequencerAnimationSupport(); \
	friend struct Z_Construct_UClass_USequencerAnimationSupport_Statics; \
public: \
	DECLARE_CLASS(USequencerAnimationSupport, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(USequencerAnimationSupport)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_INCLASS_IINTERFACE \
protected: \
	virtual ~ISequencerAnimationSupport() {} \
public: \
	typedef USequencerAnimationSupport UClassType; \
	typedef ISequencerAnimationSupport ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USequencerAnimationSupport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
