// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionBasicRole() {}

// Begin Cross Module References
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin Class UMovieSceneLiveLinkSubSectionBasicRole
void UMovieSceneLiveLinkSubSectionBasicRole::StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSectionBasicRole);
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister()
{
	return UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing special properties of the BasicRole\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A LiveLinkSubSection managing special properties of the BasicRole" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionBasicRole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::ClassParams = {
	&UMovieSceneLiveLinkSubSectionBasicRole::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionBasicRole>()
{
	return UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionBasicRole);
UMovieSceneLiveLinkSubSectionBasicRole::~UMovieSceneLiveLinkSubSectionBasicRole() {}
// End Class UMovieSceneLiveLinkSubSectionBasicRole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole, UMovieSceneLiveLinkSubSectionBasicRole::StaticClass, TEXT("UMovieSceneLiveLinkSubSectionBasicRole"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSectionBasicRole), 295906507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_3532139523(TEXT("/Script/LiveLinkMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
