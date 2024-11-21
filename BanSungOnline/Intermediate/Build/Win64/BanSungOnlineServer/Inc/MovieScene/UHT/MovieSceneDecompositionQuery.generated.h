// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneDecompositionQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneDecompositionQuery_generated_h
#error "MovieSceneDecompositionQuery.generated.h already included, missing '#pragma once' in MovieSceneDecompositionQuery.h"
#endif
#define MOVIESCENE_MovieSceneDecompositionQuery_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneValueDecomposer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneValueDecomposer(UMovieSceneValueDecomposer&&); \
	UMovieSceneValueDecomposer(const UMovieSceneValueDecomposer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneValueDecomposer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneValueDecomposer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneValueDecomposer) \
	MOVIESCENE_API virtual ~UMovieSceneValueDecomposer();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneValueDecomposer(); \
	friend struct Z_Construct_UClass_UMovieSceneValueDecomposer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneValueDecomposer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneValueDecomposer)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneValueDecomposer() {} \
public: \
	typedef UMovieSceneValueDecomposer UClassType; \
	typedef IMovieSceneValueDecomposer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_203_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneValueDecomposer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
