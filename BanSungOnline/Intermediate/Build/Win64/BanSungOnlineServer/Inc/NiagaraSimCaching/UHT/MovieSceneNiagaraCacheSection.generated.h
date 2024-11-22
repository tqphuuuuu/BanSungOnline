// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASIMCACHING_MovieSceneNiagaraCacheSection_generated_h
#error "MovieSceneNiagaraCacheSection.generated.h already included, missing '#pragma once' in MovieSceneNiagaraCacheSection.h"
#endif
#define NIAGARASIMCACHING_MovieSceneNiagaraCacheSection_generated_h

#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneBaseCacheParams Super;


template<> NIAGARASIMCACHING_API UScriptStruct* StaticStruct<struct FMovieSceneNiagaraCacheParams>();

#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraCacheSection(); \
	friend struct Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNiagaraCacheSection, UMovieSceneBaseCacheSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSimCaching"), NIAGARASIMCACHING_API) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraCacheSection)


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARASIMCACHING_API UMovieSceneNiagaraCacheSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARASIMCACHING_API, UMovieSceneNiagaraCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraCacheSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraCacheSection(UMovieSceneNiagaraCacheSection&&); \
	UMovieSceneNiagaraCacheSection(const UMovieSceneNiagaraCacheSection&); \
public: \
	NIAGARASIMCACHING_API virtual ~UMovieSceneNiagaraCacheSection();


#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_79_PROLOG
#define FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_82_INCLASS \
	FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASIMCACHING_API UClass* StaticClass<class UMovieSceneNiagaraCacheSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h


#define FOREACH_ENUM_ENIAGARASIMCACHESECTIONPLAYMODE(op) \
	op(ENiagaraSimCacheSectionPlayMode::SimWithoutCache) \
	op(ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly) 

enum class ENiagaraSimCacheSectionPlayMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheSectionPlayMode> { enum { Value = true }; };
template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionPlayMode>();

#define FOREACH_ENUM_ENIAGARASIMCACHESECTIONSTRETCHMODE(op) \
	op(ENiagaraSimCacheSectionStretchMode::Repeat) \
	op(ENiagaraSimCacheSectionStretchMode::TimeDilate) 

enum class ENiagaraSimCacheSectionStretchMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSimCacheSectionStretchMode> { enum { Value = true }; };
template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionStretchMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS