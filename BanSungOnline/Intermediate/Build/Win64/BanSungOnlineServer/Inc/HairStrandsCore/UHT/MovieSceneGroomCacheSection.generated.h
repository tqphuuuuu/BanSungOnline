// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGroomCacheSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_MovieSceneGroomCacheSection_generated_h
#error "MovieSceneGroomCacheSection.generated.h already included, missing '#pragma once' in MovieSceneGroomCacheSection.h"
#endif
#define HAIRSTRANDSCORE_MovieSceneGroomCacheSection_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FMovieSceneGroomCacheParams>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGroomCacheSection(); \
	friend struct Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGroomCacheSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), HAIRSTRANDSCORE_API) \
	DECLARE_SERIALIZER(UMovieSceneGroomCacheSection)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UMovieSceneGroomCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGroomCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UMovieSceneGroomCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGroomCacheSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGroomCacheSection(UMovieSceneGroomCacheSection&&); \
	UMovieSceneGroomCacheSection(const UMovieSceneGroomCacheSection&); \
public: \
	HAIRSTRANDSCORE_API virtual ~UMovieSceneGroomCacheSection();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_45_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_49_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UMovieSceneGroomCacheSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
