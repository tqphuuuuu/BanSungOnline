// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Conditions/MovieScenePlatformCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePlatformCondition() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePlatformCondition();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePlatformCondition_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScenePlatformCondition
void UMovieScenePlatformCondition::StaticRegisterNativesUMovieScenePlatformCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePlatformCondition);
UClass* Z_Construct_UClass_UMovieScenePlatformCondition_NoRegister()
{
	return UMovieScenePlatformCondition::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePlatformCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Condition on whether the platform running the executable matches one of the given platforms.\n */" },
		{ "DisplayName", "Platform Condition" },
		{ "IncludePath", "Conditions/MovieScenePlatformCondition.h" },
		{ "ModuleRelativePath", "Public/Conditions/MovieScenePlatformCondition.h" },
		{ "ToolTip", "Condition on whether the platform running the executable matches one of the given platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidPlatforms_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieScenePlatformCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValidPlatforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidPlatforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePlatformCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScenePlatformCondition_Statics::NewProp_ValidPlatforms_Inner = { "ValidPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScenePlatformCondition_Statics::NewProp_ValidPlatforms = { "ValidPlatforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePlatformCondition, ValidPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidPlatforms_MetaData), NewProp_ValidPlatforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePlatformCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePlatformCondition_Statics::NewProp_ValidPlatforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePlatformCondition_Statics::NewProp_ValidPlatforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlatformCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePlatformCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlatformCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePlatformCondition_Statics::ClassParams = {
	&UMovieScenePlatformCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePlatformCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlatformCondition_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlatformCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePlatformCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePlatformCondition()
{
	if (!Z_Registration_Info_UClass_UMovieScenePlatformCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePlatformCondition.OuterSingleton, Z_Construct_UClass_UMovieScenePlatformCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePlatformCondition.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePlatformCondition>()
{
	return UMovieScenePlatformCondition::StaticClass();
}
UMovieScenePlatformCondition::UMovieScenePlatformCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePlatformCondition);
UMovieScenePlatformCondition::~UMovieScenePlatformCondition() {}
// End Class UMovieScenePlatformCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePlatformCondition, UMovieScenePlatformCondition::StaticClass, TEXT("UMovieScenePlatformCondition"), &Z_Registration_Info_UClass_UMovieScenePlatformCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePlatformCondition), 3234455682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_3622796756(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieScenePlatformCondition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
