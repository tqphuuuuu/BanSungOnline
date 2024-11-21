// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTFunctionLibrary.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTFunctionLibrary() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary();
AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTFunctionLibrary Function ClearBlackboardValue
struct Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics
{
	struct BTFunctionLibrary_eventClearBlackboardValue_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** Resets indicated value to \"not set\" value, based on values type */" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Resets indicated value to \"not set\" value, based on values type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "ClearBlackboardValue", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::BTFunctionLibrary_eventClearBlackboardValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::BTFunctionLibrary_eventClearBlackboardValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execClearBlackboardValue)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::ClearBlackboardValue(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function ClearBlackboardValue

// Begin Class UBTFunctionLibrary Function ClearBlackboardValueAsVector
struct Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics
{
	struct BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** (DEPRECATED) Use ClearBlackboardValue instead */" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ClearBlackboardValue instead." },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "(DEPRECATED) Use ClearBlackboardValue instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "ClearBlackboardValueAsVector", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execClearBlackboardValueAsVector)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::ClearBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function ClearBlackboardValueAsVector

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsActor
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsActor", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsActor)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsActor(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsActor

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsBool
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
void Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsBool)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsBool

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsClass
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsClass", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsClass)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsClass

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsEnum
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsEnum", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsEnum)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsEnum

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsFloat
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsFloat)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsFloat

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsInt
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsInt)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsInt

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsName
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsName_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsName", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::BTFunctionLibrary_eventGetBlackboardValueAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::BTFunctionLibrary_eventGetBlackboardValueAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsName)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsName

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsObject
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsObject", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsObject)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsObject

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsRotator
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsRotator", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsRotator)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsRotator

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsString
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsString_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsString", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::BTFunctionLibrary_eventGetBlackboardValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::BTFunctionLibrary_eventGetBlackboardValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsString)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsString

// Begin Class UBTFunctionLibrary Function GetBlackboardValueAsVector
struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics
{
	struct BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetBlackboardValueAsVector", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetBlackboardValueAsVector)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBTFunctionLibrary::GetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetBlackboardValueAsVector

// Begin Class UBTFunctionLibrary Function GetOwnerComponent
struct Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics
{
	struct BTFunctionLibrary_eventGetOwnerComponent_Parms
	{
		UBTNode* NodeOwner;
		UBehaviorTreeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::BTFunctionLibrary_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::BTFunctionLibrary_eventGetOwnerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetOwnerComponent)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviorTreeComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnerComponent(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetOwnerComponent

// Begin Class UBTFunctionLibrary Function GetOwnersBlackboard
struct Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics
{
	struct BTFunctionLibrary_eventGetOwnersBlackboard_Parms
	{
		UBTNode* NodeOwner;
		UBlackboardComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "GetOwnersBlackboard", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::BTFunctionLibrary_eventGetOwnersBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::BTFunctionLibrary_eventGetOwnersBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execGetOwnersBlackboard)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlackboardComponent**)Z_Param__Result=UBTFunctionLibrary::GetOwnersBlackboard(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function GetOwnersBlackboard

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsBool
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
void Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsBool)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsBool(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsBool

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsClass
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		UClass* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Value), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsClass", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsClass)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_OBJECT(UClass,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsClass(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsClass

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsEnum
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		uint8 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsEnum", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsEnum)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsEnum(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsEnum

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsFloat
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsFloat)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsFloat(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsFloat

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsInt
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsInt)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsInt(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsInt

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsName
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsName_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FName Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsName", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::BTFunctionLibrary_eventSetBlackboardValueAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::BTFunctionLibrary_eventSetBlackboardValueAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsName)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsName(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsName

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsObject
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		UObject* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsObject", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsObject)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsObject(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsObject

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsRotator
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FRotator Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsRotator", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsRotator)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_STRUCT(FRotator,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsRotator(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsRotator

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsString
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsString_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsString", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::BTFunctionLibrary_eventSetBlackboardValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::BTFunctionLibrary_eventSetBlackboardValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsString)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsString(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsString

// Begin Class UBTFunctionLibrary Function SetBlackboardValueAsVector
struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics
{
	struct BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms
	{
		UBTNode* NodeOwner;
		FBlackboardKeySelector Key;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "SetBlackboardValueAsVector", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execSetBlackboardValueAsVector)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::SetBlackboardValueAsVector(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function SetBlackboardValueAsVector

// Begin Class UBTFunctionLibrary Function StartUsingExternalEvent
struct Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics
{
	struct BTFunctionLibrary_eventStartUsingExternalEvent_Parms
	{
		UBTNode* NodeOwner;
		AActor* OwningActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** Initialize variables marked as \"instance memory\" and set owning actor for blackboard operations */" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No longer needed" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Initialize variables marked as \"instance memory\" and set owning actor for blackboard operations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_NodeOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "StartUsingExternalEvent", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::BTFunctionLibrary_eventStartUsingExternalEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::BTFunctionLibrary_eventStartUsingExternalEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execStartUsingExternalEvent)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::StartUsingExternalEvent(Z_Param_NodeOwner,Z_Param_OwningActor);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function StartUsingExternalEvent

// Begin Class UBTFunctionLibrary Function StopUsingExternalEvent
struct Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics
{
	struct BTFunctionLibrary_eventStopUsingExternalEvent_Parms
	{
		UBTNode* NodeOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** Save variables marked as \"instance memory\" and clear owning actor */" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No longer needed" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Save variables marked as \"instance memory\" and clear owning actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTFunctionLibrary_eventStopUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::NewProp_NodeOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, nullptr, "StopUsingExternalEvent", nullptr, nullptr, Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::BTFunctionLibrary_eventStopUsingExternalEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::BTFunctionLibrary_eventStopUsingExternalEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTFunctionLibrary::execStopUsingExternalEvent)
{
	P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBTFunctionLibrary::StopUsingExternalEvent(Z_Param_NodeOwner);
	P_NATIVE_END;
}
// End Class UBTFunctionLibrary Function StopUsingExternalEvent

// Begin Class UBTFunctionLibrary
void UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary()
{
	UClass* Class = UBTFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearBlackboardValue", &UBTFunctionLibrary::execClearBlackboardValue },
		{ "ClearBlackboardValueAsVector", &UBTFunctionLibrary::execClearBlackboardValueAsVector },
		{ "GetBlackboardValueAsActor", &UBTFunctionLibrary::execGetBlackboardValueAsActor },
		{ "GetBlackboardValueAsBool", &UBTFunctionLibrary::execGetBlackboardValueAsBool },
		{ "GetBlackboardValueAsClass", &UBTFunctionLibrary::execGetBlackboardValueAsClass },
		{ "GetBlackboardValueAsEnum", &UBTFunctionLibrary::execGetBlackboardValueAsEnum },
		{ "GetBlackboardValueAsFloat", &UBTFunctionLibrary::execGetBlackboardValueAsFloat },
		{ "GetBlackboardValueAsInt", &UBTFunctionLibrary::execGetBlackboardValueAsInt },
		{ "GetBlackboardValueAsName", &UBTFunctionLibrary::execGetBlackboardValueAsName },
		{ "GetBlackboardValueAsObject", &UBTFunctionLibrary::execGetBlackboardValueAsObject },
		{ "GetBlackboardValueAsRotator", &UBTFunctionLibrary::execGetBlackboardValueAsRotator },
		{ "GetBlackboardValueAsString", &UBTFunctionLibrary::execGetBlackboardValueAsString },
		{ "GetBlackboardValueAsVector", &UBTFunctionLibrary::execGetBlackboardValueAsVector },
		{ "GetOwnerComponent", &UBTFunctionLibrary::execGetOwnerComponent },
		{ "GetOwnersBlackboard", &UBTFunctionLibrary::execGetOwnersBlackboard },
		{ "SetBlackboardValueAsBool", &UBTFunctionLibrary::execSetBlackboardValueAsBool },
		{ "SetBlackboardValueAsClass", &UBTFunctionLibrary::execSetBlackboardValueAsClass },
		{ "SetBlackboardValueAsEnum", &UBTFunctionLibrary::execSetBlackboardValueAsEnum },
		{ "SetBlackboardValueAsFloat", &UBTFunctionLibrary::execSetBlackboardValueAsFloat },
		{ "SetBlackboardValueAsInt", &UBTFunctionLibrary::execSetBlackboardValueAsInt },
		{ "SetBlackboardValueAsName", &UBTFunctionLibrary::execSetBlackboardValueAsName },
		{ "SetBlackboardValueAsObject", &UBTFunctionLibrary::execSetBlackboardValueAsObject },
		{ "SetBlackboardValueAsRotator", &UBTFunctionLibrary::execSetBlackboardValueAsRotator },
		{ "SetBlackboardValueAsString", &UBTFunctionLibrary::execSetBlackboardValueAsString },
		{ "SetBlackboardValueAsVector", &UBTFunctionLibrary::execSetBlackboardValueAsVector },
		{ "StartUsingExternalEvent", &UBTFunctionLibrary::execStartUsingExternalEvent },
		{ "StopUsingExternalEvent", &UBTFunctionLibrary::execStopUsingExternalEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTFunctionLibrary);
UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister()
{
	return UBTFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UBTFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "RestrictedToClasses", "BTNode" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue, "ClearBlackboardValue" }, // 1688950080
		{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector, "ClearBlackboardValueAsVector" }, // 896519175
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor, "GetBlackboardValueAsActor" }, // 2880406029
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool, "GetBlackboardValueAsBool" }, // 2455541861
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass, "GetBlackboardValueAsClass" }, // 3826699068
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum, "GetBlackboardValueAsEnum" }, // 1214544887
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat, "GetBlackboardValueAsFloat" }, // 2949335549
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt, "GetBlackboardValueAsInt" }, // 2835991829
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName, "GetBlackboardValueAsName" }, // 174623401
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject, "GetBlackboardValueAsObject" }, // 3357681674
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator, "GetBlackboardValueAsRotator" }, // 44525141
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString, "GetBlackboardValueAsString" }, // 2125498079
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector, "GetBlackboardValueAsVector" }, // 660620840
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent, "GetOwnerComponent" }, // 2303474473
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard, "GetOwnersBlackboard" }, // 628039381
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool, "SetBlackboardValueAsBool" }, // 767625787
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass, "SetBlackboardValueAsClass" }, // 1223664109
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum, "SetBlackboardValueAsEnum" }, // 1506018580
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat, "SetBlackboardValueAsFloat" }, // 3617051970
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt, "SetBlackboardValueAsInt" }, // 651152191
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName, "SetBlackboardValueAsName" }, // 1424914304
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject, "SetBlackboardValueAsObject" }, // 2934277952
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator, "SetBlackboardValueAsRotator" }, // 4041663301
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString, "SetBlackboardValueAsString" }, // 368095290
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector, "SetBlackboardValueAsVector" }, // 3272473267
		{ &Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent, "StartUsingExternalEvent" }, // 2452658282
		{ &Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent, "StopUsingExternalEvent" }, // 1243717216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTFunctionLibrary_Statics::ClassParams = {
	&UBTFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBTFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBTFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTFunctionLibrary.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTFunctionLibrary>()
{
	return UBTFunctionLibrary::StaticClass();
}
UBTFunctionLibrary::UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTFunctionLibrary);
UBTFunctionLibrary::~UBTFunctionLibrary() {}
// End Class UBTFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTFunctionLibrary, UBTFunctionLibrary::StaticClass, TEXT("UBTFunctionLibrary"), &Z_Registration_Info_UClass_UBTFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTFunctionLibrary), 2448709255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_1715551128(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
