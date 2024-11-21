// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/ComponentSources/OptimusSkinnedMeshComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSkinnedMeshComponentSource() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkinnedMeshComponentSource
void UOptimusSkinnedMeshComponentSource::StaticRegisterNativesUOptimusSkinnedMeshComponentSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshComponentSource);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_NoRegister()
{
	return UOptimusSkinnedMeshComponentSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentSources/OptimusSkinnedMeshComponentSource.h" },
		{ "ModuleRelativePath", "Private/ComponentSources/OptimusSkinnedMeshComponentSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshComponentSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::ClassParams = {
	&UOptimusSkinnedMeshComponentSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshComponentSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshComponentSource>()
{
	return UOptimusSkinnedMeshComponentSource::StaticClass();
}
UOptimusSkinnedMeshComponentSource::UOptimusSkinnedMeshComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshComponentSource);
UOptimusSkinnedMeshComponentSource::~UOptimusSkinnedMeshComponentSource() {}
// End Class UOptimusSkinnedMeshComponentSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshComponentSource, UOptimusSkinnedMeshComponentSource::StaticClass, TEXT("UOptimusSkinnedMeshComponentSource"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshComponentSource), 792570631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_879576495(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkinnedMeshComponentSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
