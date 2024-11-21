// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSequenceTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequenceTransform_generated_h
#error "MovieSceneSequenceTransform.generated.h already included, missing '#pragma once' in MovieSceneSequenceTransform.h"
#endif
#define MOVIESCENE_MovieSceneSequenceTransform_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTransformBreadcrumbs>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneTransformBreadcrumbs Super;


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneWarpCounter>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneInverseNestedSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneInverseNestedSequenceTransform>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_372_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneNestedSequenceTransform>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_610_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceTransform>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_890_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneInverseSequenceTransform_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneInverseSequenceTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h


#define FOREACH_ENUM_EMOVIESCENEBREADCRUMBMODE(op) \
	op(EMovieSceneBreadcrumbMode::Sparse) \
	op(EMovieSceneBreadcrumbMode::Dense) 

enum class EMovieSceneBreadcrumbMode : uint8;
template<> struct TIsUEnumClass<EMovieSceneBreadcrumbMode> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBreadcrumbMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
