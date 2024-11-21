// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusShaderText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusShaderText() {}

// Begin Cross Module References
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusShaderText
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusShaderText;
class UScriptStruct* FOptimusShaderText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusShaderText, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusShaderText"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusShaderText>()
{
	return FOptimusShaderText::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusShaderText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Declarations_MetaData[] = {
		{ "Category", "ShaderText" },
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderText_MetaData[] = {
		{ "Category", "ShaderText" },
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Declarations;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShaderText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusShaderText>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations = { "Declarations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusShaderText, Declarations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Declarations_MetaData), NewProp_Declarations_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText = { "ShaderText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusShaderText, ShaderText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderText_MetaData), NewProp_ShaderText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusShaderText",
	Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers),
	sizeof(FOptimusShaderText),
	alignof(FOptimusShaderText),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusShaderText_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton, Z_Construct_UScriptStruct_FOptimusShaderText_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton;
}
// End ScriptStruct FOptimusShaderText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusShaderText::StaticStruct, Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewStructOps, TEXT("OptimusShaderText"), &Z_Registration_Info_UScriptStruct_OptimusShaderText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusShaderText), 3653390132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_203310407(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
