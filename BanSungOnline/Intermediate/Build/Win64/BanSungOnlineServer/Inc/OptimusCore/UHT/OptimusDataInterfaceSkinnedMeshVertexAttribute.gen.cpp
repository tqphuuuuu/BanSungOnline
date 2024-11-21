// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMeshVertexAttribute() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkinnedMeshVertexAttributeDataInterface
void UOptimusSkinnedMeshVertexAttributeDataInterface::StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshVertexAttributeDataInterface);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister()
{
	return UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "Vertex Attribute" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshVertexAttributeDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataInterface, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::ClassParams = {
	&UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshVertexAttributeDataInterface>()
{
	return UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass();
}
UOptimusSkinnedMeshVertexAttributeDataInterface::UOptimusSkinnedMeshVertexAttributeDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshVertexAttributeDataInterface);
UOptimusSkinnedMeshVertexAttributeDataInterface::~UOptimusSkinnedMeshVertexAttributeDataInterface() {}
// End Class UOptimusSkinnedMeshVertexAttributeDataInterface

// Begin Class UOptimusSkinnedMeshVertexAttributeDataProvider
void UOptimusSkinnedMeshVertexAttributeDataProvider::StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshVertexAttributeDataProvider);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister()
{
	return UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "VertexAttribute" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshVertexAttributeDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstance_MetaData), NewProp_DeformerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_DeformerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister, (int32)VTABLE_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, IOptimusDeformerInstanceAccessor), false },  // 1833869264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::ClassParams = {
	&UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshVertexAttributeDataProvider>()
{
	return UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass();
}
UOptimusSkinnedMeshVertexAttributeDataProvider::UOptimusSkinnedMeshVertexAttributeDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshVertexAttributeDataProvider);
UOptimusSkinnedMeshVertexAttributeDataProvider::~UOptimusSkinnedMeshVertexAttributeDataProvider() {}
// End Class UOptimusSkinnedMeshVertexAttributeDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface, UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshVertexAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshVertexAttributeDataInterface), 1253838779U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider, UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshVertexAttributeDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshVertexAttributeDataProvider), 103497049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_3287478987(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
