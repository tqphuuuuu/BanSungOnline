// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusExecutionDomainProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusExecutionDomainProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusExecutionDomainProvider
void UOptimusExecutionDomainProvider::StaticRegisterNativesUOptimusExecutionDomainProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusExecutionDomainProvider);
UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister()
{
	return UOptimusExecutionDomainProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusExecutionDomainProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusExecutionDomainProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::ClassParams = {
	&UOptimusExecutionDomainProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton, Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusExecutionDomainProvider>()
{
	return UOptimusExecutionDomainProvider::StaticClass();
}
UOptimusExecutionDomainProvider::UOptimusExecutionDomainProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusExecutionDomainProvider);
UOptimusExecutionDomainProvider::~UOptimusExecutionDomainProvider() {}
// End Interface UOptimusExecutionDomainProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusExecutionDomainProvider, UOptimusExecutionDomainProvider::StaticClass, TEXT("UOptimusExecutionDomainProvider"), &Z_Registration_Info_UClass_UOptimusExecutionDomainProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusExecutionDomainProvider), 2242621882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_3725609167(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
