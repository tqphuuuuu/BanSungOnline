// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AssetRegistry/Public/AssetRegistry/IAssetRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetRegistry() {}

// Begin Cross Module References
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry();
ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References

// Begin ScriptStruct FAssetRegistryDependencyOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions;
class UScriptStruct* FAssetRegistryDependencyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, (UObject*)Z_Construct_UPackage__Script_AssetRegistry(), TEXT("AssetRegistryDependencyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.OuterSingleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FAssetRegistryDependencyOptions>()
{
	return FAssetRegistryDependencyOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE::AssetRegistry\n" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "namespace UE::AssetRegistry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSoftPackageReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths) */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeHardPackageReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Dependencies which are required for correct usage of the source asset, and must be loaded at the same time */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Dependencies which are required for correct usage of the source asset, and must be loaded at the same time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSearchableNames_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** References to specific SearchableNames inside a package */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "References to specific SearchableNames inside a package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSoftManagementReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeHardManagementReferences_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Reference that says one object directly manages another object, set when Primary Assets manage things explicitly */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Reference that says one object directly manages another object, set when Primary Assets manage things explicitly" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeSoftPackageReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSoftPackageReferences;
	static void NewProp_bIncludeHardPackageReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeHardPackageReferences;
	static void NewProp_bIncludeSearchableNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSearchableNames;
	static void NewProp_bIncludeSoftManagementReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSoftManagementReferences;
	static void NewProp_bIncludeHardManagementReferences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeHardManagementReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetRegistryDependencyOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_SetBit(void* Obj)
{
	((FAssetRegistryDependencyOptions*)Obj)->bIncludeSoftPackageReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences = { "bIncludeSoftPackageReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSoftPackageReferences_MetaData), NewProp_bIncludeSoftPackageReferences_MetaData) };
void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_SetBit(void* Obj)
{
	((FAssetRegistryDependencyOptions*)Obj)->bIncludeHardPackageReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences = { "bIncludeHardPackageReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeHardPackageReferences_MetaData), NewProp_bIncludeHardPackageReferences_MetaData) };
void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_SetBit(void* Obj)
{
	((FAssetRegistryDependencyOptions*)Obj)->bIncludeSearchableNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames = { "bIncludeSearchableNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSearchableNames_MetaData), NewProp_bIncludeSearchableNames_MetaData) };
void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_SetBit(void* Obj)
{
	((FAssetRegistryDependencyOptions*)Obj)->bIncludeSoftManagementReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences = { "bIncludeSoftManagementReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSoftManagementReferences_MetaData), NewProp_bIncludeSoftManagementReferences_MetaData) };
void Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_SetBit(void* Obj)
{
	((FAssetRegistryDependencyOptions*)Obj)->bIncludeHardManagementReferences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences = { "bIncludeHardManagementReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetRegistryDependencyOptions), &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeHardManagementReferences_MetaData), NewProp_bIncludeHardManagementReferences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftPackageReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardPackageReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSearchableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeSoftManagementReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewProp_bIncludeHardManagementReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	nullptr,
	&NewStructOps,
	"AssetRegistryDependencyOptions",
	Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::PropPointers),
	sizeof(FAssetRegistryDependencyOptions),
	alignof(FAssetRegistryDependencyOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions()
{
	if (!Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.InnerSingleton, Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions.InnerSingleton;
}
// End ScriptStruct FAssetRegistryDependencyOptions

// Begin Interface UAssetRegistry Function GetAllAssets
struct Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAllAssets_Parms
	{
		TArray<FAssetData> OutAssetData;
		bool bIncludeOnlyOnDiskAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets in the registry.\n\x09 * This method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\x09 *\n\x09 * @param OutAssetData the list of assets in this path\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the registry.\nThis method may be slow, use a filter if possible to avoid iterating over the entire registry.\n\n@param OutAssetData the list of assets in this path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAllAssets_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAllAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::AssetRegistry_eventGetAllAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::AssetRegistry_eventGetAllAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAllAssets)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAllAssets(Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAllAssets

// Begin Interface UAssetRegistry Function GetAllCachedPaths
struct Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics
{
	struct AssetRegistry_eventGetAllCachedPaths_Parms
	{
		TArray<FString> OutPathList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Gets a list of all paths that are currently cached */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAllCachedPaths_Parms, OutPathList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::NewProp_OutPathList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAllCachedPaths", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::AssetRegistry_eventGetAllCachedPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::AssetRegistry_eventGetAllCachedPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAllCachedPaths)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllCachedPaths(Z_Param_Out_OutPathList);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAllCachedPaths

// Begin Interface UAssetRegistry Function GetAncestorClassNames
struct Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAncestorClassNames_Parms
	{
		FTopLevelAssetPath ClassPathName;
		TArray<FTopLevelAssetPath> OutAncestorClassNames;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Returns true if the specified ClassName's ancestors could be found. If so, OutAncestorClassNames is a list of all its ancestors. This can be slow if temporary caching mode is not on */" },
		{ "DisplayName", "GetAncestorClassNames" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ScriptName", "GetAncestorClassNames" },
		{ "ToolTip", "Returns true if the specified ClassName's ancestors could be found. If so, OutAncestorClassNames is a list of all its ancestors. This can be slow if temporary caching mode is not on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPathName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAncestorClassNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAncestorClassNames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ClassPathName = { "ClassPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAncestorClassNames_Parms, ClassPathName), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_OutAncestorClassNames_Inner = { "OutAncestorClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_OutAncestorClassNames = { "OutAncestorClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAncestorClassNames_Parms, OutAncestorClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAncestorClassNames_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAncestorClassNames_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ClassPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_OutAncestorClassNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_OutAncestorClassNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAncestorClassNames", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::AssetRegistry_eventGetAncestorClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::AssetRegistry_eventGetAncestorClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAncestorClassNames)
{
	P_GET_STRUCT(FTopLevelAssetPath,Z_Param_ClassPathName);
	P_GET_TARRAY_REF(FTopLevelAssetPath,Z_Param_Out_OutAncestorClassNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAncestorClassNames(Z_Param_ClassPathName,Z_Param_Out_OutAncestorClassNames);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAncestorClassNames

// Begin Interface UAssetRegistry Function GetAssetByObjectPath
struct Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssetByObjectPath_Parms
	{
		FName ObjectPath;
		bool bIncludeOnlyOnDiskAssets;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectPath;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetByObjectPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetByObjectPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetByObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetByObjectPath", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::AssetRegistry_eventGetAssetByObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::AssetRegistry_eventGetAssetByObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssetByObjectPath)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectPath);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=P_THIS->GetAssetByObjectPath(Z_Param_ObjectPath,Z_Param_bIncludeOnlyOnDiskAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssetByObjectPath

// Begin Interface UAssetRegistry Function GetAssets
struct Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssets_Parms
	{
		FARFilter Filter;
		TArray<FAssetData> OutAssetData;
		bool bSkipARFilteredAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets that match the filter.\n\x09 * Assets returned must satisfy every filter component if there is at least one element in the component's array.\n\x09 * Assets will satisfy a component if they match any of the elements in it.\n\x09 *\n\x09 * @param Filter filter to apply to the assets in the AssetRegistry\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform.\n\x09 */" },
		{ "CPP_Default_bSkipARFilteredAssets", "true" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets that match the filter.\nAssets returned must satisfy every filter component if there is at least one element in the component's array.\nAssets will satisfy a component if they match any of the elements in it.\n\n@param Filter filter to apply to the assets in the AssetRegistry\n@param OutAssetData the list of assets in this path\n@param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bSkipARFilteredAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipARFilteredAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssets_Parms*)Obj)->bSkipARFilteredAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_bSkipARFilteredAssets = { "bSkipARFilteredAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_bSkipARFilteredAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::AssetRegistry_eventGetAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::AssetRegistry_eventGetAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssets)
{
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bSkipARFilteredAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAssets(Z_Param_Out_Filter,Z_Param_Out_OutAssetData,Z_Param_bSkipARFilteredAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssets

// Begin Interface UAssetRegistry Function GetAssetsByClass
struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssetsByClass_Parms
	{
		FTopLevelAssetPath ClassPathName;
		TArray<FAssetData> OutAssetData;
		bool bSearchSubClasses;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets with the supplied class\n\x09 *\n\x09 * @param ClassPathName the full path of the class name of the assets requested, in a TopLevelAssetPath structure.\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well\n\x09 */" },
		{ "CPP_Default_bSearchSubClasses", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets with the supplied class\n\n@param ClassPathName the full path of the class name of the assets requested, in a TopLevelAssetPath structure.\n@param OutAssetData the list of assets in this path\n@param bSearchSubClasses if true, all subclasses of the passed in class will be searched as well" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPathName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bSearchSubClasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchSubClasses;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassPathName = { "ClassPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, ClassPathName), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByClass_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->bSearchSubClasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses = { "bSearchSubClasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByClass_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ClassPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByClass", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::AssetRegistry_eventGetAssetsByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::AssetRegistry_eventGetAssetsByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByClass)
{
	P_GET_STRUCT(FTopLevelAssetPath,Z_Param_ClassPathName);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bSearchSubClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAssetsByClass(Z_Param_ClassPathName,Z_Param_Out_OutAssetData,Z_Param_bSearchSubClasses);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssetsByClass

// Begin Interface UAssetRegistry Function GetAssetsByPackageName
struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssetsByPackageName_Parms
	{
		FName PackageName;
		TArray<FAssetData> OutAssetData;
		bool bIncludeOnlyOnDiskAssets;
		bool bSkipARFilteredAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for the assets in the package with the specified package name\n\x09 *\n\x09 * @param PackageName the package name for the requested assets (eg, /Game/MyFolder/MyAsset)\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n\x09 *        @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n\x09 * @param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform.\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bSkipARFilteredAssets", "true" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for the assets in the package with the specified package name\n\n@param PackageName the package name for the requested assets (eg, /Game/MyFolder/MyAsset)\n@param OutAssetData the list of assets in this path\n@param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n       @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n@param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_bSkipARFilteredAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipARFilteredAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPackageName_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bSkipARFilteredAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->bSkipARFilteredAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bSkipARFilteredAssets = { "bSkipARFilteredAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bSkipARFilteredAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPackageName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_bSkipARFilteredAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPackageName", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::AssetRegistry_eventGetAssetsByPackageName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::AssetRegistry_eventGetAssetsByPackageName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByPackageName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_GET_UBOOL(Z_Param_bSkipARFilteredAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAssetsByPackageName(Z_Param_PackageName,Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets,Z_Param_bSkipARFilteredAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssetsByPackageName

// Begin Interface UAssetRegistry Function GetAssetsByPath
struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssetsByPath_Parms
	{
		FName PackagePath;
		TArray<FAssetData> OutAssetData;
		bool bRecursive;
		bool bIncludeOnlyOnDiskAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets in the supplied folder path\n\x09 *\n\x09 * @param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n\x09 *        @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n\x09 * @param bRecursive if true, all supplied paths will be searched recursively\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in the supplied folder path\n\n@param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n@param OutAssetData the list of assets in this path\n@param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n       @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n@param bRecursive if true, all supplied paths will be searched recursively" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, PackagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPath_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPath_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPath", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::AssetRegistry_eventGetAssetsByPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::AssetRegistry_eventGetAssetsByPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByPath)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackagePath);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bRecursive);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAssetsByPath(Z_Param_PackagePath,Z_Param_Out_OutAssetData,Z_Param_bRecursive,Z_Param_bIncludeOnlyOnDiskAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssetsByPath

// Begin Interface UAssetRegistry Function GetAssetsByPaths
struct Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetAssetsByPaths_Parms
	{
		TArray<FName> PackagePaths;
		TArray<FAssetData> OutAssetData;
		bool bRecursive;
		bool bIncludeOnlyOnDiskAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for all assets in any of the supplied folder paths\n\x09 *\n\x09 * @param PackagePaths the paths to query asset data in (eg, /Game/MyFolder)\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n\x09 *        @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n\x09 * @param bRecursive if true, all supplied paths will be searched recursively\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for all assets in any of the supplied folder paths\n\n@param PackagePaths the paths to query asset data in (eg, /Game/MyFolder)\n@param OutAssetData the list of assets in this path\n@param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n       @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n@param bRecursive if true, all supplied paths will be searched recursively" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_PackagePaths_Inner = { "PackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_PackagePaths = { "PackagePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPaths_Parms, PackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetAssetsByPaths_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPaths_Parms*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPaths_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetAssetsByPaths_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetAssetsByPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_PackagePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_PackagePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetAssetsByPaths", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::AssetRegistry_eventGetAssetsByPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::AssetRegistry_eventGetAssetsByPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetAssetsByPaths)
{
	P_GET_TARRAY(FName,Z_Param_PackagePaths);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bRecursive);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAssetsByPaths(Z_Param_PackagePaths,Z_Param_Out_OutAssetData,Z_Param_bRecursive,Z_Param_bIncludeOnlyOnDiskAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetAssetsByPaths

// Begin Interface UAssetRegistry Function GetDerivedClassNames
struct Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetDerivedClassNames_Parms
	{
		TArray<FTopLevelAssetPath> ClassNames;
		TSet<FTopLevelAssetPath> ExcludedClassNames;
		TSet<FTopLevelAssetPath> OutDerivedClassNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Returns the names of all classes derived by the supplied class names, excluding any classes matching the excluded class names. This can be slow if temporary caching mode is not on */" },
		{ "DisplayName", "GetDerivedClassNames" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ScriptName", "GetDerivedClassNames" },
		{ "ToolTip", "Returns the names of all classes derived by the supplied class names, excluding any classes matching the excluded class names. This can be slow if temporary caching mode is not on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedClassNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedClassNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExcludedClassNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDerivedClassNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutDerivedClassNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ClassNames_Inner = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetDerivedClassNames_Parms, ClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassNames_MetaData), NewProp_ClassNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ExcludedClassNames_ElementProp = { "ExcludedClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FTopLevelAssetPath>, "The structure 'FTopLevelAssetPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ExcludedClassNames = { "ExcludedClassNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetDerivedClassNames_Parms, ExcludedClassNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedClassNames_MetaData), NewProp_ExcludedClassNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_OutDerivedClassNames_ElementProp = { "OutDerivedClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FTopLevelAssetPath>, "The structure 'FTopLevelAssetPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_OutDerivedClassNames = { "OutDerivedClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetDerivedClassNames_Parms, OutDerivedClassNames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ClassNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ClassNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ExcludedClassNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_ExcludedClassNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_OutDerivedClassNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::NewProp_OutDerivedClassNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetDerivedClassNames", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::AssetRegistry_eventGetDerivedClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::AssetRegistry_eventGetDerivedClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetDerivedClassNames)
{
	P_GET_TARRAY_REF(FTopLevelAssetPath,Z_Param_Out_ClassNames);
	P_GET_TSET_REF(FTopLevelAssetPath,Z_Param_Out_ExcludedClassNames);
	P_GET_TSET_REF(FTopLevelAssetPath,Z_Param_Out_OutDerivedClassNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDerivedClassNames(Z_Param_Out_ClassNames,Z_Param_Out_ExcludedClassNames,Z_Param_Out_OutDerivedClassNames);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetDerivedClassNames

// Begin Interface UAssetRegistry Function GetInMemoryAssets
struct Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventGetInMemoryAssets_Parms
	{
		FARFilter Filter;
		TArray<FAssetData> OutAssetData;
		bool bSkipARFilteredAssets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets asset data for in-memory assets only, that match the filter.\n\x09 * Returns assets that would be excluded by calling GetAssets with bIncludeOnlyOnDiskAssets set to true.\n\x09 * @note This method IGNORES the value of bIncludeOnlyOnDiskAssets on the provided filter. \n\x09 * Assets returned must satisfy every filter component if there is at least one element in the component's array.\n\x09 * Assets will satisfy a component if they match any of the elements in it.\n\x09 *\n\x09 * @param Filter filter to apply to the assets in the AssetRegistry\n\x09 * @param OutAssetData the list of assets in this path\n\x09 * @param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform.\n\x09 */" },
		{ "CPP_Default_bSkipARFilteredAssets", "true" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets asset data for in-memory assets only, that match the filter.\nReturns assets that would be excluded by calling GetAssets with bIncludeOnlyOnDiskAssets set to true.\n@note This method IGNORES the value of bIncludeOnlyOnDiskAssets on the provided filter.\nAssets returned must satisfy every filter component if there is at least one element in the component's array.\nAssets will satisfy a component if they match any of the elements in it.\n\n@param Filter filter to apply to the assets in the AssetRegistry\n@param OutAssetData the list of assets in this path\n@param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
	static void NewProp_bSkipARFilteredAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipARFilteredAssets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetInMemoryAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetInMemoryAssets_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventGetInMemoryAssets_Parms*)Obj)->bSkipARFilteredAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_bSkipARFilteredAssets = { "bSkipARFilteredAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetInMemoryAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventGetInMemoryAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetInMemoryAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_OutAssetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_OutAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_bSkipARFilteredAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetInMemoryAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::AssetRegistry_eventGetInMemoryAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::AssetRegistry_eventGetInMemoryAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetInMemoryAssets)
{
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
	P_GET_UBOOL(Z_Param_bSkipARFilteredAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInMemoryAssets(Z_Param_Out_Filter,Z_Param_Out_OutAssetData,Z_Param_bSkipARFilteredAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetInMemoryAssets

// Begin Interface UAssetRegistry Function GetSubPaths
struct Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics
{
	struct AssetRegistry_eventGetSubPaths_Parms
	{
		FString InBasePath;
		TArray<FString> OutPathList;
		bool bInRecurse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Gets a list of all paths that are currently cached below the passed-in base path */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets a list of all paths that are currently cached below the passed-in base path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBasePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPathList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPathList;
	static void NewProp_bInRecurse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecurse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath = { "InBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, InBasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBasePath_MetaData), NewProp_InBasePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner = { "OutPathList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList = { "OutPathList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventGetSubPaths_Parms, OutPathList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit(void* Obj)
{
	((AssetRegistry_eventGetSubPaths_Parms*)Obj)->bInRecurse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse = { "bInRecurse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventGetSubPaths_Parms), &Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_InBasePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_OutPathList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "GetSubPaths", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::AssetRegistry_eventGetSubPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::AssetRegistry_eventGetSubPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_GetSubPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execGetSubPaths)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InBasePath);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList);
	P_GET_UBOOL(Z_Param_bInRecurse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSubPaths(Z_Param_InBasePath,Z_Param_Out_OutPathList,Z_Param_bInRecurse);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function GetSubPaths

// Begin Interface UAssetRegistry Function HasAssets
struct Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics
{
	struct AssetRegistry_eventHasAssets_Parms
	{
		FName PackagePath;
		bool bRecursive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Does the given path contain assets, optionally also testing sub-paths?\n\x09 *\n\x09 * @param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n\x09 * @param bRecursive if true, the supplied path will be tested recursively\n\x09 */" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Does the given path contain assets, optionally also testing sub-paths?\n\n@param PackagePath the path to query asset data in (eg, /Game/MyFolder)\n@param bRecursive if true, the supplied path will be tested recursively" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePath;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventHasAssets_Parms, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((AssetRegistry_eventHasAssets_Parms*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecursive_MetaData), NewProp_bRecursive_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventHasAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventHasAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "HasAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::AssetRegistry_eventHasAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::AssetRegistry_eventHasAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_HasAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execHasAssets)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackagePath);
	P_GET_UBOOL(Z_Param_bRecursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAssets(Z_Param_PackagePath,Z_Param_bRecursive);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function HasAssets

// Begin Interface UAssetRegistry Function IsLoadingAssets
struct Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics
{
	struct AssetRegistry_eventIsLoadingAssets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Returns true if the asset registry is currently loading files and does not yet know about all assets */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Returns true if the asset registry is currently loading files and does not yet know about all assets" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventIsLoadingAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventIsLoadingAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "IsLoadingAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::AssetRegistry_eventIsLoadingAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::AssetRegistry_eventIsLoadingAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execIsLoadingAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoadingAssets();
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function IsLoadingAssets

// Begin Interface UAssetRegistry Function IsSearchAllAssets
struct Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics
{
	struct AssetRegistry_eventIsSearchAllAssets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Whether SearchAllAssets has been called, or was auto-called at startup. When async (editor or cooking), if SearchAllAssets has ever been called,\n\x09 * any newly-mounted directory will be automatically searched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Whether SearchAllAssets has been called, or was auto-called at startup. When async (editor or cooking), if SearchAllAssets has ever been called,\nany newly-mounted directory will be automatically searched." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventIsSearchAllAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventIsSearchAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "IsSearchAllAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::AssetRegistry_eventIsSearchAllAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::AssetRegistry_eventIsSearchAllAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execIsSearchAllAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSearchAllAssets();
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function IsSearchAllAssets

// Begin Interface UAssetRegistry Function IsSearchAsync
struct Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics
{
	struct AssetRegistry_eventIsSearchAsync_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Whether searching is done async (and was started at startup), or synchronously and on-demand, requiring ScanPathsSynchronous or SearchAllAssets. */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Whether searching is done async (and was started at startup), or synchronously and on-demand, requiring ScanPathsSynchronous or SearchAllAssets." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventIsSearchAsync_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventIsSearchAsync_Parms), &Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "IsSearchAsync", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::AssetRegistry_eventIsSearchAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::AssetRegistry_eventIsSearchAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_IsSearchAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execIsSearchAsync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSearchAsync();
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function IsSearchAsync

// Begin Interface UAssetRegistry Function K2_GetAssetByObjectPath
struct Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventK2_GetAssetByObjectPath_Parms
	{
		FSoftObjectPath ObjectPath;
		bool bIncludeOnlyOnDiskAssets;
		bool bSkipARFilteredAssets;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets the asset data for the specified object path\n\x09 *\n\x09 * @param ObjectPath the path of the object to be looked up\n\x09 * @param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n\x09 *        @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n\x09 * @param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform.\n\x09 * @return the assets data;Will be invalid if object could not be found\n\x09 */" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "CPP_Default_bSkipARFilteredAssets", "true" },
		{ "DisplayName", "Get Asset By Object Path" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Gets the asset data for the specified object path\n\n@param ObjectPath the path of the object to be looked up\n@param bIncludeOnlyOnDiskAssets If true, use only DiskGatheredData, do not calculate from UObjects.\n       @see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.\n@param bSkipARFilteredAssets If true, skips Objects that return true for IsAsset but are not assets in the current platform.\n@return the assets data;Will be invalid if object could not be found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
	static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
	static void NewProp_bSkipARFilteredAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipARFilteredAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetAssetByObjectPath_Parms, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventK2_GetAssetByObjectPath_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetAssetByObjectPath_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bSkipARFilteredAssets_SetBit(void* Obj)
{
	((AssetRegistry_eventK2_GetAssetByObjectPath_Parms*)Obj)->bSkipARFilteredAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bSkipARFilteredAssets = { "bSkipARFilteredAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetAssetByObjectPath_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bSkipARFilteredAssets_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetAssetByObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_ObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bIncludeOnlyOnDiskAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_bSkipARFilteredAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "K2_GetAssetByObjectPath", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::AssetRegistry_eventK2_GetAssetByObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::AssetRegistry_eventK2_GetAssetByObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execK2_GetAssetByObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ObjectPath);
	P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
	P_GET_UBOOL(Z_Param_bSkipARFilteredAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=P_THIS->K2_GetAssetByObjectPath(Z_Param_Out_ObjectPath,Z_Param_bIncludeOnlyOnDiskAssets,Z_Param_bSkipARFilteredAssets);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function K2_GetAssetByObjectPath

// Begin Interface UAssetRegistry Function K2_GetDependencies
struct Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics
{
	struct AssetRegistry_eventK2_GetDependencies_Parms
	{
		FName PackageName;
		FAssetRegistryDependencyOptions DependencyOptions;
		TArray<FName> OutDependencies;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets a list of paths to objects that are referenced by the supplied package. (On disk references ONLY)\n\x09 *\n\x09 * @param PackageName\x09\x09the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n\x09 * @param DependencyOptions\x09which kinds of dependencies to include in the output list\n\x09 * @param OutDependencies\x09""a list of packages that are referenced by the package whose path is PackageName\n\x09 */" },
		{ "DisplayName", "Get Dependencies" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ScriptName", "GetDependencies" },
		{ "ToolTip", "Gets a list of paths to objects that are referenced by the supplied package. (On disk references ONLY)\n\n@param PackageName           the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n@param DependencyOptions     which kinds of dependencies to include in the output list\n@param OutDependencies       a list of packages that are referenced by the package whose path is PackageName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DependencyOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions = { "DependencyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, DependencyOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyOptions_MetaData), NewProp_DependencyOptions_MetaData) }; // 1395807487
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventK2_GetDependencies_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetDependencies_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_DependencyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_OutDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "K2_GetDependencies", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::AssetRegistry_eventK2_GetDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::AssetRegistry_eventK2_GetDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execK2_GetDependencies)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_DependencyOptions);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_GetDependencies(Z_Param_PackageName,Z_Param_Out_DependencyOptions,Z_Param_Out_OutDependencies);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function K2_GetDependencies

// Begin Interface UAssetRegistry Function K2_GetReferencers
struct Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics
{
	struct AssetRegistry_eventK2_GetReferencers_Parms
	{
		FName PackageName;
		FAssetRegistryDependencyOptions ReferenceOptions;
		TArray<FName> OutReferencers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Gets a list of packages that reference the supplied package. (On disk references ONLY)\n\x09 *\n\x09 * @param PackageName\x09\x09the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n\x09 * @param ReferenceOptions\x09which kinds of references to include in the output list\n\x09 * @param OutReferencers\x09""a list of packages that reference the package whose path is PackageName\n\x09 */" },
		{ "DisplayName", "Get Referencers" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ScriptName", "GetReferencers" },
		{ "ToolTip", "Gets a list of packages that reference the supplied package. (On disk references ONLY)\n\n@param PackageName           the name of the package for which to gather dependencies (eg, /Game/MyFolder/MyAsset)\n@param ReferenceOptions      which kinds of references to include in the output list\n@param OutReferencers        a list of packages that reference the package whose path is PackageName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutReferencers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutReferencers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions = { "ReferenceOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, ReferenceOptions), Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceOptions_MetaData), NewProp_ReferenceOptions_MetaData) }; // 1395807487
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers_Inner = { "OutReferencers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers = { "OutReferencers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventK2_GetReferencers_Parms, OutReferencers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetRegistry_eventK2_GetReferencers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventK2_GetReferencers_Parms), &Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReferenceOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_OutReferencers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "K2_GetReferencers", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::AssetRegistry_eventK2_GetReferencers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::AssetRegistry_eventK2_GetReferencers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execK2_GetReferencers)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_STRUCT_REF(FAssetRegistryDependencyOptions,Z_Param_Out_ReferenceOptions);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutReferencers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_GetReferencers(Z_Param_PackageName,Z_Param_Out_ReferenceOptions,Z_Param_Out_OutReferencers);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function K2_GetReferencers

// Begin Interface UAssetRegistry Function PrioritizeSearchPath
struct Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics
{
	struct AssetRegistry_eventPrioritizeSearchPath_Parms
	{
		FString PathToPrioritize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned before other assets. */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned before other assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToPrioritize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathToPrioritize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize = { "PathToPrioritize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventPrioritizeSearchPath_Parms, PathToPrioritize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToPrioritize_MetaData), NewProp_PathToPrioritize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::NewProp_PathToPrioritize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "PrioritizeSearchPath", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::AssetRegistry_eventPrioritizeSearchPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::AssetRegistry_eventPrioritizeSearchPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execPrioritizeSearchPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PathToPrioritize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrioritizeSearchPath(Z_Param_PathToPrioritize);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function PrioritizeSearchPath

// Begin Interface UAssetRegistry Function RunAssetsThroughFilter
struct Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventRunAssetsThroughFilter_Parms
	{
		TArray<FAssetData> AssetDataList;
		FARFilter Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Trims items out of the asset data list that do not pass the supplied filter */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that do not pass the supplied filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventRunAssetsThroughFilter_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_AssetDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "RunAssetsThroughFilter", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::AssetRegistry_eventRunAssetsThroughFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::AssetRegistry_eventRunAssetsThroughFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execRunAssetsThroughFilter)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList);
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunAssetsThroughFilter(Z_Param_Out_AssetDataList,Z_Param_Out_Filter);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function RunAssetsThroughFilter

// Begin Interface UAssetRegistry Function ScanFilesSynchronous
struct Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics
{
	struct AssetRegistry_eventScanFilesSynchronous_Parms
	{
		TArray<FString> InFilePaths;
		bool bForceRescan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned */" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
	static void NewProp_bForceRescan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventScanFilesSynchronous_Parms, InFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilePaths_MetaData), NewProp_InFilePaths_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
{
	((AssetRegistry_eventScanFilesSynchronous_Parms*)Obj)->bForceRescan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventScanFilesSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_InFilePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanFilesSynchronous", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::AssetRegistry_eventScanFilesSynchronous_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::AssetRegistry_eventScanFilesSynchronous_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execScanFilesSynchronous)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFilePaths);
	P_GET_UBOOL(Z_Param_bForceRescan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanFilesSynchronous(Z_Param_Out_InFilePaths,Z_Param_bForceRescan);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function ScanFilesSynchronous

// Begin Interface UAssetRegistry Function ScanModifiedAssetFiles
struct Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics
{
	struct AssetRegistry_eventScanModifiedAssetFiles_Parms
	{
		TArray<FString> InFilePaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Forces a rescan of specific filenames, call this when you need to refresh from disk */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Forces a rescan of specific filenames, call this when you need to refresh from disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner = { "InFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths = { "InFilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventScanModifiedAssetFiles_Parms, InFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilePaths_MetaData), NewProp_InFilePaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::NewProp_InFilePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanModifiedAssetFiles", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::AssetRegistry_eventScanModifiedAssetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::AssetRegistry_eventScanModifiedAssetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execScanModifiedAssetFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFilePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanModifiedAssetFiles(Z_Param_Out_InFilePaths);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function ScanModifiedAssetFiles

// Begin Interface UAssetRegistry Function ScanPathsSynchronous
struct Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics
{
	struct AssetRegistry_eventScanPathsSynchronous_Parms
	{
		TArray<FString> InPaths;
		bool bForceRescan;
		bool bIgnoreDenyListScanFilters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned */" },
		{ "CPP_Default_bForceRescan", "false" },
		{ "CPP_Default_bIgnoreDenyListScanFilters", "false" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the paths will be scanned again, even if they were previously scanned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPaths;
	static void NewProp_bForceRescan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRescan;
	static void NewProp_bIgnoreDenyListScanFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDenyListScanFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner = { "InPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths = { "InPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventScanPathsSynchronous_Parms, InPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPaths_MetaData), NewProp_InPaths_MetaData) };
void Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit(void* Obj)
{
	((AssetRegistry_eventScanPathsSynchronous_Parms*)Obj)->bForceRescan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan = { "bForceRescan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bIgnoreDenyListScanFilters_SetBit(void* Obj)
{
	((AssetRegistry_eventScanPathsSynchronous_Parms*)Obj)->bIgnoreDenyListScanFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bIgnoreDenyListScanFilters = { "bIgnoreDenyListScanFilters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventScanPathsSynchronous_Parms), &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bIgnoreDenyListScanFilters_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_InPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bIgnoreDenyListScanFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "ScanPathsSynchronous", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::AssetRegistry_eventScanPathsSynchronous_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::AssetRegistry_eventScanPathsSynchronous_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execScanPathsSynchronous)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InPaths);
	P_GET_UBOOL(Z_Param_bForceRescan);
	P_GET_UBOOL(Z_Param_bIgnoreDenyListScanFilters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanPathsSynchronous(Z_Param_Out_InPaths,Z_Param_bForceRescan,Z_Param_bIgnoreDenyListScanFilters);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function ScanPathsSynchronous

// Begin Interface UAssetRegistry Function SearchAllAssets
struct Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics
{
	struct AssetRegistry_eventSearchAllAssets_Parms
	{
		bool bSynchronousSearch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Look for all assets on disk (can be async or synchronous) */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Look for all assets on disk (can be async or synchronous)" },
	};
#endif // WITH_METADATA
	static void NewProp_bSynchronousSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronousSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit(void* Obj)
{
	((AssetRegistry_eventSearchAllAssets_Parms*)Obj)->bSynchronousSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch = { "bSynchronousSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetRegistry_eventSearchAllAssets_Parms), &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "SearchAllAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::AssetRegistry_eventSearchAllAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::AssetRegistry_eventSearchAllAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_SearchAllAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execSearchAllAssets)
{
	P_GET_UBOOL(Z_Param_bSynchronousSearch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchAllAssets(Z_Param_bSynchronousSearch);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function SearchAllAssets

// Begin Interface UAssetRegistry Function UseFilterToExcludeAssets
struct Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetRegistry_eventUseFilterToExcludeAssets_Parms
	{
		TArray<FAssetData> AssetDataList;
		FARFilter Filter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Trims items out of the asset data list that pass the supplied filter */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Trims items out of the asset data list that pass the supplied filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventUseFilterToExcludeAssets_Parms, Filter), Z_Construct_UScriptStruct_FARFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_AssetDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::NewProp_Filter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "UseFilterToExcludeAssets", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::AssetRegistry_eventUseFilterToExcludeAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::AssetRegistry_eventUseFilterToExcludeAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execUseFilterToExcludeAssets)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList);
	P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseFilterToExcludeAssets(Z_Param_Out_AssetDataList,Z_Param_Out_Filter);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function UseFilterToExcludeAssets

// Begin Interface UAssetRegistry Function WaitForCompletion
struct Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/**\n\x09 * Wait for scan to be complete. If called during editor startup before OnPostEngineInit, and there are any assets that use classes in \n\x09 * not-yet-loaded plugin modules, WaitForCompletion will return silently with those assets still ungathered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Wait for scan to be complete. If called during editor startup before OnPostEngineInit, and there are any assets that use classes in\nnot-yet-loaded plugin modules, WaitForCompletion will return silently with those assets still ungathered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "WaitForCompletion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAssetRegistry_WaitForCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execWaitForCompletion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitForCompletion();
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function WaitForCompletion

// Begin Interface UAssetRegistry Function WaitForPackage
struct Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics
{
	struct AssetRegistry_eventWaitForPackage_Parms
	{
		FString PackageName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetRegistry" },
		{ "Comment", "/** Wait for the scan of a specific package to be complete */" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
		{ "ToolTip", "Wait for the scan of a specific package to be complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetRegistry_eventWaitForPackage_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::NewProp_PackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetRegistry, nullptr, "WaitForPackage", nullptr, nullptr, Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::AssetRegistry_eventWaitForPackage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::AssetRegistry_eventWaitForPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetRegistry_WaitForPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAssetRegistry::execWaitForPackage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitForPackage(Z_Param_PackageName);
	P_NATIVE_END;
}
// End Interface UAssetRegistry Function WaitForPackage

// Begin Interface UAssetRegistry
void UAssetRegistry::StaticRegisterNativesUAssetRegistry()
{
	UClass* Class = UAssetRegistry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllAssets", &IAssetRegistry::execGetAllAssets },
		{ "GetAllCachedPaths", &IAssetRegistry::execGetAllCachedPaths },
		{ "GetAncestorClassNames", &IAssetRegistry::execGetAncestorClassNames },
		{ "GetAssetByObjectPath", &IAssetRegistry::execGetAssetByObjectPath },
		{ "GetAssets", &IAssetRegistry::execGetAssets },
		{ "GetAssetsByClass", &IAssetRegistry::execGetAssetsByClass },
		{ "GetAssetsByPackageName", &IAssetRegistry::execGetAssetsByPackageName },
		{ "GetAssetsByPath", &IAssetRegistry::execGetAssetsByPath },
		{ "GetAssetsByPaths", &IAssetRegistry::execGetAssetsByPaths },
		{ "GetDerivedClassNames", &IAssetRegistry::execGetDerivedClassNames },
		{ "GetInMemoryAssets", &IAssetRegistry::execGetInMemoryAssets },
		{ "GetSubPaths", &IAssetRegistry::execGetSubPaths },
		{ "HasAssets", &IAssetRegistry::execHasAssets },
		{ "IsLoadingAssets", &IAssetRegistry::execIsLoadingAssets },
		{ "IsSearchAllAssets", &IAssetRegistry::execIsSearchAllAssets },
		{ "IsSearchAsync", &IAssetRegistry::execIsSearchAsync },
		{ "K2_GetAssetByObjectPath", &IAssetRegistry::execK2_GetAssetByObjectPath },
		{ "K2_GetDependencies", &IAssetRegistry::execK2_GetDependencies },
		{ "K2_GetReferencers", &IAssetRegistry::execK2_GetReferencers },
		{ "PrioritizeSearchPath", &IAssetRegistry::execPrioritizeSearchPath },
		{ "RunAssetsThroughFilter", &IAssetRegistry::execRunAssetsThroughFilter },
		{ "ScanFilesSynchronous", &IAssetRegistry::execScanFilesSynchronous },
		{ "ScanModifiedAssetFiles", &IAssetRegistry::execScanModifiedAssetFiles },
		{ "ScanPathsSynchronous", &IAssetRegistry::execScanPathsSynchronous },
		{ "SearchAllAssets", &IAssetRegistry::execSearchAllAssets },
		{ "UseFilterToExcludeAssets", &IAssetRegistry::execUseFilterToExcludeAssets },
		{ "WaitForCompletion", &IAssetRegistry::execWaitForCompletion },
		{ "WaitForPackage", &IAssetRegistry::execWaitForPackage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetRegistry);
UClass* Z_Construct_UClass_UAssetRegistry_NoRegister()
{
	return UAssetRegistry::StaticClass();
}
struct Z_Construct_UClass_UAssetRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AssetRegistry/IAssetRegistry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllAssets, "GetAllAssets" }, // 1525959287
		{ &Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths, "GetAllCachedPaths" }, // 3853318995
		{ &Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames, "GetAncestorClassNames" }, // 2206669832
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath, "GetAssetByObjectPath" }, // 3666464771
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssets, "GetAssets" }, // 3111188136
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass, "GetAssetsByClass" }, // 457917985
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName, "GetAssetsByPackageName" }, // 3599915612
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath, "GetAssetsByPath" }, // 125085211
		{ &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths, "GetAssetsByPaths" }, // 506812630
		{ &Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames, "GetDerivedClassNames" }, // 3158067846
		{ &Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets, "GetInMemoryAssets" }, // 3757152457
		{ &Z_Construct_UFunction_UAssetRegistry_GetSubPaths, "GetSubPaths" }, // 2026380985
		{ &Z_Construct_UFunction_UAssetRegistry_HasAssets, "HasAssets" }, // 3387385142
		{ &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets, "IsLoadingAssets" }, // 1071994860
		{ &Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets, "IsSearchAllAssets" }, // 629054138
		{ &Z_Construct_UFunction_UAssetRegistry_IsSearchAsync, "IsSearchAsync" }, // 2150217249
		{ &Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath, "K2_GetAssetByObjectPath" }, // 3026464163
		{ &Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies, "K2_GetDependencies" }, // 2655206802
		{ &Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers, "K2_GetReferencers" }, // 2722679799
		{ &Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath, "PrioritizeSearchPath" }, // 3843225190
		{ &Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter, "RunAssetsThroughFilter" }, // 4163617587
		{ &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous, "ScanFilesSynchronous" }, // 2786141077
		{ &Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles, "ScanModifiedAssetFiles" }, // 554429329
		{ &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous, "ScanPathsSynchronous" }, // 3035495104
		{ &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets, "SearchAllAssets" }, // 2213590452
		{ &Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets, "UseFilterToExcludeAssets" }, // 759283220
		{ &Z_Construct_UFunction_UAssetRegistry_WaitForCompletion, "WaitForCompletion" }, // 903122903
		{ &Z_Construct_UFunction_UAssetRegistry_WaitForPackage, "WaitForPackage" }, // 371992207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistry_Statics::ClassParams = {
	&UAssetRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetRegistry()
{
	if (!Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton, Z_Construct_UClass_UAssetRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton;
}
template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistry>()
{
	return UAssetRegistry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistry);
UAssetRegistry::~UAssetRegistry() {}
// End Interface UAssetRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetRegistryDependencyOptions::StaticStruct, Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewStructOps, TEXT("AssetRegistryDependencyOptions"), &Z_Registration_Info_UScriptStruct_AssetRegistryDependencyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetRegistryDependencyOptions), 1395807487U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRegistry, UAssetRegistry::StaticClass, TEXT("UAssetRegistry"), &Z_Registration_Info_UClass_UAssetRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRegistry), 1412492580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_2286182130(TEXT("/Script/AssetRegistry"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
