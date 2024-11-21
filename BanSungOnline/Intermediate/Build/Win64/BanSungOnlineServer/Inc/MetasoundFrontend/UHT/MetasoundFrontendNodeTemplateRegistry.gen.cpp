// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontend/Public/MetasoundFrontendNodeTemplateRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFrontendNodeTemplateRegistry() {}

// Begin Cross Module References
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams();
UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References

// Begin ScriptStruct FNodeTemplateGenerateInterfaceParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams;
class UScriptStruct* FNodeTemplateGenerateInterfaceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("NodeTemplateGenerateInterfaceParams"));
	}
	return Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FNodeTemplateGenerateInterfaceParams>()
{
	return FNodeTemplateGenerateInterfaceParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendNodeTemplateRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsToConnect_MetaData[] = {
		{ "Comment", "// TODO: Currently just DataType FName. Subsequent change will replace this with a VertexHandle\n// and will add builder reference to once builder supports template nodes and controllers\n// are no longer used to add template nodes from editor code.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendNodeTemplateRegistry.h" },
		{ "ToolTip", "TODO: Currently just DataType FName. Subsequent change will replace this with a VertexHandle\nand will add builder reference to once builder supports template nodes and controllers\nare no longer used to add template nodes from editor code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputsToConnect_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendNodeTemplateRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputsToConnect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsToConnect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputsToConnect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputsToConnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeTemplateGenerateInterfaceParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_InputsToConnect_Inner = { "InputsToConnect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_InputsToConnect = { "InputsToConnect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeTemplateGenerateInterfaceParams, InputsToConnect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsToConnect_MetaData), NewProp_InputsToConnect_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_OutputsToConnect_Inner = { "OutputsToConnect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_OutputsToConnect = { "OutputsToConnect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeTemplateGenerateInterfaceParams, OutputsToConnect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputsToConnect_MetaData), NewProp_OutputsToConnect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_InputsToConnect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_InputsToConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_OutputsToConnect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewProp_OutputsToConnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"NodeTemplateGenerateInterfaceParams",
	Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::PropPointers),
	sizeof(FNodeTemplateGenerateInterfaceParams),
	alignof(FNodeTemplateGenerateInterfaceParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams()
{
	if (!Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.InnerSingleton, Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams.InnerSingleton;
}
// End ScriptStruct FNodeTemplateGenerateInterfaceParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNodeTemplateGenerateInterfaceParams::StaticStruct, Z_Construct_UScriptStruct_FNodeTemplateGenerateInterfaceParams_Statics::NewStructOps, TEXT("NodeTemplateGenerateInterfaceParams"), &Z_Registration_Info_UScriptStruct_NodeTemplateGenerateInterfaceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeTemplateGenerateInterfaceParams), 3795334490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h_1478559399(TEXT("/Script/MetasoundFrontend"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendNodeTemplateRegistry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
