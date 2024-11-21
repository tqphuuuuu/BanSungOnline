// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEDenoiser/Public/NNEDenoiserIOMappingData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEDenoiserIOMappingData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_EInputResourceName();
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_EOutputResourceName();
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName();
NNEDENOISER_API UEnum* Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData();
NNEDENOISER_API UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData();
UPackage* Z_Construct_UPackage__Script_NNEDenoiser();
// End Cross Module References

// Begin Enum EInputResourceName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputResourceName;
static UEnum* EInputResourceName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EInputResourceName, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("EInputResourceName"));
	}
	return Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<EInputResourceName>()
{
	return EInputResourceName_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Albedo.Name", "EInputResourceName::Albedo" },
		{ "Color.Name", "EInputResourceName::Color" },
		{ "Comment", "/** An enum to represent resource names used for denoiser input mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "Normal.Name", "EInputResourceName::Normal" },
		{ "Output.Name", "EInputResourceName::Output" },
		{ "ToolTip", "An enum to represent resource names used for denoiser input mapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputResourceName::Color", (int64)EInputResourceName::Color },
		{ "EInputResourceName::Albedo", (int64)EInputResourceName::Albedo },
		{ "EInputResourceName::Normal", (int64)EInputResourceName::Normal },
		{ "EInputResourceName::Output", (int64)EInputResourceName::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"EInputResourceName",
	"EInputResourceName",
	Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_EInputResourceName()
{
	if (!Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton;
}
// End Enum EInputResourceName

// Begin Enum EOutputResourceName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputResourceName;
static UEnum* EOutputResourceName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EOutputResourceName, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("EOutputResourceName"));
	}
	return Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<EOutputResourceName>()
{
	return EOutputResourceName_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum to represent resource names used for denoiser output mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "Output.Name", "EOutputResourceName::Output" },
		{ "ToolTip", "An enum to represent resource names used for denoiser output mapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutputResourceName::Output", (int64)EOutputResourceName::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"EOutputResourceName",
	"EOutputResourceName",
	Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_EOutputResourceName()
{
	if (!Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton;
}
// End Enum EOutputResourceName

// Begin Enum ETemporalInputResourceName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemporalInputResourceName;
static UEnum* ETemporalInputResourceName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("ETemporalInputResourceName"));
	}
	return Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<ETemporalInputResourceName>()
{
	return ETemporalInputResourceName_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Albedo.Name", "ETemporalInputResourceName::Albedo" },
		{ "Color.Name", "ETemporalInputResourceName::Color" },
		{ "Comment", "/** An enum to represent resource names used for temporal denoiser input mapping */" },
		{ "Flow.Name", "ETemporalInputResourceName::Flow" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "Normal.Name", "ETemporalInputResourceName::Normal" },
		{ "Output.Name", "ETemporalInputResourceName::Output" },
		{ "ToolTip", "An enum to represent resource names used for temporal denoiser input mapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETemporalInputResourceName::Color", (int64)ETemporalInputResourceName::Color },
		{ "ETemporalInputResourceName::Albedo", (int64)ETemporalInputResourceName::Albedo },
		{ "ETemporalInputResourceName::Normal", (int64)ETemporalInputResourceName::Normal },
		{ "ETemporalInputResourceName::Flow", (int64)ETemporalInputResourceName::Flow },
		{ "ETemporalInputResourceName::Output", (int64)ETemporalInputResourceName::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"ETemporalInputResourceName",
	"ETemporalInputResourceName",
	Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName()
{
	if (!Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton;
}
// End Enum ETemporalInputResourceName

// Begin Enum ETemporalOutputResourceName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemporalOutputResourceName;
static UEnum* ETemporalOutputResourceName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("ETemporalOutputResourceName"));
	}
	return Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton;
}
template<> NNEDENOISER_API UEnum* StaticEnum<ETemporalOutputResourceName>()
{
	return ETemporalOutputResourceName_StaticEnum();
}
struct Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum to represent resource names used for temporal denoiser output mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "Output.Name", "ETemporalOutputResourceName::Output" },
		{ "ToolTip", "An enum to represent resource names used for temporal denoiser output mapping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETemporalOutputResourceName::Output", (int64)ETemporalOutputResourceName::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NNEDenoiser,
	nullptr,
	"ETemporalOutputResourceName",
	"ETemporalOutputResourceName",
	Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName()
{
	if (!Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton, Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton;
}
// End Enum ETemporalOutputResourceName

// Begin ScriptStruct FNNEDenoiserBaseMappingData
static_assert(std::is_polymorphic<FNNEDenoiserBaseMappingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNNEDenoiserBaseMappingData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData;
class UScriptStruct* FNNEDenoiserBaseMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("NNEDenoiserBaseMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FNNEDenoiserBaseMappingData>()
{
	return FNNEDenoiserBaseMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Table row base for denoiser basic input and output mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Table row base for denoiser basic input and output mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorIndex_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Input/output tensor index */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Input/output tensor index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorChannel_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Input/output tensor channel */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Input/output tensor channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceChannel_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Resource channel */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Resource channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TensorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TensorChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEDenoiserBaseMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_TensorIndex = { "TensorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserBaseMappingData, TensorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorIndex_MetaData), NewProp_TensorIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_TensorChannel = { "TensorChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserBaseMappingData, TensorChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorChannel_MetaData), NewProp_TensorChannel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_ResourceChannel = { "ResourceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserBaseMappingData, ResourceChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceChannel_MetaData), NewProp_ResourceChannel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_TensorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_TensorChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewProp_ResourceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NNEDenoiserBaseMappingData",
	Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::PropPointers),
	sizeof(FNNEDenoiserBaseMappingData),
	alignof(FNNEDenoiserBaseMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.InnerSingleton, Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData.InnerSingleton;
}
// End ScriptStruct FNNEDenoiserBaseMappingData

// Begin ScriptStruct FNNEDenoiserInputMappingData
static_assert(std::is_polymorphic<FNNEDenoiserInputMappingData>() == std::is_polymorphic<FNNEDenoiserBaseMappingData>(), "USTRUCT FNNEDenoiserInputMappingData cannot be polymorphic unless super FNNEDenoiserBaseMappingData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData;
class UScriptStruct* FNNEDenoiserInputMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("NNEDenoiserInputMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FNNEDenoiserInputMappingData>()
{
	return FNNEDenoiserInputMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Table row base for denoiser input mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Table row base for denoiser input mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Mapped resource name */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Mapped resource name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEDenoiserInputMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewProp_Resource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserInputMappingData, Resource), Z_Construct_UEnum_NNEDenoiser_EInputResourceName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) }; // 1181178562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewProp_Resource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewProp_Resource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData,
	&NewStructOps,
	"NNEDenoiserInputMappingData",
	Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::PropPointers),
	sizeof(FNNEDenoiserInputMappingData),
	alignof(FNNEDenoiserInputMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.InnerSingleton, Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData.InnerSingleton;
}
// End ScriptStruct FNNEDenoiserInputMappingData

// Begin ScriptStruct FNNEDenoiserOutputMappingData
static_assert(std::is_polymorphic<FNNEDenoiserOutputMappingData>() == std::is_polymorphic<FNNEDenoiserBaseMappingData>(), "USTRUCT FNNEDenoiserOutputMappingData cannot be polymorphic unless super FNNEDenoiserBaseMappingData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData;
class UScriptStruct* FNNEDenoiserOutputMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("NNEDenoiserOutputMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FNNEDenoiserOutputMappingData>()
{
	return FNNEDenoiserOutputMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Table row base for denoiser output mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Table row base for denoiser output mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Mapped resource name */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Mapped resource name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEDenoiserOutputMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewProp_Resource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserOutputMappingData, Resource), Z_Construct_UEnum_NNEDenoiser_EOutputResourceName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) }; // 1876272155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewProp_Resource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewProp_Resource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData,
	&NewStructOps,
	"NNEDenoiserOutputMappingData",
	Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::PropPointers),
	sizeof(FNNEDenoiserOutputMappingData),
	alignof(FNNEDenoiserOutputMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.InnerSingleton, Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData.InnerSingleton;
}
// End ScriptStruct FNNEDenoiserOutputMappingData

// Begin ScriptStruct FNNEDenoiserTemporalInputMappingData
static_assert(std::is_polymorphic<FNNEDenoiserTemporalInputMappingData>() == std::is_polymorphic<FNNEDenoiserBaseMappingData>(), "USTRUCT FNNEDenoiserTemporalInputMappingData cannot be polymorphic unless super FNNEDenoiserBaseMappingData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData;
class UScriptStruct* FNNEDenoiserTemporalInputMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("NNEDenoiserTemporalInputMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FNNEDenoiserTemporalInputMappingData>()
{
	return FNNEDenoiserTemporalInputMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Table row base for temporal denoiser input mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Table row base for temporal denoiser input mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Mapped resource name */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Mapped resource name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Resource frame index */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Resource frame index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEDenoiserTemporalInputMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_Resource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserTemporalInputMappingData, Resource), Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) }; // 856904286
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserTemporalInputMappingData, FrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameIndex_MetaData), NewProp_FrameIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_Resource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_Resource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewProp_FrameIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData,
	&NewStructOps,
	"NNEDenoiserTemporalInputMappingData",
	Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::PropPointers),
	sizeof(FNNEDenoiserTemporalInputMappingData),
	alignof(FNNEDenoiserTemporalInputMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.InnerSingleton, Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData.InnerSingleton;
}
// End ScriptStruct FNNEDenoiserTemporalInputMappingData

// Begin ScriptStruct FNNEDenoiserTemporalOutputMappingData
static_assert(std::is_polymorphic<FNNEDenoiserTemporalOutputMappingData>() == std::is_polymorphic<FNNEDenoiserBaseMappingData>(), "USTRUCT FNNEDenoiserTemporalOutputMappingData cannot be polymorphic unless super FNNEDenoiserBaseMappingData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData;
class UScriptStruct* FNNEDenoiserTemporalOutputMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData, (UObject*)Z_Construct_UPackage__Script_NNEDenoiser(), TEXT("NNEDenoiserTemporalOutputMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.OuterSingleton;
}
template<> NNEDENOISER_API UScriptStruct* StaticStruct<FNNEDenoiserTemporalOutputMappingData>()
{
	return FNNEDenoiserTemporalOutputMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Table row base for temporal denoiser output mapping */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Table row base for temporal denoiser output mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resource_MetaData[] = {
		{ "Category", "NNEDenoiser" },
		{ "Comment", "/** Mapped resource name */" },
		{ "ModuleRelativePath", "Public/NNEDenoiserIOMappingData.h" },
		{ "ToolTip", "Mapped resource name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEDenoiserTemporalOutputMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewProp_Resource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewProp_Resource = { "Resource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNNEDenoiserTemporalOutputMappingData, Resource), Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resource_MetaData), NewProp_Resource_MetaData) }; // 1443960080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewProp_Resource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewProp_Resource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NNEDenoiser,
	Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData,
	&NewStructOps,
	"NNEDenoiserTemporalOutputMappingData",
	Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::PropPointers),
	sizeof(FNNEDenoiserTemporalOutputMappingData),
	alignof(FNNEDenoiserTemporalOutputMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.InnerSingleton, Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData.InnerSingleton;
}
// End ScriptStruct FNNEDenoiserTemporalOutputMappingData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputResourceName_StaticEnum, TEXT("EInputResourceName"), &Z_Registration_Info_UEnum_EInputResourceName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1181178562U) },
		{ EOutputResourceName_StaticEnum, TEXT("EOutputResourceName"), &Z_Registration_Info_UEnum_EOutputResourceName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1876272155U) },
		{ ETemporalInputResourceName_StaticEnum, TEXT("ETemporalInputResourceName"), &Z_Registration_Info_UEnum_ETemporalInputResourceName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 856904286U) },
		{ ETemporalOutputResourceName_StaticEnum, TEXT("ETemporalOutputResourceName"), &Z_Registration_Info_UEnum_ETemporalOutputResourceName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1443960080U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNNEDenoiserBaseMappingData::StaticStruct, Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewStructOps, TEXT("NNEDenoiserBaseMappingData"), &Z_Registration_Info_UScriptStruct_NNEDenoiserBaseMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEDenoiserBaseMappingData), 1584679423U) },
		{ FNNEDenoiserInputMappingData::StaticStruct, Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewStructOps, TEXT("NNEDenoiserInputMappingData"), &Z_Registration_Info_UScriptStruct_NNEDenoiserInputMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEDenoiserInputMappingData), 2603118436U) },
		{ FNNEDenoiserOutputMappingData::StaticStruct, Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewStructOps, TEXT("NNEDenoiserOutputMappingData"), &Z_Registration_Info_UScriptStruct_NNEDenoiserOutputMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEDenoiserOutputMappingData), 3864539937U) },
		{ FNNEDenoiserTemporalInputMappingData::StaticStruct, Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewStructOps, TEXT("NNEDenoiserTemporalInputMappingData"), &Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalInputMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEDenoiserTemporalInputMappingData), 853710276U) },
		{ FNNEDenoiserTemporalOutputMappingData::StaticStruct, Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewStructOps, TEXT("NNEDenoiserTemporalOutputMappingData"), &Z_Registration_Info_UScriptStruct_NNEDenoiserTemporalOutputMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEDenoiserTemporalOutputMappingData), 1837610874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_3546165423(TEXT("/Script/NNEDenoiser"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
