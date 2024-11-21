// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusVariableDescription.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusVariableDescription_generated_h
#error "OptimusVariableDescription.generated.h already included, missing '#pragma once' in OptimusVariableDescription.h"
#endif
#define OPTIMUSCORE_OptimusVariableDescription_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusVariableMetaDataEntry>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusVariableDescription(); \
	friend struct Z_Construct_UClass_UOptimusVariableDescription_Statics; \
public: \
	DECLARE_CLASS(UOptimusVariableDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusVariableDescription)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusVariableDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusVariableDescription(UOptimusVariableDescription&&); \
	UOptimusVariableDescription(const UOptimusVariableDescription&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusVariableDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusVariableDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusVariableDescription) \
	NO_API virtual ~UOptimusVariableDescription();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_40_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusVariableDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
