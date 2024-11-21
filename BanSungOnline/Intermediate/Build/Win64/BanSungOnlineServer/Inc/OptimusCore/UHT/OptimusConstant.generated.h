// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusConstant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusConstant_generated_h
#error "OptimusConstant.generated.h already included, missing '#pragma once' in OptimusConstant.h"
#endif
#define OPTIMUSCORE_OptimusConstant_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusConstantIdentifier>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusConstantDefinition>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusConstant_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusConstant>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusConstantIndex>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusKernelConstantContainer>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusConstantContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h


#define FOREACH_ENUM_EOPTIMUSCONSTANTTYPE(op) \
	op(EOptimusConstantType::Input) \
	op(EOptimusConstantType::Output) 

enum class EOptimusConstantType;
template<> struct TIsUEnumClass<EOptimusConstantType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusConstantType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
