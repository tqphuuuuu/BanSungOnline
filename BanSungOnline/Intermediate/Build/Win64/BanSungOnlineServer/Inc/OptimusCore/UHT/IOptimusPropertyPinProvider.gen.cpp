// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusPropertyPinProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusPropertyPinProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPropertyPinProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusPropertyPinProvider
void UOptimusPropertyPinProvider::StaticRegisterNativesUOptimusPropertyPinProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPropertyPinProvider);
UClass* Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister()
{
	return UOptimusPropertyPinProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusPropertyPinProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusPropertyPinProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusPropertyPinProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::ClassParams = {
	&UOptimusPropertyPinProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPropertyPinProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusPropertyPinProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPropertyPinProvider.OuterSingleton, Z_Construct_UClass_UOptimusPropertyPinProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPropertyPinProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPropertyPinProvider>()
{
	return UOptimusPropertyPinProvider::StaticClass();
}
UOptimusPropertyPinProvider::UOptimusPropertyPinProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPropertyPinProvider);
UOptimusPropertyPinProvider::~UOptimusPropertyPinProvider() {}
// End Interface UOptimusPropertyPinProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusPropertyPinProvider, UOptimusPropertyPinProvider::StaticClass, TEXT("UOptimusPropertyPinProvider"), &Z_Registration_Info_UClass_UOptimusPropertyPinProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPropertyPinProvider), 3280659055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_4005413006(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
