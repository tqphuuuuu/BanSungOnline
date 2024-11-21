// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneReplaceableBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneReplaceableBinding_generated_h
#error "MovieSceneReplaceableBinding.generated.h already included, missing '#pragma once' in MovieSceneReplaceableBinding.h"
#endif
#define MOVIESCENE_MovieSceneReplaceableBinding_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplaceableBindingBase(); \
	friend struct Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneReplaceableBindingBase, UMovieSceneCustomBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneReplaceableBindingBase)


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneReplaceableBindingBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneReplaceableBindingBase(UMovieSceneReplaceableBindingBase&&); \
	UMovieSceneReplaceableBindingBase(const UMovieSceneReplaceableBindingBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneReplaceableBindingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplaceableBindingBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplaceableBindingBase) \
	NO_API virtual ~UMovieSceneReplaceableBindingBase();


#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneReplaceableBindingBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
