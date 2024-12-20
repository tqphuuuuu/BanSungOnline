// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineActor_generated_h
#error "LandscapeSplineActor.generated.h already included, missing '#pragma once' in LandscapeSplineActor.h"
#endif
#define LANDSCAPE_LandscapeSplineActor_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeSplineActor(); \
	friend struct Z_Construct_UClass_ALandscapeSplineActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeSplineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeSplineActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALandscapeSplineActor*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeSplineActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeSplineActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeSplineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeSplineActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeSplineActor(ALandscapeSplineActor&&); \
	ALandscapeSplineActor(const ALandscapeSplineActor&); \
public: \
	LANDSCAPE_API virtual ~ALandscapeSplineActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_16_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeSplineActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
