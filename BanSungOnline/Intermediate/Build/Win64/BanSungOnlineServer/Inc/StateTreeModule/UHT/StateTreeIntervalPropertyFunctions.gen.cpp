// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeIntervalPropertyFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeMakeIntervalPropertyFunctionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData;
class UScriptStruct* FStateTreeMakeIntervalPropertyFunctionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeMakeIntervalPropertyFunctionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeMakeIntervalPropertyFunctionInstanceData>()
{
	return FStateTreeMakeIntervalPropertyFunctionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeMakeIntervalPropertyFunctionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeMakeIntervalPropertyFunctionInstanceData, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeMakeIntervalPropertyFunctionInstanceData, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeMakeIntervalPropertyFunctionInstanceData, Result), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeMakeIntervalPropertyFunctionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeMakeIntervalPropertyFunctionInstanceData),
	alignof(FStateTreeMakeIntervalPropertyFunctionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeMakeIntervalPropertyFunctionInstanceData

// Begin ScriptStruct FStateTreeMakeIntervalPropertyFunction
static_assert(std::is_polymorphic<FStateTreeMakeIntervalPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeMakeIntervalPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction;
class UScriptStruct* FStateTreeMakeIntervalPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeMakeIntervalPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeMakeIntervalPropertyFunction>()
{
	return FStateTreeMakeIntervalPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Make an Interval from two floats.\n */" },
		{ "DisplayName", "Make Interval" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntervalPropertyFunctions.h" },
		{ "ToolTip", "Make an Interval from two floats." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeMakeIntervalPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeMakeIntervalPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeMakeIntervalPropertyFunction),
	alignof(FStateTreeMakeIntervalPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeMakeIntervalPropertyFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntervalPropertyFunctions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeMakeIntervalPropertyFunctionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData_Statics::NewStructOps, TEXT("StateTreeMakeIntervalPropertyFunctionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunctionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeMakeIntervalPropertyFunctionInstanceData), 368363538U) },
		{ FStateTreeMakeIntervalPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunction_Statics::NewStructOps, TEXT("StateTreeMakeIntervalPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeMakeIntervalPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeMakeIntervalPropertyFunction), 1005594169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntervalPropertyFunctions_h_2630469112(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntervalPropertyFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntervalPropertyFunctions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
