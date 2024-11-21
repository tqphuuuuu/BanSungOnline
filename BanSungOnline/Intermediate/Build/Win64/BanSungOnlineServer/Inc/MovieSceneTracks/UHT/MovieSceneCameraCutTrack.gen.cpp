// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraCutTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCameraCutTrack
void UMovieSceneCameraCutTrack::StaticRegisterNativesUMovieSceneCameraCutTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraCutTrack);
UClass* Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister()
{
	return UMovieSceneCameraCutTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of CameraCut properties in a movie scene.\n */" },
		{ "IncludePath", "Tracks/MovieSceneCameraCutTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraCutTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of CameraCut properties in a movie scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraCutTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All movie scene sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraCutTrack.h" },
		{ "ToolTip", "All movie scene sections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoArrangeSections_MetaData[] = {
		{ "Comment", "/** Whether camera cut sections should automatically resize to fill gaps */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraCutTrack.h" },
		{ "ToolTip", "Whether camera cut sections should automatically resize to fill gaps" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBlend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static void NewProp_bAutoArrangeSections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoArrangeSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bCanBlend_SetBit(void* Obj)
{
	((UMovieSceneCameraCutTrack*)Obj)->bCanBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bCanBlend = { "bCanBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCameraCutTrack), &Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bCanBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBlend_MetaData), NewProp_bCanBlend_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraCutTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
void Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bAutoArrangeSections_SetBit(void* Obj)
{
	((UMovieSceneCameraCutTrack*)Obj)->bAutoArrangeSections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bAutoArrangeSections = { "bAutoArrangeSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCameraCutTrack), &Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bAutoArrangeSections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoArrangeSections_MetaData), NewProp_bAutoArrangeSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bCanBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::NewProp_bAutoArrangeSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::ClassParams = {
	&UMovieSceneCameraCutTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraCutTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraCutTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutTrack>()
{
	return UMovieSceneCameraCutTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutTrack);
UMovieSceneCameraCutTrack::~UMovieSceneCameraCutTrack() {}
// End Class UMovieSceneCameraCutTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraCutTrack, UMovieSceneCameraCutTrack::StaticClass, TEXT("UMovieSceneCameraCutTrack"), &Z_Registration_Info_UClass_UMovieSceneCameraCutTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraCutTrack), 3321075612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h_2370037910(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraCutTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
