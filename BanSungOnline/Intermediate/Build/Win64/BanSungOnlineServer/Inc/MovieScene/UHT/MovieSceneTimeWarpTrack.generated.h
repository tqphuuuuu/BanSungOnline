// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneTimeWarpTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTimeWarpTrack_generated_h
#error "MovieSceneTimeWarpTrack.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpTrack.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpTrack_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTimeWarpTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTimeWarpTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTimeWarpTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTimeWarpTrack(UMovieSceneTimeWarpTrack&&); \
	UMovieSceneTimeWarpTrack(const UMovieSceneTimeWarpTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTimeWarpTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTimeWarpTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTimeWarpTrack) \
	MOVIESCENE_API virtual ~UMovieSceneTimeWarpTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTimeWarpTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
