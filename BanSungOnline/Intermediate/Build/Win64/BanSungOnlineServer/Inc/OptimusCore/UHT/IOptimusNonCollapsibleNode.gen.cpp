// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNonCollapsibleNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNonCollapsibleNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNonCollapsibleNode
void UOptimusNonCollapsibleNode::StaticRegisterNativesUOptimusNonCollapsibleNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNonCollapsibleNode);
UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister()
{
	return UOptimusNonCollapsibleNode::StaticClass();
}
struct Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNonCollapsibleNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNonCollapsibleNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::ClassParams = {
	&UOptimusNonCollapsibleNode::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode()
{
	if (!Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.OuterSingleton, Z_Construct_UClass_UOptimusNonCollapsibleNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNonCollapsibleNode>()
{
	return UOptimusNonCollapsibleNode::StaticClass();
}
UOptimusNonCollapsibleNode::UOptimusNonCollapsibleNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNonCollapsibleNode);
UOptimusNonCollapsibleNode::~UOptimusNonCollapsibleNode() {}
// End Interface UOptimusNonCollapsibleNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNonCollapsibleNode, UOptimusNonCollapsibleNode::StaticClass, TEXT("UOptimusNonCollapsibleNode"), &Z_Registration_Info_UClass_UOptimusNonCollapsibleNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNonCollapsibleNode), 335131968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_2531260790(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCollapsibleNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
