// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusFunctionNodeGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusFunctionNodeGraph() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusFunctionNodeGraph Function GetAccessSpecifierOptions
struct Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics
{
	struct OptimusFunctionNodeGraph_eventGetAccessSpecifierOptions_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusFunctionNodeGraph_eventGetAccessSpecifierOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusFunctionNodeGraph, nullptr, "GetAccessSpecifierOptions", nullptr, nullptr, Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::OptimusFunctionNodeGraph_eventGetAccessSpecifierOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::OptimusFunctionNodeGraph_eventGetAccessSpecifierOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusFunctionNodeGraph::execGetAccessSpecifierOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetAccessSpecifierOptions();
	P_NATIVE_END;
}
// End Class UOptimusFunctionNodeGraph Function GetAccessSpecifierOptions

// Begin Class UOptimusFunctionNodeGraph
void UOptimusFunctionNodeGraph::StaticRegisterNativesUOptimusFunctionNodeGraph()
{
	UClass* Class = UOptimusFunctionNodeGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAccessSpecifierOptions", &UOptimusFunctionNodeGraph::execGetAccessSpecifierOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusFunctionNodeGraph);
UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister()
{
	return UOptimusFunctionNodeGraph::StaticClass();
}
struct Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OptimusFunctionNodeGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The category of the node based of of this graph for listing purposes */" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
		{ "ToolTip", "The category of the node based of of this graph for listing purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessSpecifier_MetaData[] = {
		{ "Category", "Settings" },
		{ "GetOptions", "GetAccessSpecifierOptions" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AccessSpecifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusFunctionNodeGraph_GetAccessSpecifierOptions, "GetAccessSpecifierOptions" }, // 788622154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusFunctionNodeGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusFunctionNodeGraph, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_AccessSpecifier = { "AccessSpecifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusFunctionNodeGraph, AccessSpecifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessSpecifier_MetaData), NewProp_AccessSpecifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_AccessSpecifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNodeSubGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::ClassParams = {
	&UOptimusFunctionNodeGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph()
{
	if (!Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton, Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusFunctionNodeGraph>()
{
	return UOptimusFunctionNodeGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusFunctionNodeGraph);
UOptimusFunctionNodeGraph::~UOptimusFunctionNodeGraph() {}
// End Class UOptimusFunctionNodeGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusFunctionNodeGraph, UOptimusFunctionNodeGraph::StaticClass, TEXT("UOptimusFunctionNodeGraph"), &Z_Registration_Info_UClass_UOptimusFunctionNodeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusFunctionNodeGraph), 1153605768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_3833839726(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
