// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/RigLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigLogic() {}

// Begin Cross Module References
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRigLogicConfiguration();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin Enum ERigLogicCalculationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicCalculationType;
static UEnum* ERigLogicCalculationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicCalculationType"));
	}
	return Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicCalculationType>()
{
	return ERigLogicCalculationType_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyVector.Name", "ERigLogicCalculationType::AnyVector" },
		{ "AVX.Name", "ERigLogicCalculationType::AVX" },
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace rl4\n" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "NEON.Name", "ERigLogicCalculationType::NEON" },
		{ "Scalar.Name", "ERigLogicCalculationType::Scalar" },
		{ "SSE.Name", "ERigLogicCalculationType::SSE" },
		{ "ToolTip", "namespace rl4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigLogicCalculationType::Scalar", (int64)ERigLogicCalculationType::Scalar },
		{ "ERigLogicCalculationType::SSE", (int64)ERigLogicCalculationType::SSE },
		{ "ERigLogicCalculationType::AVX", (int64)ERigLogicCalculationType::AVX },
		{ "ERigLogicCalculationType::NEON", (int64)ERigLogicCalculationType::NEON },
		{ "ERigLogicCalculationType::AnyVector", (int64)ERigLogicCalculationType::AnyVector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERigLogicCalculationType",
	"ERigLogicCalculationType",
	Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType()
{
	if (!Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton;
}
// End Enum ERigLogicCalculationType

// Begin Enum ERigLogicTranslationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicTranslationType;
static UEnum* ERigLogicTranslationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicTranslationType"));
	}
	return Z_Registration_Info_UEnum_ERigLogicTranslationType.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicTranslationType>()
{
	return ERigLogicTranslationType_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "None.Name", "ERigLogicTranslationType::None" },
		{ "Vector.Name", "ERigLogicTranslationType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigLogicTranslationType::None", (int64)ERigLogicTranslationType::None },
		{ "ERigLogicTranslationType::Vector", (int64)ERigLogicTranslationType::Vector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERigLogicTranslationType",
	"ERigLogicTranslationType",
	Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType()
{
	if (!Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigLogicTranslationType.InnerSingleton;
}
// End Enum ERigLogicTranslationType

// Begin Enum ERigLogicRotationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicRotationType;
static UEnum* ERigLogicRotationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicRotationType"));
	}
	return Z_Registration_Info_UEnum_ERigLogicRotationType.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicRotationType>()
{
	return ERigLogicRotationType_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EulerAngles.Name", "ERigLogicRotationType::EulerAngles" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "None.Name", "ERigLogicRotationType::None" },
		{ "Quaternions.Name", "ERigLogicRotationType::Quaternions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigLogicRotationType::None", (int64)ERigLogicRotationType::None },
		{ "ERigLogicRotationType::EulerAngles", (int64)ERigLogicRotationType::EulerAngles },
		{ "ERigLogicRotationType::Quaternions", (int64)ERigLogicRotationType::Quaternions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERigLogicRotationType",
	"ERigLogicRotationType",
	Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType()
{
	if (!Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigLogicRotationType.InnerSingleton;
}
// End Enum ERigLogicRotationType

// Begin Enum ERigLogicRotationOrder
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicRotationOrder;
static UEnum* ERigLogicRotationOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicRotationOrder"));
	}
	return Z_Registration_Info_UEnum_ERigLogicRotationOrder.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicRotationOrder>()
{
	return ERigLogicRotationOrder_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "XYZ.Name", "ERigLogicRotationOrder::XYZ" },
		{ "XZY.Name", "ERigLogicRotationOrder::XZY" },
		{ "YXZ.Name", "ERigLogicRotationOrder::YXZ" },
		{ "YZX.Name", "ERigLogicRotationOrder::YZX" },
		{ "ZXY.Name", "ERigLogicRotationOrder::ZXY" },
		{ "ZYX.Name", "ERigLogicRotationOrder::ZYX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigLogicRotationOrder::XYZ", (int64)ERigLogicRotationOrder::XYZ },
		{ "ERigLogicRotationOrder::XZY", (int64)ERigLogicRotationOrder::XZY },
		{ "ERigLogicRotationOrder::YXZ", (int64)ERigLogicRotationOrder::YXZ },
		{ "ERigLogicRotationOrder::YZX", (int64)ERigLogicRotationOrder::YZX },
		{ "ERigLogicRotationOrder::ZXY", (int64)ERigLogicRotationOrder::ZXY },
		{ "ERigLogicRotationOrder::ZYX", (int64)ERigLogicRotationOrder::ZYX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERigLogicRotationOrder",
	"ERigLogicRotationOrder",
	Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder()
{
	if (!Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigLogicRotationOrder.InnerSingleton;
}
// End Enum ERigLogicRotationOrder

// Begin Enum ERigLogicScaleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicScaleType;
static UEnum* ERigLogicScaleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicScaleType"));
	}
	return Z_Registration_Info_UEnum_ERigLogicScaleType.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicScaleType>()
{
	return ERigLogicScaleType_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "None.Name", "ERigLogicScaleType::None" },
		{ "Vector.Name", "ERigLogicScaleType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigLogicScaleType::None", (int64)ERigLogicScaleType::None },
		{ "ERigLogicScaleType::Vector", (int64)ERigLogicScaleType::Vector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERigLogicScaleType",
	"ERigLogicScaleType",
	Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType()
{
	if (!Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigLogicScaleType.InnerSingleton;
}
// End Enum ERigLogicScaleType

// Begin ScriptStruct FRigLogicConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigLogicConfiguration;
class UScriptStruct* FRigLogicConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigLogicConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigLogicConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigLogicConfiguration, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("RigLogicConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_RigLogicConfiguration.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FRigLogicConfiguration>()
{
	return FRigLogicConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculationType_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadJoints_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadBlendShapes_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadAnimatedMaps_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadMachineLearnedBehavior_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadRBFBehavior_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadTwistSwingBehavior_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationType_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleType_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CalculationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CalculationType;
	static void NewProp_LoadJoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadJoints;
	static void NewProp_LoadBlendShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadBlendShapes;
	static void NewProp_LoadAnimatedMaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadAnimatedMaps;
	static void NewProp_LoadMachineLearnedBehavior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadMachineLearnedBehavior;
	static void NewProp_LoadRBFBehavior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadRBFBehavior;
	static void NewProp_LoadTwistSwingBehavior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadTwistSwingBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigLogicConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_CalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_CalculationType = { "CalculationType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLogicConfiguration, CalculationType), Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculationType_MetaData), NewProp_CalculationType_MetaData) }; // 1882149598
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadJoints_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadJoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadJoints = { "LoadJoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadJoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadJoints_MetaData), NewProp_LoadJoints_MetaData) };
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadBlendShapes_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadBlendShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadBlendShapes = { "LoadBlendShapes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadBlendShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadBlendShapes_MetaData), NewProp_LoadBlendShapes_MetaData) };
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadAnimatedMaps_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadAnimatedMaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadAnimatedMaps = { "LoadAnimatedMaps", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadAnimatedMaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadAnimatedMaps_MetaData), NewProp_LoadAnimatedMaps_MetaData) };
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadMachineLearnedBehavior_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadMachineLearnedBehavior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadMachineLearnedBehavior = { "LoadMachineLearnedBehavior", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadMachineLearnedBehavior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadMachineLearnedBehavior_MetaData), NewProp_LoadMachineLearnedBehavior_MetaData) };
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadRBFBehavior_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadRBFBehavior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadRBFBehavior = { "LoadRBFBehavior", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadRBFBehavior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadRBFBehavior_MetaData), NewProp_LoadRBFBehavior_MetaData) };
void Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadTwistSwingBehavior_SetBit(void* Obj)
{
	((FRigLogicConfiguration*)Obj)->LoadTwistSwingBehavior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadTwistSwingBehavior = { "LoadTwistSwingBehavior", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigLogicConfiguration), &Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadTwistSwingBehavior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadTwistSwingBehavior_MetaData), NewProp_LoadTwistSwingBehavior_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_TranslationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_TranslationType = { "TranslationType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLogicConfiguration, TranslationType), Z_Construct_UEnum_RigLogicModule_ERigLogicTranslationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationType_MetaData), NewProp_TranslationType_MetaData) }; // 4172679278
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLogicConfiguration, RotationType), Z_Construct_UEnum_RigLogicModule_ERigLogicRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 159653691
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLogicConfiguration, RotationOrder), Z_Construct_UEnum_RigLogicModule_ERigLogicRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 2219841325
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_ScaleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_ScaleType = { "ScaleType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLogicConfiguration, ScaleType), Z_Construct_UEnum_RigLogicModule_ERigLogicScaleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleType_MetaData), NewProp_ScaleType_MetaData) }; // 2290285159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_CalculationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_CalculationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadJoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadBlendShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadAnimatedMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadMachineLearnedBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadRBFBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_LoadTwistSwingBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_TranslationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_TranslationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_ScaleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewProp_ScaleType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"RigLogicConfiguration",
	Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::PropPointers),
	sizeof(FRigLogicConfiguration),
	alignof(FRigLogicConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigLogicConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_RigLogicConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigLogicConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigLogicConfiguration.InnerSingleton;
}
// End ScriptStruct FRigLogicConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigLogicCalculationType_StaticEnum, TEXT("ERigLogicCalculationType"), &Z_Registration_Info_UEnum_ERigLogicCalculationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1882149598U) },
		{ ERigLogicTranslationType_StaticEnum, TEXT("ERigLogicTranslationType"), &Z_Registration_Info_UEnum_ERigLogicTranslationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4172679278U) },
		{ ERigLogicRotationType_StaticEnum, TEXT("ERigLogicRotationType"), &Z_Registration_Info_UEnum_ERigLogicRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 159653691U) },
		{ ERigLogicRotationOrder_StaticEnum, TEXT("ERigLogicRotationOrder"), &Z_Registration_Info_UEnum_ERigLogicRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2219841325U) },
		{ ERigLogicScaleType_StaticEnum, TEXT("ERigLogicScaleType"), &Z_Registration_Info_UEnum_ERigLogicScaleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2290285159U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigLogicConfiguration::StaticStruct, Z_Construct_UScriptStruct_FRigLogicConfiguration_Statics::NewStructOps, TEXT("RigLogicConfiguration"), &Z_Registration_Info_UScriptStruct_RigLogicConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigLogicConfiguration), 3785232023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_627733228(TEXT("/Script/RigLogicModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
