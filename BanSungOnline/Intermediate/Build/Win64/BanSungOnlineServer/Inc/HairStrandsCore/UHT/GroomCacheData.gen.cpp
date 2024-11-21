// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCacheData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCacheData() {}

// Begin Cross Module References
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBasisType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCurveType();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomAnimationInfo();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EGroomCacheAttributes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCacheAttributes;
static UEnum* EGroomCacheAttributes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCacheAttributes"));
	}
	return Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCacheAttributes>()
{
	return EGroomCacheAttributes_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Color.Name", "EGroomCacheAttributes::Color" },
		{ "Comment", "/** Attributes in groom that can be animated */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "None.Name", "EGroomCacheAttributes::None" },
		{ "Position.Name", "EGroomCacheAttributes::Position" },
		{ "PositionColor.DisplayName", "Position & Color" },
		{ "PositionColor.Name", "EGroomCacheAttributes::PositionColor" },
		{ "PositionWidth.Comment", "// For display names\n" },
		{ "PositionWidth.DisplayName", "Position & Width" },
		{ "PositionWidth.Name", "EGroomCacheAttributes::PositionWidth" },
		{ "PositionWidth.ToolTip", "For display names" },
		{ "PositionWidthColor.DisplayName", "Position, Width, Color" },
		{ "PositionWidthColor.Name", "EGroomCacheAttributes::PositionWidthColor" },
		{ "ToolTip", "Attributes in groom that can be animated" },
		{ "Width.Name", "EGroomCacheAttributes::Width" },
		{ "WidthColor.DisplayName", "Width & Color" },
		{ "WidthColor.Name", "EGroomCacheAttributes::WidthColor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomCacheAttributes::None", (int64)EGroomCacheAttributes::None },
		{ "EGroomCacheAttributes::Position", (int64)EGroomCacheAttributes::Position },
		{ "EGroomCacheAttributes::Width", (int64)EGroomCacheAttributes::Width },
		{ "EGroomCacheAttributes::Color", (int64)EGroomCacheAttributes::Color },
		{ "EGroomCacheAttributes::PositionWidth", (int64)EGroomCacheAttributes::PositionWidth },
		{ "EGroomCacheAttributes::PositionColor", (int64)EGroomCacheAttributes::PositionColor },
		{ "EGroomCacheAttributes::WidthColor", (int64)EGroomCacheAttributes::WidthColor },
		{ "EGroomCacheAttributes::PositionWidthColor", (int64)EGroomCacheAttributes::PositionWidthColor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomCacheAttributes",
	"EGroomCacheAttributes",
	Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton;
}
// End Enum EGroomCacheAttributes

// Begin ScriptStruct FGroomAnimationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomAnimationInfo;
class UScriptStruct* FGroomAnimationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomAnimationInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomAnimationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomAnimationInfo>()
{
	return FGroomAnimationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Relevant information about a groom animation */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "ToolTip", "Relevant information about a groom animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPerFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attributes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomAnimationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame = { "SecondsPerFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, SecondsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsPerFrame_MetaData), NewProp_SecondsPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrame_MetaData), NewProp_StartFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrame_MetaData), NewProp_EndFrame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomAnimationInfo, Attributes), Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 1594192038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomAnimationInfo",
	Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers),
	sizeof(FGroomAnimationInfo),
	alignof(FGroomAnimationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomAnimationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton;
}
// End ScriptStruct FGroomAnimationInfo

// Begin Enum EGroomCacheType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCacheType;
static UEnum* EGroomCacheType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCacheType"));
	}
	return Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCacheType>()
{
	return EGroomCacheType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Types of GroomCache\n * Strands: animated render strands (including animatable hair attributes)\n * Guides: animated guides that require in-engine simulation (position only)\n */" },
		{ "Guides.Name", "EGroomCacheType::Guides" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "None.Name", "EGroomCacheType::None" },
		{ "Strands.Name", "EGroomCacheType::Strands" },
		{ "ToolTip", "Types of GroomCache\nStrands: animated render strands (including animatable hair attributes)\nGuides: animated guides that require in-engine simulation (position only)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomCacheType::None", (int64)EGroomCacheType::None },
		{ "EGroomCacheType::Strands", (int64)EGroomCacheType::Strands },
		{ "EGroomCacheType::Guides", (int64)EGroomCacheType::Guides },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomCacheType",
	"EGroomCacheType",
	Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheType()
{
	if (!Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton;
}
// End Enum EGroomCacheType

// Begin Enum EGroomBasisType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBasisType;
static UEnum* EGroomBasisType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBasisType"));
	}
	return Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBasisType>()
{
	return EGroomBasisType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BezierBasis.Name", "EGroomBasisType::BezierBasis" },
		{ "BlueprintType", "true" },
		{ "BsplineBasis.Name", "EGroomBasisType::BsplineBasis" },
		{ "CatmullromBasis.Name", "EGroomBasisType::CatmullromBasis" },
		{ "HermiteBasis.Name", "EGroomBasisType::HermiteBasis" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "NoBasis.Name", "EGroomBasisType::NoBasis" },
		{ "PowerBasis.Name", "EGroomBasisType::PowerBasis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomBasisType::NoBasis", (int64)EGroomBasisType::NoBasis },
		{ "EGroomBasisType::BezierBasis", (int64)EGroomBasisType::BezierBasis },
		{ "EGroomBasisType::BsplineBasis", (int64)EGroomBasisType::BsplineBasis },
		{ "EGroomBasisType::CatmullromBasis", (int64)EGroomBasisType::CatmullromBasis },
		{ "EGroomBasisType::HermiteBasis", (int64)EGroomBasisType::HermiteBasis },
		{ "EGroomBasisType::PowerBasis", (int64)EGroomBasisType::PowerBasis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomBasisType",
	"EGroomBasisType",
	Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBasisType()
{
	if (!Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton;
}
// End Enum EGroomBasisType

// Begin Enum EGroomCurveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCurveType;
static UEnum* EGroomCurveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCurveType"));
	}
	return Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCurveType>()
{
	return EGroomCurveType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cubic.Name", "EGroomCurveType::Cubic" },
		{ "Linear.Name", "EGroomCurveType::Linear" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "VariableOrder.Name", "EGroomCurveType::VariableOrder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomCurveType::Cubic", (int64)EGroomCurveType::Cubic },
		{ "EGroomCurveType::Linear", (int64)EGroomCurveType::Linear },
		{ "EGroomCurveType::VariableOrder", (int64)EGroomCurveType::VariableOrder },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomCurveType",
	"EGroomCurveType",
	Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCurveType()
{
	if (!Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton;
}
// End Enum EGroomCurveType

// Begin ScriptStruct FGroomCacheInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomCacheInfo;
class UScriptStruct* FGroomCacheInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomCacheInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomCacheInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomCacheInfo>()
{
	return FGroomCacheInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroomCacheInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about the GroomCache itself */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "ToolTip", "Information about the GroomCache itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInfo_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomCacheInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheInfo, Type), Z_Construct_UEnum_HairStrandsCore_EGroomCacheType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2373305681
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo = { "AnimationInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroomCacheInfo, AnimationInfo), Z_Construct_UScriptStruct_FGroomAnimationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationInfo_MetaData), NewProp_AnimationInfo_MetaData) }; // 1322975281
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"GroomCacheInfo",
	Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers),
	sizeof(FGroomCacheInfo),
	alignof(FGroomCacheInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton, Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton;
}
// End ScriptStruct FGroomCacheInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGroomCacheAttributes_StaticEnum, TEXT("EGroomCacheAttributes"), &Z_Registration_Info_UEnum_EGroomCacheAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1594192038U) },
		{ EGroomCacheType_StaticEnum, TEXT("EGroomCacheType"), &Z_Registration_Info_UEnum_EGroomCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2373305681U) },
		{ EGroomBasisType_StaticEnum, TEXT("EGroomBasisType"), &Z_Registration_Info_UEnum_EGroomBasisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3409906121U) },
		{ EGroomCurveType_StaticEnum, TEXT("EGroomCurveType"), &Z_Registration_Info_UEnum_EGroomCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 26439263U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGroomAnimationInfo::StaticStruct, Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewStructOps, TEXT("GroomAnimationInfo"), &Z_Registration_Info_UScriptStruct_GroomAnimationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomAnimationInfo), 1322975281U) },
		{ FGroomCacheInfo::StaticStruct, Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewStructOps, TEXT("GroomCacheInfo"), &Z_Registration_Info_UScriptStruct_GroomCacheInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomCacheInfo), 241160780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_433942951(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
