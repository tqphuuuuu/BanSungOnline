// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/ComponentSources/OptimusSkeletalMeshComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSkeletalMeshComponentSource() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshComponentSource();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkeletalMeshComponentSource
void UOptimusSkeletalMeshComponentSource::StaticRegisterNativesUOptimusSkeletalMeshComponentSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletalMeshComponentSource);
UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_NoRegister()
{
	return UOptimusSkeletalMeshComponentSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentSources/OptimusSkeletalMeshComponentSource.h" },
		{ "ModuleRelativePath", "Private/ComponentSources/OptimusSkeletalMeshComponentSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletalMeshComponentSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusSkinnedMeshComponentSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::ClassParams = {
	&UOptimusSkeletalMeshComponentSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkeletalMeshComponentSource()
{
	if (!Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusSkeletalMeshComponentSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkeletalMeshComponentSource>()
{
	return UOptimusSkeletalMeshComponentSource::StaticClass();
}
UOptimusSkeletalMeshComponentSource::UOptimusSkeletalMeshComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletalMeshComponentSource);
UOptimusSkeletalMeshComponentSource::~UOptimusSkeletalMeshComponentSource() {}
// End Class UOptimusSkeletalMeshComponentSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkeletalMeshComponentSource, UOptimusSkeletalMeshComponentSource::StaticClass, TEXT("UOptimusSkeletalMeshComponentSource"), &Z_Registration_Info_UClass_UOptimusSkeletalMeshComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletalMeshComponentSource), 3782816524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_739545967(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSkeletalMeshComponentSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
