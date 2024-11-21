// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomBuildSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin ScriptStruct FGroomConversionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomConversionSettings;
class UScriptStruct* FGroomConversionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomConversionSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomConversionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomConversionSettings>()
{
	return FGroomConversionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomConversionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Rotation in Euler angles in degrees to fix up or front axes */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Rotation in Euler angles in degrees to fix up or front axes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Scale value to convert file unit into centimeters */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Scale value to convert file unit into centimeters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomConversionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomConversionSettings, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomConversionSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomConversionSettings",
	Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers),
	sizeof(FGroomConversionSettings),
	alignof(FGroomConversionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton;
}
// End ScriptStruct FGroomConversionSettings

// Begin Enum EGroomInterpolationQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationQuality;
static UEnum* EGroomInterpolationQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationQuality"));
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationQuality>()
{
	return EGroomInterpolationQuality_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High" },
		{ "High.Name", "EGroomInterpolationQuality::High" },
		{ "High.ToolTip", "Build interpolation data using curve shape matching search. This result in high quality interpolation data, but is relatively slow to build (can takes several dozen of minutes)" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EGroomInterpolationQuality::Low" },
		{ "Low.ToolTip", "Build interpolation data based on nearst neighbor search. Low quality interpolation data, but fast to build (takes a few minutes)" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EGroomInterpolationQuality::Medium" },
		{ "Medium.ToolTip", "Build interpolation data using curve shape matching search but within a limited spatial range. This is a tradeoff between Low and high quality in term of quality & build time (can takes several dozen of minutes)" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EGroomInterpolationQuality::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomInterpolationQuality::Low", (int64)EGroomInterpolationQuality::Low },
		{ "EGroomInterpolationQuality::Medium", (int64)EGroomInterpolationQuality::Medium },
		{ "EGroomInterpolationQuality::High", (int64)EGroomInterpolationQuality::High },
		{ "EGroomInterpolationQuality::Unknown", (int64)EGroomInterpolationQuality::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomInterpolationQuality",
	"EGroomInterpolationQuality",
	Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton;
}
// End Enum EGroomInterpolationQuality

// Begin Enum EGroomInterpolationWeight
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationWeight;
static UEnum* EGroomInterpolationWeight_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationWeight"));
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationWeight>()
{
	return EGroomInterpolationWeight_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EGroomInterpolationWeight::Index" },
		{ "Index.ToolTip", "Build interpolation data based on guide and strands vertex indices" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "Parametric.DisplayName", "Parametric" },
		{ "Parametric.Name", "EGroomInterpolationWeight::Parametric" },
		{ "Parametric.ToolTip", "Build interpolation data based on curve parametric distance" },
		{ "Root.DisplayName", "Root" },
		{ "Root.Name", "EGroomInterpolationWeight::Root" },
		{ "Root.ToolTip", "Build interpolation data based on distance between guide's root and strands's root" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EGroomInterpolationWeight::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomInterpolationWeight::Parametric", (int64)EGroomInterpolationWeight::Parametric },
		{ "EGroomInterpolationWeight::Root", (int64)EGroomInterpolationWeight::Root },
		{ "EGroomInterpolationWeight::Index", (int64)EGroomInterpolationWeight::Index },
		{ "EGroomInterpolationWeight::Unknown", (int64)EGroomInterpolationWeight::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomInterpolationWeight",
	"EGroomInterpolationWeight",
	Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton;
}
// End Enum EGroomInterpolationWeight

// Begin ScriptStruct FGroomBuildSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomBuildSettings;
class UScriptStruct* FGroomBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomBuildSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomBuildSettings>()
{
	return FGroomBuildSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomBuildSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGuides_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "If checked, override imported guides with generated ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairToGuideDensity_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Density factor for converting hair into guide curve if no guides are provided. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Density factor for converting hair into guide curve if no guides are provided." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationQuality_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Interpolation data quality. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Interpolation data quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationDistance_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Interpolation distance metric. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Interpolation distance metric." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeGuide_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Randomize which guides affect a given hair strand. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Randomize which guides affect a given hair strand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUniqueGuide_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Force a hair strand to be affected by a unique guide. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Force a hair strand to be affected by a unique guide." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideGuides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGuides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairToGuideDensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationDistance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationDistance;
	static void NewProp_bRandomizeGuide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeGuide;
	static void NewProp_bUseUniqueGuide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUniqueGuide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomBuildSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_SetBit(void* Obj)
{
	((FGroomBuildSettings*)Obj)->bOverrideGuides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides = { "bOverrideGuides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGuides_MetaData), NewProp_bOverrideGuides_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity = { "HairToGuideDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomBuildSettings, HairToGuideDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairToGuideDensity_MetaData), NewProp_HairToGuideDensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality = { "InterpolationQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomBuildSettings, InterpolationQuality), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationQuality_MetaData), NewProp_InterpolationQuality_MetaData) }; // 2557629815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance = { "InterpolationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomBuildSettings, InterpolationDistance), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationDistance_MetaData), NewProp_InterpolationDistance_MetaData) }; // 2653674439
void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_SetBit(void* Obj)
{
	((FGroomBuildSettings*)Obj)->bRandomizeGuide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide = { "bRandomizeGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeGuide_MetaData), NewProp_bRandomizeGuide_MetaData) };
void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_SetBit(void* Obj)
{
	((FGroomBuildSettings*)Obj)->bUseUniqueGuide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide = { "bUseUniqueGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUniqueGuide_MetaData), NewProp_bUseUniqueGuide_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomBuildSettings",
	Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers),
	sizeof(FGroomBuildSettings),
	alignof(FGroomBuildSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomBuildSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton;
}
// End ScriptStruct FGroomBuildSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGroomInterpolationQuality_StaticEnum, TEXT("EGroomInterpolationQuality"), &Z_Registration_Info_UEnum_EGroomInterpolationQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2557629815U) },
		{ EGroomInterpolationWeight_StaticEnum, TEXT("EGroomInterpolationWeight"), &Z_Registration_Info_UEnum_EGroomInterpolationWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2653674439U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGroomConversionSettings::StaticStruct, Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewStructOps, TEXT("GroomConversionSettings"), &Z_Registration_Info_UScriptStruct_GroomConversionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomConversionSettings), 3627081983U) },
		{ FGroomBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewStructOps, TEXT("GroomBuildSettings"), &Z_Registration_Info_UScriptStruct_GroomBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomBuildSettings), 31374421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_1435940515(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
