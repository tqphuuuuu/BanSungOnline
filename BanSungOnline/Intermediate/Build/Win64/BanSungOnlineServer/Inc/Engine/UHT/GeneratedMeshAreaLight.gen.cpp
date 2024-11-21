// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/GeneratedMeshAreaLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedMeshAreaLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight();
ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AGeneratedMeshAreaLight
void AGeneratedMeshAreaLight::StaticRegisterNativesAGeneratedMeshAreaLight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeneratedMeshAreaLight);
UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister()
{
	return AGeneratedMeshAreaLight::StaticClass();
}
struct Z_Construct_UClass_AGeneratedMeshAreaLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Engine/GeneratedMeshAreaLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedMeshAreaLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratedMeshAreaLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpotLight,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams = {
	&AGeneratedMeshAreaLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeneratedMeshAreaLight()
{
	if (!Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton, Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeneratedMeshAreaLight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AGeneratedMeshAreaLight>()
{
	return AGeneratedMeshAreaLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedMeshAreaLight);
AGeneratedMeshAreaLight::~AGeneratedMeshAreaLight() {}
// End Class AGeneratedMeshAreaLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeneratedMeshAreaLight, AGeneratedMeshAreaLight::StaticClass, TEXT("AGeneratedMeshAreaLight"), &Z_Registration_Info_UClass_AGeneratedMeshAreaLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeneratedMeshAreaLight), 1127095755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_1602504383(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GeneratedMeshAreaLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
