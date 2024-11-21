// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDAssetCache2.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetCache2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache2();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache2_NoRegister();
// End Cross Module References

// Begin Class UUsdAssetCache2 Function AddAssetReference
struct Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics
{
	struct UsdAssetCache2_eventAddAssetReference_Parms
	{
		const UObject* Asset;
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Adds a new UObject referencer to a particular asset, returning true if the operation succeeded.\n\x09 *\n\x09 * Assets will not be evicted or removed from the cache while the referencer is registered.\n\x09 * Note that internally the cache keeps FObjectKey structs constructed from the referencers, instead of direct\n\x09 * pointers to them.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Adds a new UObject referencer to a particular asset, returning true if the operation succeeded.\n\nAssets will not be evicted or removed from the cache while the referencer is registered.\nNote that internally the cache keeps FObjectKey structs constructed from the referencers, instead of direct\npointers to them." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventAddAssetReference_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventAddAssetReference_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventAddAssetReference_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventAddAssetReference_Parms), &Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "AddAssetReference", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::UsdAssetCache2_eventAddAssetReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::UsdAssetCache2_eventAddAssetReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execAddAssetReference)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAssetReference(Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function AddAssetReference

// Begin Class UUsdAssetCache2 Function CacheAsset
struct Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics
{
	struct UsdAssetCache2_eventCacheAsset_Parms
	{
		FString Hash;
		UObject* Asset;
		const UObject* Referencer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/** Adds an asset to the cache attached to a particular hash, and optionally registering a referencer */" },
		{ "CPP_Default_Referencer", "None" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Adds an asset to the cache attached to a particular hash, and optionally registering a referencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Referencer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Referencer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventCacheAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventCacheAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventCacheAsset_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::NewProp_Referencer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "CacheAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::UsdAssetCache2_eventCacheAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::UsdAssetCache2_eventCacheAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_CacheAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_CacheAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execCacheAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheAsset(Z_Param_Hash,Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function CacheAsset

// Begin Class UUsdAssetCache2 Function CanRemoveAsset
struct Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics
{
	struct UsdAssetCache2_eventCanRemoveAsset_Parms
	{
		FString Hash;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Returns true if the asset with the given hash can be removed from the cache. It will return false in case the\n\x09 * asset is still being used, either by another consumer asset or directly by some referencer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns true if the asset with the given hash can be removed from the cache. It will return false in case the\nasset is still being used, either by another consumer asset or directly by some referencer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventCanRemoveAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventCanRemoveAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventCanRemoveAsset_Parms), &Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "CanRemoveAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::UsdAssetCache2_eventCanRemoveAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::UsdAssetCache2_eventCanRemoveAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execCanRemoveAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRemoveAsset(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function CanRemoveAsset

// Begin Class UUsdAssetCache2 Function GetAllAssetHashes
struct Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics
{
	struct UsdAssetCache2_eventGetAllAssetHashes_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns all asset hashes tracked by the asset cache, for all storage types. This includes unloaded\n\x09 * persistent assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns all asset hashes tracked by the asset cache, for all storage types. This includes unloaded\npersistent assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetAllAssetHashes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetAllAssetHashes", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::UsdAssetCache2_eventGetAllAssetHashes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::UsdAssetCache2_eventGetAllAssetHashes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetAllAssetHashes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllAssetHashes();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetAllAssetHashes

// Begin Class UUsdAssetCache2 Function GetAllCachedAssetPaths
struct Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics
{
	struct UsdAssetCache2_eventGetAllCachedAssetPaths_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns all asset paths tracked by the asset cache, for all storage types. (e.g.\n\x09 * \"/Game/MyTextures/RedBrick.RedBrick\"). This includes unloaded persistent assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns all asset paths tracked by the asset cache, for all storage types. (e.g.\n\"/Game/MyTextures/RedBrick.RedBrick\"). This includes unloaded persistent assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetAllCachedAssetPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetAllCachedAssetPaths", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::UsdAssetCache2_eventGetAllCachedAssetPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::UsdAssetCache2_eventGetAllCachedAssetPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetAllCachedAssetPaths)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllCachedAssetPaths();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetAllCachedAssetPaths

// Begin Class UUsdAssetCache2 Function GetAllLoadedAssets
struct Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics
{
	struct UsdAssetCache2_eventGetAllLoadedAssets_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns all assets that are currently loaded in the asset cache.\n\x09 * This will not include persistent assets that haven't been loaded yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns all assets that are currently loaded in the asset cache.\nThis will not include persistent assets that haven't been loaded yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetAllLoadedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetAllLoadedAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::UsdAssetCache2_eventGetAllLoadedAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::UsdAssetCache2_eventGetAllLoadedAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetAllLoadedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetAllLoadedAssets();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetAllLoadedAssets

// Begin Class UUsdAssetCache2 Function GetCachedAsset
struct Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics
{
	struct UsdAssetCache2_eventGetCachedAsset_Parms
	{
		FString Hash;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Returns an asset associated with a particular `Hash`.\n\x09 * If the asset is persistent, unloaded and the \"USD.OnDemandCachedAssetLoading\" cvar is true, this may cause the\n\x09 * asset to be read from the asset cache's file on disk.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns an asset associated with a particular `Hash`.\nIf the asset is persistent, unloaded and the \"USD.OnDemandCachedAssetLoading\" cvar is true, this may cause the\nasset to be read from the asset cache's file on disk." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetCachedAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetCachedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetCachedAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::UsdAssetCache2_eventGetCachedAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::UsdAssetCache2_eventGetCachedAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetCachedAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetCachedAsset(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetCachedAsset

// Begin Class UUsdAssetCache2 Function GetHashForAsset
struct Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics
{
	struct UsdAssetCache2_eventGetHashForAsset_Parms
	{
		const UObject* Asset;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the hash associated with an asset, in case we own it. Returns the empty string otherwise.\n\x09 * Note: This has O(1) time complexity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns the hash associated with an asset, in case we own it. Returns the empty string otherwise.\nNote: This has O(1) time complexity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetHashForAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetHashForAsset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetHashForAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::UsdAssetCache2_eventGetHashForAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::UsdAssetCache2_eventGetHashForAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetHashForAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetHashForAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetHashForAsset

// Begin Class UUsdAssetCache2 Function GetNumAssets
struct Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics
{
	struct UsdAssetCache2_eventGetNumAssets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns how many assets are tracked by the asset cache in total (summing up persistent, referenced and\n\x09 * unreferenced storage)\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns how many assets are tracked by the asset cache in total (summing up persistent, referenced and\nunreferenced storage)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventGetNumAssets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "GetNumAssets", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::UsdAssetCache2_eventGetNumAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::UsdAssetCache2_eventGetNumAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execGetNumAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumAssets();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function GetNumAssets

// Begin Class UUsdAssetCache2 Function IsAssetOwnedByCache
struct Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics
{
	struct UsdAssetCache2_eventIsAssetOwnedByCache_Parms
	{
		FString AssetPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns true in case the asset at `AssetPath` is tracked by the cache in any way (persistent asset,\n\x09 * unreferenced or referenced). An example AssetPath would be \"/Game/MyTextures/RedBrick.RedBrick\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Returns true in case the asset at `AssetPath` is tracked by the cache in any way (persistent asset,\nunreferenced or referenced). An example AssetPath would be \"/Game/MyTextures/RedBrick.RedBrick\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventIsAssetOwnedByCache_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventIsAssetOwnedByCache_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventIsAssetOwnedByCache_Parms), &Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "IsAssetOwnedByCache", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::UsdAssetCache2_eventIsAssetOwnedByCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::UsdAssetCache2_eventIsAssetOwnedByCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execIsAssetOwnedByCache)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetOwnedByCache(Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function IsAssetOwnedByCache

// Begin Class UUsdAssetCache2 Function RefreshStorage
struct Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Updates which assets belong to each storage type. You must call this in case you perform direct operations on\n\x09 * the asset cache, after those operations are fully complete.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Updates which assets belong to each storage type. You must call this in case you perform direct operations on\nthe asset cache, after those operations are fully complete." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "RefreshStorage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execRefreshStorage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshStorage();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function RefreshStorage

// Begin Class UUsdAssetCache2 Function RemoveAllAssetReferences
struct Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics
{
	struct UsdAssetCache2_eventRemoveAllAssetReferences_Parms
	{
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Removes the particular referencer to all assets tracked by the cache, if it was a referencer to any of them.\n\x09 * Returns true if at least one asset referencer count was altered by this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Removes the particular referencer to all assets tracked by the cache, if it was a referencer to any of them.\nReturns true if at least one asset referencer count was altered by this." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventRemoveAllAssetReferences_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventRemoveAllAssetReferences_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventRemoveAllAssetReferences_Parms), &Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "RemoveAllAssetReferences", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::UsdAssetCache2_eventRemoveAllAssetReferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::UsdAssetCache2_eventRemoveAllAssetReferences_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execRemoveAllAssetReferences)
{
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllAssetReferences(Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function RemoveAllAssetReferences

// Begin Class UUsdAssetCache2 Function RemoveAsset
struct Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics
{
	struct UsdAssetCache2_eventRemoveAsset_Parms
	{
		FString Hash;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * If an asset is associated with `Hash`, it will be returned and the asset cache will stop tracking this asset\n\x09 * entirely. Returns nullptr otherwise. See CanRemoveAsset.\n\x09 *\n\x09 * WARNING: The asset will still be outer'd to the asset cache, however. The caller is in charge of properly\n\x09 * placing the asset at a new Outer object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "If an asset is associated with `Hash`, it will be returned and the asset cache will stop tracking this asset\nentirely. Returns nullptr otherwise. See CanRemoveAsset.\n\nWARNING: The asset will still be outer'd to the asset cache, however. The caller is in charge of properly\nplacing the asset at a new Outer object." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventRemoveAsset_Parms, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventRemoveAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "RemoveAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::UsdAssetCache2_eventRemoveAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::UsdAssetCache2_eventRemoveAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execRemoveAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Hash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->RemoveAsset(Z_Param_Hash);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function RemoveAsset

// Begin Class UUsdAssetCache2 Function RemoveAssetReference
struct Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics
{
	struct UsdAssetCache2_eventRemoveAssetReference_Parms
	{
		const UObject* Asset;
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Removes an UObject referencer from a particular asset, returning true if the operation succeeded.\n\x09 * If no specific Referencer is provided, all referencers to Asset will be removed.\n\x09 */" },
		{ "CPP_Default_Referencer", "None" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Removes an UObject referencer from a particular asset, returning true if the operation succeeded.\nIf no specific Referencer is provided, all referencers to Asset will be removed." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventRemoveAssetReference_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventRemoveAssetReference_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventRemoveAssetReference_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventRemoveAssetReference_Parms), &Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "RemoveAssetReference", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::UsdAssetCache2_eventRemoveAssetReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::UsdAssetCache2_eventRemoveAssetReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execRemoveAssetReference)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAssetReference(Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function RemoveAssetReference

// Begin Class UUsdAssetCache2 Function Reset
struct Z_Construct_UFunction_UUsdAssetCache2_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Settings" },
		{ "Comment", "/** Discards all tracked assets across all storage types */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Discards all tracked assets across all storage types" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUsdAssetCache2_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function Reset

// Begin Class UUsdAssetCache2 Function TouchAsset
struct Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics
{
	struct UsdAssetCache2_eventTouchAsset_Parms
	{
		const UObject* Asset;
		const UObject* Referencer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Marks the provided asset as being used at this point, optionally adding a specific referencer.\n\x09 * This is useful because the asset cache will always prioritize retaining the most recently used assets\n\x09 */" },
		{ "CPP_Default_Referencer", "None" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Marks the provided asset as being used at this point, optionally adding a specific referencer.\nThis is useful because the asset cache will always prioritize retaining the most recently used assets" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventTouchAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_Referencer = { "Referencer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdAssetCache2_eventTouchAsset_Parms, Referencer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Referencer_MetaData), NewProp_Referencer_MetaData) };
void Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UsdAssetCache2_eventTouchAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UsdAssetCache2_eventTouchAsset_Parms), &Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_Referencer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdAssetCache2, nullptr, "TouchAsset", nullptr, nullptr, Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::UsdAssetCache2_eventTouchAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::UsdAssetCache2_eventTouchAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdAssetCache2_TouchAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdAssetCache2_TouchAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdAssetCache2::execTouchAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_OBJECT(UObject,Z_Param_Referencer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TouchAsset(Z_Param_Asset,Z_Param_Referencer);
	P_NATIVE_END;
}
// End Class UUsdAssetCache2 Function TouchAsset

// Begin Class UUsdAssetCache2
void UUsdAssetCache2::StaticRegisterNativesUUsdAssetCache2()
{
	UClass* Class = UUsdAssetCache2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAssetReference", &UUsdAssetCache2::execAddAssetReference },
		{ "CacheAsset", &UUsdAssetCache2::execCacheAsset },
		{ "CanRemoveAsset", &UUsdAssetCache2::execCanRemoveAsset },
		{ "GetAllAssetHashes", &UUsdAssetCache2::execGetAllAssetHashes },
		{ "GetAllCachedAssetPaths", &UUsdAssetCache2::execGetAllCachedAssetPaths },
		{ "GetAllLoadedAssets", &UUsdAssetCache2::execGetAllLoadedAssets },
		{ "GetCachedAsset", &UUsdAssetCache2::execGetCachedAsset },
		{ "GetHashForAsset", &UUsdAssetCache2::execGetHashForAsset },
		{ "GetNumAssets", &UUsdAssetCache2::execGetNumAssets },
		{ "IsAssetOwnedByCache", &UUsdAssetCache2::execIsAssetOwnedByCache },
		{ "RefreshStorage", &UUsdAssetCache2::execRefreshStorage },
		{ "RemoveAllAssetReferences", &UUsdAssetCache2::execRemoveAllAssetReferences },
		{ "RemoveAsset", &UUsdAssetCache2::execRemoveAsset },
		{ "RemoveAssetReference", &UUsdAssetCache2::execRemoveAssetReference },
		{ "Reset", &UUsdAssetCache2::execReset },
		{ "TouchAsset", &UUsdAssetCache2::execTouchAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetCache2);
UClass* Z_Construct_UClass_UUsdAssetCache2_NoRegister()
{
	return UUsdAssetCache2::StaticClass();
}
struct Z_Construct_UClass_UUsdAssetCache2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Owns the assets generated and reused by USD Stages, allowing thread-safe retrieval/storage.\n */" },
		{ "IncludePath", "USDAssetCache2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Owns the assets generated and reused by USD Stages, allowing thread-safe retrieval/storage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnreferencedAssetStorageSizeMB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The asset cache will always retain all currently used assets.\n\x09 * In addition to that, this limit specifies how much size is allocated to storing assets that remain only for the\n\x09 * current session and that aren't being used by any stage.\n\x09 * Set this to 0 to disable storing unreferenced assets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "The asset cache will always retain all currently used assets.\nIn addition to that, this limit specifies how much size is allocated to storing assets that remain only for the\ncurrent session and that aren't being used by any stage.\nSet this to 0 to disable storing unreferenced assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentAssetStorageSizeMB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * This limit specifies how much size is allocated to storing all persistent assets (i.e. assets that will be\n\x09 * saved to disk, even if unused by any stage).\n\x09 * Set this to 0 to disable persistent asset storage.\n\x09 * This has no effect on temporary asset caches (e.g. the ones automatically generated when opening a stage\n\x09 * without an asset cache asset assigned)\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "This limit specifies how much size is allocated to storing all persistent assets (i.e. assets that will be\nsaved to disk, even if unused by any stage).\nSet this to 0 to disable persistent asset storage.\nThis has no effect on temporary asset caches (e.g. the ones automatically generated when opening a stage\nwithout an asset cache asset assigned)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetStorage_MetaData[] = {
		{ "Category", "Owned Assets" },
		{ "Comment", "// Main hash to asset storage for all assets that we're currently using and shouldn't be GC'd\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache2.h" },
		{ "ToolTip", "Main hash to asset storage for all assets that we're currently using and shouldn't be GC'd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UnreferencedAssetStorageSizeMB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PersistentAssetStorageSizeMB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetStorage_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetStorage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetStorage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdAssetCache2_AddAssetReference, "AddAssetReference" }, // 3309235149
		{ &Z_Construct_UFunction_UUsdAssetCache2_CacheAsset, "CacheAsset" }, // 2585070177
		{ &Z_Construct_UFunction_UUsdAssetCache2_CanRemoveAsset, "CanRemoveAsset" }, // 2404178440
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetAllAssetHashes, "GetAllAssetHashes" }, // 949906953
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetAllCachedAssetPaths, "GetAllCachedAssetPaths" }, // 3650575078
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetAllLoadedAssets, "GetAllLoadedAssets" }, // 1132474429
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetCachedAsset, "GetCachedAsset" }, // 3847590570
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetHashForAsset, "GetHashForAsset" }, // 3318197756
		{ &Z_Construct_UFunction_UUsdAssetCache2_GetNumAssets, "GetNumAssets" }, // 3060200363
		{ &Z_Construct_UFunction_UUsdAssetCache2_IsAssetOwnedByCache, "IsAssetOwnedByCache" }, // 3385963579
		{ &Z_Construct_UFunction_UUsdAssetCache2_RefreshStorage, "RefreshStorage" }, // 483940324
		{ &Z_Construct_UFunction_UUsdAssetCache2_RemoveAllAssetReferences, "RemoveAllAssetReferences" }, // 429604147
		{ &Z_Construct_UFunction_UUsdAssetCache2_RemoveAsset, "RemoveAsset" }, // 2060208987
		{ &Z_Construct_UFunction_UUsdAssetCache2_RemoveAssetReference, "RemoveAssetReference" }, // 2620938919
		{ &Z_Construct_UFunction_UUsdAssetCache2_Reset, "Reset" }, // 2307780021
		{ &Z_Construct_UFunction_UUsdAssetCache2_TouchAsset, "TouchAsset" }, // 1923641762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetCache2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_UnreferencedAssetStorageSizeMB = { "UnreferencedAssetStorageSizeMB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache2, UnreferencedAssetStorageSizeMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnreferencedAssetStorageSizeMB_MetaData), NewProp_UnreferencedAssetStorageSizeMB_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_PersistentAssetStorageSizeMB = { "PersistentAssetStorageSizeMB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache2, PersistentAssetStorageSizeMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentAssetStorageSizeMB_MetaData), NewProp_PersistentAssetStorageSizeMB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage_ValueProp = { "AssetStorage", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage_Key_KeyProp = { "AssetStorage_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage = { "AssetStorage", nullptr, (EPropertyFlags)0x0144000000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdAssetCache2, AssetStorage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetStorage_MetaData), NewProp_AssetStorage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetCache2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_UnreferencedAssetStorageSizeMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_PersistentAssetStorageSizeMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache2_Statics::NewProp_AssetStorage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdAssetCache2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetCache2_Statics::ClassParams = {
	&UUsdAssetCache2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUsdAssetCache2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache2_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache2_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdAssetCache2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdAssetCache2()
{
	if (!Z_Registration_Info_UClass_UUsdAssetCache2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetCache2.OuterSingleton, Z_Construct_UClass_UUsdAssetCache2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdAssetCache2.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdAssetCache2>()
{
	return UUsdAssetCache2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetCache2);
UUsdAssetCache2::~UUsdAssetCache2() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache2)
// End Class UUsdAssetCache2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetCache2, UUsdAssetCache2::StaticClass, TEXT("UUsdAssetCache2"), &Z_Registration_Info_UClass_UUsdAssetCache2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetCache2), 1037448555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_592415245(TEXT("/Script/USDClasses"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDAssetCache2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
