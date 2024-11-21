// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneSpawnableBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSpawnableBinding_generated_h
#error "MovieSceneSpawnableBinding.generated.h already included, missing '#pragma once' in MovieSceneSpawnableBinding.h"
#endif
#define MOVIESCENE_MovieSceneSpawnableBinding_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSpawnableBindingBase(); \
	friend struct Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSpawnableBindingBase, UMovieSceneCustomBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSpawnableBindingBase)


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSpawnableBindingBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSpawnableBindingBase(UMovieSceneSpawnableBindingBase&&); \
	UMovieSceneSpawnableBindingBase(const UMovieSceneSpawnableBindingBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSpawnableBindingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSpawnableBindingBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSpawnableBindingBase) \
	NO_API virtual ~UMovieSceneSpawnableBindingBase();


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_28_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSpawnableBindingBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
