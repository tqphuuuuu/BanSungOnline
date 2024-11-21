// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDMetadata() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMetadataValue();
USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimMetadata();
// End Cross Module References

// Begin ScriptStruct FUsdMetadataValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdMetadataValue;
class UScriptStruct* FUsdMetadataValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMetadataValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdMetadataValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdMetadataValue, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdMetadataValue"));
	}
	return Z_Registration_Info_UScriptStruct_UsdMetadataValue.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdMetadataValue>()
{
	return FUsdMetadataValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdMetadataValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describes a single metadata value collected from USD\n" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
		{ "ToolTip", "Describes a single metadata value collected from USD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// USD typename. Anything from the \"Value type token\" column on the Basic data types tables from\n// https://openusd.org/release/api/_usd__page__datatypes.html is allowed, including\n// the array types (e.g. \"uchar\", \"timecode\", \"matrix3d[]\" and \"half[]\").\n// Exceptions are the \"opaque\" typeName that we don't support, and the \"SdfListOp<Token>\" typeName,\n// that we *do* support (it's the typeName for list-editable attributes like \"apiSchemas\")\n" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
		{ "ToolTip", "USD typename. Anything from the \"Value type token\" column on the Basic data types tables from\nhttps:openusd.org/release/api/_usd__page__datatypes.html is allowed, including\nthe array types (e.g. \"uchar\", \"timecode\", \"matrix3d[]\" and \"half[]\").\nExceptions are the \"opaque\" typeName that we don't support, and the \"SdfListOp<Token>\" typeName,\nthat we *do* support (it's the typeName for list-editable attributes like \"apiSchemas\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringifiedValue_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// A stringified value that should match the type in TypeName (e.g. \"[(1.0, 1.0, 0.5), (1.0, 1.0, 0.5)]\" if\n// TypeName is \"double3[]\").\n// You can use the functions on UsdConversionLibrary (USDConversionLibrary.h) and UsdUtils namespace\n// (USDValueConversion.h) to help stringify/unstringify these types according to USD rules, from C++,\n// Blueprint and Python\n" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
		{ "ToolTip", "A stringified value that should match the type in TypeName (e.g. \"[(1.0, 1.0, 0.5), (1.0, 1.0, 0.5)]\" if\nTypeName is \"double3[]\").\nYou can use the functions on UsdConversionLibrary (USDConversionLibrary.h) and UsdUtils namespace\n(USDValueConversion.h) to help stringify/unstringify these types according to USD rules, from C++,\nBlueprint and Python" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringifiedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdMetadataValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdMetadataValue, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::NewProp_StringifiedValue = { "StringifiedValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdMetadataValue, StringifiedValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringifiedValue_MetaData), NewProp_StringifiedValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::NewProp_StringifiedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdMetadataValue",
	Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::PropPointers),
	sizeof(FUsdMetadataValue),
	alignof(FUsdMetadataValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdMetadataValue()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMetadataValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdMetadataValue.InnerSingleton, Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdMetadataValue.InnerSingleton;
}
// End ScriptStruct FUsdMetadataValue

// Begin ScriptStruct FUsdPrimMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdPrimMetadata;
class UScriptStruct* FUsdPrimMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdPrimMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdPrimMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdPrimMetadata, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdPrimMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_UsdPrimMetadata.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdPrimMetadata>()
{
	return FUsdPrimMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describes all the metadata values collected from a particular USD prim\n" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
		{ "ToolTip", "Describes all the metadata values collected from a particular USD prim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdPrimMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUsdMetadataValue, METADATA_PARAMS(0, nullptr) }; // 2060374601
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdPrimMetadata, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 2060374601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdPrimMetadata",
	Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::PropPointers),
	sizeof(FUsdPrimMetadata),
	alignof(FUsdPrimMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdPrimMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_UsdPrimMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdPrimMetadata.InnerSingleton, Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdPrimMetadata.InnerSingleton;
}
// End ScriptStruct FUsdPrimMetadata

// Begin ScriptStruct FUsdCombinedPrimMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata;
class UScriptStruct* FUsdCombinedPrimMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdCombinedPrimMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdCombinedPrimMetadata>()
{
	return FUsdCombinedPrimMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Tracks metadata collected from multiple prim paths.\n// This is useful because often multiple prims will be read to generate an asset, like when collapsing or\n// collecting skinned Mesh prims for a SkeletalMesh.\n// This may also be used if multiple prims within the same stage end up generating the same asset,\n// which is shared via the asset cache: Both prims will store their metadata here.\n" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
		{ "ToolTip", "Tracks metadata collected from multiple prim paths.\nThis is useful because often multiple prims will be read to generate an asset, like when collapsing or\ncollecting skinned Mesh prims for a SkeletalMesh.\nThis may also be used if multiple prims within the same stage end up generating the same asset,\nwhich is shared via the asset cache: Both prims will store their metadata here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimPathToMetadata_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDMetadata.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimPathToMetadata_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPathToMetadata_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PrimPathToMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdCombinedPrimMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata_ValueProp = { "PrimPathToMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUsdPrimMetadata, METADATA_PARAMS(0, nullptr) }; // 1086642774
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata_Key_KeyProp = { "PrimPathToMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata = { "PrimPathToMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUsdCombinedPrimMetadata, PrimPathToMetadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimPathToMetadata_MetaData), NewProp_PrimPathToMetadata_MetaData) }; // 1086642774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewProp_PrimPathToMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	&NewStructOps,
	"UsdCombinedPrimMetadata",
	Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::PropPointers),
	sizeof(FUsdCombinedPrimMetadata),
	alignof(FUsdCombinedPrimMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.InnerSingleton, Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata.InnerSingleton;
}
// End ScriptStruct FUsdCombinedPrimMetadata

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadata_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUsdMetadataValue::StaticStruct, Z_Construct_UScriptStruct_FUsdMetadataValue_Statics::NewStructOps, TEXT("UsdMetadataValue"), &Z_Registration_Info_UScriptStruct_UsdMetadataValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdMetadataValue), 2060374601U) },
		{ FUsdPrimMetadata::StaticStruct, Z_Construct_UScriptStruct_FUsdPrimMetadata_Statics::NewStructOps, TEXT("UsdPrimMetadata"), &Z_Registration_Info_UScriptStruct_UsdPrimMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdPrimMetadata), 1086642774U) },
		{ FUsdCombinedPrimMetadata::StaticStruct, Z_Construct_UScriptStruct_FUsdCombinedPrimMetadata_Statics::NewStructOps, TEXT("UsdCombinedPrimMetadata"), &Z_Registration_Info_UScriptStruct_UsdCombinedPrimMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdCombinedPrimMetadata), 4028851858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadata_h_1820185133(TEXT("/Script/USDClasses"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDMetadata_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
