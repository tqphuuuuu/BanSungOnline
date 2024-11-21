// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_FunctionReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_FunctionReference() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_FunctionReference
void UOptimusNode_FunctionReference::StaticRegisterNativesUOptimusNode_FunctionReference()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_FunctionReference);
UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister()
{
	return UOptimusNode_FunctionReference::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_FunctionReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_FunctionReference.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_FunctionReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGraph_MetaData[] = {
		{ "Comment", "/** The graph that owns us. This contains all the necessary pin information to add on\n\x09 * the terminal node.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_FunctionReference.h" },
		{ "ToolTip", "The graph that owns us. This contains all the necessary pin information to add on\nthe terminal node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultComponentPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_FunctionReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FunctionGraph;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DefaultComponentPin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_FunctionReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph = { "FunctionGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_FunctionReference, FunctionGraph), Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionGraph_MetaData), NewProp_FunctionGraph_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_DefaultComponentPin = { "DefaultComponentPin", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_FunctionReference, DefaultComponentPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultComponentPin_MetaData), NewProp_DefaultComponentPin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_DefaultComponentPin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_FunctionReference, IOptimusNodePinRouter), false },  // 1815845889
	{ Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_FunctionReference, IOptimusNodeGraphProvider), false },  // 3781711035
	{ Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_FunctionReference, IOptimusNodeSubGraphReferencer), false },  // 2457316854
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::ClassParams = {
	&UOptimusNode_FunctionReference::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_FunctionReference()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton, Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_FunctionReference>()
{
	return UOptimusNode_FunctionReference::StaticClass();
}
UOptimusNode_FunctionReference::UOptimusNode_FunctionReference() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_FunctionReference);
UOptimusNode_FunctionReference::~UOptimusNode_FunctionReference() {}
// End Class UOptimusNode_FunctionReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_FunctionReference, UOptimusNode_FunctionReference::StaticClass, TEXT("UOptimusNode_FunctionReference"), &Z_Registration_Info_UClass_UOptimusNode_FunctionReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_FunctionReference), 1913992590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_1259237895(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
