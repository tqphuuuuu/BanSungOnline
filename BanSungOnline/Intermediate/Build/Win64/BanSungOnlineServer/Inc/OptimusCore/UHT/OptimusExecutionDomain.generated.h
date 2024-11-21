// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusExecutionDomain.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusExecutionDomain_generated_h
#error "OptimusExecutionDomain.generated.h already included, missing '#pragma once' in OptimusExecutionDomain.h"
#endif
#define OPTIMUSCORE_OptimusExecutionDomain_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusExecutionDomain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h


#define FOREACH_ENUM_EOPTIMUSEXECUTIONDOMAINTYPE(op) \
	op(EOptimusExecutionDomainType::DomainName) \
	op(EOptimusExecutionDomainType::Expression) 

enum class EOptimusExecutionDomainType;
template<> struct TIsUEnumClass<EOptimusExecutionDomainType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusExecutionDomainType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
