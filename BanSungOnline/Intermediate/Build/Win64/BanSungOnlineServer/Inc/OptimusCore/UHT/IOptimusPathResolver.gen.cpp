// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusPathResolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusPathResolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPathResolver();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPathResolver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusPathResolver
void UOptimusPathResolver::StaticRegisterNativesUOptimusPathResolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPathResolver);
UClass* Z_Construct_UClass_UOptimusPathResolver_NoRegister()
{
	return UOptimusPathResolver::StaticClass();
}
struct Z_Construct_UClass_UOptimusPathResolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusPathResolver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusPathResolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusPathResolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPathResolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPathResolver_Statics::ClassParams = {
	&UOptimusPathResolver::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPathResolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPathResolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPathResolver()
{
	if (!Z_Registration_Info_UClass_UOptimusPathResolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPathResolver.OuterSingleton, Z_Construct_UClass_UOptimusPathResolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPathResolver.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPathResolver>()
{
	return UOptimusPathResolver::StaticClass();
}
UOptimusPathResolver::UOptimusPathResolver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPathResolver);
UOptimusPathResolver::~UOptimusPathResolver() {}
// End Interface UOptimusPathResolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusPathResolver, UOptimusPathResolver::StaticClass, TEXT("UOptimusPathResolver"), &Z_Registration_Info_UClass_UOptimusPathResolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPathResolver), 172514543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_502075740(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPathResolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
