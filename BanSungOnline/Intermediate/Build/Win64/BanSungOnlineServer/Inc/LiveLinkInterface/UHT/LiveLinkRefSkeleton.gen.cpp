// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkRefSkeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkRefSkeleton
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton;
class UScriptStruct* FLiveLinkRefSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkRefSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkRefSkeleton>()
{
	return FLiveLinkRefSkeleton::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "Comment", "// Names of each bone in the skeleton\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[] = {
		{ "Comment", "// Parent Indices: For each bone it specifies the index of its parent\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneParents_MetaData), NewProp_BoneParents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkRefSkeleton",
	Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers),
	sizeof(FLiveLinkRefSkeleton),
	alignof(FLiveLinkRefSkeleton),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton;
}
// End ScriptStruct FLiveLinkRefSkeleton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkRefSkeleton::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewStructOps, TEXT("LiveLinkRefSkeleton"), &Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRefSkeleton), 3061382430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_1561002165(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
