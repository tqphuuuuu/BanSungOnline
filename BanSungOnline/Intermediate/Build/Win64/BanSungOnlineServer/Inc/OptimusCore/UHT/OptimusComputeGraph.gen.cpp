// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/OptimusComputeGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusComputeGraph() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusComputeGraph
void UOptimusComputeGraph::StaticRegisterNativesUOptimusComputeGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComputeGraph);
UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister()
{
	return UOptimusComputeGraph::StaticClass();
}
struct Z_Construct_UClass_UOptimusComputeGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusComputeGraph.h" },
		{ "ModuleRelativePath", "Private/OptimusComputeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelToNode_MetaData[] = {
		{ "Comment", "// Lookup into Graphs array from the UComputeGraph kernel index. \n" },
		{ "ModuleRelativePath", "Private/OptimusComputeGraph.h" },
		{ "ToolTip", "Lookup into Graphs array from the UComputeGraph kernel index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_KernelToNode_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KernelToNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComputeGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_Inner = { "KernelToNode", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode = { "KernelToNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusComputeGraph, KernelToNode), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelToNode_MetaData), NewProp_KernelToNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusComputeGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComputeGraph_Statics::ClassParams = {
	&UOptimusComputeGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComputeGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComputeGraph()
{
	if (!Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton, Z_Construct_UClass_UOptimusComputeGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComputeGraph>()
{
	return UOptimusComputeGraph::StaticClass();
}
UOptimusComputeGraph::UOptimusComputeGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComputeGraph);
UOptimusComputeGraph::~UOptimusComputeGraph() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusComputeGraph)
// End Class UOptimusComputeGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComputeGraph, UOptimusComputeGraph::StaticClass, TEXT("UOptimusComputeGraph"), &Z_Registration_Info_UClass_UOptimusComputeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComputeGraph), 1014192121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_1212039840(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
