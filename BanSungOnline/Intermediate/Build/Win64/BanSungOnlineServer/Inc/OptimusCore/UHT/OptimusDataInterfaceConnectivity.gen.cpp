// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceConnectivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceConnectivity() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusConnectivityDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusConnectivityDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusConnectivityDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusConnectivityDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusConnectivityDataInterface
void UOptimusConnectivityDataInterface::StaticRegisterNativesUOptimusConnectivityDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusConnectivityDataInterface);
UClass* Z_Construct_UClass_UOptimusConnectivityDataInterface_NoRegister()
{
	return UOptimusConnectivityDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceConnectivity.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceConnectivity.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading skeletal mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusConnectivityDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::ClassParams = {
	&UOptimusConnectivityDataInterface::StaticClass,
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
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusConnectivityDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusConnectivityDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusConnectivityDataInterface>()
{
	return UOptimusConnectivityDataInterface::StaticClass();
}
UOptimusConnectivityDataInterface::UOptimusConnectivityDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusConnectivityDataInterface);
UOptimusConnectivityDataInterface::~UOptimusConnectivityDataInterface() {}
// End Class UOptimusConnectivityDataInterface

// Begin Class UOptimusConnectivityDataProvider
void UOptimusConnectivityDataProvider::StaticRegisterNativesUOptimusConnectivityDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusConnectivityDataProvider);
UClass* Z_Construct_UClass_UOptimusConnectivityDataProvider_NoRegister()
{
	return UOptimusConnectivityDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceConnectivity.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceConnectivity.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceConnectivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusConnectivityDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusConnectivityDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::NewProp_SkinnedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::ClassParams = {
	&UOptimusConnectivityDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusConnectivityDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusConnectivityDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusConnectivityDataProvider>()
{
	return UOptimusConnectivityDataProvider::StaticClass();
}
UOptimusConnectivityDataProvider::UOptimusConnectivityDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusConnectivityDataProvider);
UOptimusConnectivityDataProvider::~UOptimusConnectivityDataProvider() {}
// End Class UOptimusConnectivityDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceConnectivity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusConnectivityDataInterface, UOptimusConnectivityDataInterface::StaticClass, TEXT("UOptimusConnectivityDataInterface"), &Z_Registration_Info_UClass_UOptimusConnectivityDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusConnectivityDataInterface), 1552447755U) },
		{ Z_Construct_UClass_UOptimusConnectivityDataProvider, UOptimusConnectivityDataProvider::StaticClass, TEXT("UOptimusConnectivityDataProvider"), &Z_Registration_Info_UClass_UOptimusConnectivityDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusConnectivityDataProvider), 1877664717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceConnectivity_h_2904466584(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceConnectivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceConnectivity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
