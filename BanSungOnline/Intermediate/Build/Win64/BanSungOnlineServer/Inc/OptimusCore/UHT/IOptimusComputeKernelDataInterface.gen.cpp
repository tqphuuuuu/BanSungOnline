// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusComputeKernelDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusComputeKernelDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusComputeKernelDataInterface
void UOptimusComputeKernelDataInterface::StaticRegisterNativesUOptimusComputeKernelDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComputeKernelDataInterface);
UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister()
{
	return UOptimusComputeKernelDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusComputeKernelDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusComputeKernelDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::ClassParams = {
	&UOptimusComputeKernelDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusComputeKernelDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComputeKernelDataInterface>()
{
	return UOptimusComputeKernelDataInterface::StaticClass();
}
UOptimusComputeKernelDataInterface::UOptimusComputeKernelDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComputeKernelDataInterface);
UOptimusComputeKernelDataInterface::~UOptimusComputeKernelDataInterface() {}
// End Interface UOptimusComputeKernelDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComputeKernelDataInterface, UOptimusComputeKernelDataInterface::StaticClass, TEXT("UOptimusComputeKernelDataInterface"), &Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComputeKernelDataInterface), 2386351400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_1975742798(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComputeKernelDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
