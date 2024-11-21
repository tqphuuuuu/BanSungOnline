// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieSceneGroupCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneGroupCondition_generated_h
#error "MovieSceneGroupCondition.generated.h already included, missing '#pragma once' in MovieSceneGroupCondition.h"
#endif
#define MOVIESCENE_MovieSceneGroupCondition_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGroupCondition(); \
	friend struct Z_Construct_UClass_UMovieSceneGroupCondition_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGroupCondition, UMovieSceneCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneGroupCondition)


#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneGroupCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGroupCondition(UMovieSceneGroupCondition&&); \
	UMovieSceneGroupCondition(const UMovieSceneGroupCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneGroupCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGroupCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGroupCondition) \
	NO_API virtual ~UMovieSceneGroupCondition();


#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_32_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneGroupCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h


#define FOREACH_ENUM_EMOVIESCENEGROUPCONDITIONOPERATOR(op) \
	op(EMovieSceneGroupConditionOperator::And) \
	op(EMovieSceneGroupConditionOperator::Or) \
	op(EMovieSceneGroupConditionOperator::Xor) 

enum class EMovieSceneGroupConditionOperator : uint8;
template<> struct TIsUEnumClass<EMovieSceneGroupConditionOperator> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneGroupConditionOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
