// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/DNACommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNACommon() {}

// Begin Cross Module References
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EActivationFunction();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EArchetype();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EAutomaticRadius();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EDirection();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EDNADataLayer();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EGender();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERotationRepresentation();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERotationUnit();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EScaleRepresentation();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationUnit();
RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ETwistAxis();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCoordinateSystem();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureCoordinate();
RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FVertexLayout();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin Enum EArchetype
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchetype;
static UEnum* EArchetype_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArchetype.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArchetype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EArchetype, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EArchetype"));
	}
	return Z_Registration_Info_UEnum_EArchetype.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EArchetype>()
{
	return EArchetype_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EArchetype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alien.Name", "EArchetype::Alien" },
		{ "Asian.Name", "EArchetype::Asian" },
		{ "Black.Name", "EArchetype::Black" },
		{ "BlueprintType", "true" },
		{ "Caucasian.Name", "EArchetype::Caucasian" },
		{ "Hispanic.Name", "EArchetype::Hispanic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Other.Name", "EArchetype::Other" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArchetype::Asian", (int64)EArchetype::Asian },
		{ "EArchetype::Black", (int64)EArchetype::Black },
		{ "EArchetype::Caucasian", (int64)EArchetype::Caucasian },
		{ "EArchetype::Hispanic", (int64)EArchetype::Hispanic },
		{ "EArchetype::Alien", (int64)EArchetype::Alien },
		{ "EArchetype::Other", (int64)EArchetype::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EArchetype",
	"EArchetype",
	Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EArchetype()
{
	if (!Z_Registration_Info_UEnum_EArchetype.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchetype.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArchetype.InnerSingleton;
}
// End Enum EArchetype

// Begin Enum EGender
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGender;
static UEnum* EGender_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGender.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EGender, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EGender"));
	}
	return Z_Registration_Info_UEnum_EGender.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EGender>()
{
	return EGender_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EGender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Female.Name", "EGender::Female" },
		{ "Male.Name", "EGender::Male" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Other.Name", "EGender::Other" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGender::Male", (int64)EGender::Male },
		{ "EGender::Female", (int64)EGender::Female },
		{ "EGender::Other", (int64)EGender::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EGender_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EGender",
	"EGender",
	Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EGender()
{
	if (!Z_Registration_Info_UEnum_EGender.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGender.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EGender_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGender.InnerSingleton;
}
// End Enum EGender

// Begin Enum ETranslationUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETranslationUnit;
static UEnum* ETranslationUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationUnit, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ETranslationUnit"));
	}
	return Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ETranslationUnit>()
{
	return ETranslationUnit_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CM.Name", "ETranslationUnit::CM" },
		{ "M.Name", "ETranslationUnit::M" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETranslationUnit::CM", (int64)ETranslationUnit::CM },
		{ "ETranslationUnit::M", (int64)ETranslationUnit::M },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ETranslationUnit",
	"ETranslationUnit",
	Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationUnit()
{
	if (!Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton;
}
// End Enum ETranslationUnit

// Begin Enum ERotationUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationUnit;
static UEnum* ERotationUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationUnit, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERotationUnit"));
	}
	return Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERotationUnit>()
{
	return ERotationUnit_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Degrees.Name", "ERotationUnit::Degrees" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Radians.Name", "ERotationUnit::Radians" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERotationUnit::Degrees", (int64)ERotationUnit::Degrees },
		{ "ERotationUnit::Radians", (int64)ERotationUnit::Radians },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERotationUnit",
	"ERotationUnit",
	Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERotationUnit()
{
	if (!Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton;
}
// End Enum ERotationUnit

// Begin Enum EDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirection;
static UEnum* EDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDirection, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EDirection"));
	}
	return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDirection>()
{
	return EDirection_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "EDirection::Down" },
		{ "Front.Name", "EDirection::Front" },
		{ "Left.Name", "EDirection::Left" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Right.Name", "EDirection::Right" },
		{ "Up.Name", "EDirection::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDirection::Left", (int64)EDirection::Left },
		{ "EDirection::Right", (int64)EDirection::Right },
		{ "EDirection::Up", (int64)EDirection::Up },
		{ "EDirection::Down", (int64)EDirection::Down },
		{ "EDirection::Front", (int64)EDirection::Front },
		{ "EDirection::Back", (int64)EDirection::Back },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EDirection",
	"EDirection",
	Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EDirection()
{
	if (!Z_Registration_Info_UEnum_EDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirection.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
}
// End Enum EDirection

// Begin Enum ETranslationRepresentation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETranslationRepresentation;
static UEnum* ETranslationRepresentation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ETranslationRepresentation"));
	}
	return Z_Registration_Info_UEnum_ETranslationRepresentation.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ETranslationRepresentation>()
{
	return ETranslationRepresentation_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Vector.Name", "ETranslationRepresentation::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETranslationRepresentation::Vector", (int64)ETranslationRepresentation::Vector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ETranslationRepresentation",
	"ETranslationRepresentation",
	Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation()
{
	if (!Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ETranslationRepresentation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETranslationRepresentation.InnerSingleton;
}
// End Enum ETranslationRepresentation

// Begin Enum ERotationRepresentation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationRepresentation;
static UEnum* ERotationRepresentation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationRepresentation, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERotationRepresentation"));
	}
	return Z_Registration_Info_UEnum_ERotationRepresentation.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERotationRepresentation>()
{
	return ERotationRepresentation_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EulerAngles.Name", "ERotationRepresentation::EulerAngles" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Quaternion.Name", "ERotationRepresentation::Quaternion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERotationRepresentation::EulerAngles", (int64)ERotationRepresentation::EulerAngles },
		{ "ERotationRepresentation::Quaternion", (int64)ERotationRepresentation::Quaternion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ERotationRepresentation",
	"ERotationRepresentation",
	Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ERotationRepresentation()
{
	if (!Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERotationRepresentation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERotationRepresentation.InnerSingleton;
}
// End Enum ERotationRepresentation

// Begin Enum EScaleRepresentation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScaleRepresentation;
static UEnum* EScaleRepresentation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EScaleRepresentation, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EScaleRepresentation"));
	}
	return Z_Registration_Info_UEnum_EScaleRepresentation.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EScaleRepresentation>()
{
	return EScaleRepresentation_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Vector.Name", "EScaleRepresentation::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScaleRepresentation::Vector", (int64)EScaleRepresentation::Vector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EScaleRepresentation",
	"EScaleRepresentation",
	Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EScaleRepresentation()
{
	if (!Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EScaleRepresentation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScaleRepresentation.InnerSingleton;
}
// End Enum EScaleRepresentation

// Begin Enum EAutomaticRadius
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutomaticRadius;
static UEnum* EAutomaticRadius_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EAutomaticRadius, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EAutomaticRadius"));
	}
	return Z_Registration_Info_UEnum_EAutomaticRadius.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EAutomaticRadius>()
{
	return EAutomaticRadius_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nUENUM(BlueprintType)\nenum class ERBFSolverType : uint8\n{\n\x09""Additive,\n\x09Interpolative\n};\n\nUENUM(BlueprintType)\nenum class ERBFFunctionType : uint8\n{\n\x09Gaussian,\n\x09""Exponential,\n\x09Linear,\n\x09""Cubic,\n\x09Quintic,\n};\n\nUENUM(BlueprintType)\nenum class ERBFDistanceMethod : uint8\n{\n\x09""Euclidean,\n\x09Quaternion,\n\x09SwingAngle,\n\x09TwistAngle,\n};\n\nUENUM(BlueprintType)\nenum class ERBFNormalizeMethod : uint8\n{\n\x09OnlyNormalizeAboveOne,\n\x09""AlwaysNormalize\n};\n*/" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Off.Name", "EAutomaticRadius::Off" },
		{ "On.Name", "EAutomaticRadius::On" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class ERBFSolverType : uint8\n{\n       Additive,\n       Interpolative\n};\n\nUENUM(BlueprintType)\nenum class ERBFFunctionType : uint8\n{\n       Gaussian,\n       Exponential,\n       Linear,\n       Cubic,\n       Quintic,\n};\n\nUENUM(BlueprintType)\nenum class ERBFDistanceMethod : uint8\n{\n       Euclidean,\n       Quaternion,\n       SwingAngle,\n       TwistAngle,\n};\n\nUENUM(BlueprintType)\nenum class ERBFNormalizeMethod : uint8\n{\n       OnlyNormalizeAboveOne,\n       AlwaysNormalize\n};" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutomaticRadius::On", (int64)EAutomaticRadius::On },
		{ "EAutomaticRadius::Off", (int64)EAutomaticRadius::Off },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EAutomaticRadius",
	"EAutomaticRadius",
	Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EAutomaticRadius()
{
	if (!Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EAutomaticRadius_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutomaticRadius.InnerSingleton;
}
// End Enum EAutomaticRadius

// Begin Enum ETwistAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETwistAxis;
static UEnum* ETwistAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETwistAxis, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ETwistAxis"));
	}
	return Z_Registration_Info_UEnum_ETwistAxis.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ETwistAxis>()
{
	return ETwistAxis_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "X.Name", "ETwistAxis::X" },
		{ "Y.Name", "ETwistAxis::Y" },
		{ "Z.Name", "ETwistAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwistAxis::X", (int64)ETwistAxis::X },
		{ "ETwistAxis::Y", (int64)ETwistAxis::Y },
		{ "ETwistAxis::Z", (int64)ETwistAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"ETwistAxis",
	"ETwistAxis",
	Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_ETwistAxis()
{
	if (!Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ETwistAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETwistAxis.InnerSingleton;
}
// End Enum ETwistAxis

// Begin Enum EDNADataLayer
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDNADataLayer;
static UEnum* EDNADataLayer_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDNADataLayer, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EDNADataLayer"));
	}
	return Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDNADataLayer>()
{
	return EDNADataLayer_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "// Implicitly loads Behavior and all body-rig related layers\n" },
		{ "All.Name", "EDNADataLayer::All" },
		{ "All.ToolTip", "Implicitly loads Behavior and all body-rig related layers" },
		{ "Behavior.Comment", "// Implicitly loads Descriptor\n" },
		{ "Behavior.Name", "EDNADataLayer::Behavior" },
		{ "Behavior.ToolTip", "Implicitly loads Descriptor" },
		{ "BlueprintType", "true" },
		{ "Definition.Name", "EDNADataLayer::Definition" },
		{ "Descriptor.Name", "EDNADataLayer::Descriptor" },
		{ "Geometry.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "Geometry.Name", "EDNADataLayer::Geometry" },
		{ "Geometry.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "GeometryWithoutBlendShapes.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "GeometryWithoutBlendShapes.Name", "EDNADataLayer::GeometryWithoutBlendShapes" },
		{ "GeometryWithoutBlendShapes.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "MachineLearnedBehavior.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "MachineLearnedBehavior.Name", "EDNADataLayer::MachineLearnedBehavior" },
		{ "MachineLearnedBehavior.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "None.Name", "EDNADataLayer::None" },
		{ "RBFBehavior.Comment", "// Implicitly loads Definition\n" },
		{ "RBFBehavior.Name", "EDNADataLayer::RBFBehavior" },
		{ "RBFBehavior.ToolTip", "Implicitly loads Definition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDNADataLayer::None", (int64)EDNADataLayer::None },
		{ "EDNADataLayer::Descriptor", (int64)EDNADataLayer::Descriptor },
		{ "EDNADataLayer::Definition", (int64)EDNADataLayer::Definition },
		{ "EDNADataLayer::Behavior", (int64)EDNADataLayer::Behavior },
		{ "EDNADataLayer::Geometry", (int64)EDNADataLayer::Geometry },
		{ "EDNADataLayer::GeometryWithoutBlendShapes", (int64)EDNADataLayer::GeometryWithoutBlendShapes },
		{ "EDNADataLayer::MachineLearnedBehavior", (int64)EDNADataLayer::MachineLearnedBehavior },
		{ "EDNADataLayer::RBFBehavior", (int64)EDNADataLayer::RBFBehavior },
		{ "EDNADataLayer::All", (int64)EDNADataLayer::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EDNADataLayer",
	"EDNADataLayer",
	Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EDNADataLayer()
{
	if (!Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton;
}
// End Enum EDNADataLayer

// Begin Enum EActivationFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActivationFunction;
static UEnum* EActivationFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EActivationFunction, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EActivationFunction"));
	}
	return Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton;
}
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EActivationFunction>()
{
	return EActivationFunction_StaticEnum();
}
struct Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeakyReLU.Name", "EActivationFunction::LeakyReLU" },
		{ "Linear.Name", "EActivationFunction::Linear" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "ReLU.Name", "EActivationFunction::ReLU" },
		{ "Sigmoid.Name", "EActivationFunction::Sigmoid" },
		{ "Tanh.Name", "EActivationFunction::Tanh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActivationFunction::Linear", (int64)EActivationFunction::Linear },
		{ "EActivationFunction::ReLU", (int64)EActivationFunction::ReLU },
		{ "EActivationFunction::LeakyReLU", (int64)EActivationFunction::LeakyReLU },
		{ "EActivationFunction::Tanh", (int64)EActivationFunction::Tanh },
		{ "EActivationFunction::Sigmoid", (int64)EActivationFunction::Sigmoid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	"EActivationFunction",
	"EActivationFunction",
	Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigLogicModule_EActivationFunction()
{
	if (!Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton;
}
// End Enum EActivationFunction

// Begin ScriptStruct FCoordinateSystem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoordinateSystem;
class UScriptStruct* FCoordinateSystem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("CoordinateSystem"));
	}
	return Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FCoordinateSystem>()
{
	return FCoordinateSystem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCoordinateSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_XAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_XAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_YAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_YAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoordinateSystem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoordinateSystem, XAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxis_MetaData), NewProp_XAxis_MetaData) }; // 4199199203
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoordinateSystem, YAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxis_MetaData), NewProp_YAxis_MetaData) }; // 4199199203
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoordinateSystem, ZAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxis_MetaData), NewProp_ZAxis_MetaData) }; // 4199199203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"CoordinateSystem",
	Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers),
	sizeof(FCoordinateSystem),
	alignof(FCoordinateSystem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoordinateSystem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoordinateSystem()
{
	if (!Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton, Z_Construct_UScriptStruct_FCoordinateSystem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton;
}
// End ScriptStruct FCoordinateSystem

// Begin ScriptStruct FMeshBlendShapeChannelMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping;
class UScriptStruct* FMeshBlendShapeChannelMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("MeshBlendShapeChannelMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FMeshBlendShapeChannelMapping>()
{
	return FMeshBlendShapeChannelMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeChannelIndex_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlendShapeChannelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshBlendShapeChannelMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBlendShapeChannelMapping, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndex_MetaData), NewProp_MeshIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex = { "BlendShapeChannelIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshBlendShapeChannelMapping, BlendShapeChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendShapeChannelIndex_MetaData), NewProp_BlendShapeChannelIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"MeshBlendShapeChannelMapping",
	Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers),
	sizeof(FMeshBlendShapeChannelMapping),
	alignof(FMeshBlendShapeChannelMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton, Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton;
}
// End ScriptStruct FMeshBlendShapeChannelMapping

// Begin ScriptStruct FTextureCoordinate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureCoordinate;
class UScriptStruct* FTextureCoordinate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureCoordinate, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("TextureCoordinate"));
	}
	return Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FTextureCoordinate>()
{
	return FTextureCoordinate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureCoordinate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureCoordinate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCoordinate, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureCoordinate, V), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"TextureCoordinate",
	Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers),
	sizeof(FTextureCoordinate),
	alignof(FTextureCoordinate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureCoordinate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureCoordinate()
{
	if (!Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton, Z_Construct_UScriptStruct_FTextureCoordinate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton;
}
// End ScriptStruct FTextureCoordinate

// Begin ScriptStruct FVertexLayout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexLayout;
class UScriptStruct* FVertexLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexLayout, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("VertexLayout"));
	}
	return Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FVertexLayout>()
{
	return FVertexLayout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVertexLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureCoordinate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexLayout, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate = { "TextureCoordinate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexLayout, TextureCoordinate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureCoordinate_MetaData), NewProp_TextureCoordinate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexLayout, Normal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	nullptr,
	&NewStructOps,
	"VertexLayout",
	Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers),
	sizeof(FVertexLayout),
	alignof(FVertexLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVertexLayout()
{
	if (!Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton, Z_Construct_UScriptStruct_FVertexLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton;
}
// End ScriptStruct FVertexLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArchetype_StaticEnum, TEXT("EArchetype"), &Z_Registration_Info_UEnum_EArchetype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 868032984U) },
		{ EGender_StaticEnum, TEXT("EGender"), &Z_Registration_Info_UEnum_EGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1891791539U) },
		{ ETranslationUnit_StaticEnum, TEXT("ETranslationUnit"), &Z_Registration_Info_UEnum_ETranslationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 596869273U) },
		{ ERotationUnit_StaticEnum, TEXT("ERotationUnit"), &Z_Registration_Info_UEnum_ERotationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1179445926U) },
		{ EDirection_StaticEnum, TEXT("EDirection"), &Z_Registration_Info_UEnum_EDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4199199203U) },
		{ ETranslationRepresentation_StaticEnum, TEXT("ETranslationRepresentation"), &Z_Registration_Info_UEnum_ETranslationRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2903741750U) },
		{ ERotationRepresentation_StaticEnum, TEXT("ERotationRepresentation"), &Z_Registration_Info_UEnum_ERotationRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1233625329U) },
		{ EScaleRepresentation_StaticEnum, TEXT("EScaleRepresentation"), &Z_Registration_Info_UEnum_EScaleRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3830031137U) },
		{ EAutomaticRadius_StaticEnum, TEXT("EAutomaticRadius"), &Z_Registration_Info_UEnum_EAutomaticRadius, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3481534954U) },
		{ ETwistAxis_StaticEnum, TEXT("ETwistAxis"), &Z_Registration_Info_UEnum_ETwistAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 614558380U) },
		{ EDNADataLayer_StaticEnum, TEXT("EDNADataLayer"), &Z_Registration_Info_UEnum_EDNADataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1163482860U) },
		{ EActivationFunction_StaticEnum, TEXT("EActivationFunction"), &Z_Registration_Info_UEnum_EActivationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1218634268U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoordinateSystem::StaticStruct, Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewStructOps, TEXT("CoordinateSystem"), &Z_Registration_Info_UScriptStruct_CoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoordinateSystem), 124441058U) },
		{ FMeshBlendShapeChannelMapping::StaticStruct, Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewStructOps, TEXT("MeshBlendShapeChannelMapping"), &Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshBlendShapeChannelMapping), 1416485339U) },
		{ FTextureCoordinate::StaticStruct, Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewStructOps, TEXT("TextureCoordinate"), &Z_Registration_Info_UScriptStruct_TextureCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureCoordinate), 1321462082U) },
		{ FVertexLayout::StaticStruct, Z_Construct_UScriptStruct_FVertexLayout_Statics::NewStructOps, TEXT("VertexLayout"), &Z_Registration_Info_UScriptStruct_VertexLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexLayout), 578578732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_2330746945(TEXT("/Script/RigLogicModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
