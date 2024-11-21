// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodePinRouter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodePinRouter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodePinRouter
void UOptimusNodePinRouter::StaticRegisterNativesUOptimusNodePinRouter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodePinRouter);
UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister()
{
	return UOptimusNodePinRouter::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodePinRouter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodePinRouter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodePinRouter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodePinRouter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePinRouter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodePinRouter_Statics::ClassParams = {
	&UOptimusNodePinRouter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePinRouter_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodePinRouter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodePinRouter()
{
	if (!Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton, Z_Construct_UClass_UOptimusNodePinRouter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodePinRouter>()
{
	return UOptimusNodePinRouter::StaticClass();
}
UOptimusNodePinRouter::UOptimusNodePinRouter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodePinRouter);
UOptimusNodePinRouter::~UOptimusNodePinRouter() {}
// End Interface UOptimusNodePinRouter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodePinRouter, UOptimusNodePinRouter::StaticClass, TEXT("UOptimusNodePinRouter"), &Z_Registration_Info_UClass_UOptimusNodePinRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodePinRouter), 1815845889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_56419839(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
