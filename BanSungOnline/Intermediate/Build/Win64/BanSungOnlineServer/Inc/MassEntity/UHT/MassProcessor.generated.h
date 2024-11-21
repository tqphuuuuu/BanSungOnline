// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassProcessor_generated_h
#error "MassProcessor.generated.h already included, missing '#pragma once' in MassProcessor.h"
#endif
#define MASSENTITY_MassProcessor_generated_h

#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassProcessorExecutionOrder>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassProcessor(); \
	friend struct Z_Construct_UClass_UMassProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassProcessor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassProcessor) \
	static const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassProcessor(UMassProcessor&&); \
	UMassProcessor(const UMassProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassProcessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassProcessor) \
	NO_API virtual ~UMassProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_42_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassProcessor>();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCompositeProcessor(); \
	friend struct Z_Construct_UClass_UMassCompositeProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassCompositeProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassCompositeProcessor)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_189_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassCompositeProcessor(UMassCompositeProcessor&&); \
	UMassCompositeProcessor(const UMassCompositeProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassCompositeProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCompositeProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCompositeProcessor) \
	NO_API virtual ~UMassCompositeProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_186_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassCompositeProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
