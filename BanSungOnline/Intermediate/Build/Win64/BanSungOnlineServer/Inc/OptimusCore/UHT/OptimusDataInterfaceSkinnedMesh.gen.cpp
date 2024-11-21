// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkinnedMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMesh() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkinnedMeshDataInterface
void UOptimusSkinnedMeshDataInterface::StaticRegisterNativesUOptimusSkinnedMeshDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshDataInterface);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_NoRegister()
{
	return UOptimusSkinnedMeshDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMesh.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMesh.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading skeletal mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::ClassParams = {
	&UOptimusSkinnedMeshDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshDataInterface>()
{
	return UOptimusSkinnedMeshDataInterface::StaticClass();
}
UOptimusSkinnedMeshDataInterface::UOptimusSkinnedMeshDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshDataInterface);
UOptimusSkinnedMeshDataInterface::~UOptimusSkinnedMeshDataInterface() {}
// End Class UOptimusSkinnedMeshDataInterface

// Begin Class UOptimusSkinnedMeshDataProvider
void UOptimusSkinnedMeshDataProvider::StaticRegisterNativesUOptimusSkinnedMeshDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshDataProvider);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_NoRegister()
{
	return UOptimusSkinnedMeshDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMesh.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMesh.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::NewProp_SkinnedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::ClassParams = {
	&UOptimusSkinnedMeshDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshDataProvider>()
{
	return UOptimusSkinnedMeshDataProvider::StaticClass();
}
UOptimusSkinnedMeshDataProvider::UOptimusSkinnedMeshDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshDataProvider);
UOptimusSkinnedMeshDataProvider::~UOptimusSkinnedMeshDataProvider() {}
// End Class UOptimusSkinnedMeshDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshDataInterface, UOptimusSkinnedMeshDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshDataInterface), 57991626U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshDataProvider, UOptimusSkinnedMeshDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshDataProvider), 2435404074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMesh_h_2629343183(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
