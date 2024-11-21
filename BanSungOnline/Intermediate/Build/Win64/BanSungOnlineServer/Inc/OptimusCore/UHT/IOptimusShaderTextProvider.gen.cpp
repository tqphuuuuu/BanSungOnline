// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusShaderTextProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusShaderTextProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusShaderTextProvider
void UOptimusShaderTextProvider::StaticRegisterNativesUOptimusShaderTextProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusShaderTextProvider);
UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister()
{
	return UOptimusShaderTextProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusShaderTextProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusShaderTextProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusShaderTextProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusShaderTextProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusShaderTextProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusShaderTextProvider_Statics::ClassParams = {
	&UOptimusShaderTextProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusShaderTextProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusShaderTextProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusShaderTextProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton, Z_Construct_UClass_UOptimusShaderTextProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusShaderTextProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusShaderTextProvider>()
{
	return UOptimusShaderTextProvider::StaticClass();
}
UOptimusShaderTextProvider::UOptimusShaderTextProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusShaderTextProvider);
UOptimusShaderTextProvider::~UOptimusShaderTextProvider() {}
// End Interface UOptimusShaderTextProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusShaderTextProvider, UOptimusShaderTextProvider::StaticClass, TEXT("UOptimusShaderTextProvider"), &Z_Registration_Info_UClass_UOptimusShaderTextProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusShaderTextProvider), 3448967477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_1366721509(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
