// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusComponentBindingProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusComponentBindingProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusComponentBindingProvider
void UOptimusComponentBindingProvider::StaticRegisterNativesUOptimusComponentBindingProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentBindingProvider);
UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister()
{
	return UOptimusComponentBindingProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusComponentBindingProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusComponentBindingProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusComponentBindingProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::ClassParams = {
	&UOptimusComponentBindingProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComponentBindingProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusComponentBindingProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentBindingProvider.OuterSingleton, Z_Construct_UClass_UOptimusComponentBindingProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComponentBindingProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentBindingProvider>()
{
	return UOptimusComponentBindingProvider::StaticClass();
}
UOptimusComponentBindingProvider::UOptimusComponentBindingProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentBindingProvider);
UOptimusComponentBindingProvider::~UOptimusComponentBindingProvider() {}
// End Interface UOptimusComponentBindingProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComponentBindingProvider, UOptimusComponentBindingProvider::StaticClass, TEXT("UOptimusComponentBindingProvider"), &Z_Registration_Info_UClass_UOptimusComponentBindingProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentBindingProvider), 2322815117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_3240041600(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
