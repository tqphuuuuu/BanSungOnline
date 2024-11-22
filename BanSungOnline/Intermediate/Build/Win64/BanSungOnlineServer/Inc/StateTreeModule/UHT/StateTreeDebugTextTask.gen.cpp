// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Private/Tasks/StateTreeDebugTextTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeDebugTextTask() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDebugTextTask();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeDebugTextTaskInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData;
class UScriptStruct* FStateTreeDebugTextTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDebugTextTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDebugTextTaskInstanceData>()
{
	return FStateTreeDebugTextTaskInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceActor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Optional actor where to draw the text at. */" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
		{ "Optional", "" },
		{ "ToolTip", "Optional actor where to draw the text at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDebugTextTaskInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::NewProp_ReferenceActor = { "ReferenceActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDebugTextTaskInstanceData, ReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceActor_MetaData), NewProp_ReferenceActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::NewProp_ReferenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeDebugTextTaskInstanceData",
	Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::PropPointers),
	sizeof(FStateTreeDebugTextTaskInstanceData),
	alignof(FStateTreeDebugTextTaskInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeDebugTextTaskInstanceData

// Begin ScriptStruct FStateTreeDebugTextTask
static_assert(std::is_polymorphic<FStateTreeDebugTextTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeDebugTextTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask;
class UScriptStruct* FStateTreeDebugTextTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDebugTextTask, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDebugTextTask"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDebugTextTask>()
{
	return FStateTreeDebugTextTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws debug text on the HUD associated to the player controller.\n */" },
		{ "DisplayName", "Debug Text Task" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
		{ "ToolTip", "Draws debug text on the HUD associated to the player controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDebugTextTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDebugTextTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDebugTextTask, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDebugTextTask, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDebugTextTask, FontScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontScale_MetaData), NewProp_FontScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeDebugTextTask, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FStateTreeDebugTextTask*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeDebugTextTask), &Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_FontScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
	&NewStructOps,
	"StateTreeDebugTextTask",
	Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::PropPointers),
	sizeof(FStateTreeDebugTextTask),
	alignof(FStateTreeDebugTextTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDebugTextTask()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask.InnerSingleton;
}
// End ScriptStruct FStateTreeDebugTextTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeDebugTextTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData_Statics::NewStructOps, TEXT("StateTreeDebugTextTaskInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeDebugTextTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDebugTextTaskInstanceData), 339489967U) },
		{ FStateTreeDebugTextTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDebugTextTask_Statics::NewStructOps, TEXT("StateTreeDebugTextTask"), &Z_Registration_Info_UScriptStruct_StateTreeDebugTextTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDebugTextTask), 111009954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h_577445543(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDebugTextTask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS