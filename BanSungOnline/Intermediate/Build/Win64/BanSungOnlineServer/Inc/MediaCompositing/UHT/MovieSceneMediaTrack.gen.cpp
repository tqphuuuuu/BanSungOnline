// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCompositing/Public/MovieSceneMediaTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTrack() {}

// Begin Cross Module References
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack();
MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References

// Begin Class UMovieSceneMediaTrack
void UMovieSceneMediaTrack::StaticRegisterNativesUMovieSceneMediaTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMediaTrack);
UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister()
{
	return UMovieSceneMediaTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMediaTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track for media playback.\n */" },
		{ "IncludePath", "MovieSceneMediaTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track for media playback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSections_MetaData[] = {
		{ "Comment", "/** List of all media sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ToolTip", "List of all media sections." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner = { "MediaSections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections = { "MediaSections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMediaTrack, MediaSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSections_MetaData), NewProp_MediaSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMediaTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams = {
	&UMovieSceneMediaTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMediaTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaTrack>()
{
	return UMovieSceneMediaTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaTrack);
UMovieSceneMediaTrack::~UMovieSceneMediaTrack() {}
// End Class UMovieSceneMediaTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMediaTrack, UMovieSceneMediaTrack::StaticClass, TEXT("UMovieSceneMediaTrack"), &Z_Registration_Info_UClass_UMovieSceneMediaTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMediaTrack), 2336037941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_1812398492(TEXT("/Script/MediaCompositing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
