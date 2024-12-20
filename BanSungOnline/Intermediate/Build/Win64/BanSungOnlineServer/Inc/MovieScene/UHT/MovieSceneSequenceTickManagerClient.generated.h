// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequenceTickManagerClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequenceTickManagerClient_generated_h
#error "MovieSceneSequenceTickManagerClient.generated.h already included, missing '#pragma once' in MovieSceneSequenceTickManagerClient.h"
#endif
#define MOVIESCENE_MovieSceneSequenceTickManagerClient_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequenceTickManagerClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSequenceTickManagerClient(UMovieSceneSequenceTickManagerClient&&); \
	UMovieSceneSequenceTickManagerClient(const UMovieSceneSequenceTickManagerClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequenceTickManagerClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceTickManagerClient); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceTickManagerClient) \
	MOVIESCENE_API virtual ~UMovieSceneSequenceTickManagerClient();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceTickManagerClient(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceTickManagerClient, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceTickManagerClient)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneSequenceTickManagerClient() {} \
public: \
	typedef UMovieSceneSequenceTickManagerClient UClassType; \
	typedef IMovieSceneSequenceTickManagerClient ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_16_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequenceTickManagerClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManagerClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
