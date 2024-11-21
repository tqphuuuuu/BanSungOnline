// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneFadeTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneFadeTrack_generated_h
#error "MovieSceneFadeTrack.generated.h already included, missing '#pragma once' in MovieSceneFadeTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFadeTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneFadeTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFadeTrack, UMovieSceneFloatTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFadeTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneFadeTrack(UMovieSceneFadeTrack&&); \
	UMovieSceneFadeTrack(const UMovieSceneFadeTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFadeTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFadeTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFadeTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFadeTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneFadeTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
