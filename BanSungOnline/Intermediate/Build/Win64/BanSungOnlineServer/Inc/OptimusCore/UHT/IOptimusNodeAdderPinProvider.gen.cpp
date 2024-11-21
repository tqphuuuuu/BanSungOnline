// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodeAdderPinProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeAdderPinProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodeAdderPinProvider
void UOptimusNodeAdderPinProvider::StaticRegisterNativesUOptimusNodeAdderPinProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeAdderPinProvider);
UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister()
{
	return UOptimusNodeAdderPinProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeAdderPinProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeAdderPinProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::ClassParams = {
	&UOptimusNodeAdderPinProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.OuterSingleton, Z_Construct_UClass_UOptimusNodeAdderPinProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeAdderPinProvider>()
{
	return UOptimusNodeAdderPinProvider::StaticClass();
}
UOptimusNodeAdderPinProvider::UOptimusNodeAdderPinProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeAdderPinProvider);
UOptimusNodeAdderPinProvider::~UOptimusNodeAdderPinProvider() {}
// End Interface UOptimusNodeAdderPinProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeAdderPinProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeAdderPinProvider, UOptimusNodeAdderPinProvider::StaticClass, TEXT("UOptimusNodeAdderPinProvider"), &Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeAdderPinProvider), 3861201956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeAdderPinProvider_h_2139384208(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeAdderPinProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeAdderPinProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
