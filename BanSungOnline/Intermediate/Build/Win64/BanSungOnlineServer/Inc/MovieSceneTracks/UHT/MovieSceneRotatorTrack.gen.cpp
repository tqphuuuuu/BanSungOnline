// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneRotatorTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneRotatorTrack() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneRotatorTrack
void UMovieSceneRotatorTrack::StaticRegisterNativesUMovieSceneRotatorTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRotatorTrack);
UClass* Z_Construct_UClass_UMovieSceneRotatorTrack_NoRegister()
{
	return UMovieSceneRotatorTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneRotatorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Movie scene track that animates an FRotator property */" },
		{ "IncludePath", "Tracks/MovieSceneRotatorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneRotatorTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene track that animates an FRotator property" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRotatorTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::ClassParams = {
	&UMovieSceneRotatorTrack::StaticClass,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneRotatorTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneRotatorTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneRotatorTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneRotatorTrack>()
{
	return UMovieSceneRotatorTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRotatorTrack);
UMovieSceneRotatorTrack::~UMovieSceneRotatorTrack() {}
// End Class UMovieSceneRotatorTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneRotatorTrack, UMovieSceneRotatorTrack::StaticClass, TEXT("UMovieSceneRotatorTrack"), &Z_Registration_Info_UClass_UMovieSceneRotatorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRotatorTrack), 3848083747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_1063036235(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneRotatorTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
