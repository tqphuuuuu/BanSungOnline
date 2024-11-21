// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compilation/MovieSceneCompiledDataManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneCompiledDataManager_generated_h
#error "MovieSceneCompiledDataManager.generated.h already included, missing '#pragma once' in MovieSceneCompiledDataManager.h"
#endif
#define MOVIESCENE_MovieSceneCompiledDataManager_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneCompiledSequenceFlagStruct>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCompiledData(); \
	friend struct Z_Construct_UClass_UMovieSceneCompiledData_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCompiledData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCompiledData)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCompiledData(UMovieSceneCompiledData&&); \
	UMovieSceneCompiledData(const UMovieSceneCompiledData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCompiledData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCompiledData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneCompiledData) \
	NO_API virtual ~UMovieSceneCompiledData();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_89_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCompiledData>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCompiledDataManager(); \
	friend struct Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCompiledDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneCompiledDataManager)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCompiledDataManager(UMovieSceneCompiledDataManager&&); \
	UMovieSceneCompiledDataManager(const UMovieSceneCompiledDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCompiledDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCompiledDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneCompiledDataManager) \
	MOVIESCENE_API virtual ~UMovieSceneCompiledDataManager();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_178_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_183_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCompiledDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h


#define FOREACH_ENUM_EMOVIESCENESEQUENCECOMPILERMASK(op) \
	op(EMovieSceneSequenceCompilerMask::Hierarchy) \
	op(EMovieSceneSequenceCompilerMask::EvaluationTemplate) \
	op(EMovieSceneSequenceCompilerMask::EvaluationTemplateField) \
	op(EMovieSceneSequenceCompilerMask::EntityComponentField) \
	op(EMovieSceneSequenceCompilerMask::None) 

enum class EMovieSceneSequenceCompilerMask : uint8;
template<> struct TIsUEnumClass<EMovieSceneSequenceCompilerMask> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSequenceCompilerMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
