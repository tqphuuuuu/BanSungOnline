// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Sections/MovieSceneTimeWarpSection.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneTimeWarpSection
void UMovieSceneTimeWarpSection::StaticRegisterNativesUMovieSceneTimeWarpSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTimeWarpSection);
UClass* Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister()
{
	return UMovieSceneTimeWarpSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The section type contained within a UMovieSceneTimeWarpTrack.\n */" },
		{ "IncludePath", "Sections/MovieSceneTimeWarpSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneTimeWarpSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The section type contained within a UMovieSceneTimeWarpTrack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWarp_MetaData[] = {
		{ "Category", "Time Warp" },
		{ "Comment", "/** Time-warp variant specifying the time-warp implementation (constant play rate by default) */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneTimeWarpSection.h" },
		{ "ToolTip", "Time-warp variant specifying the time-warp implementation (constant play rate by default)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeWarp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTimeWarpSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::NewProp_TimeWarp = { "TimeWarp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTimeWarpSection, TimeWarp), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWarp_MetaData), NewProp_TimeWarp_MetaData) }; // 2379539647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::NewProp_TimeWarp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::ClassParams = {
	&UMovieSceneTimeWarpSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTimeWarpSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.OuterSingleton, Z_Construct_UClass_UMovieSceneTimeWarpSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTimeWarpSection>()
{
	return UMovieSceneTimeWarpSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTimeWarpSection);
UMovieSceneTimeWarpSection::~UMovieSceneTimeWarpSection() {}
// End Class UMovieSceneTimeWarpSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTimeWarpSection, UMovieSceneTimeWarpSection::StaticClass, TEXT("UMovieSceneTimeWarpSection"), &Z_Registration_Info_UClass_UMovieSceneTimeWarpSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTimeWarpSection), 4141193034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_2887880975(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneTimeWarpSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
