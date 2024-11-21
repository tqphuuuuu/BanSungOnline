// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystemEmitterState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSystemEmitterState_generated_h
#error "NiagaraSystemEmitterState.generated.h already included, missing '#pragma once' in NiagaraSystemEmitterState.h"
#endif
#define NIAGARA_NiagaraSystemEmitterState_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemStateData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterStateData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h


#define FOREACH_ENUM_ENIAGARASYSTEMINACTIVERESPONSE(op) \
	op(ENiagaraSystemInactiveResponse::Complete) \
	op(ENiagaraSystemInactiveResponse::Kill) 

enum class ENiagaraSystemInactiveResponse : uint8;
template<> struct TIsUEnumClass<ENiagaraSystemInactiveResponse> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemInactiveResponse>();

#define FOREACH_ENUM_ENIAGARAEMITTERINACTIVERESPONSE(op) \
	op(ENiagaraEmitterInactiveResponse::Complete) \
	op(ENiagaraEmitterInactiveResponse::Kill) 

enum class ENiagaraEmitterInactiveResponse : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterInactiveResponse> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterInactiveResponse>();

#define FOREACH_ENUM_ENIAGARALOOPBEHAVIOR(op) \
	op(ENiagaraLoopBehavior::Infinite) \
	op(ENiagaraLoopBehavior::Multiple) \
	op(ENiagaraLoopBehavior::Once) 

enum class ENiagaraLoopBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraLoopBehavior> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLoopBehavior>();

#define FOREACH_ENUM_ENIAGARALOOPDURATIONMODE(op) \
	op(ENiagaraLoopDurationMode::Fixed) \
	op(ENiagaraLoopDurationMode::Infinite) 

enum class ENiagaraLoopDurationMode : uint8;
template<> struct TIsUEnumClass<ENiagaraLoopDurationMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLoopDurationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
