// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/IMovieSceneSectionsToKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneSectionsToKey() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSectionsToKey();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Interface UMovieSceneSectionsToKey
void UMovieSceneSectionsToKey::StaticRegisterNativesUMovieSceneSectionsToKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSectionsToKey);
UClass* Z_Construct_UClass_UMovieSceneSectionsToKey_NoRegister()
{
	return UMovieSceneSectionsToKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSectionsToKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneSectionsToKey.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSectionsToKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::ClassParams = {
	&UMovieSceneSectionsToKey::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSectionsToKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton, Z_Construct_UClass_UMovieSceneSectionsToKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSectionsToKey.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSectionsToKey>()
{
	return UMovieSceneSectionsToKey::StaticClass();
}
UMovieSceneSectionsToKey::UMovieSceneSectionsToKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSectionsToKey);
UMovieSceneSectionsToKey::~UMovieSceneSectionsToKey() {}
// End Interface UMovieSceneSectionsToKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSectionsToKey, UMovieSceneSectionsToKey::StaticClass, TEXT("UMovieSceneSectionsToKey"), &Z_Registration_Info_UClass_UMovieSceneSectionsToKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSectionsToKey), 2465847576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_2800542113(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneSectionsToKey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
