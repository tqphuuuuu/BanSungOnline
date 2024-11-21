// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneCustomBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneCustomBinding_generated_h
#error "MovieSceneCustomBinding.generated.h already included, missing '#pragma once' in MovieSceneCustomBinding.h"
#endif
#define MOVIESCENE_MovieSceneCustomBinding_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneBindingResolveResult>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneBindingResolveContext>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBaseCustomPriority); \
	DECLARE_FUNCTION(execGetBaseEnginePriority);


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCustomBinding(); \
	friend struct Z_Construct_UClass_UMovieSceneCustomBinding_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCustomBinding, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCustomBinding)


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCustomBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCustomBinding(UMovieSceneCustomBinding&&); \
	UMovieSceneCustomBinding(const UMovieSceneCustomBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCustomBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomBinding); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomBinding) \
	NO_API virtual ~UMovieSceneCustomBinding();


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_56_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCustomBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
