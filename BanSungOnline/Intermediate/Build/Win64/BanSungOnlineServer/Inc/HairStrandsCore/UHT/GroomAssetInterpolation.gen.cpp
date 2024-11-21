// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomAssetInterpolation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetInterpolation() {}

// Begin Cross Module References
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGuideType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomLODMode();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairDecimationSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairDeformationSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairInterpolationSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairLODSettings();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EHairInterpolationQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairInterpolationQuality;
static UEnum* EHairInterpolationQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairInterpolationQuality"));
	}
	return Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationQuality>()
{
	return EHairInterpolationQuality_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High" },
		{ "High.Name", "EHairInterpolationQuality::High" },
		{ "High.ToolTip", "Build interpolation data using curve shape matching search. This result in high quality interpolation data, but is relatively slow to build (can takes several dozen of minutes)" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EHairInterpolationQuality::Low" },
		{ "Low.ToolTip", "Build interpolation data based on nearst neighbor search. Low quality interpolation data, but fast to build (takes a few minutes)" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EHairInterpolationQuality::Medium" },
		{ "Medium.ToolTip", "Build interpolation data using curve shape matching search but within a limited spatial range. This is a tradeoff between Low and high quality in term of quality & build time (can takes several dozen of minutes)" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EHairInterpolationQuality::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHairInterpolationQuality::Low", (int64)EHairInterpolationQuality::Low },
		{ "EHairInterpolationQuality::Medium", (int64)EHairInterpolationQuality::Medium },
		{ "EHairInterpolationQuality::High", (int64)EHairInterpolationQuality::High },
		{ "EHairInterpolationQuality::Unknown", (int64)EHairInterpolationQuality::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EHairInterpolationQuality",
	"EHairInterpolationQuality",
	Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality()
{
	if (!Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton;
}
// End Enum EHairInterpolationQuality

// Begin Enum EHairInterpolationWeight
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairInterpolationWeight;
static UEnum* EHairInterpolationWeight_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairInterpolationWeight"));
	}
	return Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationWeight>()
{
	return EHairInterpolationWeight_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EHairInterpolationWeight::Distance" },
		{ "Distance.ToolTip", "Build interpolation data based on curve euclidean distance" },
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EHairInterpolationWeight::Index" },
		{ "Index.ToolTip", "Build interpolation data based on guide and strands vertex indices" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Parametric.DisplayName", "Parametric" },
		{ "Parametric.Name", "EHairInterpolationWeight::Parametric" },
		{ "Parametric.ToolTip", "Build interpolation data based on curve parametric distance" },
		{ "Root.DisplayName", "Root" },
		{ "Root.Name", "EHairInterpolationWeight::Root" },
		{ "Root.ToolTip", "Build interpolation data based on distance between guide's root and strands's root" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EHairInterpolationWeight::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHairInterpolationWeight::Parametric", (int64)EHairInterpolationWeight::Parametric },
		{ "EHairInterpolationWeight::Root", (int64)EHairInterpolationWeight::Root },
		{ "EHairInterpolationWeight::Index", (int64)EHairInterpolationWeight::Index },
		{ "EHairInterpolationWeight::Distance", (int64)EHairInterpolationWeight::Distance },
		{ "EHairInterpolationWeight::Unknown", (int64)EHairInterpolationWeight::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EHairInterpolationWeight",
	"EHairInterpolationWeight",
	Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight()
{
	if (!Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton;
}
// End Enum EHairInterpolationWeight

// Begin Enum EGroomGeometryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomGeometryType;
static UEnum* EGroomGeometryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomGeometryType"));
	}
	return Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomGeometryType>()
{
	return EGroomGeometryType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cards.Name", "EGroomGeometryType::Cards" },
		{ "Meshes.Name", "EGroomGeometryType::Meshes" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Strands.Name", "EGroomGeometryType::Strands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomGeometryType::Strands", (int64)EGroomGeometryType::Strands },
		{ "EGroomGeometryType::Cards", (int64)EGroomGeometryType::Cards },
		{ "EGroomGeometryType::Meshes", (int64)EGroomGeometryType::Meshes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomGeometryType",
	"EGroomGeometryType",
	Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType()
{
	if (!Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton;
}
// End Enum EGroomGeometryType

// Begin Enum EGroomBindingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBindingType;
static UEnum* EGroomBindingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBindingType"));
	}
	return Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingType>()
{
	return EGroomBindingType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "NoneBinding.Hidden", "" },
		{ "NoneBinding.Name", "EGroomBindingType::NoneBinding" },
		{ "Rigid.DisplayName", "Rigid" },
		{ "Rigid.Name", "EGroomBindingType::Rigid" },
		{ "Rigid.ToolTip", "When attached to a skeltal mesh, the hair follow the provided attachement name" },
		{ "Skinning.DisplayName", "Skinning" },
		{ "Skinning.Name", "EGroomBindingType::Skinning" },
		{ "Skinning.ToolTip", "When attached to a skeltal mesh, the hair follow the skin surface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomBindingType::NoneBinding", (int64)EGroomBindingType::NoneBinding },
		{ "EGroomBindingType::Rigid", (int64)EGroomBindingType::Rigid },
		{ "EGroomBindingType::Skinning", (int64)EGroomBindingType::Skinning },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomBindingType",
	"EGroomBindingType",
	Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingType()
{
	if (!Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton;
}
// End Enum EGroomBindingType

// Begin Enum EGroomOverrideType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomOverrideType;
static UEnum* EGroomOverrideType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomOverrideType"));
	}
	return Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomOverrideType>()
{
	return EGroomOverrideType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EGroomOverrideType::Auto" },
		{ "Auto.ToolTip", "Use the asset value" },
		{ "BlueprintType", "true" },
		{ "Disable.DisplayName", "Disable" },
		{ "Disable.Name", "EGroomOverrideType::Disable" },
		{ "Disable.ToolTip", "Override the asset value, and force disabled" },
		{ "Enable.DisplayName", "Enable" },
		{ "Enable.Name", "EGroomOverrideType::Enable" },
		{ "Enable.ToolTip", "Override the asset value, and force enabled" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomOverrideType::Auto", (int64)EGroomOverrideType::Auto },
		{ "EGroomOverrideType::Enable", (int64)EGroomOverrideType::Enable },
		{ "EGroomOverrideType::Disable", (int64)EGroomOverrideType::Disable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomOverrideType",
	"EGroomOverrideType",
	Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType()
{
	if (!Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton;
}
// End Enum EGroomOverrideType

// Begin Enum EGroomGuideType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomGuideType;
static UEnum* EGroomGuideType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomGuideType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomGuideType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomGuideType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomGuideType"));
	}
	return Z_Registration_Info_UEnum_EGroomGuideType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomGuideType>()
{
	return EGroomGuideType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Generated.DisplayName", "Generated Guides" },
		{ "Generated.Name", "EGroomGuideType::Generated" },
		{ "Generated.ToolTip", "Generate guides from imported strands" },
		{ "Imported.DisplayName", "Imported Guides" },
		{ "Imported.Name", "EGroomGuideType::Imported" },
		{ "Imported.ToolTip", "Use imported asset guides." },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Rigged.DisplayName", "Rigged  Guides" },
		{ "Rigged.Name", "EGroomGuideType::Rigged" },
		{ "Rigged.ToolTip", "Generated rigged guides from imported strands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomGuideType::Imported", (int64)EGroomGuideType::Imported },
		{ "EGroomGuideType::Generated", (int64)EGroomGuideType::Generated },
		{ "EGroomGuideType::Rigged", (int64)EGroomGuideType::Rigged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomGuideType",
	"EGroomGuideType",
	Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGuideType()
{
	if (!Z_Registration_Info_UEnum_EGroomGuideType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomGuideType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomGuideType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomGuideType.InnerSingleton;
}
// End Enum EGroomGuideType

// Begin Enum EGroomLODMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomLODMode;
static UEnum* EGroomLODMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomLODMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomLODMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomLODMode, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomLODMode"));
	}
	return Z_Registration_Info_UEnum_EGroomLODMode.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomLODMode>()
{
	return EGroomLODMode_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EGroomLODMode::Auto" },
		{ "Auto.ToolTip", "Hair strands curves & points automatically adapt based on screen coverage. LOD settings are ignored." },
		{ "BlueprintType", "true" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EGroomLODMode::Default" },
		{ "Default.ToolTip", "Hair strands curves & points adapt based on project settings LOD mode. (See 'Use Auto LOD' in project settings). " },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EGroomLODMode::Manual" },
		{ "Manual.ToolTip", "Hair strands curves & points adapt based on LOD settings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomLODMode::Default", (int64)EGroomLODMode::Default },
		{ "EGroomLODMode::Manual", (int64)EGroomLODMode::Manual },
		{ "EGroomLODMode::Auto", (int64)EGroomLODMode::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomLODMode",
	"EGroomLODMode",
	Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomLODMode()
{
	if (!Z_Registration_Info_UEnum_EGroomLODMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomLODMode.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomLODMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomLODMode.InnerSingleton;
}
// End Enum EGroomLODMode

// Begin ScriptStruct FHairLODSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairLODSettings;
class UScriptStruct* FHairLODSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairLODSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairLODSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairLODSettings>()
{
	return FHairLODSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairLODSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of points for each hair strands" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularThreshold_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Max angular difference between adjacents vertices to remove vertices during simplification, in degrees" },
		{ "UIMax", "45.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Screen size at which this LOD should be enabled" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Scales the hair Strands radius. This can be used for manually compensating the reduction of curves." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If disable, the hair strands won't be rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Defines the type of geometry used by this LOD (Strands, Cards, or Meshes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Defines the type of attachment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Groom simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalInterpolation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "DisplayName", "RBF Interpolation" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Global interpolation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveDecimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDecimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Simulation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Simulation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairLODSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation = { "CurveDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, CurveDecimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveDecimation_MetaData), NewProp_CurveDecimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation = { "VertexDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, VertexDecimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexDecimation_MetaData), NewProp_VertexDecimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold = { "AngularThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, AngularThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularThreshold_MetaData), NewProp_AngularThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, ThicknessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThicknessScale_MetaData), NewProp_ThicknessScale_MetaData) };
void Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FHairLODSettings*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairLODSettings), &Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, GeometryType), Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryType_MetaData), NewProp_GeometryType_MetaData) }; // 504307983
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, BindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingType_MetaData), NewProp_BindingType_MetaData) }; // 2688121277
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, Simulation), Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Simulation_MetaData), NewProp_Simulation_MetaData) }; // 1330710989
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation = { "GlobalInterpolation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairLODSettings, GlobalInterpolation), Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalInterpolation_MetaData), NewProp_GlobalInterpolation_MetaData) }; // 1330710989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairLODSettings",
	Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers),
	sizeof(FHairLODSettings),
	alignof(FHairLODSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairLODSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairLODSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairLODSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton;
}
// End ScriptStruct FHairLODSettings

// Begin ScriptStruct FHairDecimationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairDecimationSettings;
class UScriptStruct* FHairDecimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairDecimationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairDecimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairDecimationSettings>()
{
	return FHairDecimationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairDecimationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of verties for each hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveDecimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDecimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairDecimationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation = { "CurveDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairDecimationSettings, CurveDecimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveDecimation_MetaData), NewProp_CurveDecimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation = { "VertexDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairDecimationSettings, VertexDecimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexDecimation_MetaData), NewProp_VertexDecimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairDecimationSettings",
	Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers),
	sizeof(FHairDecimationSettings),
	alignof(FHairDecimationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairDecimationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton;
}
// End ScriptStruct FHairDecimationSettings

// Begin ScriptStruct FHairInterpolationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairInterpolationSettings;
class UScriptStruct* FHairInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairInterpolationSettings>()
{
	return FHairInterpolationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuideType_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Type of guides:\n - Imported: use imported guides\n - Generated: generate guides from strands\n - Rigged: generated rigged guides from strands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGuides_MetaData[] = {
		{ "Comment", "/** Flag to override the imported guides with generated guides. DEPRECATED */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Flag to override the imported guides with generated guides. DEPRECATED" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairToGuideDensity_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Density factor for converting hair into guide curve if no guides are provided. The value should be between 0 and 1, and can be thought as a ratio/percentage of strands used as guides.*/" },
		{ "DisplayName", "Generated guide density" },
		{ "EditCondition", "GuideType == EGroomGuideType::Generated" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Density factor for converting hair into guide curve if no guides are provided. The value should be between 0 and 1, and can be thought as a ratio/percentage of strands used as guides." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiggedGuideNumCurves_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "DisplayName", "Rigged guide num. curves" },
		{ "EditCondition", "GuideType == EGroomGuideType::Rigged" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Number of guides that will be generated on the groom and the skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiggedGuideNumPoints_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "DisplayName", "Rigged guide num. points" },
		{ "EditCondition", "GuideType == EGroomGuideType::Rigged" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Number of points/bones per generated guide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationQuality_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Interpolation data quality. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation data quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationDistance_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Interpolation distance metric. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation distance metric." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeGuide_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Randomize which guides affect a given hair strand. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Randomize which guides affect a given hair strand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUniqueGuide_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Force a hair strand to be affected by a unique guide. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Force a hair strand to be affected by a unique guide." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GuideType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GuideType;
	static void NewProp_bOverrideGuides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGuides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairToGuideDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RiggedGuideNumCurves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RiggedGuideNumPoints;
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairInterpolationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_GuideType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_GuideType = { "GuideType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, GuideType), Z_Construct_UEnum_HairStrandsCore_EGroomGuideType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuideType_MetaData), NewProp_GuideType_MetaData) }; // 1303421326
void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_SetBit(void* Obj)
{
	((FHairInterpolationSettings*)Obj)->bOverrideGuides_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides = { "bOverrideGuides", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideGuides_MetaData), NewProp_bOverrideGuides_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity = { "HairToGuideDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, HairToGuideDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairToGuideDensity_MetaData), NewProp_HairToGuideDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_RiggedGuideNumCurves = { "RiggedGuideNumCurves", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, RiggedGuideNumCurves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiggedGuideNumCurves_MetaData), NewProp_RiggedGuideNumCurves_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_RiggedGuideNumPoints = { "RiggedGuideNumPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, RiggedGuideNumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiggedGuideNumPoints_MetaData), NewProp_RiggedGuideNumPoints_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality = { "InterpolationQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, InterpolationQuality), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationQuality_MetaData), NewProp_InterpolationQuality_MetaData) }; // 3032614602
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance = { "InterpolationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairInterpolationSettings, InterpolationDistance), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationDistance_MetaData), NewProp_InterpolationDistance_MetaData) }; // 588027370
void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_SetBit(void* Obj)
{
	((FHairInterpolationSettings*)Obj)->bRandomizeGuide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide = { "bRandomizeGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeGuide_MetaData), NewProp_bRandomizeGuide_MetaData) };
void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_SetBit(void* Obj)
{
	((FHairInterpolationSettings*)Obj)->bUseUniqueGuide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide = { "bUseUniqueGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUniqueGuide_MetaData), NewProp_bUseUniqueGuide_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_GuideType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_GuideType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_RiggedGuideNumCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_RiggedGuideNumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairInterpolationSettings",
	Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers),
	sizeof(FHairInterpolationSettings),
	alignof(FHairInterpolationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairInterpolationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton;
}
// End ScriptStruct FHairInterpolationSettings

// Begin ScriptStruct FHairDeformationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairDeformationSettings;
class UScriptStruct* FHairDeformationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairDeformationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairDeformationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairDeformationSettings>()
{
	return FHairDeformationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairDeformationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRigging_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRigging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRigging;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairDeformationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_SetBit(void* Obj)
{
	((FHairDeformationSettings*)Obj)->bEnableRigging_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging = { "bEnableRigging", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairDeformationSettings), &Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRigging_MetaData), NewProp_bEnableRigging_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairDeformationSettings, NumCurves_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCurves_MetaData), NewProp_NumCurves_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairDeformationSettings, NumPoints_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairDeformationSettings",
	Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers),
	sizeof(FHairDeformationSettings),
	alignof(FHairDeformationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairDeformationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton;
}
// End ScriptStruct FHairDeformationSettings

// Begin ScriptStruct FHairGroupsInterpolation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsInterpolation;
class UScriptStruct* FHairGroupsInterpolation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsInterpolation, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsInterpolation"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsInterpolation>()
{
	return FHairGroupsInterpolation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecimationSettings_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Decimation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiggingSettings_MetaData[] = {
		{ "Comment", "// DEPRECATED\n" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "DEPRECATED" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecimationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiggingSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsInterpolation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings = { "DecimationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsInterpolation, DecimationSettings), Z_Construct_UScriptStruct_FHairDecimationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecimationSettings_MetaData), NewProp_DecimationSettings_MetaData) }; // 2590643831
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsInterpolation, InterpolationSettings), Z_Construct_UScriptStruct_FHairInterpolationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSettings_MetaData), NewProp_InterpolationSettings_MetaData) }; // 2962523248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings = { "RiggingSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsInterpolation, RiggingSettings), Z_Construct_UScriptStruct_FHairDeformationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiggingSettings_MetaData), NewProp_RiggingSettings_MetaData) }; // 2622734676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupsInterpolation",
	Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers),
	sizeof(FHairGroupsInterpolation),
	alignof(FHairGroupsInterpolation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton;
}
// End ScriptStruct FHairGroupsInterpolation

// Begin ScriptStruct FHairGroupsLOD
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsLOD;
class UScriptStruct* FHairGroupsLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsLOD, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsLOD"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsLOD>()
{
	return FHairGroupsLOD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupsLOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsLOD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairLODSettings, METADATA_PARAMS(0, nullptr) }; // 1072747422
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsLOD, LODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODs_MetaData), NewProp_LODs_MetaData) }; // 1072747422
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupsLOD",
	Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers),
	sizeof(FHairGroupsLOD),
	alignof(FHairGroupsLOD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton;
}
// End ScriptStruct FHairGroupsLOD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHairInterpolationQuality_StaticEnum, TEXT("EHairInterpolationQuality"), &Z_Registration_Info_UEnum_EHairInterpolationQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3032614602U) },
		{ EHairInterpolationWeight_StaticEnum, TEXT("EHairInterpolationWeight"), &Z_Registration_Info_UEnum_EHairInterpolationWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 588027370U) },
		{ EGroomGeometryType_StaticEnum, TEXT("EGroomGeometryType"), &Z_Registration_Info_UEnum_EGroomGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504307983U) },
		{ EGroomBindingType_StaticEnum, TEXT("EGroomBindingType"), &Z_Registration_Info_UEnum_EGroomBindingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2688121277U) },
		{ EGroomOverrideType_StaticEnum, TEXT("EGroomOverrideType"), &Z_Registration_Info_UEnum_EGroomOverrideType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1330710989U) },
		{ EGroomGuideType_StaticEnum, TEXT("EGroomGuideType"), &Z_Registration_Info_UEnum_EGroomGuideType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1303421326U) },
		{ EGroomLODMode_StaticEnum, TEXT("EGroomLODMode"), &Z_Registration_Info_UEnum_EGroomLODMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2319997409U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHairLODSettings::StaticStruct, Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewStructOps, TEXT("HairLODSettings"), &Z_Registration_Info_UScriptStruct_HairLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairLODSettings), 1072747422U) },
		{ FHairDecimationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewStructOps, TEXT("HairDecimationSettings"), &Z_Registration_Info_UScriptStruct_HairDecimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairDecimationSettings), 2590643831U) },
		{ FHairInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewStructOps, TEXT("HairInterpolationSettings"), &Z_Registration_Info_UScriptStruct_HairInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairInterpolationSettings), 2962523248U) },
		{ FHairDeformationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewStructOps, TEXT("HairDeformationSettings"), &Z_Registration_Info_UScriptStruct_HairDeformationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairDeformationSettings), 2622734676U) },
		{ FHairGroupsInterpolation::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewStructOps, TEXT("HairGroupsInterpolation"), &Z_Registration_Info_UScriptStruct_HairGroupsInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsInterpolation), 2997172139U) },
		{ FHairGroupsLOD::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewStructOps, TEXT("HairGroupsLOD"), &Z_Registration_Info_UScriptStruct_HairGroupsLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsLOD), 3783520887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_27645349(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
