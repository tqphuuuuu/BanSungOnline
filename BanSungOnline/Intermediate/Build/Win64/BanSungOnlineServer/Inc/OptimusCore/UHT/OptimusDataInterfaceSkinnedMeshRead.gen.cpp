// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMeshRead() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkinnedMeshReadDataInterface
void UOptimusSkinnedMeshReadDataInterface::StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshReadDataInterface);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_NoRegister()
{
	return UOptimusSkinnedMeshReadDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshReadDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::ClassParams = {
	&UOptimusSkinnedMeshReadDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshReadDataInterface>()
{
	return UOptimusSkinnedMeshReadDataInterface::StaticClass();
}
UOptimusSkinnedMeshReadDataInterface::UOptimusSkinnedMeshReadDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshReadDataInterface);
UOptimusSkinnedMeshReadDataInterface::~UOptimusSkinnedMeshReadDataInterface() {}
// End Class UOptimusSkinnedMeshReadDataInterface

// Begin Class UOptimusSkinnedMeshReadDataProvider
void UOptimusSkinnedMeshReadDataProvider::StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshReadDataProvider);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_NoRegister()
{
	return UOptimusSkinnedMeshReadDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshReadDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshReadDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshReadDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstance_MetaData), NewProp_DeformerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::NewProp_SkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::NewProp_DeformerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister, (int32)VTABLE_OFFSET(UOptimusSkinnedMeshReadDataProvider, IOptimusDeformerInstanceAccessor), false },  // 1833869264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::ClassParams = {
	&UOptimusSkinnedMeshReadDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshReadDataProvider>()
{
	return UOptimusSkinnedMeshReadDataProvider::StaticClass();
}
UOptimusSkinnedMeshReadDataProvider::UOptimusSkinnedMeshReadDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshReadDataProvider);
UOptimusSkinnedMeshReadDataProvider::~UOptimusSkinnedMeshReadDataProvider() {}
// End Class UOptimusSkinnedMeshReadDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface, UOptimusSkinnedMeshReadDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshReadDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshReadDataInterface), 1546473374U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider, UOptimusSkinnedMeshReadDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshReadDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshReadDataProvider), 1405917690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_3679395325(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
