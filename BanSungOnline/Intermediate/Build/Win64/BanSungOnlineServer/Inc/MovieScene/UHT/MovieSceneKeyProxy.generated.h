// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneKeyProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneKeyProxy_generated_h
#error "MovieSceneKeyProxy.generated.h already included, missing '#pragma once' in MovieSceneKeyProxy.h"
#endif
#define MOVIESCENE_MovieSceneKeyProxy_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneKeyProxy(UMovieSceneKeyProxy&&); \
	UMovieSceneKeyProxy(const UMovieSceneKeyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneKeyProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneKeyProxy) \
	MOVIESCENE_API virtual ~UMovieSceneKeyProxy();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneKeyProxy(); \
	friend struct Z_Construct_UClass_UMovieSceneKeyProxy_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneKeyProxy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneKeyProxy)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneKeyProxy() {} \
public: \
	typedef UMovieSceneKeyProxy UClassType; \
	typedef IMovieSceneKeyProxy ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneKeyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
