// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variants/MovieSceneTimeWarpVariant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTimeWarpVariant_generated_h
#error "MovieSceneTimeWarpVariant.generated.h already included, missing '#pragma once' in MovieSceneTimeWarpVariant.h"
#endif
#define MOVIESCENE_MovieSceneTimeWarpVariant_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTimeWarpVariant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h


#define FOREACH_ENUM_EMOVIESCENETIMEWARPTYPE(op) \
	op(EMovieSceneTimeWarpType::FixedPlayRate) \
	op(EMovieSceneTimeWarpType::Custom) \
	op(EMovieSceneTimeWarpType::FixedTime) \
	op(EMovieSceneTimeWarpType::FrameRate) \
	op(EMovieSceneTimeWarpType::Loop) \
	op(EMovieSceneTimeWarpType::Clamp) \
	op(EMovieSceneTimeWarpType::LoopFloat) \
	op(EMovieSceneTimeWarpType::ClampFloat) 

enum class EMovieSceneTimeWarpType : uint8;
template<> struct TIsUEnumClass<EMovieSceneTimeWarpType> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneTimeWarpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
