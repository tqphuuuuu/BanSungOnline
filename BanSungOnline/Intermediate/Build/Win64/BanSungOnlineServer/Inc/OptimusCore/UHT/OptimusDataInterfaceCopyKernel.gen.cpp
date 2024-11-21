// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceCopyKernel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceCopyKernel() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCopyKernelDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCopyKernelDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCopyKernelDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCopyKernelDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusCopyKernelDataInterface
void UOptimusCopyKernelDataInterface::StaticRegisterNativesUOptimusCopyKernelDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusCopyKernelDataInterface);
UClass* Z_Construct_UClass_UOptimusCopyKernelDataInterface_NoRegister()
{
	return UOptimusCopyKernelDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSourceBinding_MetaData[] = {
		{ "Comment", "//~ End IOptimusComputeKernelDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumThreadsExpression_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentSourceBinding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NumThreadsExpression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusCopyKernelDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::NewProp_ComponentSourceBinding = { "ComponentSourceBinding", nullptr, (EPropertyFlags)0x0014000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusCopyKernelDataInterface, ComponentSourceBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSourceBinding_MetaData), NewProp_ComponentSourceBinding_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::NewProp_NumThreadsExpression = { "NumThreadsExpression", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusCopyKernelDataInterface, NumThreadsExpression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumThreadsExpression_MetaData), NewProp_NumThreadsExpression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::NewProp_ComponentSourceBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::NewProp_NumThreadsExpression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusComputeKernelDataInterface_NoRegister, (int32)VTABLE_OFFSET(UOptimusCopyKernelDataInterface, IOptimusComputeKernelDataInterface), false },  // 2386351400
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::ClassParams = {
	&UOptimusCopyKernelDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusCopyKernelDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusCopyKernelDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusCopyKernelDataInterface>()
{
	return UOptimusCopyKernelDataInterface::StaticClass();
}
UOptimusCopyKernelDataInterface::UOptimusCopyKernelDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusCopyKernelDataInterface);
UOptimusCopyKernelDataInterface::~UOptimusCopyKernelDataInterface() {}
// End Class UOptimusCopyKernelDataInterface

// Begin Class UOptimusCopyKernelDataProvider
void UOptimusCopyKernelDataProvider::StaticRegisterNativesUOptimusCopyKernelDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusCopyKernelDataProvider);
UClass* Z_Construct_UClass_UOptimusCopyKernelDataProvider_NoRegister()
{
	return UOptimusCopyKernelDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Compute Framework Data Provider for each copy kernel. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCopyKernel.h" },
		{ "ToolTip", "Compute Framework Data Provider for each copy kernel." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusCopyKernelDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::ClassParams = {
	&UOptimusCopyKernelDataProvider::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusCopyKernelDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusCopyKernelDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusCopyKernelDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusCopyKernelDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusCopyKernelDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusCopyKernelDataProvider>()
{
	return UOptimusCopyKernelDataProvider::StaticClass();
}
UOptimusCopyKernelDataProvider::UOptimusCopyKernelDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusCopyKernelDataProvider);
UOptimusCopyKernelDataProvider::~UOptimusCopyKernelDataProvider() {}
// End Class UOptimusCopyKernelDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCopyKernel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusCopyKernelDataInterface, UOptimusCopyKernelDataInterface::StaticClass, TEXT("UOptimusCopyKernelDataInterface"), &Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusCopyKernelDataInterface), 796766387U) },
		{ Z_Construct_UClass_UOptimusCopyKernelDataProvider, UOptimusCopyKernelDataProvider::StaticClass, TEXT("UOptimusCopyKernelDataProvider"), &Z_Registration_Info_UClass_UOptimusCopyKernelDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusCopyKernelDataProvider), 3804278516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCopyKernel_h_4292380278(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCopyKernel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCopyKernel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
