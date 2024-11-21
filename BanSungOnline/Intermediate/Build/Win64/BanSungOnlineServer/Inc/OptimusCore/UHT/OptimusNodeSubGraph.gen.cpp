// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusNodeSubGraph.h"
#include "OptimusCore/Public/OptimusBindingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeSubGraph() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNodeSubGraph
void UOptimusNodeSubGraph::StaticRegisterNativesUOptimusNodeSubGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeSubGraph);
UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister()
{
	return UOptimusNodeSubGraph::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeSubGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNodeSubGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[] = {
		{ "AllowParameters", "" },
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeSubGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeSubGraph, InputBindings), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBindings_MetaData), NewProp_InputBindings_MetaData) }; // 380112210
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings = { "OutputBindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNodeSubGraph, OutputBindings), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputBindings_MetaData), NewProp_OutputBindings_MetaData) }; // 380112210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNodeSubGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNodeGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNodeSubGraph, IOptimusParameterBindingProvider), false },  // 658361310
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::ClassParams = {
	&UOptimusNodeSubGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeSubGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeSubGraph()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton, Z_Construct_UClass_UOptimusNodeSubGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeSubGraph>()
{
	return UOptimusNodeSubGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeSubGraph);
UOptimusNodeSubGraph::~UOptimusNodeSubGraph() {}
// End Class UOptimusNodeSubGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeSubGraph, UOptimusNodeSubGraph::StaticClass, TEXT("UOptimusNodeSubGraph"), &Z_Registration_Info_UClass_UOptimusNodeSubGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeSubGraph), 117044130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_1567455720(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
