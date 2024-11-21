// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Conditions/MovieSceneScalabilityCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScalabilityCondition() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneScalabilityCondition();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneScalabilityCondition_NoRegister();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Enum EMovieSceneScalabilityConditionGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup;
static UEnum* EMovieSceneScalabilityConditionGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EMovieSceneScalabilityConditionGroup"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionGroup>()
{
	return EMovieSceneScalabilityConditionGroup_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AntiAliasing.Name", "EMovieSceneScalabilityConditionGroup::AntiAliasing" },
		{ "Comment", "// The below is a bit hardcoded to try and match how scalability settings are set up in Scalability.h.\n// This is because unfortunately scalability settings at their core are not very extensible or data-driven \n// and so it's difficult to do this in a data driven way. So I've made enums here to make the setup user friendly here,\n// and then do the mapping in code. If scalability gets re-architected, this will need be to be updated to match.\n" },
		{ "Effects.Name", "EMovieSceneScalabilityConditionGroup::Effects" },
		{ "Foliage.Name", "EMovieSceneScalabilityConditionGroup::Foliage" },
		{ "GlobalIllumination.Name", "EMovieSceneScalabilityConditionGroup::GlobalIllumination" },
		{ "Landscape.Name", "EMovieSceneScalabilityConditionGroup::Landscape" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
		{ "PostProcess.Name", "EMovieSceneScalabilityConditionGroup::PostProcess" },
		{ "Reflection.Name", "EMovieSceneScalabilityConditionGroup::Reflection" },
		{ "Shading.Name", "EMovieSceneScalabilityConditionGroup::Shading" },
		{ "Shadow.Name", "EMovieSceneScalabilityConditionGroup::Shadow" },
		{ "Texture.Name", "EMovieSceneScalabilityConditionGroup::Texture" },
		{ "ToolTip", "The below is a bit hardcoded to try and match how scalability settings are set up in Scalability.h.\nThis is because unfortunately scalability settings at their core are not very extensible or data-driven\nand so it's difficult to do this in a data driven way. So I've made enums here to make the setup user friendly here,\nand then do the mapping in code. If scalability gets re-architected, this will need be to be updated to match." },
		{ "ViewDistance.Name", "EMovieSceneScalabilityConditionGroup::ViewDistance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneScalabilityConditionGroup::ViewDistance", (int64)EMovieSceneScalabilityConditionGroup::ViewDistance },
		{ "EMovieSceneScalabilityConditionGroup::AntiAliasing", (int64)EMovieSceneScalabilityConditionGroup::AntiAliasing },
		{ "EMovieSceneScalabilityConditionGroup::Shadow", (int64)EMovieSceneScalabilityConditionGroup::Shadow },
		{ "EMovieSceneScalabilityConditionGroup::GlobalIllumination", (int64)EMovieSceneScalabilityConditionGroup::GlobalIllumination },
		{ "EMovieSceneScalabilityConditionGroup::Reflection", (int64)EMovieSceneScalabilityConditionGroup::Reflection },
		{ "EMovieSceneScalabilityConditionGroup::PostProcess", (int64)EMovieSceneScalabilityConditionGroup::PostProcess },
		{ "EMovieSceneScalabilityConditionGroup::Texture", (int64)EMovieSceneScalabilityConditionGroup::Texture },
		{ "EMovieSceneScalabilityConditionGroup::Effects", (int64)EMovieSceneScalabilityConditionGroup::Effects },
		{ "EMovieSceneScalabilityConditionGroup::Foliage", (int64)EMovieSceneScalabilityConditionGroup::Foliage },
		{ "EMovieSceneScalabilityConditionGroup::Shading", (int64)EMovieSceneScalabilityConditionGroup::Shading },
		{ "EMovieSceneScalabilityConditionGroup::Landscape", (int64)EMovieSceneScalabilityConditionGroup::Landscape },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"EMovieSceneScalabilityConditionGroup",
	"EMovieSceneScalabilityConditionGroup",
	Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup.InnerSingleton;
}
// End Enum EMovieSceneScalabilityConditionGroup

// Begin Enum EMovieSceneScalabilityConditionOperator
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator;
static UEnum* EMovieSceneScalabilityConditionOperator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EMovieSceneScalabilityConditionOperator"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionOperator>()
{
	return EMovieSceneScalabilityConditionOperator_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EqualTo.Name", "EMovieSceneScalabilityConditionOperator::EqualTo" },
		{ "GreaterThan.Name", "EMovieSceneScalabilityConditionOperator::GreaterThan" },
		{ "GreaterThanOrEqualTo.Name", "EMovieSceneScalabilityConditionOperator::GreaterThanOrEqualTo" },
		{ "LessThan.Name", "EMovieSceneScalabilityConditionOperator::LessThan" },
		{ "LessThanOrEqualTo.Name", "EMovieSceneScalabilityConditionOperator::LessThanOrEqualTo" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneScalabilityConditionOperator::LessThan", (int64)EMovieSceneScalabilityConditionOperator::LessThan },
		{ "EMovieSceneScalabilityConditionOperator::LessThanOrEqualTo", (int64)EMovieSceneScalabilityConditionOperator::LessThanOrEqualTo },
		{ "EMovieSceneScalabilityConditionOperator::EqualTo", (int64)EMovieSceneScalabilityConditionOperator::EqualTo },
		{ "EMovieSceneScalabilityConditionOperator::GreaterThanOrEqualTo", (int64)EMovieSceneScalabilityConditionOperator::GreaterThanOrEqualTo },
		{ "EMovieSceneScalabilityConditionOperator::GreaterThan", (int64)EMovieSceneScalabilityConditionOperator::GreaterThan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"EMovieSceneScalabilityConditionOperator",
	"EMovieSceneScalabilityConditionOperator",
	Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator.InnerSingleton;
}
// End Enum EMovieSceneScalabilityConditionOperator

// Begin Enum EMovieSceneScalabilityConditionLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel;
static UEnum* EMovieSceneScalabilityConditionLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EMovieSceneScalabilityConditionLevel"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EMovieSceneScalabilityConditionLevel>()
{
	return EMovieSceneScalabilityConditionLevel_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cinematic.Name", "EMovieSceneScalabilityConditionLevel::Cinematic" },
		{ "Epic.Name", "EMovieSceneScalabilityConditionLevel::Epic" },
		{ "High.Name", "EMovieSceneScalabilityConditionLevel::High" },
		{ "Low.Name", "EMovieSceneScalabilityConditionLevel::Low" },
		{ "Medium.Name", "EMovieSceneScalabilityConditionLevel::Medium" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneScalabilityConditionLevel::Low", (int64)EMovieSceneScalabilityConditionLevel::Low },
		{ "EMovieSceneScalabilityConditionLevel::Medium", (int64)EMovieSceneScalabilityConditionLevel::Medium },
		{ "EMovieSceneScalabilityConditionLevel::High", (int64)EMovieSceneScalabilityConditionLevel::High },
		{ "EMovieSceneScalabilityConditionLevel::Epic", (int64)EMovieSceneScalabilityConditionLevel::Epic },
		{ "EMovieSceneScalabilityConditionLevel::Cinematic", (int64)EMovieSceneScalabilityConditionLevel::Cinematic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"EMovieSceneScalabilityConditionLevel",
	"EMovieSceneScalabilityConditionLevel",
	Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel.InnerSingleton;
}
// End Enum EMovieSceneScalabilityConditionLevel

// Begin Class UMovieSceneScalabilityCondition
void UMovieSceneScalabilityCondition::StaticRegisterNativesUMovieSceneScalabilityCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScalabilityCondition);
UClass* Z_Construct_UClass_UMovieSceneScalabilityCondition_NoRegister()
{
	return UMovieSceneScalabilityCondition::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Condition on whether the current engine scalability settings fulfill a given constraint.\n */" },
		{ "DisplayName", "Scalability Condition" },
		{ "IncludePath", "Conditions/MovieSceneScalabilityCondition.h" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
		{ "ToolTip", "Condition on whether the current engine scalability settings fulfill a given constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneScalabilityCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Group;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScalabilityCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneScalabilityCondition, Group), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) }; // 3358066860
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneScalabilityCondition, Operator), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionOperator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 1994229238
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneScalabilityCondition, Level), Z_Construct_UEnum_MovieSceneTracks_EMovieSceneScalabilityConditionLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) }; // 4222200358
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Group_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Level_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::ClassParams = {
	&UMovieSceneScalabilityCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScalabilityCondition()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.OuterSingleton, Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScalabilityCondition.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneScalabilityCondition>()
{
	return UMovieSceneScalabilityCondition::StaticClass();
}
UMovieSceneScalabilityCondition::UMovieSceneScalabilityCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScalabilityCondition);
UMovieSceneScalabilityCondition::~UMovieSceneScalabilityCondition() {}
// End Class UMovieSceneScalabilityCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneScalabilityConditionGroup_StaticEnum, TEXT("EMovieSceneScalabilityConditionGroup"), &Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3358066860U) },
		{ EMovieSceneScalabilityConditionOperator_StaticEnum, TEXT("EMovieSceneScalabilityConditionOperator"), &Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1994229238U) },
		{ EMovieSceneScalabilityConditionLevel_StaticEnum, TEXT("EMovieSceneScalabilityConditionLevel"), &Z_Registration_Info_UEnum_EMovieSceneScalabilityConditionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4222200358U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScalabilityCondition, UMovieSceneScalabilityCondition::StaticClass, TEXT("UMovieSceneScalabilityCondition"), &Z_Registration_Info_UClass_UMovieSceneScalabilityCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScalabilityCondition), 2171805968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_2961716730(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
