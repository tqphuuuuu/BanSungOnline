// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieSceneScalabilityCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneScalabilityCondition_generated_h
#error "MovieSceneScalabilityCondition.generated.h already included, missing '#pragma once' in MovieSceneScalabilityCondition.h"
#endif
#define MOVIESCENETRACKS_MovieSceneScalabilityCondition_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScalabilityCondition(); \
	friend struct Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScalabilityCondition, UMovieSceneCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScalabilityCondition)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScalabilityCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneScalabilityCondition(UMovieSceneScalabilityCondition&&); \
	UMovieSceneScalabilityCondition(const UMovieSceneScalabilityCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScalabilityCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScalabilityCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScalabilityCondition) \
	NO_API virtual ~UMovieSceneScalabilityCondition();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_64_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneScalabilityCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h


#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONGROUP(op) \
	op(EMovieSceneScalabilityConditionGroup::ViewDistance) \
	op(EMovieSceneScalabilityConditionGroup::AntiAliasing) \
	op(EMovieSceneScalabilityConditionGroup::Shadow) \
	op(EMovieSceneScalabilityConditionGroup::GlobalIllumination) \
	op(EMovieSceneScalabilityConditionGroup::Reflection) \
	op(EMovieSceneScalabilityConditionGroup::PostProcess) \
	op(EMovieSceneScalabilityConditionGroup::Texture) \
	op(EMovieSceneScalabilityConditionGroup::Effects) \
	op(EMovieSceneScalabilityConditionGroup::Foliage) \
	op(EMovieSceneScalabilityConditionGroup::Shading) \
	op(EMovieSceneScalabilityConditionGroup::Landscape) 

enum class EMovieSceneScalabilityConditionGroup : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionGroup> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionGroup>();

#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONOPERATOR(op) \
	op(EMovieSceneScalabilityConditionOperator::LessThan) \
	op(EMovieSceneScalabilityConditionOperator::LessThanOrEqualTo) \
	op(EMovieSceneScalabilityConditionOperator::EqualTo) \
	op(EMovieSceneScalabilityConditionOperator::GreaterThanOrEqualTo) \
	op(EMovieSceneScalabilityConditionOperator::GreaterThan) 

enum class EMovieSceneScalabilityConditionOperator : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionOperator> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionOperator>();

#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONLEVEL(op) \
	op(EMovieSceneScalabilityConditionLevel::Low) \
	op(EMovieSceneScalabilityConditionLevel::Medium) \
	op(EMovieSceneScalabilityConditionLevel::High) \
	op(EMovieSceneScalabilityConditionLevel::Epic) \
	op(EMovieSceneScalabilityConditionLevel::Cinematic) 

enum class EMovieSceneScalabilityConditionLevel : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionLevel> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
