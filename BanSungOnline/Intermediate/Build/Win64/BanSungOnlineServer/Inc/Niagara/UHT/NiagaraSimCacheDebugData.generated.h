// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheDebugData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSimCacheDebugData_generated_h
#error "NiagaraSimCacheDebugData.generated.h already included, missing '#pragma once' in NiagaraSimCacheDebugData.h"
#endif
#define NIAGARA_NiagaraSimCacheDebugData_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSimCacheDebugDataFrame>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheDebugData(); \
	friend struct Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimCacheDebugData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSimCacheDebugData)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimCacheDebugData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheDebugData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimCacheDebugData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheDebugData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSimCacheDebugData(UNiagaraSimCacheDebugData&&); \
	UNiagaraSimCacheDebugData(const UNiagaraSimCacheDebugData&); \
public: \
	NIAGARA_API virtual ~UNiagaraSimCacheDebugData();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_22_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSimCacheDebugData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
