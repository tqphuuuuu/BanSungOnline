// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraShakeTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCameraShakeTrack
void UMovieSceneCameraShakeTrack::StaticRegisterNativesUMovieSceneCameraShakeTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeTrack);
UClass* Z_Construct_UClass_UMovieSceneCameraShakeTrack_NoRegister()
{
	return UMovieSceneCameraShakeTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tracks/MovieSceneCameraShakeTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraShakeTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeSections_MetaData[] = {
		{ "Comment", "/** List of all sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraShakeTrack.h" },
		{ "ToolTip", "List of all sections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakeSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraShakeSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::NewProp_CameraShakeSections_Inner = { "CameraShakeSections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::NewProp_CameraShakeSections = { "CameraShakeSections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraShakeTrack, CameraShakeSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeSections_MetaData), NewProp_CameraShakeSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::NewProp_CameraShakeSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::NewProp_CameraShakeSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::ClassParams = {
	&UMovieSceneCameraShakeTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraShakeTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeTrack>()
{
	return UMovieSceneCameraShakeTrack::StaticClass();
}
UMovieSceneCameraShakeTrack::UMovieSceneCameraShakeTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeTrack);
UMovieSceneCameraShakeTrack::~UMovieSceneCameraShakeTrack() {}
// End Class UMovieSceneCameraShakeTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeTrack, UMovieSceneCameraShakeTrack::StaticClass, TEXT("UMovieSceneCameraShakeTrack"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeTrack), 3623941001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h_2777176573(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
