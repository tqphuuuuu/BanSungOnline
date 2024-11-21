// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieScenePlatformCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScenePlatformCondition_generated_h
#error "MovieScenePlatformCondition.generated.h already included, missing '#pragma once' in MovieScenePlatformCondition.h"
#endif
#define MOVIESCENETRACKS_MovieScenePlatformCondition_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePlatformCondition(); \
	friend struct Z_Construct_UClass_UMovieScenePlatformCondition_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePlatformCondition, UMovieSceneCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePlatformCondition)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePlatformCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScenePlatformCondition(UMovieScenePlatformCondition&&); \
	UMovieScenePlatformCondition(const UMovieScenePlatformCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePlatformCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePlatformCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePlatformCondition) \
	NO_API virtual ~UMovieScenePlatformCondition();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScenePlatformCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
