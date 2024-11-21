// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/IMovieSceneChannelOwner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneChannelOwner_generated_h
#error "IMovieSceneChannelOwner.generated.h already included, missing '#pragma once' in IMovieSceneChannelOwner.h"
#endif
#define MOVIESCENE_IMovieSceneChannelOwner_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneChannelOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneChannelOwner(UMovieSceneChannelOwner&&); \
	UMovieSceneChannelOwner(const UMovieSceneChannelOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneChannelOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChannelOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChannelOwner) \
	MOVIESCENE_API virtual ~UMovieSceneChannelOwner();


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneChannelOwner(); \
	friend struct Z_Construct_UClass_UMovieSceneChannelOwner_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneChannelOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneChannelOwner)


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneChannelOwner() {} \
public: \
	typedef UMovieSceneChannelOwner UClassType; \
	typedef IMovieSceneChannelOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_25_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneChannelOwner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
