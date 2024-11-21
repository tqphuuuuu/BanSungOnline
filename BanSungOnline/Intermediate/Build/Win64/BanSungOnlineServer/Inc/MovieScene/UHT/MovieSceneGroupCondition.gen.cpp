// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Conditions/MovieSceneGroupCondition.h"
#include "Runtime/MovieScene/Public/Conditions/MovieSceneCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroupCondition() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGroupCondition();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConditionContainer();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneGroupConditionOperator
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator;
static UEnum* EMovieSceneGroupConditionOperator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneGroupConditionOperator"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneGroupConditionOperator>()
{
	return EMovieSceneGroupConditionOperator_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "And.Name", "EMovieSceneGroupConditionOperator::And" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Which operator to use in evaluating a MovieSceneGroupCondition*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneGroupCondition.h" },
		{ "Or.Name", "EMovieSceneGroupConditionOperator::Or" },
		{ "ToolTip", "Which operator to use in evaluating a MovieSceneGroupCondition" },
		{ "Xor.Name", "EMovieSceneGroupConditionOperator::Xor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneGroupConditionOperator::And", (int64)EMovieSceneGroupConditionOperator::And },
		{ "EMovieSceneGroupConditionOperator::Or", (int64)EMovieSceneGroupConditionOperator::Or },
		{ "EMovieSceneGroupConditionOperator::Xor", (int64)EMovieSceneGroupConditionOperator::Xor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneGroupConditionOperator",
	"EMovieSceneGroupConditionOperator",
	Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator.InnerSingleton;
}
// End Enum EMovieSceneGroupConditionOperator

// Begin Class UMovieSceneGroupCondition
void UMovieSceneGroupCondition::StaticRegisterNativesUMovieSceneGroupCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGroupCondition);
UClass* Z_Construct_UClass_UMovieSceneGroupCondition_NoRegister()
{
	return UMovieSceneGroupCondition::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneGroupCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Condition class that allows the grouping of other conditions using 'and', 'or', or 'xor'.\n */" },
		{ "DisplayName", "Group Condition" },
		{ "IncludePath", "Conditions/MovieSceneGroupCondition.h" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneGroupCondition.h" },
		{ "ToolTip", "Condition class that allows the grouping of other conditions using 'and', 'or', or 'xor'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "Comment", "/* Which operator to use in evaluating the group condition */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneGroupCondition.h" },
		{ "ToolTip", "Which operator to use in evaluating the group condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubConditions_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "Comment", "/* List of sub-conditions to evaluate as part of this condition. Condition results will be combined together using ConditionOperator */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneGroupCondition.h" },
		{ "ToolTip", "List of sub-conditions to evaluate as part of this condition. Condition results will be combined together using ConditionOperator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubConditions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGroupCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGroupCondition, Operator), Z_Construct_UEnum_MovieScene_EMovieSceneGroupConditionOperator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 2049083778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_SubConditions_Inner = { "SubConditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneConditionContainer, METADATA_PARAMS(0, nullptr) }; // 3431843205
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_SubConditions = { "SubConditions", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneGroupCondition, SubConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubConditions_MetaData), NewProp_SubConditions_MetaData) }; // 3431843205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGroupCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_SubConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroupCondition_Statics::NewProp_SubConditions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroupCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneGroupCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroupCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGroupCondition_Statics::ClassParams = {
	&UMovieSceneGroupCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneGroupCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroupCondition_Statics::PropPointers),
	0,
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroupCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneGroupCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneGroupCondition()
{
	if (!Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton, Z_Construct_UClass_UMovieSceneGroupCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneGroupCondition.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneGroupCondition>()
{
	return UMovieSceneGroupCondition::StaticClass();
}
UMovieSceneGroupCondition::UMovieSceneGroupCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGroupCondition);
UMovieSceneGroupCondition::~UMovieSceneGroupCondition() {}
// End Class UMovieSceneGroupCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneGroupConditionOperator_StaticEnum, TEXT("EMovieSceneGroupConditionOperator"), &Z_Registration_Info_UEnum_EMovieSceneGroupConditionOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2049083778U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGroupCondition, UMovieSceneGroupCondition::StaticClass, TEXT("UMovieSceneGroupCondition"), &Z_Registration_Info_UClass_UMovieSceneGroupCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGroupCondition), 3779579110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_2991066448(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneGroupCondition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
