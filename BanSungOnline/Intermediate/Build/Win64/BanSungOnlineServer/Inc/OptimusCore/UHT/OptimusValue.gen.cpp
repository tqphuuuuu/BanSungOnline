// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusValue.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
#include "OptimusCore/Public/OptimusDataType.h"
#include "OptimusCore/Public/OptimusValueContainerStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusValue() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueContainer();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusValueType();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusValueUsage();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueDescription();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueIdentifier();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusValueUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusValueUsage;
static UEnum* EOptimusValueUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusValueUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusValueUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusValueUsage, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusValueUsage"));
	}
	return Z_Registration_Info_UEnum_EOptimusValueUsage.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusValueUsage>()
{
	return EOptimusValueUsage_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CPU.Name", "EOptimusValueUsage::CPU" },
		{ "GPU.Name", "EOptimusValueUsage::GPU" },
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
		{ "None.Name", "EOptimusValueUsage::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusValueUsage::None", (int64)EOptimusValueUsage::None },
		{ "EOptimusValueUsage::CPU", (int64)EOptimusValueUsage::CPU },
		{ "EOptimusValueUsage::GPU", (int64)EOptimusValueUsage::GPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusValueUsage",
	"EOptimusValueUsage",
	Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusValueUsage()
{
	if (!Z_Registration_Info_UEnum_EOptimusValueUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusValueUsage.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusValueUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusValueUsage.InnerSingleton;
}
// End Enum EOptimusValueUsage

// Begin Enum EOptimusValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusValueType;
static UEnum* EOptimusValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusValueType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusValueType"));
	}
	return Z_Registration_Info_UEnum_EOptimusValueType.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusValueType>()
{
	return EOptimusValueType_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Name", "EOptimusValueType::Constant" },
		{ "Invalid.Name", "EOptimusValueType::Invalid" },
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
		{ "Variable.Name", "EOptimusValueType::Variable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusValueType::Invalid", (int64)EOptimusValueType::Invalid },
		{ "EOptimusValueType::Constant", (int64)EOptimusValueType::Constant },
		{ "EOptimusValueType::Variable", (int64)EOptimusValueType::Variable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusValueType",
	"EOptimusValueType",
	Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusValueType()
{
	if (!Z_Registration_Info_UEnum_EOptimusValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusValueType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusValueType.InnerSingleton;
}
// End Enum EOptimusValueType

// Begin ScriptStruct FOptimusValueIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusValueIdentifier;
class UScriptStruct* FOptimusValueIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValueIdentifier, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusValueIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusValueIdentifier>()
{
	return FOptimusValueIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusValueIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueIdentifier, Type), Z_Construct_UEnum_OptimusCore_EOptimusValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2043576183
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueIdentifier, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusValueIdentifier",
	Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::PropPointers),
	sizeof(FOptimusValueIdentifier),
	alignof(FOptimusValueIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueIdentifier.InnerSingleton;
}
// End ScriptStruct FOptimusValueIdentifier

// Begin ScriptStruct FOptimusValueDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusValueDescription;
class UScriptStruct* FOptimusValueDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusValueDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValueDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusValueDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusValueDescription>()
{
	return FOptimusValueDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusValueDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueUsage_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueUsage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueUsage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusValueDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ValueUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ValueUsage = { "ValueUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueDescription, ValueUsage), Z_Construct_UEnum_OptimusCore_EOptimusValueUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueUsage_MetaData), NewProp_ValueUsage_MetaData) }; // 89964517
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueDescription, Value), Z_Construct_UScriptStruct_FOptimusValueContainerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2317148538
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ShaderValue = { "ShaderValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueDescription, ShaderValue), Z_Construct_UScriptStruct_FShaderValueContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderValue_MetaData), NewProp_ShaderValue_MetaData) }; // 1837131788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ValueUsage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ValueUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewProp_ShaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusValueDescription",
	Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::PropPointers),
	sizeof(FOptimusValueDescription),
	alignof(FOptimusValueDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueDescription()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusValueDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueDescription.InnerSingleton;
}
// End ScriptStruct FOptimusValueDescription

// Begin ScriptStruct FOptimusDataInterfacePropertyOverrideInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo;
class UScriptStruct* FOptimusDataInterfacePropertyOverrideInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDataInterfacePropertyOverrideInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDataInterfacePropertyOverrideInfo>()
{
	return FOptimusDataInterfacePropertyOverrideInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinNameToValueIdMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusValue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinNameToValueIdMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinNameToValueIdMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PinNameToValueIdMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDataInterfacePropertyOverrideInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap_ValueProp = { "PinNameToValueIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOptimusValueIdentifier, METADATA_PARAMS(0, nullptr) }; // 454645837
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap_Key_KeyProp = { "PinNameToValueIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap = { "PinNameToValueIdMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDataInterfacePropertyOverrideInfo, PinNameToValueIdMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinNameToValueIdMap_MetaData), NewProp_PinNameToValueIdMap_MetaData) }; // 454645837
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewProp_PinNameToValueIdMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusDataInterfacePropertyOverrideInfo",
	Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::PropPointers),
	sizeof(FOptimusDataInterfacePropertyOverrideInfo),
	alignof(FOptimusDataInterfacePropertyOverrideInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo.InnerSingleton;
}
// End ScriptStruct FOptimusDataInterfacePropertyOverrideInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusValueUsage_StaticEnum, TEXT("EOptimusValueUsage"), &Z_Registration_Info_UEnum_EOptimusValueUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 89964517U) },
		{ EOptimusValueType_StaticEnum, TEXT("EOptimusValueType"), &Z_Registration_Info_UEnum_EOptimusValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2043576183U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusValueIdentifier::StaticStruct, Z_Construct_UScriptStruct_FOptimusValueIdentifier_Statics::NewStructOps, TEXT("OptimusValueIdentifier"), &Z_Registration_Info_UScriptStruct_OptimusValueIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusValueIdentifier), 454645837U) },
		{ FOptimusValueDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusValueDescription_Statics::NewStructOps, TEXT("OptimusValueDescription"), &Z_Registration_Info_UScriptStruct_OptimusValueDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusValueDescription), 2902388104U) },
		{ FOptimusDataInterfacePropertyOverrideInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo_Statics::NewStructOps, TEXT("OptimusDataInterfacePropertyOverrideInfo"), &Z_Registration_Info_UScriptStruct_OptimusDataInterfacePropertyOverrideInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDataInterfacePropertyOverrideInfo), 3435661004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_1679759220(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
