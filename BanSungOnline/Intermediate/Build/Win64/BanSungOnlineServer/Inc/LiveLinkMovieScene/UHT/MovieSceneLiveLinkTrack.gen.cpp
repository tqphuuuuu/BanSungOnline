// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkTrack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin Class UMovieSceneLiveLinkTrack
void UMovieSceneLiveLinkTrack::StaticRegisterNativesUMovieSceneLiveLinkTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkTrack);
UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister()
{
	return UMovieSceneLiveLinkTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A track for animating FMoveSceneLiveLinkTrack properties.\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track for animating FMoveSceneLiveLinkTrack properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole = { "TrackRole", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkTrack, TrackRole), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackRole_MetaData), NewProp_TrackRole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLiveLinkTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::ClassParams = {
	&UMovieSceneLiveLinkTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkTrack>()
{
	return UMovieSceneLiveLinkTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkTrack);
UMovieSceneLiveLinkTrack::~UMovieSceneLiveLinkTrack() {}
// End Class UMovieSceneLiveLinkTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkTrack, UMovieSceneLiveLinkTrack::StaticClass, TEXT("UMovieSceneLiveLinkTrack"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkTrack), 1731834684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_4144815095(TEXT("/Script/LiveLinkMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
