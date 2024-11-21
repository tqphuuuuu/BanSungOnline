// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusDataInterfaceProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusDataInterfaceProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusDataInterfaceProvider
void UOptimusDataInterfaceProvider::StaticRegisterNativesUOptimusDataInterfaceProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDataInterfaceProvider);
UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister()
{
	return UOptimusDataInterfaceProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusDataInterfaceProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusDataInterfaceProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::ClassParams = {
	&UOptimusDataInterfaceProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton, Z_Construct_UClass_UOptimusDataInterfaceProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDataInterfaceProvider>()
{
	return UOptimusDataInterfaceProvider::StaticClass();
}
UOptimusDataInterfaceProvider::UOptimusDataInterfaceProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDataInterfaceProvider);
UOptimusDataInterfaceProvider::~UOptimusDataInterfaceProvider() {}
// End Interface UOptimusDataInterfaceProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDataInterfaceProvider, UOptimusDataInterfaceProvider::StaticClass, TEXT("UOptimusDataInterfaceProvider"), &Z_Registration_Info_UClass_UOptimusDataInterfaceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDataInterfaceProvider), 250041116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_3425454086(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDataInterfaceProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
