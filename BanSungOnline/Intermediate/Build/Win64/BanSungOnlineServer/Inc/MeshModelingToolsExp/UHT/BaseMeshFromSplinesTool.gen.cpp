// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Spline/BaseMeshFromSplinesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMeshFromSplinesTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseMeshFromSplinesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseMeshFromSplinesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBaseMeshFromSplinesTool
void UBaseMeshFromSplinesTool::StaticRegisterNativesUBaseMeshFromSplinesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMeshFromSplinesTool);
UClass* Z_Construct_UClass_UBaseMeshFromSplinesTool_NoRegister()
{
	return UBaseMeshFromSplinesTool::StaticClass();
}
struct Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool to create a mesh from a set of selected Spline Components\n */" },
		{ "IncludePath", "Spline/BaseMeshFromSplinesTool.h" },
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
		{ "ToolTip", "Tool to create a mesh from a set of selected Spline Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "// Common spline tool properties\n" },
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
		{ "ToolTip", "Common spline tool properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsWithSplines_MetaData[] = {
		{ "Comment", "// Note: We track actors instead of the USplineComponents here because the USplineComponents objects are often deleted / swapped for identical but new objects\n" },
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
		{ "ToolTip", "Note: We track actors instead of the USplineComponents here because the USplineComponents objects are often deleted / swapped for identical but new objects" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsWithSplines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsWithSplines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMeshFromSplinesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMeshFromSplinesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMeshFromSplinesTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialProperties_MetaData), NewProp_MaterialProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMeshFromSplinesTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMeshFromSplinesTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_ActorsWithSplines_Inner = { "ActorsWithSplines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_ActorsWithSplines = { "ActorsWithSplines", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMeshFromSplinesTool, ActorsWithSplines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsWithSplines_MetaData), NewProp_ActorsWithSplines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_MaterialProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_ActorsWithSplines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::NewProp_ActorsWithSplines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister, (int32)VTABLE_OFFSET(UBaseMeshFromSplinesTool, IInteractiveToolEditorGizmoAPI), false },  // 146736287
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::ClassParams = {
	&UBaseMeshFromSplinesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMeshFromSplinesTool()
{
	if (!Z_Registration_Info_UClass_UBaseMeshFromSplinesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMeshFromSplinesTool.OuterSingleton, Z_Construct_UClass_UBaseMeshFromSplinesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMeshFromSplinesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBaseMeshFromSplinesTool>()
{
	return UBaseMeshFromSplinesTool::StaticClass();
}
UBaseMeshFromSplinesTool::UBaseMeshFromSplinesTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMeshFromSplinesTool);
UBaseMeshFromSplinesTool::~UBaseMeshFromSplinesTool() {}
// End Class UBaseMeshFromSplinesTool

// Begin Class UBaseMeshFromSplinesToolBuilder
void UBaseMeshFromSplinesToolBuilder::StaticRegisterNativesUBaseMeshFromSplinesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMeshFromSplinesToolBuilder);
UClass* Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_NoRegister()
{
	return UBaseMeshFromSplinesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Tool Builder for tools that operate on a selection of Spline Components\n */" },
		{ "IncludePath", "Spline/BaseMeshFromSplinesTool.h" },
		{ "ModuleRelativePath", "Public/Spline/BaseMeshFromSplinesTool.h" },
		{ "ToolTip", "Base Tool Builder for tools that operate on a selection of Spline Components" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMeshFromSplinesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::ClassParams = {
	&UBaseMeshFromSplinesToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBaseMeshFromSplinesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMeshFromSplinesToolBuilder.OuterSingleton, Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMeshFromSplinesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBaseMeshFromSplinesToolBuilder>()
{
	return UBaseMeshFromSplinesToolBuilder::StaticClass();
}
UBaseMeshFromSplinesToolBuilder::UBaseMeshFromSplinesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMeshFromSplinesToolBuilder);
UBaseMeshFromSplinesToolBuilder::~UBaseMeshFromSplinesToolBuilder() {}
// End Class UBaseMeshFromSplinesToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Spline_BaseMeshFromSplinesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMeshFromSplinesTool, UBaseMeshFromSplinesTool::StaticClass, TEXT("UBaseMeshFromSplinesTool"), &Z_Registration_Info_UClass_UBaseMeshFromSplinesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMeshFromSplinesTool), 3423114044U) },
		{ Z_Construct_UClass_UBaseMeshFromSplinesToolBuilder, UBaseMeshFromSplinesToolBuilder::StaticClass, TEXT("UBaseMeshFromSplinesToolBuilder"), &Z_Registration_Info_UClass_UBaseMeshFromSplinesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMeshFromSplinesToolBuilder), 3784580787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Spline_BaseMeshFromSplinesTool_h_3897759693(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Spline_BaseMeshFromSplinesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Spline_BaseMeshFromSplinesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
