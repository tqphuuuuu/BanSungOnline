// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusValue_generated_h
#error "OptimusValue.generated.h already included, missing '#pragma once' in OptimusValue.h"
#endif
#define OPTIMUSCORE_OptimusValue_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusValueIdentifier>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusValueDescription_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusValueDescription>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDataInterfacePropertyOverrideInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h


#define FOREACH_ENUM_EOPTIMUSVALUEUSAGE(op) \
	op(EOptimusValueUsage::None) \
	op(EOptimusValueUsage::CPU) \
	op(EOptimusValueUsage::GPU) 

enum class EOptimusValueUsage : uint8;
template<> struct TIsUEnumClass<EOptimusValueUsage> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusValueUsage>();

#define FOREACH_ENUM_EOPTIMUSVALUETYPE(op) \
	op(EOptimusValueType::Invalid) \
	op(EOptimusValueType::Constant) \
	op(EOptimusValueType::Variable) 

enum class EOptimusValueType : uint8;
template<> struct TIsUEnumClass<EOptimusValueType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
