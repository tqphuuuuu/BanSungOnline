// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/UVTransferTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVTransferTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UUVTransferToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UUVTransferToolBuilder
void UUVTransferToolBuilder::StaticRegisterNativesUUVTransferToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVTransferToolBuilder);
UClass* Z_Construct_UClass_UUVTransferToolBuilder_NoRegister()
{
	return UUVTransferToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UUVTransferToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UVTransferTool.h" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVTransferToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUVTransferToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVTransferToolBuilder_Statics::ClassParams = {
	&UUVTransferToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVTransferToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVTransferToolBuilder()
{
	if (!Z_Registration_Info_UClass_UUVTransferToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVTransferToolBuilder.OuterSingleton, Z_Construct_UClass_UUVTransferToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVTransferToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UUVTransferToolBuilder>()
{
	return UUVTransferToolBuilder::StaticClass();
}
UUVTransferToolBuilder::UUVTransferToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVTransferToolBuilder);
UUVTransferToolBuilder::~UUVTransferToolBuilder() {}
// End Class UUVTransferToolBuilder

// Begin Class UUVTransferToolProperties
void UUVTransferToolProperties::StaticRegisterNativesUUVTransferToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVTransferToolProperties);
UClass* Z_Construct_UClass_UUVTransferToolProperties_NoRegister()
{
	return UUVTransferToolProperties::StaticClass();
}
struct Z_Construct_UClass_UUVTransferToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UVTransferTool.h" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseDirection_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// If false, the first selected mesh's UV's are applied to the second selected mesh. If true, the\n//  reverse direction is used.\n" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "If false, the first selected mesh's UV's are applied to the second selected mesh. If true, the\n reverse direction is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferSeamsOnly_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, we only transfer the seams without trying to transfer actual UV element values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "If true, we only transfer the seams without trying to transfer actual UV element values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingSeams_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, clears existing seams on the destination mesh before carrying over new ones.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "If true, clears existing seams on the destination mesh before carrying over new ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSimilarityWeight_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting this above 0 will include a measure of path similarity to seam transfer, so that among\n\x09 *  similarly short paths, we pick one that lies closer to the edge. Useful in cases where the path\n\x09 *  is on the wrong diagonal to the triangulation, because it prefers a closely zigzagging path over\n\x09 *  a wider \"up and over\" path that has similar length. If set to 0, only path length is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "Setting this above 0 will include a measure of path similarity to seam transfer, so that among\n similarly short paths, we pick one that lies closer to the edge. Useful in cases where the path\n is on the wrong diagonal to the triangulation, because it prefers a closely zigzagging path over\n a wider \"up and over\" path that has similar length. If set to 0, only path length is used." },
		{ "UIMax", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframes_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSeams_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexSearchDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/**\n\x09 * How far to look for a corresponding vertex on the destination. The destination is expected to\n\x09 *  be a simplified version of source using existing vertices, so this should not need to be set high.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "How far to look for a corresponding vertex on the destination. The destination is expected to\n be a simplified version of source using existing vertices, so this should not need to be set high." },
		{ "UIMax", "1.000000" },
	};
#endif // WITH_METADATA
	static void NewProp_bReverseDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseDirection;
	static void NewProp_bTransferSeamsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferSeamsOnly;
	static void NewProp_bClearExistingSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingSeams;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PathSimilarityWeight;
	static void NewProp_bShowWireframes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframes;
	static void NewProp_bShowSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSeams;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VertexSearchDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVTransferToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bReverseDirection_SetBit(void* Obj)
{
	((UUVTransferToolProperties*)Obj)->bReverseDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bReverseDirection = { "bReverseDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVTransferToolProperties), &Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bReverseDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseDirection_MetaData), NewProp_bReverseDirection_MetaData) };
void Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bTransferSeamsOnly_SetBit(void* Obj)
{
	((UUVTransferToolProperties*)Obj)->bTransferSeamsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bTransferSeamsOnly = { "bTransferSeamsOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVTransferToolProperties), &Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bTransferSeamsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferSeamsOnly_MetaData), NewProp_bTransferSeamsOnly_MetaData) };
void Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bClearExistingSeams_SetBit(void* Obj)
{
	((UUVTransferToolProperties*)Obj)->bClearExistingSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bClearExistingSeams = { "bClearExistingSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVTransferToolProperties), &Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bClearExistingSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingSeams_MetaData), NewProp_bClearExistingSeams_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_PathSimilarityWeight = { "PathSimilarityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferToolProperties, PathSimilarityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSimilarityWeight_MetaData), NewProp_PathSimilarityWeight_MetaData) };
void Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowWireframes_SetBit(void* Obj)
{
	((UUVTransferToolProperties*)Obj)->bShowWireframes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowWireframes = { "bShowWireframes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVTransferToolProperties), &Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowWireframes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframes_MetaData), NewProp_bShowWireframes_MetaData) };
void Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowSeams_SetBit(void* Obj)
{
	((UUVTransferToolProperties*)Obj)->bShowSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowSeams = { "bShowSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVTransferToolProperties), &Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSeams_MetaData), NewProp_bShowSeams_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_VertexSearchDistance = { "VertexSearchDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferToolProperties, VertexSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexSearchDistance_MetaData), NewProp_VertexSearchDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVTransferToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bReverseDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bTransferSeamsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bClearExistingSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_PathSimilarityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowWireframes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_bShowSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferToolProperties_Statics::NewProp_VertexSearchDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVTransferToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVTransferToolProperties_Statics::ClassParams = {
	&UUVTransferToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVTransferToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVTransferToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVTransferToolProperties()
{
	if (!Z_Registration_Info_UClass_UUVTransferToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVTransferToolProperties.OuterSingleton, Z_Construct_UClass_UUVTransferToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVTransferToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UUVTransferToolProperties>()
{
	return UUVTransferToolProperties::StaticClass();
}
UUVTransferToolProperties::UUVTransferToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVTransferToolProperties);
UUVTransferToolProperties::~UUVTransferToolProperties() {}
// End Class UUVTransferToolProperties

// Begin Class UUVTransferTool
void UUVTransferTool::StaticRegisterNativesUUVTransferTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVTransferTool);
UClass* Z_Construct_UClass_UUVTransferTool_NoRegister()
{
	return UUVTransferTool::StaticClass();
}
struct Z_Construct_UClass_UUVTransferTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool that transfers UV data from a lower res mesh to a higher one. The lower resolution mesh is typically\n *  obtained by simplifying the destination mesh with a \"use existing vertices\" setting so that an easy\n *  correspondence between mesh vertices can be found.\n */" },
		{ "IncludePath", "UVTransferTool.h" },
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
		{ "ToolTip", "Tool that transfers UV data from a lower res mesh to a higher one. The lower resolution mesh is typically\n obtained by simplifying the destination mesh with a \"use existing vertices\" setting so that an easy\n correspondence between mesh vertices can be found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationMaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSeamVisualizer_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationSeamVisualizer_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVTransferTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVChannelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationMaterialSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSeamVisualizer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationSeamVisualizer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVTransferTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, Settings), Z_Construct_UClass_UUVTransferToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelProperties_MetaData), NewProp_UVChannelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationMaterialSettings = { "DestinationMaterialSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, DestinationMaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationMaterialSettings_MetaData), NewProp_DestinationMaterialSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationPreview = { "DestinationPreview", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, DestinationPreview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPreview_MetaData), NewProp_DestinationPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_SourcePreview = { "SourcePreview", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, SourcePreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePreview_MetaData), NewProp_SourcePreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_SourceSeamVisualizer = { "SourceSeamVisualizer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, SourceSeamVisualizer), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSeamVisualizer_MetaData), NewProp_SourceSeamVisualizer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationSeamVisualizer = { "DestinationSeamVisualizer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTransferTool, DestinationSeamVisualizer), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationSeamVisualizer_MetaData), NewProp_DestinationSeamVisualizer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVTransferTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_UVChannelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationMaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_SourcePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_SourceSeamVisualizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTransferTool_Statics::NewProp_DestinationSeamVisualizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVTransferTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVTransferTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UUVTransferTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVTransferTool_Statics::ClassParams = {
	&UUVTransferTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVTransferTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTransferTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVTransferTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVTransferTool()
{
	if (!Z_Registration_Info_UClass_UUVTransferTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVTransferTool.OuterSingleton, Z_Construct_UClass_UUVTransferTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVTransferTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UUVTransferTool>()
{
	return UUVTransferTool::StaticClass();
}
UUVTransferTool::UUVTransferTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVTransferTool);
UUVTransferTool::~UUVTransferTool() {}
// End Class UUVTransferTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVTransferToolBuilder, UUVTransferToolBuilder::StaticClass, TEXT("UUVTransferToolBuilder"), &Z_Registration_Info_UClass_UUVTransferToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVTransferToolBuilder), 1642804770U) },
		{ Z_Construct_UClass_UUVTransferToolProperties, UUVTransferToolProperties::StaticClass, TEXT("UUVTransferToolProperties"), &Z_Registration_Info_UClass_UUVTransferToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVTransferToolProperties), 2045027837U) },
		{ Z_Construct_UClass_UUVTransferTool, UUVTransferTool::StaticClass, TEXT("UUVTransferTool"), &Z_Registration_Info_UClass_UUVTransferTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVTransferTool), 2290155138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_4170718229(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_UVTransferTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
