// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomAssetRendering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetRendering() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGeometrySettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsRendering();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairShadowSettings();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin ScriptStruct FHairGeometrySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGeometrySettings;
class UScriptStruct* FHairGeometrySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGeometrySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGeometrySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGeometrySettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGeometrySettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairGeometrySettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGeometrySettings>()
{
	return FHairGeometrySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGeometrySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairWidth_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Hair width (in centimeters) */" },
		{ "editcondition", "HairWidth_Override" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Hair width (in centimeters)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairWidth_Override_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRootScale_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair width at the root */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair width at the root" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairTipScale_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair width at the tip */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair width at the tip" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.001" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairWidth;
	static void NewProp_HairWidth_Override_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HairWidth_Override;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRootScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairTipScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGeometrySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth = { "HairWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGeometrySettings, HairWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairWidth_MetaData), NewProp_HairWidth_MetaData) };
void Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth_Override_SetBit(void* Obj)
{
	((FHairGeometrySettings*)Obj)->HairWidth_Override = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth_Override = { "HairWidth_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGeometrySettings), &Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth_Override_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairWidth_Override_MetaData), NewProp_HairWidth_Override_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairRootScale = { "HairRootScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGeometrySettings, HairRootScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRootScale_MetaData), NewProp_HairRootScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairTipScale = { "HairTipScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGeometrySettings, HairTipScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairTipScale_MetaData), NewProp_HairTipScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairWidth_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairRootScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewProp_HairTipScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGeometrySettings",
	Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::PropPointers),
	sizeof(FHairGeometrySettings),
	alignof(FHairGeometrySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGeometrySettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairGeometrySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGeometrySettings.InnerSingleton, Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGeometrySettings.InnerSingleton;
}
// End ScriptStruct FHairGeometrySettings

// Begin ScriptStruct FHairShadowSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairShadowSettings;
class UScriptStruct* FHairShadowSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairShadowSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairShadowSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairShadowSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairShadowSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairShadowSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairShadowSettings>()
{
	return FHairShadowSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairShadowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairShadowDensity_MetaData[] = {
		{ "Category", "ShadowSettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Override the hair shadow density factor (unit less). */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Override the hair shadow density factor (unit less)." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairRaytracingRadiusScale_MetaData[] = {
		{ "Category", "ShadowSettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale the hair geometry radius for ray tracing effects (e.g. shadow) */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Scale the hair geometry radius for ray tracing effects (e.g. shadow)" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHairRaytracingGeometry_MetaData[] = {
		{ "Category", "ShadowSettings" },
		{ "Comment", "/** Enable hair strands geomtry for raytracing */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Enable hair strands geomtry for raytracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVoxelize_MetaData[] = {
		{ "Category", "ShadowSettings" },
		{ "Comment", "/** Enable stands voxelize for casting shadow and environment occlusion */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Enable stands voxelize for casting shadow and environment occlusion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairShadowDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairRaytracingRadiusScale;
	static void NewProp_bUseHairRaytracingGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHairRaytracingGeometry;
	static void NewProp_bVoxelize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxelize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairShadowSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_HairShadowDensity = { "HairShadowDensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairShadowSettings, HairShadowDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairShadowDensity_MetaData), NewProp_HairShadowDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_HairRaytracingRadiusScale = { "HairRaytracingRadiusScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairShadowSettings, HairRaytracingRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairRaytracingRadiusScale_MetaData), NewProp_HairRaytracingRadiusScale_MetaData) };
void Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bUseHairRaytracingGeometry_SetBit(void* Obj)
{
	((FHairShadowSettings*)Obj)->bUseHairRaytracingGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bUseHairRaytracingGeometry = { "bUseHairRaytracingGeometry", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairShadowSettings), &Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bUseHairRaytracingGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHairRaytracingGeometry_MetaData), NewProp_bUseHairRaytracingGeometry_MetaData) };
void Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bVoxelize_SetBit(void* Obj)
{
	((FHairShadowSettings*)Obj)->bVoxelize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bVoxelize = { "bVoxelize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairShadowSettings), &Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bVoxelize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVoxelize_MetaData), NewProp_bVoxelize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairShadowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_HairShadowDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_HairRaytracingRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bUseHairRaytracingGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewProp_bVoxelize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairShadowSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairShadowSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairShadowSettings",
	Z_Construct_UScriptStruct_FHairShadowSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairShadowSettings_Statics::PropPointers),
	sizeof(FHairShadowSettings),
	alignof(FHairShadowSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairShadowSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairShadowSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairShadowSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairShadowSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairShadowSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairShadowSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairShadowSettings.InnerSingleton;
}
// End ScriptStruct FHairShadowSettings

// Begin ScriptStruct FHairAdvancedRenderingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings;
class UScriptStruct* FHairAdvancedRenderingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairAdvancedRenderingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairAdvancedRenderingSettings>()
{
	return FHairAdvancedRenderingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStableRasterization_MetaData[] = {
		{ "Category", "AdvancedRenderingSettings" },
		{ "Comment", "/** Insure the hair does not alias. When enable, group of hairs might appear thicker. Isolated hair should remain thin. */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Insure the hair does not alias. When enable, group of hairs might appear thicker. Isolated hair should remain thin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScatterSceneLighting_MetaData[] = {
		{ "Category", "AdvancedRenderingSettings" },
		{ "Comment", "/** Light hair with the scene color. This is used for vellus/short hair to bring light from the surrounding surface, like skin. */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Light hair with the scene color. This is used for vellus/short hair to bring light from the surrounding surface, like skin." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseStableRasterization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStableRasterization;
	static void NewProp_bScatterSceneLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScatterSceneLighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairAdvancedRenderingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bUseStableRasterization_SetBit(void* Obj)
{
	((FHairAdvancedRenderingSettings*)Obj)->bUseStableRasterization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bUseStableRasterization = { "bUseStableRasterization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairAdvancedRenderingSettings), &Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bUseStableRasterization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStableRasterization_MetaData), NewProp_bUseStableRasterization_MetaData) };
void Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bScatterSceneLighting_SetBit(void* Obj)
{
	((FHairAdvancedRenderingSettings*)Obj)->bScatterSceneLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bScatterSceneLighting = { "bScatterSceneLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairAdvancedRenderingSettings), &Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bScatterSceneLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScatterSceneLighting_MetaData), NewProp_bScatterSceneLighting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bUseStableRasterization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewProp_bScatterSceneLighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairAdvancedRenderingSettings",
	Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::PropPointers),
	sizeof(FHairAdvancedRenderingSettings),
	alignof(FHairAdvancedRenderingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings.InnerSingleton;
}
// End ScriptStruct FHairAdvancedRenderingSettings

// Begin ScriptStruct FHairGroupsRendering
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsRendering;
class UScriptStruct* FHairGroupsRendering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsRendering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsRendering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsRendering, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsRendering"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsRendering.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsRendering>()
{
	return FHairGroupsRendering::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupsRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySettings_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Geometry settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSettings_MetaData[] = {
		{ "Category", "ShadowSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Shadow settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "MiscSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetRendering.h" },
		{ "ToolTip", "Advanced rendering settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometrySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsRendering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsRendering, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsRendering, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_GeometrySettings = { "GeometrySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsRendering, GeometrySettings), Z_Construct_UScriptStruct_FHairGeometrySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySettings_MetaData), NewProp_GeometrySettings_MetaData) }; // 687020739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_ShadowSettings = { "ShadowSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsRendering, ShadowSettings), Z_Construct_UScriptStruct_FHairShadowSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowSettings_MetaData), NewProp_ShadowSettings_MetaData) }; // 751459525
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsRendering, AdvancedSettings), Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 2316226254
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_GeometrySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_ShadowSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupsRendering",
	Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::PropPointers),
	sizeof(FHairGroupsRendering),
	alignof(FHairGroupsRendering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsRendering()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsRendering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsRendering.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsRendering.InnerSingleton;
}
// End ScriptStruct FHairGroupsRendering

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetRendering_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHairGeometrySettings::StaticStruct, Z_Construct_UScriptStruct_FHairGeometrySettings_Statics::NewStructOps, TEXT("HairGeometrySettings"), &Z_Registration_Info_UScriptStruct_HairGeometrySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGeometrySettings), 687020739U) },
		{ FHairShadowSettings::StaticStruct, Z_Construct_UScriptStruct_FHairShadowSettings_Statics::NewStructOps, TEXT("HairShadowSettings"), &Z_Registration_Info_UScriptStruct_HairShadowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairShadowSettings), 751459525U) },
		{ FHairAdvancedRenderingSettings::StaticStruct, Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings_Statics::NewStructOps, TEXT("HairAdvancedRenderingSettings"), &Z_Registration_Info_UScriptStruct_HairAdvancedRenderingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairAdvancedRenderingSettings), 2316226254U) },
		{ FHairGroupsRendering::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsRendering_Statics::NewStructOps, TEXT("HairGroupsRendering"), &Z_Registration_Info_UScriptStruct_HairGroupsRendering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsRendering), 3569185978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetRendering_h_132057399(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetRendering_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetRendering_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS