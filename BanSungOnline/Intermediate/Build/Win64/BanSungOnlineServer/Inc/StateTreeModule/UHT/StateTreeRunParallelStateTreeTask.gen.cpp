// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Tasks/StateTreeRunParallelStateTreeTask.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "StateTreeModule/Public/StateTreeInstanceData.h"
#include "StateTreeModule/Public/StateTreeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeRunParallelStateTreeTask() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeRunParallelStateTreeTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData;
class UScriptStruct* FStateTreeRunParallelStateTreeTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeRunParallelStateTreeTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeRunParallelStateTreeTaskInstanceData>()
{
	return FStateTreeRunParallelStateTreeTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** State tree and parameters that will be run when this task is started. */" },
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
		{ "SchemaCanBeOverriden", "" },
		{ "ToolTip", "State tree and parameters that will be run when this task is started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningStateTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TreeInstanceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningStateTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeRunParallelStateTreeTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRunParallelStateTreeTaskInstanceData, StateTree), Z_Construct_UScriptStruct_FStateTreeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) }; // 1033739970
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_TreeInstanceData = { "TreeInstanceData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRunParallelStateTreeTaskInstanceData, TreeInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeInstanceData_MetaData), NewProp_TreeInstanceData_MetaData) }; // 1096932953
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_RunningStateTree = { "RunningStateTree", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRunParallelStateTreeTaskInstanceData, RunningStateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningStateTree_MetaData), NewProp_RunningStateTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_TreeInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewProp_RunningStateTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeRunParallelStateTreeTaskInstanceData",
	Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::PropPointers),
	sizeof(FStateTreeRunParallelStateTreeTaskInstanceData),
	alignof(FStateTreeRunParallelStateTreeTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeRunParallelStateTreeTaskInstanceData

// Begin ScriptStruct FStateTreeRunParallelStateTreeTask
static_assert(std::is_polymorphic<FStateTreeRunParallelStateTreeTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeRunParallelStateTreeTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask;
class UScriptStruct* FStateTreeRunParallelStateTreeTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeRunParallelStateTreeTask"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeRunParallelStateTreeTask>()
{
	return FStateTreeRunParallelStateTreeTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n* Task that will run another state tree in the current state while allowing the current tree to continue selection and process of child state.\n* It will succeed, fail or run depending on the result of the parallel tree.\n* Less efficient then Linked Asset state, it has the advantage of allowing multiple trees to run in parallel.\n*/" },
		{ "DisplayName", "Run Parallel Tree" },
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
		{ "ToolTip", "Task that will run another state tree in the current state while allowing the current tree to continue selection and process of child state.\nIt will succeed, fail or run depending on the result of the parallel tree.\nLess efficient then Linked Asset state, it has the advantage of allowing multiple trees to run in parallel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeOverrideTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If set the task will look at the linked state tree override to replace the state tree it's running. */" },
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
		{ "ToolTip", "If set the task will look at the linked state tree override to replace the state tree it's running." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlingPriority_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/**\n\x09 * At what priority the events should be handled in the parallel State Tree.\n\x09 * If set to 'Normal' the order of the States in the State Tree will define the handling order.\n\x09 * If the priority is set to Low, the main tree is let to handle the transitions first.\n\x09 * If set to High or above, the parallel tree has change to handle events first.\n\x09 * If multiple tasks has same priority, the State order of the States defines the handling order.\n\x09 * The tree handling order is: States and handle from leaf to root, tasks before and handled before transitions per State.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Tasks/StateTreeRunParallelStateTreeTask.h" },
		{ "ToolTip", "At what priority the events should be handled in the parallel State Tree.\nIf set to 'Normal' the order of the States in the State Tree will define the handling order.\nIf the priority is set to Low, the main tree is let to handle the transitions first.\nIf set to High or above, the parallel tree has change to handle events first.\nIf multiple tasks has same priority, the State order of the States defines the handling order.\nThe tree handling order is: States and handle from leaf to root, tasks before and handled before transitions per State." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeOverrideTag;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventHandlingPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventHandlingPriority;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeRunParallelStateTreeTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_StateTreeOverrideTag = { "StateTreeOverrideTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRunParallelStateTreeTask, StateTreeOverrideTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeOverrideTag_MetaData), NewProp_StateTreeOverrideTag_MetaData) }; // 1298103297
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_EventHandlingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_EventHandlingPriority = { "EventHandlingPriority", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeRunParallelStateTreeTask, EventHandlingPriority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventHandlingPriority_MetaData), NewProp_EventHandlingPriority_MetaData) }; // 2934257566
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_StateTreeOverrideTag,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_EventHandlingPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewProp_EventHandlingPriority,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeRunParallelStateTreeTask",
	Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::PropPointers),
	sizeof(FStateTreeRunParallelStateTreeTask),
	alignof(FStateTreeRunParallelStateTreeTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask.InnerSingleton;
}
// End ScriptStruct FStateTreeRunParallelStateTreeTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeRunParallelStateTreeTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTaskInstanceData_Statics::NewStructOps, TEXT("StateTreeRunParallelStateTreeTaskInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeRunParallelStateTreeTaskInstanceData), 1426866169U) },
		{ FStateTreeRunParallelStateTreeTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeTask_Statics::NewStructOps, TEXT("StateTreeRunParallelStateTreeTask"), &Z_Registration_Info_UScriptStruct_StateTreeRunParallelStateTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeRunParallelStateTreeTask), 2916585449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h_4243436102(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Tasks_StateTreeRunParallelStateTreeTask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
