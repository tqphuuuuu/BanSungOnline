// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_OnCircle() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EPointOnCircleSpacingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod;
static UEnum* EPointOnCircleSpacingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPointOnCircleSpacingMethod"));
	}
	return Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPointOnCircleSpacingMethod>()
{
	return EPointOnCircleSpacingMethod_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByNumberOfPoints.Comment", "// Use a fixed number of points\n" },
		{ "ByNumberOfPoints.Name", "EPointOnCircleSpacingMethod::ByNumberOfPoints" },
		{ "ByNumberOfPoints.ToolTip", "Use a fixed number of points" },
		{ "BySpaceBetween.Comment", "// Use the SpaceBetween value to determine how far apart points should be.\n" },
		{ "BySpaceBetween.Name", "EPointOnCircleSpacingMethod::BySpaceBetween" },
		{ "BySpaceBetween.ToolTip", "Use the SpaceBetween value to determine how far apart points should be." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointOnCircleSpacingMethod::BySpaceBetween", (int64)EPointOnCircleSpacingMethod::BySpaceBetween },
		{ "EPointOnCircleSpacingMethod::ByNumberOfPoints", (int64)EPointOnCircleSpacingMethod::ByNumberOfPoints },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPointOnCircleSpacingMethod",
	"EPointOnCircleSpacingMethod",
	Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod()
{
	if (!Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton, Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod.InnerSingleton;
}
// End Enum EPointOnCircleSpacingMethod

// Begin Class UEnvQueryGenerator_OnCircle
void UEnvQueryGenerator_OnCircle::StaticRegisterNativesUEnvQueryGenerator_OnCircle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_OnCircle);
UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister()
{
	return UEnvQueryGenerator_OnCircle::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Circle" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** max distance of path between point and context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "max distance of path between point and context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOnCircleSpacingMethod_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** how we are choosing where the points are in the circle */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "how we are choosing where the points are in the circle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** items will be generated on a circle this much apart */" },
		{ "EditCondition", "PointOnCircleSpacingMethod == EPointOnCircleSpacingMethod::BySpaceBetween" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "items will be generated on a circle this much apart" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** this many items will be generated on a circle */" },
		{ "EditCondition", "PointOnCircleSpacingMethod == EPointOnCircleSpacingMethod::ByNumberOfPoints" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "this many items will be generated on a circle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If you generate items on a piece of circle you define direction of Arc cut here */" },
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define direction of Arc cut here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If you generate items on a piece of circle you define angle of Arc cut here */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define angle of Arc cut here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRadians_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** ignore tracing into context actors when generating the circle */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "ignore tracing into context actors when generating the circle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleCenterZOffset_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context offset */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "context offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** horizontal trace for nearest obstacle */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "horizontal trace for nearest obstacle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointOnCircleSpacingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointOnCircleSpacingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBetween;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumberOfPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRadians;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CircleCenter;
	static void NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleCenterZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static void NewProp_bDefineArc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_OnCircle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) }; // 1384630506
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod = { "PointOnCircleSpacingMethod", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod), Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOnCircleSpacingMethod_MetaData), NewProp_PointOnCircleSpacingMethod_MetaData) }; // 1299614571
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween = { "SpaceBetween", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceBetween_MetaData), NewProp_SpaceBetween_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, NumberOfPoints), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPoints_MetaData), NewProp_NumberOfPoints_MetaData) }; // 1636286199
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcDirection_MetaData), NewProp_ArcDirection_MetaData) }; // 2990699813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) }; // 1384630506
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians = { "AngleRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, AngleRadians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRadians_MetaData), NewProp_AngleRadians_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter = { "CircleCenter", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenter), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleCenter_MetaData), NewProp_CircleCenter_MetaData) };
void Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit(void* Obj)
{
	((UEnvQueryGenerator_OnCircle*)Obj)->bIgnoreAnyContextActorsWhenGeneratingCircle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle = { "bIgnoreAnyContextActorsWhenGeneratingCircle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryGenerator_OnCircle), &Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData), NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset = { "CircleCenterZOffset", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenterZOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleCenterZOffset_MetaData), NewProp_CircleCenterZOffset_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 2349835990
void Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_SetBit(void* Obj)
{
	((UEnvQueryGenerator_OnCircle*)Obj)->bDefineArc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_OnCircle), &Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefineArc_MetaData), NewProp_bDefineArc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::ClassParams = {
	&UEnvQueryGenerator_OnCircle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_OnCircle>()
{
	return UEnvQueryGenerator_OnCircle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_OnCircle);
UEnvQueryGenerator_OnCircle::~UEnvQueryGenerator_OnCircle() {}
// End Class UEnvQueryGenerator_OnCircle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPointOnCircleSpacingMethod_StaticEnum, TEXT("EPointOnCircleSpacingMethod"), &Z_Registration_Info_UEnum_EPointOnCircleSpacingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1299614571U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_OnCircle, UEnvQueryGenerator_OnCircle::StaticClass, TEXT("UEnvQueryGenerator_OnCircle"), &Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_OnCircle), 603471238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_3507576121(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_OnCircle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
