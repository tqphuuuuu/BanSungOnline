// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassProcessingPhaseManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassProcessingPhaseManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessingPhaseConfig();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassProcessingPhaseConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig;
class UScriptStruct* FMassProcessingPhaseConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessingPhaseConfig, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessingPhaseConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessingPhaseConfig>()
{
	return FMassProcessingPhaseConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseName_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseGroupClass_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorCDOs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseProcessor_MetaData[] = {
		{ "Comment", "// this processor is available only in editor since it's used to present the user the order in which processors\n// will be executed when given processing phase gets triggered\n" },
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
		{ "ToolTip", "this processor is available only in editor since it's used to present the user the order in which processors\nwill be executed when given processing phase gets triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassProcessingPhaseManager.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PhaseName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhaseGroupClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcessorCDOs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessorCDOs;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhaseProcessor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessingPhaseConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseName = { "PhaseName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessingPhaseConfig, PhaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseName_MetaData), NewProp_PhaseName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseGroupClass = { "PhaseGroupClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessingPhaseConfig, PhaseGroupClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassCompositeProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseGroupClass_MetaData), NewProp_PhaseGroupClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_ProcessorCDOs_Inner = { "ProcessorCDOs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_ProcessorCDOs = { "ProcessorCDOs", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessingPhaseConfig, ProcessorCDOs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessorCDOs_MetaData), NewProp_ProcessorCDOs_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseProcessor = { "PhaseProcessor", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessingPhaseConfig, PhaseProcessor), Z_Construct_UClass_UMassCompositeProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseProcessor_MetaData), NewProp_PhaseProcessor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800022001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessingPhaseConfig, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseGroupClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_ProcessorCDOs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_ProcessorCDOs,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_PhaseProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassProcessingPhaseConfig",
	Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::PropPointers),
	sizeof(FMassProcessingPhaseConfig),
	alignof(FMassProcessingPhaseConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassProcessingPhaseConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig.InnerSingleton;
}
// End ScriptStruct FMassProcessingPhaseConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingPhaseManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassProcessingPhaseConfig::StaticStruct, Z_Construct_UScriptStruct_FMassProcessingPhaseConfig_Statics::NewStructOps, TEXT("MassProcessingPhaseConfig"), &Z_Registration_Info_UScriptStruct_MassProcessingPhaseConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessingPhaseConfig), 321893241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingPhaseManager_h_1840818322(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingPhaseManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassProcessingPhaseManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
