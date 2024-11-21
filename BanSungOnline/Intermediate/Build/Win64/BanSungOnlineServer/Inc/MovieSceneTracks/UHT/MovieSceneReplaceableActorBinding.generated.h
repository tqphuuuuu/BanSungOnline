// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MovieSceneReplaceableActorBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieScene;
class UObject;
struct FMovieSceneBindingResolveContext;
struct FMovieSceneBindingResolveResult;
#ifdef MOVIESCENETRACKS_MovieSceneReplaceableActorBinding_generated_h
#error "MovieSceneReplaceableActorBinding.generated.h already included, missing '#pragma once' in MovieSceneReplaceableActorBinding.h"
#endif
#define MOVIESCENETRACKS_MovieSceneReplaceableActorBinding_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplaceableActorBinding(); \
	friend struct Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneReplaceableActorBinding, UMovieSceneReplaceableBindingBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneReplaceableActorBinding)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneReplaceableActorBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneReplaceableActorBinding(UMovieSceneReplaceableActorBinding&&); \
	UMovieSceneReplaceableActorBinding(const UMovieSceneReplaceableActorBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneReplaceableActorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplaceableActorBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplaceableActorBinding) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneReplaceableActorBinding();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneReplaceableActorBinding>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool BP_SupportsBindingCreationFromObject_Implementation(const UObject* SourceObject) const; \
	virtual void BP_InitReplaceableBinding_Implementation(UObject* SourceObject, UMovieScene* OwnerMovieScene); \
	DECLARE_FUNCTION(execBP_SupportsBindingCreationFromObject); \
	DECLARE_FUNCTION(execBP_InitReplaceableBinding);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase(); \
	friend struct Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneReplaceableActorBinding_BPBase, UMovieSceneReplaceableBindingBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneReplaceableActorBinding_BPBase)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneReplaceableActorBinding_BPBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneReplaceableActorBinding_BPBase(UMovieSceneReplaceableActorBinding_BPBase&&); \
	UMovieSceneReplaceableActorBinding_BPBase(const UMovieSceneReplaceableActorBinding_BPBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneReplaceableActorBinding_BPBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneReplaceableActorBinding_BPBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneReplaceableActorBinding_BPBase) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneReplaceableActorBinding_BPBase();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_50_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_56_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneReplaceableActorBinding_BPBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
