// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSection.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkStructProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister();
LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin Class UMovieSceneLiveLinkSubSection
void UMovieSceneLiveLinkSubSection::StaticRegisterNativesUMovieSceneLiveLinkSubSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSection);
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister()
{
	return UMovieSceneLiveLinkSubSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class to manage recording live link data structure properties\n * If user specifics data need to be managed in a certain way, create your own sub section\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class to manage recording live link data structure properties\nIf user specifics data need to be managed in a certain way, create your own sub section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionData_MetaData[] = {
		{ "Comment", "/** Data associated to properties managed by this sub section*/" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ToolTip", "Data associated to properties managed by this sub section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SubjectRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData = { "SubSectionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSubSection, SubSectionData), Z_Construct_UScriptStruct_FLiveLinkSubSectionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSectionData_MetaData), NewProp_SubSectionData_MetaData) }; // 971134315
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole = { "SubjectRole", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSubSection, SubjectRole), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectRole_MetaData), NewProp_SubjectRole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::ClassParams = {
	&UMovieSceneLiveLinkSubSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSection>()
{
	return UMovieSceneLiveLinkSubSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSection);
UMovieSceneLiveLinkSubSection::~UMovieSceneLiveLinkSubSection() {}
// End Class UMovieSceneLiveLinkSubSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSection, UMovieSceneLiveLinkSubSection::StaticClass, TEXT("UMovieSceneLiveLinkSubSection"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSection), 95594197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h_1812741125(TEXT("/Script/LiveLinkMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
