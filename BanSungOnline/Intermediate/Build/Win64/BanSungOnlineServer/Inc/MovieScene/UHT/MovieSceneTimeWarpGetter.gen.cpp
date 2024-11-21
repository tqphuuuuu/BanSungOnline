// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpGetter() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneTimeWarpGetter
void UMovieSceneTimeWarpGetter::StaticRegisterNativesUMovieSceneTimeWarpGetter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTimeWarpGetter);
UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister()
{
	return UMovieSceneTimeWarpGetter::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all dynamic getter implementations of a FMovieSceneTimeWarpVariant\n */" },
		{ "IncludePath", "Variants/MovieSceneTimeWarpGetter.h" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpGetter.h" },
		{ "ToolTip", "Base class for all dynamic getter implementations of a FMovieSceneTimeWarpVariant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMuted_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether this getter is muted or not. Default: false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpGetter.h" },
		{ "ToolTip", "Whether this getter is muted or not. Default: false." },
	};
#endif // WITH_METADATA
	static void NewProp_bMuted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTimeWarpGetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::NewProp_bMuted_SetBit(void* Obj)
{
	((UMovieSceneTimeWarpGetter*)Obj)->bMuted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::NewProp_bMuted = { "bMuted", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieSceneTimeWarpGetter), &Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::NewProp_bMuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMuted_MetaData), NewProp_bMuted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::NewProp_bMuted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNumericVariantGetter,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneTimeWarpGetter, IMovieSceneChannelOwner), false },  // 476700259
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::ClassParams = {
	&UMovieSceneTimeWarpGetter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.OuterSingleton, Z_Construct_UClass_UMovieSceneTimeWarpGetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTimeWarpGetter>()
{
	return UMovieSceneTimeWarpGetter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTimeWarpGetter);
UMovieSceneTimeWarpGetter::~UMovieSceneTimeWarpGetter() {}
// End Class UMovieSceneTimeWarpGetter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTimeWarpGetter, UMovieSceneTimeWarpGetter::StaticClass, TEXT("UMovieSceneTimeWarpGetter"), &Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTimeWarpGetter), 4023361142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_2885056142(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpGetter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
