// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSectionAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionAnimation() {}

// Begin Cross Module References
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin Class UMovieSceneLiveLinkSubSectionAnimation
void UMovieSceneLiveLinkSubSectionAnimation::StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSectionAnimation);
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister()
{
	return UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing array of transforms contained in the Animation Frame Data structure\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSectionAnimation.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSectionAnimation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A LiveLinkSubSection managing array of transforms contained in the Animation Frame Data structure" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::ClassParams = {
	&UMovieSceneLiveLinkSubSectionAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionAnimation>()
{
	return UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionAnimation);
UMovieSceneLiveLinkSubSectionAnimation::~UMovieSceneLiveLinkSubSectionAnimation() {}
// End Class UMovieSceneLiveLinkSubSectionAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation, UMovieSceneLiveLinkSubSectionAnimation::StaticClass, TEXT("UMovieSceneLiveLinkSubSectionAnimation"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSectionAnimation), 441376192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h_4002026739(TEXT("/Script/LiveLinkMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
