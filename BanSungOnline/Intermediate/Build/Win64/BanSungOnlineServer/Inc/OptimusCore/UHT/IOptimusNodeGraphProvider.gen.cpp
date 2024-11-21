// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodeGraphProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeGraphProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodeGraphProvider
void UOptimusNodeGraphProvider::StaticRegisterNativesUOptimusNodeGraphProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeGraphProvider);
UClass* Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister()
{
	return UOptimusNodeGraphProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeGraphProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeGraphProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeGraphProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::ClassParams = {
	&UOptimusNodeGraphProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeGraphProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeGraphProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeGraphProvider.OuterSingleton, Z_Construct_UClass_UOptimusNodeGraphProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeGraphProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeGraphProvider>()
{
	return UOptimusNodeGraphProvider::StaticClass();
}
UOptimusNodeGraphProvider::UOptimusNodeGraphProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeGraphProvider);
UOptimusNodeGraphProvider::~UOptimusNodeGraphProvider() {}
// End Interface UOptimusNodeGraphProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeGraphProvider, UOptimusNodeGraphProvider::StaticClass, TEXT("UOptimusNodeGraphProvider"), &Z_Registration_Info_UClass_UOptimusNodeGraphProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeGraphProvider), 3781711035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_765725278(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
