// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusPersistentBufferProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusPersistentBufferProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusPersistentBufferProvider
void UOptimusPersistentBufferProvider::StaticRegisterNativesUOptimusPersistentBufferProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPersistentBufferProvider);
UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister()
{
	return UOptimusPersistentBufferProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusPersistentBufferProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusPersistentBufferProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::ClassParams = {
	&UOptimusPersistentBufferProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.OuterSingleton, Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPersistentBufferProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPersistentBufferProvider>()
{
	return UOptimusPersistentBufferProvider::StaticClass();
}
UOptimusPersistentBufferProvider::UOptimusPersistentBufferProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPersistentBufferProvider);
UOptimusPersistentBufferProvider::~UOptimusPersistentBufferProvider() {}
// End Interface UOptimusPersistentBufferProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusPersistentBufferProvider, UOptimusPersistentBufferProvider::StaticClass, TEXT("UOptimusPersistentBufferProvider"), &Z_Registration_Info_UClass_UOptimusPersistentBufferProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPersistentBufferProvider), 3109941449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_4216695530(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
