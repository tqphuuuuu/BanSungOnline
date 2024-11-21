// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDMetadataImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDMetadataImportOptions() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMetadataImportOptions();
// End Cross Module References

// Begin ScriptStruct FUsdMetadataImportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions;
class UScriptStruct* FUsdMetadataImportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdMetadataImportOptions, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdMetadataImportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdMetadataImportOptions>()
{
	return FUsdMetadataImportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollectMetadata_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// Whether to collect USD prim metadata into AssetUserData objects at all\n" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
		{ "ToolTip", "Whether to collect USD prim metadata into AssetUserData objects at all" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollectFromEntireSubtrees_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// Whether to collect USD metadata from not only a particular prim, but its entire subtree,\n// when apropriate. This is useful when used together with collapsing settings, for example.\n" },
		{ "EditCondition", "bCollectMetadata" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
		{ "ToolTip", "Whether to collect USD metadata from not only a particular prim, but its entire subtree,\nwhen apropriate. This is useful when used together with collapsing settings, for example." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollectOnComponents_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// We will always add the collected metadata to AssetUserData objects assigned to all generated assets\n// that support them. When this option is enabled, however, we will also separately collect USD prim\n// metadata and add that to AssetUserData objects added to every spawned *component*.\n// This can be useful for tracking metadata on prims that don't usually generate assets, like simple\n// Xforms, cameras, lights, etc., or for collecting metadata for prims with alternative draw modes\n// enabled, like bounds or cards: We won't generate the usual assets for those, but the metadata could\n// still be collected on the components with this option.\n" },
		{ "EditCondition", "bCollectMetadata" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
		{ "ToolTip", "We will always add the collected metadata to AssetUserData objects assigned to all generated assets\nthat support them. When this option is enabled, however, we will also separately collect USD prim\nmetadata and add that to AssetUserData objects added to every spawned *component*.\nThis can be useful for tracking metadata on prims that don't usually generate assets, like simple\nXforms, cameras, lights, etc., or for collecting metadata for prims with alternative draw modes\nenabled, like bounds or cards: We won't generate the usual assets for those, but the metadata could\nstill be collected on the components with this option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedPrefixFilters_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// When collecting metadata, we will ignore all entries that start with these prefixes.\n// Note that you can use the \":\" separator for nested dictionaries, so for example using\n// \"customData:ign\" to ignore anything within the \"ignoredValues\" dictionary inside the\n// \"customData\" dictionary\n" },
		{ "EditCondition", "bCollectMetadata" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
		{ "ToolTip", "When collecting metadata, we will ignore all entries that start with these prefixes.\nNote that you can use the \":\" separator for nested dictionaries, so for example using\n\"customData:ign\" to ignore anything within the \"ignoredValues\" dictionary inside the\n\"customData\" dictionary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertFilters_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// When this is false (default), the \"BlockedPrefixFilters\" property describe prefixes to block, and\n// metadata entries that match any of those prefixes are ignored and not collected.\n// When this is true, the \"BlockedPrefixFilters\" property is inverted, and describes prefixes to *allow*.\n// In that case, entries are only allowed and collected if they match at least one of the provided prefixes.\n" },
		{ "EditCondition", "bCollectMetadata" },
		{ "ModuleRelativePath", "Public/USDMetadataImportOptions.h" },
		{ "ToolTip", "When this is false (default), the \"BlockedPrefixFilters\" property describe prefixes to block, and\nmetadata entries that match any of those prefixes are ignored and not collected.\nWhen this is true, the \"BlockedPrefixFilters\" property is inverted, and describes prefixes to *allow*.\nIn that case, entries are only allowed and collected if they match at least one of the provided prefixes." },
	};
#endif // WITH_METADATA
	static void NewProp_bCollectMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollectMetadata;
	static void NewProp_bCollectFromEntireSubtrees_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollectFromEntireSubtrees;
	static void NewProp_bCollectOnComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollectOnComponents;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlockedPrefixFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockedPrefixFilters;
	static void NewProp_bInvertFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdMetadataImportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectMetadata_SetBit(void* Obj)
{
	((FUsdMetadataImportOptions*)Obj)->bCollectMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectMetadata = { "bCollectMetadata", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUsdMetadataImportOptions), &Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectMetadata_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollectMetadata_MetaData), NewProp_bCollectMetadata_MetaData) };
void Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectFromEntireSubtrees_SetBit(void* Obj)
{
	((FUsdMetadataImportOptions*)Obj)->bCollectFromEntireSubtrees = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectFromEntireSubtrees = { "bCollectFromEntireSubtrees", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUsdMetadataImportOptions), &Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectFromEntireSubtrees_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollectFromEntireSubtrees_MetaData), NewProp_bCollectFromEntireSubtrees_MetaData) };
void Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectOnComponents_SetBit(void* Obj)
{
	((FUsdMetadataImportOptions*)Obj)->bCollectOnComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectOnComponents = { "bCollectOnComponents", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUsdMetadataImportOptions), &Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectOnComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollectOnComponents_MetaData), NewProp_bCollectOnComponents_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_BlockedPrefixFilters_Inner = { "BlockedPrefixFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_BlockedPrefixFilters = { "BlockedPrefixFilters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdMetadataImportOptions, BlockedPrefixFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedPrefixFilters_MetaData), NewProp_BlockedPrefixFilters_MetaData) };
void Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bInvertFilters_SetBit(void* Obj)
{
	((FUsdMetadataImportOptions*)Obj)->bInvertFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bInvertFilters = { "bInvertFilters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUsdMetadataImportOptions), &Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bInvertFilters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertFilters_MetaData), NewProp_bInvertFilters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectFromEntireSubtrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bCollectOnComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_BlockedPrefixFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_BlockedPrefixFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewProp_bInvertFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdMetadataImportOptions",
	Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::PropPointers),
	sizeof(FUsdMetadataImportOptions),
	alignof(FUsdMetadataImportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdMetadataImportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.InnerSingleton, Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions.InnerSingleton;
}
// End ScriptStruct FUsdMetadataImportOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadataImportOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUsdMetadataImportOptions::StaticStruct, Z_Construct_UScriptStruct_FUsdMetadataImportOptions_Statics::NewStructOps, TEXT("UsdMetadataImportOptions"), &Z_Registration_Info_UScriptStruct_UsdMetadataImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdMetadataImportOptions), 4078261931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadataImportOptions_h_393013502(TEXT("/Script/USDClasses"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadataImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadataImportOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
