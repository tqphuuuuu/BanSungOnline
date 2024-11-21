// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDAssetCache3.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetCache3() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache3();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache3_NoRegister();
// End Cross Module References

// Begin Class UUsdAssetCache3 Function AddAssetReferencer
struct Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics
{
	struct UsdAssetCache3_eventAddAssetReferencer_Parms
	{
		const UObject* Asset;
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Adds a new UObject referencer to a particular asset, returning true if the operation succeeded.\n\x09 * Assets will not be deleted or untracked by the asset cache while the referencer is registered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Adds a new UObject referencer to a particular asset, returning true if the operation succeeded.\nAssets will not be deleted or untracked by the asset cache while the referencer is registered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventAddAssetReferencer_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventAddAssetReferencer_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventAddAssetReferencer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventAddAssetReferencer_Parms), &Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "AddAssetReferencer", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::UsdAssetCache3_eventAddAssetReferencer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::UsdAssetCache3_eventAddAssetReferencer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execAddAssetReferencer)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAssetReferencer(Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function AddAssetReferencer

// Begin Class UUsdAssetCache3 Function CacheAsset
struct Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventCacheAsset_Parms
	{
		FString Hash;
		FSoftObjectPath AssetPath;
		const UObject* Referencer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/** Adds an existing asset to the cache attached to a particular hash, and optionally registering a referencer */" },
		{ "CPP_Default_Referencer", "None" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Adds an existing asset to the cache attached to a particular hash, and optionally registering a referencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventCacheAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventCacheAsset_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventCacheAsset_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::NewProp_Referencer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "CacheAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::UsdAssetCache3_eventCacheAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::UsdAssetCache3_eventCacheAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_CacheAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_CacheAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execCacheAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheAsset(Z_Param_Hash,Z_Param_Out_AssetPath,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function CacheAsset

// Begin Class UUsdAssetCache3 Function DeleteUnreferencedAssets
struct Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics
{
	struct UsdAssetCache3_eventDeleteUnreferencedAssets_Parms
	{
		bool bShowConfirmation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cleanup" },
		{ "Comment", "/**\n\x09 * Deletes all assets that:\n\x09 *   - Are currently tracked by the asset cache;\n\x09 *   - Are set as deletable;\n\x09 *   - Are not used by other UObjects (by external assets, components, undo buffer, Python scripting variables, etc.).\n\x09 *   - Have no referencers;\n\x09 *   - Have not been saved to disk;\n\x09 *\n\x09 * If bShowConfirmation is true, this will fallback to using engine code for deleting the assets, showing a\n\x09 * confirmation dialog listing the assets that will be deleted. If false, it will silently try deleting the assets it can.\n\x09 *\n\x09 * WARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after deleting.\n\x09 */" },
		{ "CPP_Default_bShowConfirmation", "false" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Deletes all assets that:\n  - Are currently tracked by the asset cache;\n  - Are set as deletable;\n  - Are not used by other UObjects (by external assets, components, undo buffer, Python scripting variables, etc.).\n  - Have no referencers;\n  - Have not been saved to disk;\n\nIf bShowConfirmation is true, this will fallback to using engine code for deleting the assets, showing a\nconfirmation dialog listing the assets that will be deleted. If false, it will silently try deleting the assets it can.\n\nWARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after deleting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowConfirmation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::NewProp_bShowConfirmation_SetBit(void* Obj)
{
	((UsdAssetCache3_eventDeleteUnreferencedAssets_Parms*)Obj)->bShowConfirmation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::NewProp_bShowConfirmation = { "bShowConfirmation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventDeleteUnreferencedAssets_Parms), &Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::NewProp_bShowConfirmation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConfirmation_MetaData), NewProp_bShowConfirmation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::NewProp_bShowConfirmation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "DeleteUnreferencedAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::UsdAssetCache3_eventDeleteUnreferencedAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::UsdAssetCache3_eventDeleteUnreferencedAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execDeleteUnreferencedAssets)
{
	P_GET_UBOOL(Z_Param_bShowConfirmation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteUnreferencedAssets(Z_Param_bShowConfirmation);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function DeleteUnreferencedAssets

// Begin Class UUsdAssetCache3 Function DeleteUnreferencedAssetsWithConfirmation
struct Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cleanup" },
		{ "Comment", "/**\n\x09 * This is the same as calling DeleteUnreferencedAssets and providing true for bShowConfirmation.\n\x09 * It is just exposed in this manner so we automatically get a button for calling this function on details panels of the\n\x09 * asset cache.\n\x09 *\n\x09 * WARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after deleting.\n\x09 */" },
		{ "DisplayName", "Delete Unreferenced Assets" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "This is the same as calling DeleteUnreferencedAssets and providing true for bShowConfirmation.\nIt is just exposed in this manner so we automatically get a button for calling this function on details panels of the\nasset cache.\n\nWARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after deleting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "DeleteUnreferencedAssetsWithConfirmation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execDeleteUnreferencedAssetsWithConfirmation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteUnreferencedAssetsWithConfirmation();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function DeleteUnreferencedAssetsWithConfirmation

// Begin Class UUsdAssetCache3 Function GetAllTrackedAssets
struct Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventGetAllTrackedAssets_Parms
	{
		TMap<FString,FSoftObjectPath> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns a copy of the internal mapping between hashes and asset paths\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns a copy of the internal mapping between hashes and asset paths" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetAllTrackedAssets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetAllTrackedAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::UsdAssetCache3_eventGetAllTrackedAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::UsdAssetCache3_eventGetAllTrackedAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetAllTrackedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FSoftObjectPath>*)Z_Param__Result=P_THIS->GetAllTrackedAssets();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetAllTrackedAssets

// Begin Class UUsdAssetCache3 Function GetCachedAsset
struct Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics
{
	struct UsdAssetCache3_eventGetCachedAsset_Parms
	{
		FString Hash;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the asset associated with a particular Hash, if any. Returns nullptr if there isn't any\n\x09 * associated path to this Hash, or if the associated path doesn't resolve to an asset.\n\x09 *\n\x09 * WARNING: As this may try loading a package from disk, this can only be called from the game thread!\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns the asset associated with a particular Hash, if any. Returns nullptr if there isn't any\nassociated path to this Hash, or if the associated path doesn't resolve to an asset.\n\nWARNING: As this may try loading a package from disk, this can only be called from the game thread!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetCachedAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetCachedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetCachedAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::UsdAssetCache3_eventGetCachedAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::UsdAssetCache3_eventGetCachedAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetCachedAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetCachedAsset(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetCachedAsset

// Begin Class UUsdAssetCache3 Function GetCachedAssetPath
struct Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventGetCachedAssetPath_Parms
	{
		FString Hash;
		FSoftObjectPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the internal FSoftObjectPath associated with Hash, without trying to load the asset.\n\x09 * If there is no asset associated with Hash, will return an invalid (empty) FSoftObjectPath.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns the internal FSoftObjectPath associated with Hash, without trying to load the asset.\nIf there is no asset associated with Hash, will return an invalid (empty) FSoftObjectPath." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetCachedAssetPath_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetCachedAssetPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetCachedAssetPath", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::UsdAssetCache3_eventGetCachedAssetPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::UsdAssetCache3_eventGetCachedAssetPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetCachedAssetPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetCachedAssetPath(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetCachedAssetPath

// Begin Class UUsdAssetCache3 Function GetHashForAsset
struct Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventGetHashForAsset_Parms
	{
		FSoftObjectPath AssetPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the hash associated with a particular asset, or the empty string if there isn't any.\n\x09 * Note: The asset cache keeps internal reverse maps, so this should be O(1)\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns the hash associated with a particular asset, or the empty string if there isn't any.\nNote: The asset cache keeps internal reverse maps, so this should be O(1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetHashForAsset_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetHashForAsset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetHashForAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::UsdAssetCache3_eventGetHashForAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::UsdAssetCache3_eventGetHashForAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetHashForAsset)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetHashForAsset(Z_Param_Out_AssetPath);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetHashForAsset

// Begin Class UUsdAssetCache3 Function GetNumAssets
struct Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics
{
	struct UsdAssetCache3_eventGetNumAssets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the total number of cached asset paths, whether these resolve to assets or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns the total number of cached asset paths, whether these resolve to assets or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetNumAssets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetNumAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::UsdAssetCache3_eventGetNumAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::UsdAssetCache3_eventGetNumAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetNumAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumAssets();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetNumAssets

// Begin Class UUsdAssetCache3 Function GetOrCreateCachedAsset
struct Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics
{
	struct UsdAssetCache3_eventGetOrCreateCachedAsset_Parms
	{
		FString Hash;
		UClass* Class;
		FString DesiredName;
		int32 DesiredFlags;
		bool bOutCreatedAsset;
		const UObject* Referencer;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the cached UObject of the provided Class for the provided Hash if one exists.\n\x09 * Otherwise, finds a new package for it on the cache's AssetDirectory and creates the asset\n\x09 * via a NewObject<Class> call, using with a sanitized version of the desired name and flags.\n\x09 *\n\x09 * WARNING: As this may try loading a package from disk or call NewObject, this can only be called from the game thread!\n\x09 *\n\x09 * @param Hash - The string key to check with\n\x09 * @param Class - The class of the object that we want to retrieve or create from the asset cache\n\x09 * @param DesiredName - The name we want the created object to have (the actual name may have additional suffixes)\n\x09 * @param DesiredFlags - The flags we want the created object to have (the actual applied flags may differ depending on context)\n\x09 * @param bOutCreatedAsset - Set to true if we created the asset that was return, but false if we returned an existing asset\n\x09 * @param Referencer - The asset will not be deleted or untracked until this referencer is removed (via any of the RemoveAssetReferencer member functions)\n\x09 * @return The asset that was returned or created\n\x09 */" },
		{ "CPP_Default_Referencer", "None" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns the cached UObject of the provided Class for the provided Hash if one exists.\nOtherwise, finds a new package for it on the cache's AssetDirectory and creates the asset\nvia a NewObject<Class> call, using with a sanitized version of the desired name and flags.\n\nWARNING: As this may try loading a package from disk or call NewObject, this can only be called from the game thread!\n\n@param Hash - The string key to check with\n@param Class - The class of the object that we want to retrieve or create from the asset cache\n@param DesiredName - The name we want the created object to have (the actual name may have additional suffixes)\n@param DesiredFlags - The flags we want the created object to have (the actual applied flags may differ depending on context)\n@param bOutCreatedAsset - Set to true if we created the asset that was return, but false if we returned an existing asset\n@param Referencer - The asset will not be deleted or untracked until this referencer is removed (via any of the RemoveAssetReferencer member functions)\n@return The asset that was returned or created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredFlags;
	static void NewProp_bOutCreatedAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutCreatedAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_DesiredName = { "DesiredName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, DesiredName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredName_MetaData), NewProp_DesiredName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_DesiredFlags = { "DesiredFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, DesiredFlags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_bOutCreatedAsset_SetBit(void* Obj)
{
	((UsdAssetCache3_eventGetOrCreateCachedAsset_Parms*)Obj)->bOutCreatedAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_bOutCreatedAsset = { "bOutCreatedAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms), &Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_bOutCreatedAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventGetOrCreateCachedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_DesiredName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_DesiredFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_bOutCreatedAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "GetOrCreateCachedAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::UsdAssetCache3_eventGetOrCreateCachedAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::UsdAssetCache3_eventGetOrCreateCachedAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execGetOrCreateCachedAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_DesiredName);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredFlags);
	P_GET_UBOOL_REF(Z_Param_Out_bOutCreatedAsset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetOrCreateCachedAsset(Z_Param_Hash,Z_Param_Class,Z_Param_DesiredName,Z_Param_DesiredFlags,Z_Param_Out_bOutCreatedAsset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function GetOrCreateCachedAsset

// Begin Class UUsdAssetCache3 Function IsAssetDeletable
struct Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics
{
	struct UsdAssetCache3_eventIsAssetDeletable_Parms
	{
		const UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/** Returns whether a particular asset is currently marked as deletable or not */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns whether a particular asset is currently marked as deletable or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventIsAssetDeletable_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventIsAssetDeletable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventIsAssetDeletable_Parms), &Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "IsAssetDeletable", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::UsdAssetCache3_eventIsAssetDeletable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::UsdAssetCache3_eventIsAssetDeletable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execIsAssetDeletable)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetDeletable(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function IsAssetDeletable

// Begin Class UUsdAssetCache3 Function IsAssetTrackedByCache
struct Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventIsAssetTrackedByCache_Parms
	{
		FSoftObjectPath AssetPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns true if this asset is currently tracked by the asset cache's main hash to asset maps\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Returns true if this asset is currently tracked by the asset cache's main hash to asset maps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventIsAssetTrackedByCache_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventIsAssetTrackedByCache_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventIsAssetTrackedByCache_Parms), &Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "IsAssetTrackedByCache", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::UsdAssetCache3_eventIsAssetTrackedByCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::UsdAssetCache3_eventIsAssetTrackedByCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execIsAssetTrackedByCache)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetTrackedByCache(Z_Param_Out_AssetPath);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function IsAssetTrackedByCache

// Begin Class UUsdAssetCache3 Function LoadAndGetAllTrackedAssets
struct Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics
{
	struct UsdAssetCache3_eventLoadAndGetAllTrackedAssets_Parms
	{
		TMap<FString,UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * The same as GetAllTrackedAssets, except that it will automatically try loading all the asset paths before\n\x09 * returning, which should be convenient for Python or Blueprint callers.\n\x09 *\n\x09 * WARNING: As this may try loading a package from disk, this can only be called from the game thread!\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "The same as GetAllTrackedAssets, except that it will automatically try loading all the asset paths before\nreturning, which should be convenient for Python or Blueprint callers.\n\nWARNING: As this may try loading a package from disk, this can only be called from the game thread!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventLoadAndGetAllTrackedAssets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "LoadAndGetAllTrackedAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::UsdAssetCache3_eventLoadAndGetAllTrackedAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::UsdAssetCache3_eventLoadAndGetAllTrackedAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execLoadAndGetAllTrackedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,UObject*>*)Z_Param__Result=P_THIS->LoadAndGetAllTrackedAssets();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function LoadAndGetAllTrackedAssets

// Begin Class UUsdAssetCache3 Function RemoveAllAssetReferencers
struct Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics
{
	struct UsdAssetCache3_eventRemoveAllAssetReferencers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Removes all UObject referencer from all tracked assets, returning true if anything was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Removes all UObject referencer from all tracked assets, returning true if anything was removed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventRemoveAllAssetReferencers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventRemoveAllAssetReferencers_Parms), &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "RemoveAllAssetReferencers", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::UsdAssetCache3_eventRemoveAllAssetReferencers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::UsdAssetCache3_eventRemoveAllAssetReferencers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execRemoveAllAssetReferencers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllAssetReferencers();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function RemoveAllAssetReferencers

// Begin Class UUsdAssetCache3 Function RemoveAllReferencerAssets
struct Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics
{
	struct UsdAssetCache3_eventRemoveAllReferencerAssets_Parms
	{
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Removes a particular UObject referencer from all tracked assets, returning true if anything was removed.\n\x09 * Will do nothing in case Referencer is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Removes a particular UObject referencer from all tracked assets, returning true if anything was removed.\nWill do nothing in case Referencer is invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventRemoveAllReferencerAssets_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventRemoveAllReferencerAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventRemoveAllReferencerAssets_Parms), &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "RemoveAllReferencerAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::UsdAssetCache3_eventRemoveAllReferencerAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::UsdAssetCache3_eventRemoveAllReferencerAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execRemoveAllReferencerAssets)
{
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllReferencerAssets(Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function RemoveAllReferencerAssets

// Begin Class UUsdAssetCache3 Function RemoveAllReferencersForAsset
struct Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics
{
	struct UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms
	{
		const UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Removes all UObject referencers from a particular asset, returning true if anything was removed.\n\x09 * Will do nothing in case Asset is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Removes all UObject referencers from a particular asset, returning true if anything was removed.\nWill do nothing in case Asset is invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms), &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "RemoveAllReferencersForAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::UsdAssetCache3_eventRemoveAllReferencersForAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execRemoveAllReferencersForAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllReferencersForAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function RemoveAllReferencersForAsset

// Begin Class UUsdAssetCache3 Function RemoveAssetReferencer
struct Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics
{
	struct UsdAssetCache3_eventRemoveAssetReferencer_Parms
	{
		const UObject* Asset;
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Removes an UObject referencer from a particular asset, returning true if anything was removed.\n\x09 * Will do nothing in case Asset or Referencer are invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Removes an UObject referencer from a particular asset, returning true if anything was removed.\nWill do nothing in case Asset or Referencer are invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventRemoveAssetReferencer_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventRemoveAssetReferencer_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache3_eventRemoveAssetReferencer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventRemoveAssetReferencer_Parms), &Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "RemoveAssetReferencer", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::UsdAssetCache3_eventRemoveAssetReferencer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::UsdAssetCache3_eventRemoveAssetReferencer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execRemoveAssetReferencer)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAssetReferencer(Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function RemoveAssetReferencer

// Begin Class UUsdAssetCache3 Function RescanAssetDirectory
struct Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Storage" },
		{ "Comment", "/**\n\x09 * Checks the current AssetDirectory for any new assets that were generated from USD, and automatically caches\n\x09 * them if possible.\n\x09 *\n\x09 * Note: This will never overwrite any existing information on the asset cache (i.e. if the newly found asset\n\x09 * is associated with a hash that is already in use, it will be ignored)\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Checks the current AssetDirectory for any new assets that were generated from USD, and automatically caches\nthem if possible.\n\nNote: This will never overwrite any existing information on the asset cache (i.e. if the newly found asset\nis associated with a hash that is already in use, it will be ignored)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "RescanAssetDirectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execRescanAssetDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RescanAssetDirectory();
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function RescanAssetDirectory

// Begin Class UUsdAssetCache3 Function SetAssetDeletable
struct Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics
{
	struct UsdAssetCache3_eventSetAssetDeletable_Parms
	{
		const UObject* Asset;
		bool bIsDeletable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Sets a particular asset as deletable or not.\n\x09 * Assets not flagged as deletable will never be deleted by the asset cache when DeleteUnreferencedAssets is called.\n\x09 * Assets the cache creates itself via GetOrCreateCachedAsset or GetOrCreateCustomCachedAsset are automatically\n\x09 * set as deletable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Sets a particular asset as deletable or not.\nAssets not flagged as deletable will never be deleted by the asset cache when DeleteUnreferencedAssets is called.\nAssets the cache creates itself via GetOrCreateCachedAsset or GetOrCreateCustomCachedAsset are automatically\nset as deletable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_bIsDeletable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeletable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventSetAssetDeletable_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_bIsDeletable_SetBit(void* Obj)
{
	((UsdAssetCache3_eventSetAssetDeletable_Parms*)Obj)->bIsDeletable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_bIsDeletable = { "bIsDeletable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache3_eventSetAssetDeletable_Parms), &Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_bIsDeletable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::NewProp_bIsDeletable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "SetAssetDeletable", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::UsdAssetCache3_eventSetAssetDeletable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::UsdAssetCache3_eventSetAssetDeletable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execSetAssetDeletable)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_UBOOL(Z_Param_bIsDeletable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAssetDeletable(Z_Param_Asset,Z_Param_bIsDeletable);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function SetAssetDeletable

// Begin Class UUsdAssetCache3 Function StopTrackingAsset
struct Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct UsdAssetCache3_eventStopTrackingAsset_Parms
	{
		FString Hash;
		FSoftObjectPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Removes all info about the asset associated with Hash from this cache, if there is any.\n\x09 * Note: This will not delete the asset however: Only tracked, *unreferenced* assets can be deleted by the asset cache,\n\x09 * and only when manually created by it or if flagged with SetAssetDeletable\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Removes all info about the asset associated with Hash from this cache, if there is any.\nNote: This will not delete the asset however: Only tracked, *unreferenced* assets can be deleted by the asset cache,\nand only when manually created by it or if flagged with SetAssetDeletable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventStopTrackingAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache3_eventStopTrackingAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache3, nullptr, "StopTrackingAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::UsdAssetCache3_eventStopTrackingAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::UsdAssetCache3_eventStopTrackingAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache3::execStopTrackingAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoftObjectPath*)Z_Param__Result=P_THIS->StopTrackingAsset(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache3 Function StopTrackingAsset

// Begin Class UUsdAssetCache3
void UUsdAssetCache3::StaticRegisterNativesUUsdAssetCache3()
{
	UClass* Class = UUsdAssetCache3::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAssetReferencer", &UUsdAssetCache3::execAddAssetReferencer },
		{ "CacheAsset", &UUsdAssetCache3::execCacheAsset },
		{ "DeleteUnreferencedAssets", &UUsdAssetCache3::execDeleteUnreferencedAssets },
		{ "DeleteUnreferencedAssetsWithConfirmation", &UUsdAssetCache3::execDeleteUnreferencedAssetsWithConfirmation },
		{ "GetAllTrackedAssets", &UUsdAssetCache3::execGetAllTrackedAssets },
		{ "GetCachedAsset", &UUsdAssetCache3::execGetCachedAsset },
		{ "GetCachedAssetPath", &UUsdAssetCache3::execGetCachedAssetPath },
		{ "GetHashForAsset", &UUsdAssetCache3::execGetHashForAsset },
		{ "GetNumAssets", &UUsdAssetCache3::execGetNumAssets },
		{ "GetOrCreateCachedAsset", &UUsdAssetCache3::execGetOrCreateCachedAsset },
		{ "IsAssetDeletable", &UUsdAssetCache3::execIsAssetDeletable },
		{ "IsAssetTrackedByCache", &UUsdAssetCache3::execIsAssetTrackedByCache },
		{ "LoadAndGetAllTrackedAssets", &UUsdAssetCache3::execLoadAndGetAllTrackedAssets },
		{ "RemoveAllAssetReferencers", &UUsdAssetCache3::execRemoveAllAssetReferencers },
		{ "RemoveAllReferencerAssets", &UUsdAssetCache3::execRemoveAllReferencerAssets },
		{ "RemoveAllReferencersForAsset", &UUsdAssetCache3::execRemoveAllReferencersForAsset },
		{ "RemoveAssetReferencer", &UUsdAssetCache3::execRemoveAssetReferencer },
		{ "RescanAssetDirectory", &UUsdAssetCache3::execRescanAssetDirectory },
		{ "SetAssetDeletable", &UUsdAssetCache3::execSetAssetDeletable },
		{ "StopTrackingAsset", &UUsdAssetCache3::execStopTrackingAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetCache3);
UClass* Z_Construct_UClass_UUsdAssetCache3_NoRegister()
{
	return UUsdAssetCache3::StaticClass();
}
struct Z_Construct_UClass_UUsdAssetCache3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is an asset that can be created via the Content Browser and assigned to AUsdStageActors.\n *\n * Its main purpose is to track generated assets based on the hash of the source prim data: Whenever the AUsdStageActor needs\n * to generate e.g. a MaterialInstance, it will first hash the Material prim, and check whether its UUsdAssetCache3 already\n * has an asset of that class for the resulting hash.\n *\n * The cache can then be shared by multiple AUsdStageActors to prevent recreating UObjects from identical, already translated prim data.\n *\n * A \"Default Asset Cache\" can be set on the project settings, and will be automatically used for any AUsdStageActor that hasn't\n * had an asset cache manually set beforehand.\n */" },
		{ "DisplayName", "USD Asset Cache" },
		{ "IncludePath", "USDAssetCache3.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ScriptName", "UsdAssetCache" },
		{ "ToolTip", "This class is an asset that can be created via the Content Browser and assigned to AUsdStageActors.\n\nIts main purpose is to track generated assets based on the hash of the source prim data: Whenever the AUsdStageActor needs\nto generate e.g. a MaterialInstance, it will first hash the Material prim, and check whether its UUsdAssetCache3 already\nhas an asset of that class for the resulting hash.\n\nThe cache can then be shared by multiple AUsdStageActors to prevent recreating UObjects from identical, already translated prim data.\n\nA \"Default Asset Cache\" can be set on the project settings, and will be automatically used for any AUsdStageActor that hasn't\nhad an asset cache manually set beforehand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetDirectory_MetaData[] = {
		{ "Category", "Storage" },
		{ "Comment", "/**\n\x09 * Content directory where the asset cache will place newly created assets.\n\x09 *\n\x09 * Changing this directory to a new location will automatically try to cache any existing assets on that location, if they\n\x09 * were generated from USD.\n\x09 */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Content directory where the asset cache will place newly created assets.\n\nChanging this directory to a new location will automatically try to cache any existing assets on that location, if they\nwere generated from USD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyHandleAssetsWithinAssetDirectory_MetaData[] = {
		{ "Category", "Storage" },
		{ "Comment", "/**\n\x09 * When true, it means the asset cache will only ever return assets that are currently inside of the AssetDirectory folder.\n\x09 * Move the assets out of the folder or change the folder and the asset cache will act as if these assets don't exist, potentially even losing\n\x09 * track of them.\n\x09 *\n\x09 * When false, it means the asset cache will fully track and use its provided assets wherever they are in the content browser.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "When true, it means the asset cache will only ever return assets that are currently inside of the AssetDirectory folder.\nMove the assets out of the folder or change the folder and the asset cache will act as if these assets don't exist, potentially even losing\ntrack of them.\n\nWhen false, it means the asset cache will fully track and use its provided assets wherever they are in the content browser." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashToAssetPaths_MetaData[] = {
		{ "Category", "Storage" },
		{ "Comment", "/**\n\x09 * This is the main internal property that maps hashes to asset paths.\n\x09 *\n\x09 * Add entries to this property (or modify existing entries) and they will be returned by the asset cache whenever that hash is queried.\n\x09 *\n\x09 * WARNING: Asset modifications are not currently tracked! Change a static mesh's vertex color from red to green, and it will show the\n\x09 * green cube when opening a stage with this asset cache, even if you open stages where the prim contains red as its vertex color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "This is the main internal property that maps hashes to asset paths.\n\nAdd entries to this property (or modify existing entries) and they will be returned by the asset cache whenever that hash is queried.\n\nWARNING: Asset modifications are not currently tracked! Change a static mesh's vertex color from red to green, and it will show the\ngreen cube when opening a stage with this asset cache, even if you open stages where the prim contains red as its vertex color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanUpUnreferencedAssets_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/**\n\x09 * If this is true, every time a UsdStageActor using this asset cache closes a stage or swaps asset caches it will attempt to call\n\x09 * DeleteUnreferencedAssets, potentially dropping *any* unreferenced asset, due to this operation or previous ones.\n\x09 *\n\x09 * Enable this if you want your AssetDirectory folder to be automatically cleaned up as stages close, and don't plan on keeping\n\x09 * other external references to those assets.\n\x09 *\n\x09 * Note: Some asset types may have complicated setups, and may end up with references from other properties, actors and components for\n\x09 * some time (e.g. due to a component in a transient package or undo/redo buffer). This means any automatically cleanup may not\n\x09 * manage to clean up *all* untracked assets. Subsequent cleanups should eventually collect all assets, however.\n\x09 *\n\x09 * WARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after any cleanup operation!\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "If this is true, every time a UsdStageActor using this asset cache closes a stage or swaps asset caches it will attempt to call\nDeleteUnreferencedAssets, potentially dropping *any* unreferenced asset, due to this operation or previous ones.\n\nEnable this if you want your AssetDirectory folder to be automatically cleaned up as stages close, and don't plan on keeping\nother external references to those assets.\n\nNote: Some asset types may have complicated setups, and may end up with references from other properties, actors and components for\nsome time (e.g. due to a component in a transient package or undo/redo buffer). This means any automatically cleanup may not\nmanage to clean up *all* untracked assets. Subsequent cleanups should eventually collect all assets, however.\n\nWARNING: This will clear the undo buffer (i.e. transaction history) and run garbage collection after any cleanup operation!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathToHashes_MetaData[] = {
		{ "Comment", "// Reverse map, to speed up queries like GetHashForAsset and IsAssetTrackedByCache. Should always match HashToAssetPaths\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "Reverse map, to speed up queries like GetHashForAsset and IsAssetTrackedByCache. Should always match HashToAssetPaths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientObjectStorage_MetaData[] = {
		{ "Comment", "// If we're a transient asset cache, our assets will be placed on the transient package and there wouldn't necessarily be\n// anything holding a strong reference to them. This member is used for that. This is useful during direct import for example,\n// where a rogue GC call could otherwise cause our transient assets to be collected, if it happened at a bad time\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache3.h" },
		{ "ToolTip", "If we're a transient asset cache, our assets will be placed on the transient package and there wouldn't necessarily be\nanything holding a strong reference to them. This member is used for that. This is useful during direct import for example,\nwhere a rogue GC call could otherwise cause our transient assets to be collected, if it happened at a bad time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDirectory;
	static void NewProp_bOnlyHandleAssetsWithinAssetDirectory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyHandleAssetsWithinAssetDirectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HashToAssetPaths_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HashToAssetPaths_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HashToAssetPaths;
	static void NewProp_bCleanUpUnreferencedAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanUpUnreferencedAssets;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPathToHashes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPathToHashes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetPathToHashes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientObjectStorage_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransientObjectStorage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TransientObjectStorage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdAssetCache3_AddAssetReferencer, "AddAssetReferencer" }, // 3535511032
		{ &Z_Construct_UFunction_UUsdAssetCache3_CacheAsset, "CacheAsset" }, // 1990914335
		{ &Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssets, "DeleteUnreferencedAssets" }, // 1823454765
		{ &Z_Construct_UFunction_UUsdAssetCache3_DeleteUnreferencedAssetsWithConfirmation, "DeleteUnreferencedAssetsWithConfirmation" }, // 2254934233
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetAllTrackedAssets, "GetAllTrackedAssets" }, // 1326001717
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetCachedAsset, "GetCachedAsset" }, // 347519177
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetCachedAssetPath, "GetCachedAssetPath" }, // 712787548
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetHashForAsset, "GetHashForAsset" }, // 3261423970
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetNumAssets, "GetNumAssets" }, // 2942825809
		{ &Z_Construct_UFunction_UUsdAssetCache3_GetOrCreateCachedAsset, "GetOrCreateCachedAsset" }, // 335809514
		{ &Z_Construct_UFunction_UUsdAssetCache3_IsAssetDeletable, "IsAssetDeletable" }, // 943990825
		{ &Z_Construct_UFunction_UUsdAssetCache3_IsAssetTrackedByCache, "IsAssetTrackedByCache" }, // 1083676133
		{ &Z_Construct_UFunction_UUsdAssetCache3_LoadAndGetAllTrackedAssets, "LoadAndGetAllTrackedAssets" }, // 2514807876
		{ &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllAssetReferencers, "RemoveAllAssetReferencers" }, // 3018460564
		{ &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencerAssets, "RemoveAllReferencerAssets" }, // 2854565268
		{ &Z_Construct_UFunction_UUsdAssetCache3_RemoveAllReferencersForAsset, "RemoveAllReferencersForAsset" }, // 3879644053
		{ &Z_Construct_UFunction_UUsdAssetCache3_RemoveAssetReferencer, "RemoveAssetReferencer" }, // 4233802157
		{ &Z_Construct_UFunction_UUsdAssetCache3_RescanAssetDirectory, "RescanAssetDirectory" }, // 2678517052
		{ &Z_Construct_UFunction_UUsdAssetCache3_SetAssetDeletable, "SetAssetDeletable" }, // 1422916379
		{ &Z_Construct_UFunction_UUsdAssetCache3_StopTrackingAsset, "StopTrackingAsset" }, // 2269755566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetCache3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetDirectory = { "AssetDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache3, AssetDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetDirectory_MetaData), NewProp_AssetDirectory_MetaData) };
void Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bOnlyHandleAssetsWithinAssetDirectory_SetBit(void* Obj)
{
	((UUsdAssetCache3*)Obj)->bOnlyHandleAssetsWithinAssetDirectory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bOnlyHandleAssetsWithinAssetDirectory = { "bOnlyHandleAssetsWithinAssetDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdAssetCache3), &Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bOnlyHandleAssetsWithinAssetDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyHandleAssetsWithinAssetDirectory_MetaData), NewProp_bOnlyHandleAssetsWithinAssetDirectory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths_ValueProp = { "HashToAssetPaths", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths_Key_KeyProp = { "HashToAssetPaths_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths = { "HashToAssetPaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache3, HashToAssetPaths), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashToAssetPaths_MetaData), NewProp_HashToAssetPaths_MetaData) };
void Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bCleanUpUnreferencedAssets_SetBit(void* Obj)
{
	((UUsdAssetCache3*)Obj)->bCleanUpUnreferencedAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bCleanUpUnreferencedAssets = { "bCleanUpUnreferencedAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUsdAssetCache3), &Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bCleanUpUnreferencedAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanUpUnreferencedAssets_MetaData), NewProp_bCleanUpUnreferencedAssets_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes_ValueProp = { "AssetPathToHashes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes_Key_KeyProp = { "AssetPathToHashes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes = { "AssetPathToHashes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache3, AssetPathToHashes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathToHashes_MetaData), NewProp_AssetPathToHashes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage_ValueProp = { "TransientObjectStorage", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage_Key_KeyProp = { "TransientObjectStorage_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage = { "TransientObjectStorage", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache3, TransientObjectStorage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientObjectStorage_MetaData), NewProp_TransientObjectStorage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetCache3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bOnlyHandleAssetsWithinAssetDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_HashToAssetPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_bCleanUpUnreferencedAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_AssetPathToHashes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache3_Statics::NewProp_TransientObjectStorage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache3_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdAssetCache3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetCache3_Statics::ClassParams = {
	&UUsdAssetCache3::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUsdAssetCache3_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache3_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache3_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAssetCache3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdAssetCache3()
{
	if (!Z_Registration_Info_UClass_UUsdAssetCache3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetCache3.OuterSingleton, Z_Construct_UClass_UUsdAssetCache3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdAssetCache3.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdAssetCache3>()
{
	return UUsdAssetCache3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetCache3);
UUsdAssetCache3::~UUsdAssetCache3() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache3)
// End Class UUsdAssetCache3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetCache3, UUsdAssetCache3::StaticClass, TEXT("UUsdAssetCache3"), &Z_Registration_Info_UClass_UUsdAssetCache3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetCache3), 944415240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_3658294880(TEXT("/Script/USDClasses"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
