// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterCollection.h"
#include "Niagara/Public/NiagaraParameterStore.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterCollection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraParameterCollectionInstance Function GetBoolParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms
	{
		FString InVariableName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "//Accessors from Blueprint. For now just exposing common types but ideally we can expose any somehow in future.\n" },
		{ "DisplayName", "Get Bool Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Accessors from Blueprint. For now just exposing common types but ideally we can expose any somehow in future." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
void Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms), &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetBoolParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::NiagaraParameterCollectionInstance_eventGetBoolParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetBoolParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetBoolParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetColorParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetColorParameter_Parms
	{
		FString InVariableName;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Color Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetColorParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetColorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetColorParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NiagaraParameterCollectionInstance_eventGetColorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::NiagaraParameterCollectionInstance_eventGetColorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetColorParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetColorParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetColorParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetFloatParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms
	{
		FString InVariableName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Float Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::NiagaraParameterCollectionInstance_eventGetFloatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetFloatParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetFloatParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetIntParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetIntParameter_Parms
	{
		FString InVariableName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Int Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetIntParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetIntParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetIntParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NiagaraParameterCollectionInstance_eventGetIntParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::NiagaraParameterCollectionInstance_eventGetIntParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetIntParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetIntParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetQuatParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms
	{
		FString InVariableName;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Quaternion Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetQuatParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::NiagaraParameterCollectionInstance_eventGetQuatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetQuatParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetQuatParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetQuatParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetVector2DParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms
	{
		FString InVariableName;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector2D Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVector2DParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::NiagaraParameterCollectionInstance_eventGetVector2DParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVector2DParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetVector2DParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetVector2DParameter

// Begin Class UNiagaraParameterCollectionInstance Function GetVector4Parameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms
	{
		FString InVariableName;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector4 Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVector4Parameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::NiagaraParameterCollectionInstance_eventGetVector4Parameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVector4Parameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=P_THIS->GetVector4Parameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetVector4Parameter

// Begin Class UNiagaraParameterCollectionInstance Function GetVectorParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms
	{
		FString InVariableName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Vector Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "GetVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::NiagaraParameterCollectionInstance_eventGetVectorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execGetVectorParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVectorParameter(Z_Param_InVariableName);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function GetVectorParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetBoolParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms
	{
		FString InVariableName;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Bool Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
void Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetBoolParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::NiagaraParameterCollectionInstance_eventSetBoolParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetBoolParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetBoolParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetColorParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetColorParameter_Parms
	{
		FString InVariableName;
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Color Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetColorParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetColorParameter_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetColorParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NiagaraParameterCollectionInstance_eventSetColorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::NiagaraParameterCollectionInstance_eventSetColorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetColorParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetColorParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetFloatParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms
	{
		FString InVariableName;
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Float Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::NiagaraParameterCollectionInstance_eventSetFloatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetFloatParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetFloatParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetIntParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetIntParameter_Parms
	{
		FString InVariableName;
		int32 InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Int Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetIntParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetIntParameter_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetIntParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NiagaraParameterCollectionInstance_eventSetIntParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::NiagaraParameterCollectionInstance_eventSetIntParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetIntParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetIntParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetQuatParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms
	{
		FString InVariableName;
		FQuat InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Quaternion Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetQuatParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::NiagaraParameterCollectionInstance_eventSetQuatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetQuatParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuatParameter(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetQuatParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetVector2DParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms
	{
		FString InVariableName;
		FVector2D InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Vector2D Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVector2DParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::NiagaraParameterCollectionInstance_eventSetVector2DParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVector2DParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_STRUCT(FVector2D,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVector2DParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetVector2DParameter

// Begin Class UNiagaraParameterCollectionInstance Function SetVector4Parameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms
	{
		FString InVariableName;
		FVector4 InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "// TODO[mg]: add position setter for LWC\n" },
		{ "DisplayName", "Set Vector4 Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "TODO[mg]: add position setter for LWC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVector4Parameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::NiagaraParameterCollectionInstance_eventSetVector4Parameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVector4Parameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVector4Parameter(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetVector4Parameter

// Begin Class UNiagaraParameterCollectionInstance Function SetVectorParameter
struct Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics
{
	struct NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms
	{
		FString InVariableName;
		FVector InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Vector Parameter" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraParameterCollectionInstance, nullptr, "SetVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::NiagaraParameterCollectionInstance_eventSetVectorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraParameterCollectionInstance::execSetVectorParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
	P_GET_STRUCT(FVector,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameter(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UNiagaraParameterCollectionInstance Function SetVectorParameter

// Begin Class UNiagaraParameterCollectionInstance
void UNiagaraParameterCollectionInstance::StaticRegisterNativesUNiagaraParameterCollectionInstance()
{
	UClass* Class = UNiagaraParameterCollectionInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoolParameter", &UNiagaraParameterCollectionInstance::execGetBoolParameter },
		{ "GetColorParameter", &UNiagaraParameterCollectionInstance::execGetColorParameter },
		{ "GetFloatParameter", &UNiagaraParameterCollectionInstance::execGetFloatParameter },
		{ "GetIntParameter", &UNiagaraParameterCollectionInstance::execGetIntParameter },
		{ "GetQuatParameter", &UNiagaraParameterCollectionInstance::execGetQuatParameter },
		{ "GetVector2DParameter", &UNiagaraParameterCollectionInstance::execGetVector2DParameter },
		{ "GetVector4Parameter", &UNiagaraParameterCollectionInstance::execGetVector4Parameter },
		{ "GetVectorParameter", &UNiagaraParameterCollectionInstance::execGetVectorParameter },
		{ "SetBoolParameter", &UNiagaraParameterCollectionInstance::execSetBoolParameter },
		{ "SetColorParameter", &UNiagaraParameterCollectionInstance::execSetColorParameter },
		{ "SetFloatParameter", &UNiagaraParameterCollectionInstance::execSetFloatParameter },
		{ "SetIntParameter", &UNiagaraParameterCollectionInstance::execSetIntParameter },
		{ "SetQuatParameter", &UNiagaraParameterCollectionInstance::execSetQuatParameter },
		{ "SetVector2DParameter", &UNiagaraParameterCollectionInstance::execSetVector2DParameter },
		{ "SetVector4Parameter", &UNiagaraParameterCollectionInstance::execSetVector4Parameter },
		{ "SetVectorParameter", &UNiagaraParameterCollectionInstance::execSetVectorParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterCollectionInstance);
UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister()
{
	return UNiagaraParameterCollectionInstance::StaticClass();
}
struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be used to override selected parameters from a Niagara parameter collection with another value.\n * The values in the parameter collection instance can be set from Blueprint or C++, same as the regular parameter collection. \n */" },
		{ "IncludePath", "NiagaraParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Can be used to override selected parameters from a Niagara parameter collection with another value.\nThe values in the parameter collection instance can be set from Blueprint or C++, same as the regular parameter collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "//TODO: Abstract to some interface to allow a hierarchy like UMaterialInstance?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "TODO: Abstract to some interface to allow a hierarchy like UMaterialInstance?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridenParameters_MetaData[] = {
		{ "Comment", "/**\n\x09When editing instances, we must track which parameters are overridden so we can pull in any changes to the default.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "When editing instances, we must track which parameters are overridden so we can pull in any changes to the default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterStorage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterialCollectionInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverridenParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridenParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterStorage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterialCollectionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetBoolParameter, "GetBoolParameter" }, // 3609908821
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetColorParameter, "GetColorParameter" }, // 1263997187
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetFloatParameter, "GetFloatParameter" }, // 991370076
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetIntParameter, "GetIntParameter" }, // 2505745710
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetQuatParameter, "GetQuatParameter" }, // 4077419784
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector2DParameter, "GetVector2DParameter" }, // 1189126929
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVector4Parameter, "GetVector4Parameter" }, // 1265335251
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_GetVectorParameter, "GetVectorParameter" }, // 1734697999
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetBoolParameter, "SetBoolParameter" }, // 3727891641
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetColorParameter, "SetColorParameter" }, // 1972908618
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetFloatParameter, "SetFloatParameter" }, // 3844978288
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetIntParameter, "SetIntParameter" }, // 510497992
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetQuatParameter, "SetQuatParameter" }, // 2294661214
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector2DParameter, "SetVector2DParameter" }, // 3078273219
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVector4Parameter, "SetVector4Parameter" }, // 1075865726
		{ &Z_Construct_UFunction_UNiagaraParameterCollectionInstance_SetVectorParameter, "SetVectorParameter" }, // 4064533310
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterCollectionInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, Collection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_Inner = { "OverridenParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters = { "OverridenParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, OverridenParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridenParameters_MetaData), NewProp_OverridenParameters_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage = { "ParameterStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, ParameterStorage), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterStorage_MetaData), NewProp_ParameterStorage_MetaData) }; // 3025266078
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_SourceMaterialCollectionInstance = { "SourceMaterialCollectionInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollectionInstance, SourceMaterialCollectionInstance), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaterialCollectionInstance_MetaData), NewProp_SourceMaterialCollectionInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_OverridenParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_ParameterStorage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::NewProp_SourceMaterialCollectionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::ClassParams = {
	&UNiagaraParameterCollectionInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance()
{
	if (!Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton, Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterCollectionInstance>()
{
	return UNiagaraParameterCollectionInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterCollectionInstance);
// End Class UNiagaraParameterCollectionInstance

// Begin Class UNiagaraParameterCollection
void UNiagaraParameterCollection::StaticRegisterNativesUNiagaraParameterCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterCollection);
UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister()
{
	return UNiagaraParameterCollection::StaticClass();
}
struct Z_Construct_UClass_UNiagaraParameterCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Asset containing a collection of global parameters usable by Niagara. Similar to Material parameter collections,\n *  any number of Niagara assets may reference attributes from this parameter collection and will get new values when they are changed.\n *\n *  A Niagara parameter collection can reference a Material parameter collection, so it is in sync with the values provided to a Material.\n *  To use a value from a parameter collection in a Niagara system or emitter, add a reference to it from the Parameters panel (in the Niagara Parameter Collection section).\n */" },
		{ "IncludePath", "NiagaraParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Asset containing a collection of global parameters usable by Niagara. Similar to Material parameter collections,\nany number of Niagara assets may reference attributes from this parameter collection and will get new values when they are changed.\n\nA Niagara parameter collection can reference a Material parameter collection, so it is in sync with the values provided to a Material.\nTo use a value from a parameter collection in a Niagara system or emitter, add a reference to it from the Parameters panel (in the Niagara Parameter Collection section)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "Parameter Collection" },
		{ "Comment", "/** Namespace for this parameter collection. Is enforced to be unique across all parameter collections. */" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Namespace for this parameter collection. Is enforced to be unique across all parameter collections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterialCollection_MetaData[] = {
		{ "Category", "Parameter Collection" },
		{ "Comment", "/** Optional set of MPC that can drive scalar and vector parameters */" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Optional set of MPC that can drive scalar and vector parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileId_MetaData[] = {
		{ "Comment", "/** Used to track whenever something of note changes in this parameter collection that might invalidate a compilation downstream of a script/emitter/system.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterCollection.h" },
		{ "ToolTip", "Used to track whenever something of note changes in this parameter collection that might invalidate a compilation downstream of a script/emitter/system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterialCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0020090000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollection, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollection, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 2475164134
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_SourceMaterialCollection = { "SourceMaterialCollection", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollection, SourceMaterialCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaterialCollection_MetaData), NewProp_SourceMaterialCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollection, DefaultInstance), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstance_MetaData), NewProp_DefaultInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId = { "CompileId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraParameterCollection, CompileId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileId_MetaData), NewProp_CompileId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_SourceMaterialCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_DefaultInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterCollection_Statics::NewProp_CompileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraParameterCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterCollection_Statics::ClassParams = {
	&UNiagaraParameterCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraParameterCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraParameterCollection()
{
	if (!Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton, Z_Construct_UClass_UNiagaraParameterCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraParameterCollection.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterCollection>()
{
	return UNiagaraParameterCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterCollection);
UNiagaraParameterCollection::~UNiagaraParameterCollection() {}
// End Class UNiagaraParameterCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParameterCollectionInstance, UNiagaraParameterCollectionInstance::StaticClass, TEXT("UNiagaraParameterCollectionInstance"), &Z_Registration_Info_UClass_UNiagaraParameterCollectionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterCollectionInstance), 365626558U) },
		{ Z_Construct_UClass_UNiagaraParameterCollection, UNiagaraParameterCollection::StaticClass, TEXT("UNiagaraParameterCollection"), &Z_Registration_Info_UClass_UNiagaraParameterCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterCollection), 262867359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_3110867621(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
