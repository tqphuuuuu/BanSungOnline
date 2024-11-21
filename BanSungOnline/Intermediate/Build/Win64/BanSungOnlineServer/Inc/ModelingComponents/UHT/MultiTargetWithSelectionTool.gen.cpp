// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/BaseTools/MultiTargetWithSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiTargetWithSelectionTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMultiTargetWithSelectionToolBuilder
void UMultiTargetWithSelectionToolBuilder::StaticRegisterNativesUMultiTargetWithSelectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiTargetWithSelectionToolBuilder);
UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_NoRegister()
{
	return UMultiTargetWithSelectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiTargetWithSelectionToolBuilder is a base tool builder for multi\n * selection tools with selections.\n * Currently, geometry selection across multiple meshes is not supported, restricting the effectiveness\n * of this class. If that support is built in the future, this will become more useful, and likely need to be expanded\n */" },
		{ "IncludePath", "BaseTools/MultiTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiTargetWithSelectionTool.h" },
		{ "ToolTip", "UMultiTargetWithSelectionToolBuilder is a base tool builder for multi\nselection tools with selections.\nCurrently, geometry selection across multiple meshes is not supported, restricting the effectiveness\nof this class. If that support is built in the future, this will become more useful, and likely need to be expanded" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTargetWithSelectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::ClassParams = {
	&UMultiTargetWithSelectionToolBuilder::StaticClass,
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
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiTargetWithSelectionToolBuilder>()
{
	return UMultiTargetWithSelectionToolBuilder::StaticClass();
}
UMultiTargetWithSelectionToolBuilder::UMultiTargetWithSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTargetWithSelectionToolBuilder);
UMultiTargetWithSelectionToolBuilder::~UMultiTargetWithSelectionToolBuilder() {}
// End Class UMultiTargetWithSelectionToolBuilder

// Begin Class UMultiTargetWithSelectionTool
void UMultiTargetWithSelectionTool::StaticRegisterNativesUMultiTargetWithSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiTargetWithSelectionTool);
UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool_NoRegister()
{
	return UMultiTargetWithSelectionTool::StaticClass();
}
struct Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Multi Target with Selection tool base class.\n */" },
		{ "IncludePath", "BaseTools/MultiTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiTargetWithSelectionTool.h" },
		{ "ToolTip", "Multi Target with Selection tool base class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MultiTargetWithSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionVizProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MultiTargetWithSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionViz_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MultiTargetWithSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionVizProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionViz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTargetWithSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiTargetWithSelectionTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_GeometrySelectionVizProperties = { "GeometrySelectionVizProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiTargetWithSelectionTool, GeometrySelectionVizProperties), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionVizProperties_MetaData), NewProp_GeometrySelectionVizProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_GeometrySelectionViz = { "GeometrySelectionViz", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiTargetWithSelectionTool, GeometrySelectionViz), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionViz_MetaData), NewProp_GeometrySelectionViz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_GeometrySelectionVizProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::NewProp_GeometrySelectionViz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::ClassParams = {
	&UMultiTargetWithSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool()
{
	if (!Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.OuterSingleton, Z_Construct_UClass_UMultiTargetWithSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiTargetWithSelectionTool>()
{
	return UMultiTargetWithSelectionTool::StaticClass();
}
UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTargetWithSelectionTool);
UMultiTargetWithSelectionTool::~UMultiTargetWithSelectionTool() {}
// End Class UMultiTargetWithSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiTargetWithSelectionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder, UMultiTargetWithSelectionToolBuilder::StaticClass, TEXT("UMultiTargetWithSelectionToolBuilder"), &Z_Registration_Info_UClass_UMultiTargetWithSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiTargetWithSelectionToolBuilder), 3238103612U) },
		{ Z_Construct_UClass_UMultiTargetWithSelectionTool, UMultiTargetWithSelectionTool::StaticClass, TEXT("UMultiTargetWithSelectionTool"), &Z_Registration_Info_UClass_UMultiTargetWithSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiTargetWithSelectionTool), 3413354396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiTargetWithSelectionTool_h_3355144717(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiTargetWithSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiTargetWithSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
