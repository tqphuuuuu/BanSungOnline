// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieScenePlayRateCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneTimeWarpChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePlayRateCurve() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlayRateCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlayRateCurve_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieScenePlayRateCurve
void UMovieScenePlayRateCurve::StaticRegisterNativesUMovieScenePlayRateCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePlayRateCurve);
UClass* Z_Construct_UClass_UMovieScenePlayRateCurve_NoRegister()
{
	return UMovieScenePlayRateCurve::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePlayRateCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A time-warp defined as a play rate curve.\n * Time remapping is computed using the integral of the play rate curve.\n */" },
		{ "DisplayName", "Play Rate Curve" },
		{ "IncludePath", "Variants/MovieScenePlayRateCurve.h" },
		{ "ModuleRelativePath", "Public/Variants/MovieScenePlayRateCurve.h" },
		{ "ToolTip", "A time-warp defined as a play rate curve.\nTime remapping is computed using the integral of the play rate curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "TimeWarp" },
		{ "Comment", "/** Curve defined in play-rate space. Does not support cycling. */" },
		{ "ModuleRelativePath", "Public/Variants/MovieScenePlayRateCurve.h" },
		{ "ToolTip", "Curve defined in play-rate space. Does not support cycling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePlayRateCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePlayRateCurve, PlayRate), Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) }; // 4220439532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTimeWarpGetter,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::ClassParams = {
	&UMovieScenePlayRateCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePlayRateCurve()
{
	if (!Z_Registration_Info_UClass_UMovieScenePlayRateCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePlayRateCurve.OuterSingleton, Z_Construct_UClass_UMovieScenePlayRateCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePlayRateCurve.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePlayRateCurve>()
{
	return UMovieScenePlayRateCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePlayRateCurve);
UMovieScenePlayRateCurve::~UMovieScenePlayRateCurve() {}
// End Class UMovieScenePlayRateCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieScenePlayRateCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePlayRateCurve, UMovieScenePlayRateCurve::StaticClass, TEXT("UMovieScenePlayRateCurve"), &Z_Registration_Info_UClass_UMovieScenePlayRateCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePlayRateCurve), 2141181878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieScenePlayRateCurve_h_1909241696(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieScenePlayRateCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieScenePlayRateCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
