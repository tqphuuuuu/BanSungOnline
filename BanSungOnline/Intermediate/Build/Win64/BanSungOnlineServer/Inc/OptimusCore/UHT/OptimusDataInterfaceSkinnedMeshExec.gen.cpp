// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMeshExec() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusSkinnedMeshExecDomain
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain;
static UEnum* EOptimusSkinnedMeshExecDomain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusSkinnedMeshExecDomain"));
	}
	return Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusSkinnedMeshExecDomain>()
{
	return EOptimusSkinnedMeshExecDomain_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EOptimusSkinnedMeshExecDomain::None" },
		{ "Triangle.Comment", "/** Run kernel with one thread per triangle. */" },
		{ "Triangle.Name", "EOptimusSkinnedMeshExecDomain::Triangle" },
		{ "Triangle.ToolTip", "Run kernel with one thread per triangle." },
		{ "Vertex.Comment", "/** Run kernel with one thread per vertex. */" },
		{ "Vertex.Name", "EOptimusSkinnedMeshExecDomain::Vertex" },
		{ "Vertex.ToolTip", "Run kernel with one thread per vertex." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusSkinnedMeshExecDomain::None", (int64)EOptimusSkinnedMeshExecDomain::None },
		{ "EOptimusSkinnedMeshExecDomain::Vertex", (int64)EOptimusSkinnedMeshExecDomain::Vertex },
		{ "EOptimusSkinnedMeshExecDomain::Triangle", (int64)EOptimusSkinnedMeshExecDomain::Triangle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusSkinnedMeshExecDomain",
	"EOptimusSkinnedMeshExecDomain",
	Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain()
{
	if (!Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain.InnerSingleton;
}
// End Enum EOptimusSkinnedMeshExecDomain

// Begin Class UOptimusSkinnedMeshExecDataInterface
void UOptimusSkinnedMeshExecDataInterface::StaticRegisterNativesUOptimusSkinnedMeshExecDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshExecDataInterface);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_NoRegister()
{
	return UOptimusSkinnedMeshExecDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
		{ "ToolTip", "Compute Framework Data Interface for executing kernels over a skinned mesh domain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "//~ End IOptimusDeprecatedExecutionDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshExecDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshExecDataInterface, Domain), Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 640246476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::NewProp_Domain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister, (int32)VTABLE_OFFSET(UOptimusSkinnedMeshExecDataInterface, IOptimusDeprecatedExecutionDataInterface), false },  // 241850139
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::ClassParams = {
	&UOptimusSkinnedMeshExecDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshExecDataInterface>()
{
	return UOptimusSkinnedMeshExecDataInterface::StaticClass();
}
UOptimusSkinnedMeshExecDataInterface::UOptimusSkinnedMeshExecDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshExecDataInterface);
UOptimusSkinnedMeshExecDataInterface::~UOptimusSkinnedMeshExecDataInterface() {}
// End Class UOptimusSkinnedMeshExecDataInterface

// Begin Class UOptimusSkinnedMeshExecDataProvider
void UOptimusSkinnedMeshExecDataProvider::StaticRegisterNativesUOptimusSkinnedMeshExecDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshExecDataProvider);
UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_NoRegister()
{
	return UOptimusSkinnedMeshExecDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
		{ "ToolTip", "Compute Framework Data Provider for executing kernels over a skinned mesh domain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshExec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshExecDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshExecDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMesh_MetaData), NewProp_SkinnedMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshExecDataProvider, Domain), Z_Construct_UEnum_OptimusCore_EOptimusSkinnedMeshExecDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 640246476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_SkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::NewProp_Domain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::ClassParams = {
	&UOptimusSkinnedMeshExecDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshExecDataProvider>()
{
	return UOptimusSkinnedMeshExecDataProvider::StaticClass();
}
UOptimusSkinnedMeshExecDataProvider::UOptimusSkinnedMeshExecDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshExecDataProvider);
UOptimusSkinnedMeshExecDataProvider::~UOptimusSkinnedMeshExecDataProvider() {}
// End Class UOptimusSkinnedMeshExecDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusSkinnedMeshExecDomain_StaticEnum, TEXT("EOptimusSkinnedMeshExecDomain"), &Z_Registration_Info_UEnum_EOptimusSkinnedMeshExecDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 640246476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshExecDataInterface, UOptimusSkinnedMeshExecDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshExecDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshExecDataInterface), 752378566U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshExecDataProvider, UOptimusSkinnedMeshExecDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshExecDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshExecDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshExecDataProvider), 1283695183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_542605654(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshExec_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
