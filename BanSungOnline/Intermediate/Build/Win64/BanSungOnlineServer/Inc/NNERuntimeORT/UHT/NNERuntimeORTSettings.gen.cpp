// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNERuntimeORT/Private/NNERuntimeORTSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeORTSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTSettings();
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister();
NNERUNTIMEORT_API UEnum* Z_Construct_UEnum_NNERuntimeORT_EExecutionMode();
NNERUNTIMEORT_API UScriptStruct* Z_Construct_UScriptStruct_FThreadingOptions();
UPackage* Z_Construct_UPackage__Script_NNERuntimeORT();
// End Cross Module References

// Begin Enum EExecutionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExecutionMode;
static UEnum* EExecutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNERuntimeORT_EExecutionMode, (UObject*)Z_Construct_UPackage__Script_NNERuntimeORT(), TEXT("EExecutionMode"));
	}
	return Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton;
}
template<> NNERUNTIMEORT_API UEnum* StaticEnum<EExecutionMode>()
{
	return EExecutionMode_StaticEnum();
}
struct Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum to represent denoiser NNE runtime type */" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "PARALLEL.Name", "PARALLEL" },
		{ "SEQUENTIAL.Name", "SEQUENTIAL" },
		{ "ToolTip", "An enum to represent denoiser NNE runtime type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SEQUENTIAL", (int64)SEQUENTIAL },
		{ "PARALLEL", (int64)PARALLEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNERuntimeORT,
	nullptr,
	"EExecutionMode",
	"EExecutionMode",
	Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNERuntimeORT_EExecutionMode()
{
	if (!Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton, Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton;
}
// End Enum EExecutionMode

// Begin ScriptStruct FThreadingOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThreadingOptions;
class UScriptStruct* FThreadingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThreadingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThreadingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThreadingOptions, (UObject*)Z_Construct_UPackage__Script_NNERuntimeORT(), TEXT("ThreadingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ThreadingOptions.OuterSingleton;
}
template<> NNERUNTIMEORT_API UScriptStruct* StaticStruct<FThreadingOptions>()
{
	return FThreadingOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FThreadingOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Threading options to configure glocal/local thread pools and exection mode */" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Threading options to configure glocal/local thread pools and exection mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalThreadPool_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "DisplayName", "Use global thread pool" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Use global threadpools that will be shared across sessions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntraOpNumThreads_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "DisplayName", "Intra-op thread count" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Set thread count of intra-op thread pool, which is utilized by ONNX Runtime to parallelize computation inside each operator.\nSpecial values:\n   0 = Use default thread count\n   1 = The invoking thread will be used; no threads will be created in the thread pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterOpNumThreads_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "DisplayName", "Inter-op thread count" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Set thread count of the inter-op thread pool, which enables parallelism between operators and will only be created when session execution mode set to parallel.\nSpecial values:\n   0 = Use default thread count\n   1 = The invoking thread will be used; no threads will be created in the thread pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "DisplayName", "Execution mode" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Controls whether multiple operators in the graph (across nodes) run sequentially or in parallel.\nNote: DirectML EP requires sequential execution and therefore ignores this setting." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseGlobalThreadPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalThreadPool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntraOpNumThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterOpNumThreads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThreadingOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_bUseGlobalThreadPool_SetBit(void* Obj)
{
	((FThreadingOptions*)Obj)->bUseGlobalThreadPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_bUseGlobalThreadPool = { "bUseGlobalThreadPool", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThreadingOptions), &Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_bUseGlobalThreadPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGlobalThreadPool_MetaData), NewProp_bUseGlobalThreadPool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_IntraOpNumThreads = { "IntraOpNumThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreadingOptions, IntraOpNumThreads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntraOpNumThreads_MetaData), NewProp_IntraOpNumThreads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_InterOpNumThreads = { "InterOpNumThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreadingOptions, InterOpNumThreads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterOpNumThreads_MetaData), NewProp_InterOpNumThreads_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThreadingOptions, ExecutionMode), Z_Construct_UEnum_NNERuntimeORT_EExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionMode_MetaData), NewProp_ExecutionMode_MetaData) }; // 1535399739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThreadingOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_bUseGlobalThreadPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_IntraOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_InterOpNumThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_ExecutionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreadingOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThreadingOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
	nullptr,
	&NewStructOps,
	"ThreadingOptions",
	Z_Construct_UScriptStruct_FThreadingOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreadingOptions_Statics::PropPointers),
	sizeof(FThreadingOptions),
	alignof(FThreadingOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThreadingOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThreadingOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FThreadingOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ThreadingOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThreadingOptions.InnerSingleton, Z_Construct_UScriptStruct_FThreadingOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ThreadingOptions.InnerSingleton;
}
// End ScriptStruct FThreadingOptions

// Begin Class UNNERuntimeORTSettings
void UNNERuntimeORTSettings::StaticRegisterNativesUNNERuntimeORTSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeORTSettings);
UClass* Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister()
{
	return UNNERuntimeORTSettings::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeORTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings used to configure NNERuntimeORT */" },
		{ "DisplayName", "NNERuntimeORT" },
		{ "IncludePath", "NNERuntimeORTSettings.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings used to configure NNERuntimeORT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorThreadingOptions_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Editor threading options" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Threading options in Editor targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameThreadingOptions_MetaData[] = {
		{ "Category", "ONNX Runtime" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Game threading options" },
		{ "ModuleRelativePath", "Private/NNERuntimeORTSettings.h" },
		{ "ToolTip", "Threading options in Non-Editor (Game, Program, ...) targets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorThreadingOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameThreadingOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeORTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNNERuntimeORTSettings_Statics::NewProp_EditorThreadingOptions = { "EditorThreadingOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNERuntimeORTSettings, EditorThreadingOptions), Z_Construct_UScriptStruct_FThreadingOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorThreadingOptions_MetaData), NewProp_EditorThreadingOptions_MetaData) }; // 131543528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNNERuntimeORTSettings_Statics::NewProp_GameThreadingOptions = { "GameThreadingOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNERuntimeORTSettings, GameThreadingOptions), Z_Construct_UScriptStruct_FThreadingOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameThreadingOptions_MetaData), NewProp_GameThreadingOptions_MetaData) }; // 131543528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNNERuntimeORTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNERuntimeORTSettings_Statics::NewProp_EditorThreadingOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNERuntimeORTSettings_Statics::NewProp_GameThreadingOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNNERuntimeORTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeORTSettings_Statics::ClassParams = {
	&UNNERuntimeORTSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNNERuntimeORTSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeORTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeORTSettings()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton, Z_Construct_UClass_UNNERuntimeORTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton;
}
template<> NNERUNTIMEORT_API UClass* StaticClass<UNNERuntimeORTSettings>()
{
	return UNNERuntimeORTSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeORTSettings);
UNNERuntimeORTSettings::~UNNERuntimeORTSettings() {}
// End Class UNNERuntimeORTSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExecutionMode_StaticEnum, TEXT("EExecutionMode"), &Z_Registration_Info_UEnum_EExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1535399739U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FThreadingOptions::StaticStruct, Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewStructOps, TEXT("ThreadingOptions"), &Z_Registration_Info_UScriptStruct_ThreadingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThreadingOptions), 131543528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeORTSettings, UNNERuntimeORTSettings::StaticClass, TEXT("UNNERuntimeORTSettings"), &Z_Registration_Info_UClass_UNNERuntimeORTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeORTSettings), 401265946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_1535353908(TEXT("/Script/NNERuntimeORT"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
