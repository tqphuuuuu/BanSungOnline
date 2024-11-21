// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_SubGraphReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_SubGraphReference() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_SubGraphReference
void UOptimusNode_SubGraphReference::StaticRegisterNativesUOptimusNode_SubGraphReference()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_SubGraphReference);
UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference_NoRegister()
{
	return UOptimusNode_SubGraphReference::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_SubGraphReference.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SubGraphReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubGraphName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SubGraphReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultComponentPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SubGraphReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubGraphName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DefaultComponentPin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_SubGraphReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraphName = { "SubGraphName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_SubGraphReference, SubGraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubGraphName_MetaData), NewProp_SubGraphName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_DefaultComponentPin = { "DefaultComponentPin", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_SubGraphReference, DefaultComponentPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultComponentPin_MetaData), NewProp_DefaultComponentPin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_DefaultComponentPin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_SubGraphReference, IOptimusNodePinRouter), false },  // 1815845889
	{ Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_SubGraphReference, IOptimusNodeGraphProvider), false },  // 3781711035
	{ Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_SubGraphReference, IOptimusNodeSubGraphReferencer), false },  // 2457316854
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::ClassParams = {
	&UOptimusNode_SubGraphReference::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton, Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_SubGraphReference>()
{
	return UOptimusNode_SubGraphReference::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_SubGraphReference);
UOptimusNode_SubGraphReference::~UOptimusNode_SubGraphReference() {}
// End Class UOptimusNode_SubGraphReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_SubGraphReference, UOptimusNode_SubGraphReference::StaticClass, TEXT("UOptimusNode_SubGraphReference"), &Z_Registration_Info_UClass_UOptimusNode_SubGraphReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_SubGraphReference), 3756877336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_493086782(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
