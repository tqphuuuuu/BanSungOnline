// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneComponentMobilitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneComponentMobilitySystem_generated_h
#error "MovieSceneComponentMobilitySystem.generated.h already included, missing '#pragma once' in MovieSceneComponentMobilitySystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneComponentMobilitySystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMobilitySystem(); \
	friend struct Z_Construct_UClass_UMovieSceneComponentMobilitySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComponentMobilitySystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneComponentMobilitySystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMobilitySystem*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMobilitySystem(UMovieSceneComponentMobilitySystem&&); \
	UMovieSceneComponentMobilitySystem(const UMovieSceneComponentMobilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMobilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMobilitySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMobilitySystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMobilitySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneComponentMobilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMobilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
