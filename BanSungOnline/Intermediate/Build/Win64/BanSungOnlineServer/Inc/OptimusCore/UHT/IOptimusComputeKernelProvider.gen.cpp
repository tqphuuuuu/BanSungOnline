// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusComputeKernelProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusComputeKernelProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusComputeKernelProvider
void UOptimusComputeKernelProvider::StaticRegisterNativesUOptimusComputeKernelProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComputeKernelProvider);
UClass* Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister()
{
	return UOptimusComputeKernelProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusComputeKernelProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusComputeKernelProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusComputeKernelProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::ClassParams = {
	&UOptimusComputeKernelProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComputeKernelProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusComputeKernelProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComputeKernelProvider.OuterSingleton, Z_Construct_UClass_UOptimusComputeKernelProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComputeKernelProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComputeKernelProvider>()
{
	return UOptimusComputeKernelProvider::StaticClass();
}
UOptimusComputeKernelProvider::UOptimusComputeKernelProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComputeKernelProvider);
UOptimusComputeKernelProvider::~UOptimusComputeKernelProvider() {}
// End Interface UOptimusComputeKernelProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComputeKernelProvider, UOptimusComputeKernelProvider::StaticClass, TEXT("UOptimusComputeKernelProvider"), &Z_Registration_Info_UClass_UOptimusComputeKernelProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComputeKernelProvider), 660217005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_3650277397(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
