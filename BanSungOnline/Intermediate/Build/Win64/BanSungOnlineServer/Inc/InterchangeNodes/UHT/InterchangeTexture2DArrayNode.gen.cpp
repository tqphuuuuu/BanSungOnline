// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeTexture2DArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DArrayNode() {}

// Begin Cross Module References
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeTexture2DArrayNode
void UInterchangeTexture2DArrayNode::StaticRegisterNativesUInterchangeTexture2DArrayNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DArrayNode);
UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister()
{
	return UInterchangeTexture2DArrayNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTexture2DArrayNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DArrayNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::ClassParams = {
	&UInterchangeTexture2DArrayNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTexture2DArrayNode>()
{
	return UInterchangeTexture2DArrayNode::StaticClass();
}
UInterchangeTexture2DArrayNode::UInterchangeTexture2DArrayNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DArrayNode);
UInterchangeTexture2DArrayNode::~UInterchangeTexture2DArrayNode() {}
// End Class UInterchangeTexture2DArrayNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DArrayNode, UInterchangeTexture2DArrayNode::StaticClass, TEXT("UInterchangeTexture2DArrayNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DArrayNode), 3885642222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_1032220249(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
