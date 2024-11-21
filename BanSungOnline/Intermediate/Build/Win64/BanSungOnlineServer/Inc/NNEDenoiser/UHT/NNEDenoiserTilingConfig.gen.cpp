// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEDenoiser/Public/NNEDenoiserTilingConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEDenoiserTilingConfig() {}

// Begin Cross Module References
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FTilingConfig();
UPackage* Z_Construct_UPackage__Script_NNEDenoiser();
// End Cross Module References

// Begin ScriptStruct FTilingConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TilingConfig;
class UScriptStruct* FTilingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TilingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TilingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTilingConfig, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("TilingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_TilingConfig.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FTilingConfig>()
{
	return FTilingConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTilingConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Tiling configuration for fixed and dynamic size models */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTilingConfig.h" },
		{ "ToolTip", "Tiling configuration for fixed and dynamic size models" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Tile size alignment (applies only to dynamic size models) */" },
		{ "DisplayName", "Size Alignment" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTilingConfig.h" },
		{ "ToolTip", "Tile size alignment (applies only to dynamic size models)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlap_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Tile overlap */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTilingConfig.h" },
		{ "ToolTip", "Tile overlap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Maximum tile size (applies only to dynamic size models) */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTilingConfig.h" },
		{ "ToolTip", "Maximum tile size (applies only to dynamic size models)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSize_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Minimum tile size (applies only to dynamic size models) */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserTilingConfig.h" },
		{ "ToolTip", "Minimum tile size (applies only to dynamic size models)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Overlap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTilingConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTilingConfig, Alignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_Overlap = { "Overlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTilingConfig, Overlap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlap_MetaData), NewProp_Overlap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTilingConfig, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSize_MetaData), NewProp_MaxSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTilingConfig, MinSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSize_MetaData), NewProp_MinSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTilingConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_Overlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_MaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTilingConfig_Statics::NewProp_MinSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTilingConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTilingConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	&NewStructOps,
	"TilingConfig",
	Z_Construct_UScriptStruct_FTilingConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTilingConfig_Statics::PropPointers),
	sizeof(FTilingConfig),
	alignof(FTilingConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTilingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTilingConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTilingConfig()
{
	if (!Z_Registration_Info_UScriptStruct_TilingConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TilingConfig.InnerSingleton, Z_Construct_UScriptStruct_FTilingConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TilingConfig.InnerSingleton;
}
// End ScriptStruct FTilingConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTilingConfig::StaticStruct, Z_Construct_UScriptStruct_FTilingConfig_Statics::NewStructOps, TEXT("TilingConfig"), &Z_Registration_Info_UScriptStruct_TilingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTilingConfig), 3662843288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h_948762855(TEXT("/Script/NNEDenoiser"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
