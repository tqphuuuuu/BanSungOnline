// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Tracks/MovieSceneTimeWarpTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneTimeWarpTrack
void UMovieSceneTimeWarpTrack::StaticRegisterNativesUMovieSceneTimeWarpTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTimeWarpTrack);
UClass* Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister()
{
	return UMovieSceneTimeWarpTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A track that can be added to any sequence to affect the playback position and speed of that sequence and all its subsequences\n */" },
		{ "IncludePath", "Tracks/MovieSceneTimeWarpTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneTimeWarpTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that can be added to any sequence to affect the playback position and speed of that sequence and all its subsequences" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActiveTimeWarp_MetaData[] = {
		{ "Comment", "/** True if this track is the active timewarp in its sequence. Assigned as part of compilation */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneTimeWarpTrack.h" },
		{ "ToolTip", "True if this track is the active timewarp in its sequence. Assigned as part of compilation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Comment", "/** Array of sections contained within this track - should only ever be one. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneTimeWarpTrack.h" },
		{ "ToolTip", "Array of sections contained within this track - should only ever be one." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActiveTimeWarp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActiveTimeWarp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTimeWarpTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_bIsActiveTimeWarp_SetBit(void* Obj)
{
	((UMovieSceneTimeWarpTrack*)Obj)->bIsActiveTimeWarp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_bIsActiveTimeWarp = { "bIsActiveTimeWarp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneTimeWarpTrack), &Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_bIsActiveTimeWarp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActiveTimeWarp_MetaData), NewProp_bIsActiveTimeWarp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTimeWarpTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_bIsActiveTimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::NewProp_Sections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::ClassParams = {
	&UMovieSceneTimeWarpTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTimeWarpTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneTimeWarpTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTimeWarpTrack>()
{
	return UMovieSceneTimeWarpTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTimeWarpTrack);
UMovieSceneTimeWarpTrack::~UMovieSceneTimeWarpTrack() {}
// End Class UMovieSceneTimeWarpTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTimeWarpTrack, UMovieSceneTimeWarpTrack::StaticClass, TEXT("UMovieSceneTimeWarpTrack"), &Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTimeWarpTrack), 192000134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_2843497640(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneTimeWarpTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
