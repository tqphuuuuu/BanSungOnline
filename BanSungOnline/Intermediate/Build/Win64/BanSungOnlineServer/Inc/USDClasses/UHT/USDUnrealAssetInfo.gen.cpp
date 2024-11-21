// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDUnrealAssetInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDUnrealAssetInfo() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo();
// End Cross Module References

// Begin ScriptStruct FUsdUnrealAssetInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo;
class UScriptStruct* FUsdUnrealAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdUnrealAssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdUnrealAssetInfo>()
{
	return FUsdUnrealAssetInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Metadata added to a prim to indicate it was exported from a particular Unreal asset\n */" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Metadata added to a prim to indicate it was exported from a particular Unreal asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Name of the Unreal asset\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Name of the Unreal asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Filepath to the layer where the asset was exported to\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Filepath to the layer where the asset was exported to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Identifier string for the current asset version. Whenever the asset is updated inside Unreal, this will change\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Identifier string for the current asset version. Whenever the asset is updated inside Unreal, this will change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealContentPath_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Path to the exported asset (e.g. \"/Game/MyMaterials/Red.Red\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Path to the exported asset (e.g. \"/Game/MyMaterials/Red.Red\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealAssetType_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Class name of the exported asset (e.g. \"StaticMesh\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Class name of the exported asset (e.g. \"StaticMesh\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealExportTime_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// DateTime string of the moment of export (e.g. \"2022.06.17-14.19.54\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "DateTime string of the moment of export (e.g. \"2022.06.17-14.19.54\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealEngineVersion_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Engine version string describing the engine that exported this asset (e.g. \"5.1.0-21000000+UE5\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Engine version string describing the engine that exported this asset (e.g. \"5.1.0-21000000+UE5\")" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealContentPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealAssetType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealExportTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealEngineVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdUnrealAssetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath = { "UnrealContentPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealContentPath_MetaData), NewProp_UnrealContentPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType = { "UnrealAssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealAssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealAssetType_MetaData), NewProp_UnrealAssetType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime = { "UnrealExportTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealExportTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealExportTime_MetaData), NewProp_UnrealExportTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion = { "UnrealEngineVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealEngineVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealEngineVersion_MetaData), NewProp_UnrealEngineVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdUnrealAssetInfo",
	Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers),
	sizeof(FUsdUnrealAssetInfo),
	alignof(FUsdUnrealAssetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton;
}
// End ScriptStruct FUsdUnrealAssetInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUsdUnrealAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewStructOps, TEXT("UsdUnrealAssetInfo"), &Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdUnrealAssetInfo), 325627492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDUnrealAssetInfo_h_1828323148(TEXT("/Script/USDClasses"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
