// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGroomCacheTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_MovieSceneGroomCacheTrack_generated_h
#error "MovieSceneGroomCacheTrack.generated.h already included, missing '#pragma once' in MovieSceneGroomCacheTrack.h"
#endif
#define HAIRSTRANDSCORE_MovieSceneGroomCacheTrack_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGroomCacheTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGroomCacheTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), HAIRSTRANDSCORE_API) \
	DECLARE_SERIALIZER(UMovieSceneGroomCacheTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneGroomCacheTrack*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UMovieSceneGroomCacheTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGroomCacheTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UMovieSceneGroomCacheTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGroomCacheTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGroomCacheTrack(UMovieSceneGroomCacheTrack&&); \
	UMovieSceneGroomCacheTrack(const UMovieSceneGroomCacheTrack&); \
public: \
	HAIRSTRANDSCORE_API virtual ~UMovieSceneGroomCacheTrack();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UMovieSceneGroomCacheTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
