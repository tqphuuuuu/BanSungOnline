// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusUnnamedNodePinProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusUnnamedNodePinProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusUnnamedNodePinProvider
void UOptimusUnnamedNodePinProvider::StaticRegisterNativesUOptimusUnnamedNodePinProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusUnnamedNodePinProvider);
UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister()
{
	return UOptimusUnnamedNodePinProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusUnnamedNodePinProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusUnnamedNodePinProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::ClassParams = {
	&UOptimusUnnamedNodePinProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.OuterSingleton, Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusUnnamedNodePinProvider>()
{
	return UOptimusUnnamedNodePinProvider::StaticClass();
}
UOptimusUnnamedNodePinProvider::UOptimusUnnamedNodePinProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusUnnamedNodePinProvider);
UOptimusUnnamedNodePinProvider::~UOptimusUnnamedNodePinProvider() {}
// End Interface UOptimusUnnamedNodePinProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusUnnamedNodePinProvider, UOptimusUnnamedNodePinProvider::StaticClass, TEXT("UOptimusUnnamedNodePinProvider"), &Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusUnnamedNodePinProvider), 2099196189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_2269363066(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
