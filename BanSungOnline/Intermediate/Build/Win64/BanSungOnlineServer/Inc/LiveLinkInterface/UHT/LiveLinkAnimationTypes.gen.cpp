// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkSkeletonStaticData
static_assert(std::is_polymorphic<FLiveLinkSkeletonStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkSkeletonStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData;
class UScriptStruct* FLiveLinkSkeletonStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSkeletonStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSkeletonStaticData>()
{
	return FLiveLinkSkeletonStaticData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Animation purposes. Contains data about bones that shouldn't change every frame.\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Static data for Animation purposes. Contains data about bones that shouldn't change every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Names of each bone in the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Parent Indices: For each bone it specifies the index of its parent\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSkeletonStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneParents_MetaData), NewProp_BoneParents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
	&NewStructOps,
	"LiveLinkSkeletonStaticData",
	Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers),
	sizeof(FLiveLinkSkeletonStaticData),
	alignof(FLiveLinkSkeletonStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton;
}
// End ScriptStruct FLiveLinkSkeletonStaticData

// Begin ScriptStruct FLiveLinkAnimationFrameData
static_assert(std::is_polymorphic<FLiveLinkAnimationFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkAnimationFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData;
class UScriptStruct* FLiveLinkAnimationFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkAnimationFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkAnimationFrameData>()
{
	return FLiveLinkAnimationFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Animation purposes. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Dynamic data for Animation purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Array of transforms for each bone of the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Array of transforms for each bone of the skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkAnimationFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkAnimationFrameData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
	&NewStructOps,
	"LiveLinkAnimationFrameData",
	Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers),
	sizeof(FLiveLinkAnimationFrameData),
	alignof(FLiveLinkAnimationFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton;
}
// End ScriptStruct FLiveLinkAnimationFrameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkSkeletonStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewStructOps, TEXT("LiveLinkSkeletonStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSkeletonStaticData), 3287994990U) },
		{ FLiveLinkAnimationFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewStructOps, TEXT("LiveLinkAnimationFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkAnimationFrameData), 63387462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_2103747884(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
