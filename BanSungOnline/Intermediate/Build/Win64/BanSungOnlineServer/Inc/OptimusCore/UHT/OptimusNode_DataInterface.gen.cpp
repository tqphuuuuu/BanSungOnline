// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_DataInterface.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_DataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_DataInterface
void UOptimusNode_DataInterface::StaticRegisterNativesUOptimusNode_DataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_DataInterface);
UClass* Z_Construct_UClass_UOptimusNode_DataInterface_NoRegister()
{
	return UOptimusNode_DataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_DataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/OptimusNode_DataInterface.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceClass_MetaData[] = {
		{ "Comment", "// The class of the data interface that this node represents. We call the CDO\n// to interrogate display names and pin definitions. This may change in the future once\n// data interfaces get tied closer to the objects they proxy.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
		{ "ToolTip", "The class of the data interface that this node represents. We call the CDO\nto interrogate display names and pin definitions. This may change in the future once\ndata interfaces get tied closer to the objects they proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceData_MetaData[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "// Editable copy of the DataInterface for storing properties that will customize behavior on on the data interface.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
		{ "ToolTip", "Editable copy of the DataInterface for storing properties that will customize behavior on on the data interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataInterfaceClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataInterfaceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_DataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass = { "DataInterfaceClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_DataInterface, DataInterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceClass_MetaData), NewProp_DataInterfaceClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData = { "DataInterfaceData", nullptr, (EPropertyFlags)0x01260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_DataInterface, DataInterfaceData), Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceData_MetaData), NewProp_DataInterfaceData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_DataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_DataInterface, IOptimusDataInterfaceProvider), false },  // 250041116
	{ Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_DataInterface, IOptimusComponentBindingProvider), false },  // 2322815117
	{ Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_DataInterface, IOptimusPinMutabilityDefiner), false },  // 3934412691
	{ Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_DataInterface, IOptimusPropertyPinProvider), false },  // 3280659055
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::ClassParams = {
	&UOptimusNode_DataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x018000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_DataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_DataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton, Z_Construct_UClass_UOptimusNode_DataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_DataInterface>()
{
	return UOptimusNode_DataInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_DataInterface);
UOptimusNode_DataInterface::~UOptimusNode_DataInterface() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_DataInterface)
// End Class UOptimusNode_DataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_DataInterface, UOptimusNode_DataInterface::StaticClass, TEXT("UOptimusNode_DataInterface"), &Z_Registration_Info_UClass_UOptimusNode_DataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_DataInterface), 3157890841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_2551616218(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
