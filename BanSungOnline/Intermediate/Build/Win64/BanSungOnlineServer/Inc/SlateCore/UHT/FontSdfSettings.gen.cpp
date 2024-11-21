// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Fonts/FontSdfSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontSdfSettings() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontSdfSettings();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FFontSdfSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontSdfSettings;
class UScriptStruct* FFontSdfSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontSdfSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontSdfSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontSdfSettings, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("FontSdfSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FontSdfSettings.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontSdfSettings>()
{
	return FFontSdfSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFontSdfSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for signed distance field fonts.\n */" },
		{ "ModuleRelativePath", "Public/Fonts/FontSdfSettings.h" },
		{ "ToolTip", "Settings for signed distance field fonts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePpem_MetaData[] = {
		{ "Category", "SdfFont" },
		{ "ClampMax", "256" },
		{ "ClampMin", "8" },
		{ "Comment", "/** The base pixels per em for generated distance fields */" },
		{ "DisplayName", "Base SDF px/em" },
		{ "ModuleRelativePath", "Public/Fonts/FontSdfSettings.h" },
		{ "ToolTip", "The base pixels per em for generated distance fields" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePpem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontSdfSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontSdfSettings_Statics::NewProp_BasePpem = { "BasePpem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontSdfSettings, BasePpem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePpem_MetaData), NewProp_BasePpem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontSdfSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontSdfSettings_Statics::NewProp_BasePpem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontSdfSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontSdfSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"FontSdfSettings",
	Z_Construct_UScriptStruct_FFontSdfSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontSdfSettings_Statics::PropPointers),
	sizeof(FFontSdfSettings),
	alignof(FFontSdfSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontSdfSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFontSdfSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFontSdfSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FontSdfSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontSdfSettings.InnerSingleton, Z_Construct_UScriptStruct_FFontSdfSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FontSdfSettings.InnerSingleton;
}
// End ScriptStruct FFontSdfSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFontSdfSettings::StaticStruct, Z_Construct_UScriptStruct_FFontSdfSettings_Statics::NewStructOps, TEXT("FontSdfSettings"), &Z_Registration_Info_UScriptStruct_FontSdfSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontSdfSettings), 366794001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h_485625303(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
