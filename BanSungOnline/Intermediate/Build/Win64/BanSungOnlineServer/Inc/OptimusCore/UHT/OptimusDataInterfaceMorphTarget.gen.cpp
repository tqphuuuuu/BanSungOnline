// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceMorphTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceMorphTarget() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusMorphTargetDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusMorphTargetDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusMorphTargetDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusMorphTargetDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusMorphTargetDataInterface
void UOptimusMorphTargetDataInterface::StaticRegisterNativesUOptimusMorphTargetDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusMorphTargetDataInterface);
UClass* Z_Construct_UClass_UOptimusMorphTargetDataInterface_NoRegister()
{
	return UOptimusMorphTargetDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceMorphTarget.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceMorphTarget.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading skeletal mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusMorphTargetDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::ClassParams = {
	&UOptimusMorphTargetDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusMorphTargetDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusMorphTargetDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusMorphTargetDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusMorphTargetDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusMorphTargetDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusMorphTargetDataInterface>()
{
	return UOptimusMorphTargetDataInterface::StaticClass();
}
UOptimusMorphTargetDataInterface::UOptimusMorphTargetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusMorphTargetDataInterface);
UOptimusMorphTargetDataInterface::~UOptimusMorphTargetDataInterface() {}
// End Class UOptimusMorphTargetDataInterface

// Begin Class UOptimusMorphTargetDataProvider
void UOptimusMorphTargetDataProvider::StaticRegisterNativesUOptimusMorphTargetDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusMorphTargetDataProvider);
UClass* Z_Construct_UClass_UOptimusMorphTargetDataProvider_NoRegister()
{
	return UOptimusMorphTargetDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceMorphTarget.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceMorphTarget.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceMorphTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusMorphTargetDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusMorphTargetDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::NewProp_SkinnedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::ClassParams = {
	&UOptimusMorphTargetDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusMorphTargetDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusMorphTargetDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusMorphTargetDataProvider>()
{
	return UOptimusMorphTargetDataProvider::StaticClass();
}
UOptimusMorphTargetDataProvider::UOptimusMorphTargetDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusMorphTargetDataProvider);
UOptimusMorphTargetDataProvider::~UOptimusMorphTargetDataProvider() {}
// End Class UOptimusMorphTargetDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceMorphTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusMorphTargetDataInterface, UOptimusMorphTargetDataInterface::StaticClass, TEXT("UOptimusMorphTargetDataInterface"), &Z_Registration_Info_UClass_UOptimusMorphTargetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusMorphTargetDataInterface), 1274981731U) },
		{ Z_Construct_UClass_UOptimusMorphTargetDataProvider, UOptimusMorphTargetDataProvider::StaticClass, TEXT("UOptimusMorphTargetDataProvider"), &Z_Registration_Info_UClass_UOptimusMorphTargetDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusMorphTargetDataProvider), 1293946145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceMorphTarget_h_651748206(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceMorphTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceMorphTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
