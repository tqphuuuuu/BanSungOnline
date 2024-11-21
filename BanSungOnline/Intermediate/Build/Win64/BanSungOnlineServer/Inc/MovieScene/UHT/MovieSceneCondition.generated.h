// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieSceneCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneConditionCheckFrequency : uint8;
enum class EMovieSceneConditionScope : uint8;
struct FMovieSceneConditionContext;
#ifdef MOVIESCENE_MovieSceneCondition_generated_h
#error "MovieSceneCondition.generated.h already included, missing '#pragma once' in MovieSceneCondition.h"
#endif
#define MOVIESCENE_MovieSceneCondition_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneConditionContext>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneConditionContainer>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EMovieSceneConditionCheckFrequency BP_GetCheckFrequency_Implementation() const; \
	virtual EMovieSceneConditionScope BP_GetScope_Implementation() const; \
	DECLARE_FUNCTION(execBP_GetCheckFrequency); \
	DECLARE_FUNCTION(execBP_GetScope);


#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCondition(); \
	friend struct Z_Construct_UClass_UMovieSceneCondition_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCondition, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCondition)


#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCondition(UMovieSceneCondition&&); \
	UMovieSceneCondition(const UMovieSceneCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCondition) \
	NO_API virtual ~UMovieSceneCondition();


#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h


#define FOREACH_ENUM_EMOVIESCENECONDITIONSCOPE(op) \
	op(EMovieSceneConditionScope::Global) \
	op(EMovieSceneConditionScope::Binding) \
	op(EMovieSceneConditionScope::OwnerObject) 

enum class EMovieSceneConditionScope : uint8;
template<> struct TIsUEnumClass<EMovieSceneConditionScope> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneConditionScope>();

#define FOREACH_ENUM_EMOVIESCENECONDITIONCHECKFREQUENCY(op) \
	op(EMovieSceneConditionCheckFrequency::Once) \
	op(EMovieSceneConditionCheckFrequency::OnTick) 

enum class EMovieSceneConditionCheckFrequency : uint8;
template<> struct TIsUEnumClass<EMovieSceneConditionCheckFrequency> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneConditionCheckFrequency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
