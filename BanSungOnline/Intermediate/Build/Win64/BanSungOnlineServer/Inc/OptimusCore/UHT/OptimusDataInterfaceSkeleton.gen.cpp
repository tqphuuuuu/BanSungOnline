// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkeleton() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkeletonDataInterface
void UOptimusSkeletonDataInterface::StaticRegisterNativesUOptimusSkeletonDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletonDataInterface);
UClass* Z_Construct_UClass_UOptimusSkeletonDataInterface_NoRegister()
{
	return UOptimusSkeletonDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for skeletal data. (Outdated)*/" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkeleton.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkeleton.h" },
		{ "ToolTip", "Compute Framework Data Interface for skeletal data. (Outdated)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletonDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::ClassParams = {
	&UOptimusSkeletonDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkeletonDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkeletonDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletonDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkeletonDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkeletonDataInterface>()
{
	return UOptimusSkeletonDataInterface::StaticClass();
}
UOptimusSkeletonDataInterface::UOptimusSkeletonDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletonDataInterface);
UOptimusSkeletonDataInterface::~UOptimusSkeletonDataInterface() {}
// End Class UOptimusSkeletonDataInterface

// Begin Class UOptimusSkeletonDataProvider
void UOptimusSkeletonDataProvider::StaticRegisterNativesUOptimusSkeletonDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletonDataProvider);
UClass* Z_Construct_UClass_UOptimusSkeletonDataProvider_NoRegister()
{
	return UOptimusSkeletonDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkeleton.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkeleton.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkeleton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletonDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkeletonDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::NewProp_SkinnedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::ClassParams = {
	&UOptimusSkeletonDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkeletonDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkeletonDataProvider>()
{
	return UOptimusSkeletonDataProvider::StaticClass();
}
UOptimusSkeletonDataProvider::UOptimusSkeletonDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletonDataProvider);
UOptimusSkeletonDataProvider::~UOptimusSkeletonDataProvider() {}
// End Class UOptimusSkeletonDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkeletonDataInterface, UOptimusSkeletonDataInterface::StaticClass, TEXT("UOptimusSkeletonDataInterface"), &Z_Registration_Info_UClass_UOptimusSkeletonDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletonDataInterface), 2367602U) },
		{ Z_Construct_UClass_UOptimusSkeletonDataProvider, UOptimusSkeletonDataProvider::StaticClass, TEXT("UOptimusSkeletonDataProvider"), &Z_Registration_Info_UClass_UOptimusSkeletonDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletonDataProvider), 1893665911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_1758268704(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
