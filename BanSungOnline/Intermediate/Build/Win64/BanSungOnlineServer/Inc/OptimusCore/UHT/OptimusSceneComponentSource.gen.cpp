// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/ComponentSources/OptimusSceneComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSceneComponentSource() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneComponentSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSceneComponentSource
void UOptimusSceneComponentSource::StaticRegisterNativesUOptimusSceneComponentSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSceneComponentSource);
UClass* Z_Construct_UClass_UOptimusSceneComponentSource_NoRegister()
{
	return UOptimusSceneComponentSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusSceneComponentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentSources/OptimusSceneComponentSource.h" },
		{ "ModuleRelativePath", "Private/ComponentSources/OptimusSceneComponentSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSceneComponentSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSceneComponentSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneComponentSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSceneComponentSource_Statics::ClassParams = {
	&UOptimusSceneComponentSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneComponentSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSceneComponentSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSceneComponentSource()
{
	if (!Z_Registration_Info_UClass_UOptimusSceneComponentSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSceneComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusSceneComponentSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSceneComponentSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSceneComponentSource>()
{
	return UOptimusSceneComponentSource::StaticClass();
}
UOptimusSceneComponentSource::UOptimusSceneComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSceneComponentSource);
UOptimusSceneComponentSource::~UOptimusSceneComponentSource() {}
// End Class UOptimusSceneComponentSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSceneComponentSource, UOptimusSceneComponentSource::StaticClass, TEXT("UOptimusSceneComponentSource"), &Z_Registration_Info_UClass_UOptimusSceneComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSceneComponentSource), 3372756130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_3936406810(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ComponentSources_OptimusSceneComponentSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
