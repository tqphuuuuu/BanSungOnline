// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Private/Tasks/StateTreeDelayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeDelayTask() {}

// Begin Cross Module References
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTask();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeDelayTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData;
class UScriptStruct* FStateTreeDelayTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDelayTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDelayTaskInstanceData>()
{
	return FStateTreeDelayTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Delay before the task ends. */" },
		{ "EditCondition", "!bRunForever" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Delay before the task ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Adds random range to the Duration. */" },
		{ "EditCondition", "!bRunForever" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Adds random range to the Duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunForever_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true the task will run forever until a transition stops it. */" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "If true the task will run forever until a transition stops it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
	static void NewProp_bRunForever_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunForever;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDelayTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDelayTaskInstanceData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDelayTaskInstanceData, RandomDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomDeviation_MetaData), NewProp_RandomDeviation_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_SetBit(void* Obj)
{
	((FStateTreeDelayTaskInstanceData*)Obj)->bRunForever = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever = { "bRunForever", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeDelayTaskInstanceData), &Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunForever_MetaData), NewProp_bRunForever_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeDelayTaskInstanceData",
	Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers),
	sizeof(FStateTreeDelayTaskInstanceData),
	alignof(FStateTreeDelayTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeDelayTaskInstanceData

// Begin ScriptStruct FStateTreeDelayTask
static_assert(std::is_polymorphic<FStateTreeDelayTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeDelayTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDelayTask;
class UScriptStruct* FStateTreeDelayTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTask, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDelayTask"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDelayTask>()
{
	return FStateTreeDelayTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple task to wait indefinitely or for a given time (in seconds) before succeeding.\n */" },
		{ "DisplayName", "Delay Task" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Simple task to wait indefinitely or for a given time (in seconds) before succeeding." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDelayTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeDelayTask",
	nullptr,
	0,
	sizeof(FStateTreeDelayTask),
	alignof(FStateTreeDelayTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTask()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton;
}
// End ScriptStruct FStateTreeDelayTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeDelayTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewStructOps, TEXT("StateTreeDelayTaskInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDelayTaskInstanceData), 4241224328U) },
		{ FStateTreeDelayTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::NewStructOps, TEXT("StateTreeDelayTask"), &Z_Registration_Info_UScriptStruct_StateTreeDelayTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDelayTask), 3374889171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_3286081243(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
