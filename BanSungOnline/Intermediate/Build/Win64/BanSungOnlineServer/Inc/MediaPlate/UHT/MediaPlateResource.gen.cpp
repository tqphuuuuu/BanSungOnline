// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlate/Public/MediaPlateResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlateResource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAPLATE_API UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType();
MEDIAPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlateResource();
UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References

// Begin Enum EMediaPlateResourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlateResourceType;
static UEnum* EMediaPlateResourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType, (UObject*)Z_Construct_UPackage__Script_MediaPlate(), TEXT("EMediaPlateResourceType"));
	}
	return Z_Registration_Info_UEnum_EMediaPlateResourceType.OuterSingleton;
}
template<> MEDIAPLATE_API UEnum* StaticEnum<EMediaPlateResourceType>()
{
	return EMediaPlateResourceType_StaticEnum();
}
struct Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset.Name", "EMediaPlateResourceType::Asset" },
		{ "External.Name", "EMediaPlateResourceType::External" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "Playlist.Name", "EMediaPlateResourceType::Playlist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlateResourceType::Playlist", (int64)EMediaPlateResourceType::Playlist },
		{ "EMediaPlateResourceType::External", (int64)EMediaPlateResourceType::External },
		{ "EMediaPlateResourceType::Asset", (int64)EMediaPlateResourceType::Asset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaPlate,
	nullptr,
	"EMediaPlateResourceType",
	"EMediaPlateResourceType",
	Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType()
{
	if (!Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton, Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlateResourceType.InnerSingleton;
}
// End Enum EMediaPlateResourceType

// Begin ScriptStruct FMediaPlateResource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlateResource;
class UScriptStruct* FMediaPlateResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlateResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlateResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlateResource, (UObject*)Z_Construct_UPackage__Script_MediaPlate(), TEXT("MediaPlateResource"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlateResource.OuterSingleton;
}
template<> MEDIAPLATE_API UScriptStruct* StaticStruct<FMediaPlateResource>()
{
	return FMediaPlateResource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaPlateResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper struct to wrap source selection functionality,\n * and enabling the usage of media source properties for places like Remote Control.\n *\n * This struct allows to choose between Asset, External File, Playlist options.\n * It's mainly conceived to be used by MediaPlateComponent.\n *\n * See FMediaPlayerResourceCustomization class for its customization.\n */" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "Helper struct to wrap source selection functionality,\nand enabling the usage of media source properties for places like Remote Control.\n\nThis struct allows to choose between Asset, External File, Playlist options.\nIt's mainly conceived to be used by MediaPlateComponent.\n\nSee FMediaPlayerResourceCustomization class for its customization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Media Source Type */" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "Media Source Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalMediaPath_MetaData[] = {
		{ "Comment", "/** A path pointing to an external media resource */" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "A path pointing to an external media resource" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalMedia_MetaData[] = {
		{ "Comment", "/** Media Source loaded from external path */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "Media Source loaded from external path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaAsset_MetaData[] = {
		{ "Comment", "/** Media source coming from MediaSource asset*/" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "Media source coming from MediaSource asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePlaylist_MetaData[] = {
		{ "Comment", "/** User facing Playlist asset */" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "User facing Playlist asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlaylist_MetaData[] = {
		{ "Comment", "/** Currently running Playlist asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateResource.h" },
		{ "ToolTip", "Currently running Playlist asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalMediaPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalMedia;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MediaAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourcePlaylist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePlaylist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlateResource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, Type), Z_Construct_UEnum_MediaPlate_EMediaPlateResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1510313737
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ExternalMediaPath = { "ExternalMediaPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, ExternalMediaPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalMediaPath_MetaData), NewProp_ExternalMediaPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ExternalMedia = { "ExternalMedia", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, ExternalMedia), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalMedia_MetaData), NewProp_ExternalMedia_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_MediaAsset = { "MediaAsset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, MediaAsset), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaAsset_MetaData), NewProp_MediaAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_SourcePlaylist = { "SourcePlaylist", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, SourcePlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePlaylist_MetaData), NewProp_SourcePlaylist_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ActivePlaylist = { "ActivePlaylist", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaPlateResource, ActivePlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePlaylist_MetaData), NewProp_ActivePlaylist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlateResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ExternalMediaPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ExternalMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_MediaAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_SourcePlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewProp_ActivePlaylist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlateResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlateResource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
	nullptr,
	&NewStructOps,
	"MediaPlateResource",
	Z_Construct_UScriptStruct_FMediaPlateResource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlateResource_Statics::PropPointers),
	sizeof(FMediaPlateResource),
	alignof(FMediaPlateResource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlateResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaPlateResource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaPlateResource()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlateResource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlateResource.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlateResource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaPlateResource.InnerSingleton;
}
// End ScriptStruct FMediaPlateResource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaPlateResourceType_StaticEnum, TEXT("EMediaPlateResourceType"), &Z_Registration_Info_UEnum_EMediaPlateResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1510313737U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaPlateResource::StaticStruct, Z_Construct_UScriptStruct_FMediaPlateResource_Statics::NewStructOps, TEXT("MediaPlateResource"), &Z_Registration_Info_UScriptStruct_MediaPlateResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlateResource), 2709895088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_2046848340(TEXT("/Script/MediaPlate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateResource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
