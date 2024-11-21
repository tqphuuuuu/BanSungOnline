// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneTimeWarpChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpCurve() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpCurve_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneTimeWarpCurve
void UMovieSceneTimeWarpCurve::StaticRegisterNativesUMovieSceneTimeWarpCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTimeWarpCurve);
UClass* Z_Construct_UClass_UMovieSceneTimeWarpCurve_NoRegister()
{
	return UMovieSceneTimeWarpCurve::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A custom time-warp curve providing a mapping from unwarped time to warped time\n */" },
		{ "DisplayName", "Time Warp Curve" },
		{ "IncludePath", "Variants/MovieSceneTimeWarpCurve.h" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpCurve.h" },
		{ "ToolTip", "A custom time-warp curve providing a mapping from unwarped time to warped time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "TimeWarp" },
		{ "Comment", "/** Curve defined as a 1:1 mapping from unwarped to warped time. Supports all cycle and extrap modes. */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpCurve.h" },
		{ "ToolTip", "Curve defined as a 1:1 mapping from unwarped to warped time. Supports all cycle and extrap modes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTimeWarpCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTimeWarpCurve, Channel), Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 4220439532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTimeWarpGetter,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::ClassParams = {
	&UMovieSceneTimeWarpCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTimeWarpCurve()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.OuterSingleton, Z_Construct_UClass_UMovieSceneTimeWarpCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTimeWarpCurve>()
{
	return UMovieSceneTimeWarpCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTimeWarpCurve);
UMovieSceneTimeWarpCurve::~UMovieSceneTimeWarpCurve() {}
// End Class UMovieSceneTimeWarpCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTimeWarpCurve, UMovieSceneTimeWarpCurve::StaticClass, TEXT("UMovieSceneTimeWarpCurve"), &Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTimeWarpCurve), 1491007821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpCurve_h_1255226583(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
