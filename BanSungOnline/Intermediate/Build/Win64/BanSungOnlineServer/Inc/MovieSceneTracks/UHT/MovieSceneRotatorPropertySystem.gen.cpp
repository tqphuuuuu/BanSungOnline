// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieSceneRotatorPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneRotatorPropertySystem() {}

// Begin Cross Module References
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorPropertySystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorPropertySystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneRotatorPropertySystem
void UMovieSceneRotatorPropertySystem::StaticRegisterNativesUMovieSceneRotatorPropertySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRotatorPropertySystem);
UClass* Z_Construct_UClass_UMovieSceneRotatorPropertySystem_NoRegister()
{
	return UMovieSceneRotatorPropertySystem::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** System for rotator property registered within PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieSceneRotatorPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneRotatorPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System for rotator property registered within PropertyRegistry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRotatorPropertySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::ClassParams = {
	&UMovieSceneRotatorPropertySystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneRotatorPropertySystem()
{
	if (!Z_Registration_Info_UClass_UMovieSceneRotatorPropertySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRotatorPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneRotatorPropertySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneRotatorPropertySystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneRotatorPropertySystem>()
{
	return UMovieSceneRotatorPropertySystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRotatorPropertySystem);
UMovieSceneRotatorPropertySystem::~UMovieSceneRotatorPropertySystem() {}
// End Class UMovieSceneRotatorPropertySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneRotatorPropertySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneRotatorPropertySystem, UMovieSceneRotatorPropertySystem::StaticClass, TEXT("UMovieSceneRotatorPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneRotatorPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRotatorPropertySystem), 1587752107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneRotatorPropertySystem_h_2111108782(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneRotatorPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneRotatorPropertySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
