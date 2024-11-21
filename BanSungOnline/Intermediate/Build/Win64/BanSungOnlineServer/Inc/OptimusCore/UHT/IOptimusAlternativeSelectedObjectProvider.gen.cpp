// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusAlternativeSelectedObjectProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusAlternativeSelectedObjectProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusAlternativeSelectedObjectProvider
void UOptimusAlternativeSelectedObjectProvider::StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAlternativeSelectedObjectProvider);
UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister()
{
	return UOptimusAlternativeSelectedObjectProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusAlternativeSelectedObjectProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusAlternativeSelectedObjectProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::ClassParams = {
	&UOptimusAlternativeSelectedObjectProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.OuterSingleton, Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAlternativeSelectedObjectProvider>()
{
	return UOptimusAlternativeSelectedObjectProvider::StaticClass();
}
UOptimusAlternativeSelectedObjectProvider::UOptimusAlternativeSelectedObjectProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAlternativeSelectedObjectProvider);
UOptimusAlternativeSelectedObjectProvider::~UOptimusAlternativeSelectedObjectProvider() {}
// End Interface UOptimusAlternativeSelectedObjectProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider, UOptimusAlternativeSelectedObjectProvider::StaticClass, TEXT("UOptimusAlternativeSelectedObjectProvider"), &Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAlternativeSelectedObjectProvider), 1902408556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_3305045824(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
