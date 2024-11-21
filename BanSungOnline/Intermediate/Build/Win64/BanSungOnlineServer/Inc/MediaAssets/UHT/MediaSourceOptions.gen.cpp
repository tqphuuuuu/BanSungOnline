// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaSourceOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSourceOptions() {}

// Begin Cross Module References
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin ScriptStruct FMediaSourceCacheSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings;
class UScriptStruct* FMediaSourceCacheSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaSourceCacheSettings, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaSourceCacheSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.OuterSingleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaSourceCacheSettings>()
{
	return FMediaSourceCacheSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Cache settings to pass to the player. */" },
		{ "ModuleRelativePath", "Public/MediaSourceOptions.h" },
		{ "ToolTip", "Cache settings to pass to the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[] = {
		{ "Category", "Media Cache" },
		{ "Comment", "/**\n\x09 * Override the default cache settings.\n\x09 * Currently only the ImgMedia player supports these settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSourceOptions.h" },
		{ "ToolTip", "Override the default cache settings.\nCurrently only the ImgMedia player supports these settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToLookAhead_MetaData[] = {
		{ "Category", "Media Cache" },
		{ "Comment", "/**\n\x09 * The cache will fill up with frames that are up to this time from the current time.\n\x09 * E.g. if this is 0.2, and we are at time index 5 seconds,\n\x09 * then we will fill the cache with frames between 5 seconds and 5.2 seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSourceOptions.h" },
		{ "ToolTip", "The cache will fill up with frames that are up to this time from the current time.\nE.g. if this is 0.2, and we are at time index 5 seconds,\nthen we will fill the cache with frames between 5 seconds and 5.2 seconds." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToLookAhead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaSourceCacheSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_SetBit(void* Obj)
{
	((FMediaSourceCacheSettings*)Obj)->bOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMediaSourceCacheSettings), &Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MetaData), NewProp_bOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead = { "TimeToLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaSourceCacheSettings, TimeToLookAhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToLookAhead_MetaData), NewProp_TimeToLookAhead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_bOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewProp_TimeToLookAhead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	&NewStructOps,
	"MediaSourceCacheSettings",
	Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::PropPointers),
	sizeof(FMediaSourceCacheSettings),
	alignof(FMediaSourceCacheSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton, Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings.InnerSingleton;
}
// End ScriptStruct FMediaSourceCacheSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaSourceCacheSettings::StaticStruct, Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics::NewStructOps, TEXT("MediaSourceCacheSettings"), &Z_Registration_Info_UScriptStruct_MediaSourceCacheSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaSourceCacheSettings), 3089397225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h_3874326389(TEXT("/Script/MediaAssets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
