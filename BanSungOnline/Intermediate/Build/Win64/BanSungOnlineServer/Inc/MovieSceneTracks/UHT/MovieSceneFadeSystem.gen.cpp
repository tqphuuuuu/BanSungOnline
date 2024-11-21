// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Systems/MovieSceneFadeSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeSystem() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneFadeSystem
void UMovieSceneFadeSystem::StaticRegisterNativesUMovieSceneFadeSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFadeSystem);
UClass* Z_Construct_UClass_UMovieSceneFadeSystem_NoRegister()
{
	return UMovieSceneFadeSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFadeSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneFadeSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneFadeSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFadeSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneFadeSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFadeSystem_Statics::ClassParams = {
	&UMovieSceneFadeSystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFadeSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFadeSystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFadeSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFadeSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneFadeSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFadeSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFadeSystem>()
{
	return UMovieSceneFadeSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFadeSystem);
UMovieSceneFadeSystem::~UMovieSceneFadeSystem() {}
// End Class UMovieSceneFadeSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFadeSystem, UMovieSceneFadeSystem::StaticClass, TEXT("UMovieSceneFadeSystem"), &Z_Registration_Info_UClass_UMovieSceneFadeSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFadeSystem), 1781025548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_601531584(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneFadeSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
