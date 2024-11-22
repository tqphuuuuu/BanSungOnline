// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/IMovieSceneBlenderSystemSupport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneBlenderSystemSupport_generated_h
#error "IMovieSceneBlenderSystemSupport.generated.h already included, missing '#pragma once' in IMovieSceneBlenderSystemSupport.h"
#endif
#define MOVIESCENE_IMovieSceneBlenderSystemSupport_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBlenderSystemSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBlenderSystemSupport(UMovieSceneBlenderSystemSupport&&); \
	UMovieSceneBlenderSystemSupport(const UMovieSceneBlenderSystemSupport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBlenderSystemSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBlenderSystemSupport); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBlenderSystemSupport) \
	MOVIESCENE_API virtual ~UMovieSceneBlenderSystemSupport();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneBlenderSystemSupport(); \
	friend struct Z_Construct_UClass_UMovieSceneBlenderSystemSupport_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBlenderSystemSupport, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBlenderSystemSupport)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneBlenderSystemSupport() {} \
public: \
	typedef UMovieSceneBlenderSystemSupport UClassType; \
	typedef IMovieSceneBlenderSystemSupport ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBlenderSystemSupport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneBlenderSystemSupport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS