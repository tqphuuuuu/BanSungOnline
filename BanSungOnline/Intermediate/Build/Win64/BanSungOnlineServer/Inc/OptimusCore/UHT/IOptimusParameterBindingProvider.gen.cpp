// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusParameterBindingProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusParameterBindingProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusParameterBindingProvider
void UOptimusParameterBindingProvider::StaticRegisterNativesUOptimusParameterBindingProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusParameterBindingProvider);
UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister()
{
	return UOptimusParameterBindingProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusParameterBindingProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusParameterBindingProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusParameterBindingProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::ClassParams = {
	&UOptimusParameterBindingProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusParameterBindingProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton, Z_Construct_UClass_UOptimusParameterBindingProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusParameterBindingProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusParameterBindingProvider>()
{
	return UOptimusParameterBindingProvider::StaticClass();
}
UOptimusParameterBindingProvider::UOptimusParameterBindingProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusParameterBindingProvider);
UOptimusParameterBindingProvider::~UOptimusParameterBindingProvider() {}
// End Interface UOptimusParameterBindingProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusParameterBindingProvider, UOptimusParameterBindingProvider::StaticClass, TEXT("UOptimusParameterBindingProvider"), &Z_Registration_Info_UClass_UOptimusParameterBindingProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusParameterBindingProvider), 658361310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_200510704(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
