// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/IMovieSceneChannelOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneChannelOwner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOwner();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneChannelOwner
void UMovieSceneChannelOwner::StaticRegisterNativesUMovieSceneChannelOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChannelOwner);
UClass* Z_Construct_UClass_UMovieSceneChannelOwner_NoRegister()
{
	return UMovieSceneChannelOwner::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneChannelOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/IMovieSceneChannelOwner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneChannelOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneChannelOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChannelOwner_Statics::ClassParams = {
	&UMovieSceneChannelOwner::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChannelOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneChannelOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneChannelOwner()
{
	if (!Z_Registration_Info_UClass_UMovieSceneChannelOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChannelOwner.OuterSingleton, Z_Construct_UClass_UMovieSceneChannelOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneChannelOwner.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneChannelOwner>()
{
	return UMovieSceneChannelOwner::StaticClass();
}
UMovieSceneChannelOwner::UMovieSceneChannelOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChannelOwner);
UMovieSceneChannelOwner::~UMovieSceneChannelOwner() {}
// End Interface UMovieSceneChannelOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChannelOwner, UMovieSceneChannelOwner::StaticClass, TEXT("UMovieSceneChannelOwner"), &Z_Registration_Info_UClass_UMovieSceneChannelOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChannelOwner), 476700259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_1864968610(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOwner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
