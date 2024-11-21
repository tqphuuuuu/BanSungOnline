// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNonCopyableNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNonCopyableNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCopyableNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNonCopyableNode
void UOptimusNonCopyableNode::StaticRegisterNativesUOptimusNonCopyableNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNonCopyableNode);
UClass* Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister()
{
	return UOptimusNonCopyableNode::StaticClass();
}
struct Z_Construct_UClass_UOptimusNonCopyableNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNonCopyableNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNonCopyableNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNonCopyableNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNonCopyableNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNonCopyableNode_Statics::ClassParams = {
	&UOptimusNonCopyableNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNonCopyableNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNonCopyableNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNonCopyableNode()
{
	if (!Z_Registration_Info_UClass_UOptimusNonCopyableNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNonCopyableNode.OuterSingleton, Z_Construct_UClass_UOptimusNonCopyableNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNonCopyableNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNonCopyableNode>()
{
	return UOptimusNonCopyableNode::StaticClass();
}
UOptimusNonCopyableNode::UOptimusNonCopyableNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNonCopyableNode);
UOptimusNonCopyableNode::~UOptimusNonCopyableNode() {}
// End Interface UOptimusNonCopyableNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNonCopyableNode, UOptimusNonCopyableNode::StaticClass, TEXT("UOptimusNonCopyableNode"), &Z_Registration_Info_UClass_UOptimusNonCopyableNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNonCopyableNode), 2138744222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_923425185(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNonCopyableNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
