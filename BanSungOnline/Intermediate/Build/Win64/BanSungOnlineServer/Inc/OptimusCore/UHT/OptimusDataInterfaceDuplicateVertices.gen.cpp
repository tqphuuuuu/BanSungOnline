// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceDuplicateVertices() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusDuplicateVerticesDataInterface
void UOptimusDuplicateVerticesDataInterface::StaticRegisterNativesUOptimusDuplicateVerticesDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDuplicateVerticesDataInterface);
UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_NoRegister()
{
	return UOptimusDuplicateVerticesDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** \n * Compute Framework Data Interface for reading duplicate vertices on a mesh.\n * These are vertices that are at the same location but that have been split because of discontinous color/UV etc.\n */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading duplicate vertices on a mesh.\nThese are vertices that are at the same location but that have been split because of discontinous color/UV etc." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDuplicateVerticesDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::ClassParams = {
	&UOptimusDuplicateVerticesDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDuplicateVerticesDataInterface>()
{
	return UOptimusDuplicateVerticesDataInterface::StaticClass();
}
UOptimusDuplicateVerticesDataInterface::UOptimusDuplicateVerticesDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDuplicateVerticesDataInterface);
UOptimusDuplicateVerticesDataInterface::~UOptimusDuplicateVerticesDataInterface() {}
// End Class UOptimusDuplicateVerticesDataInterface

// Begin Class UOptimusDuplicateVerticesDataProvider
void UOptimusDuplicateVerticesDataProvider::StaticRegisterNativesUOptimusDuplicateVerticesDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDuplicateVerticesDataProvider);
UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_NoRegister()
{
	return UOptimusDuplicateVerticesDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDuplicateVerticesDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDuplicateVerticesDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::ClassParams = {
	&UOptimusDuplicateVerticesDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDuplicateVerticesDataProvider>()
{
	return UOptimusDuplicateVerticesDataProvider::StaticClass();
}
UOptimusDuplicateVerticesDataProvider::UOptimusDuplicateVerticesDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDuplicateVerticesDataProvider);
UOptimusDuplicateVerticesDataProvider::~UOptimusDuplicateVerticesDataProvider() {}
// End Class UOptimusDuplicateVerticesDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface, UOptimusDuplicateVerticesDataInterface::StaticClass, TEXT("UOptimusDuplicateVerticesDataInterface"), &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDuplicateVerticesDataInterface), 2283358593U) },
		{ Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider, UOptimusDuplicateVerticesDataProvider::StaticClass, TEXT("UOptimusDuplicateVerticesDataProvider"), &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDuplicateVerticesDataProvider), 2394313740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_2952478224(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
