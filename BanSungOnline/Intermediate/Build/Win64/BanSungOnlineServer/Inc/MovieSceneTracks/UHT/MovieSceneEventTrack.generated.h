// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneEventTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventTrack_generated_h
#error "MovieSceneEventTrack.generated.h already included, missing '#pragma once' in MovieSceneEventTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventTrack_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventTrack, MOVIESCENETRACKS_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTrack) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEventTrack(UMovieSceneEventTrack&&); \
	UMovieSceneEventTrack(const UMovieSceneEventTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_31_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEventTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h


#define FOREACH_ENUM_EFIREEVENTSATPOSITION(op) \
	op(EFireEventsAtPosition::AtStartOfEvaluation) \
	op(EFireEventsAtPosition::AtEndOfEvaluation) \
	op(EFireEventsAtPosition::AfterSpawn) 

enum class EFireEventsAtPosition : uint8;
template<> struct TIsUEnumClass<EFireEventsAtPosition> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EFireEventsAtPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
