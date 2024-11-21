// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneRotatorSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneRotatorSection_generated_h
#error "MovieSceneRotatorSection.generated.h already included, missing '#pragma once' in MovieSceneRotatorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneRotatorSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRotatorSection(); \
	friend struct Z_Construct_UClass_UMovieSceneRotatorSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneRotatorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneRotatorSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneRotatorSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneRotatorSection(UMovieSceneRotatorSection&&); \
	UMovieSceneRotatorSection(const UMovieSceneRotatorSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneRotatorSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRotatorSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRotatorSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneRotatorSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneRotatorSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
