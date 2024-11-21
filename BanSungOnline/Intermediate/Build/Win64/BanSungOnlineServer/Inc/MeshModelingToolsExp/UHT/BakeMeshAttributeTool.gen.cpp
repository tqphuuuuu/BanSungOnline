// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/BakeMeshAttributeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeCurvatureMapToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiTexture2DProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeOcclusionMapToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTexture2DProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EBakeMapType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeMapType;
static UEnum* EBakeMapType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBakeMapType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBakeMapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeMapType"));
	}
	return Z_Registration_Info_UEnum_EBakeMapType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeMapType>()
{
	return EBakeMapType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EBakeMapType::All" },
		{ "AmbientOcclusion.Comment", "/* Ambient occlusion sampled across the hemisphere */" },
		{ "AmbientOcclusion.Name", "EBakeMapType::AmbientOcclusion" },
		{ "AmbientOcclusion.ToolTip", "Ambient occlusion sampled across the hemisphere" },
		{ "BentNormal.Comment", "/* Normals skewed towards the least occluded direction */" },
		{ "BentNormal.Name", "EBakeMapType::BentNormal" },
		{ "BentNormal.ToolTip", "Normals skewed towards the least occluded direction" },
		{ "Bitflags", "" },
		{ "Comment", "/**\n * Bake map enums\n */" },
		{ "Curvature.Comment", "/* Local curvature of the mesh surface */" },
		{ "Curvature.Name", "EBakeMapType::Curvature" },
		{ "Curvature.ToolTip", "Local curvature of the mesh surface" },
		{ "FaceNormal.Comment", "/* Geometric face normals in object space */" },
		{ "FaceNormal.Name", "EBakeMapType::FaceNormal" },
		{ "FaceNormal.ToolTip", "Geometric face normals in object space" },
		{ "MaterialID.Comment", "/* Material IDs as unique colors */" },
		{ "MaterialID.DisplayName", "Material ID" },
		{ "MaterialID.Name", "EBakeMapType::MaterialID" },
		{ "MaterialID.ToolTip", "Material IDs as unique colors" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
		{ "MultiTexture.Comment", "/* Transfer a texture per material ID */" },
		{ "MultiTexture.Name", "EBakeMapType::MultiTexture" },
		{ "MultiTexture.ToolTip", "Transfer a texture per material ID" },
		{ "None.Name", "EBakeMapType::None" },
		{ "ObjectSpaceNormal.Comment", "/* Interpolated normals in object space */" },
		{ "ObjectSpaceNormal.DisplayName", "Object Normal" },
		{ "ObjectSpaceNormal.Name", "EBakeMapType::ObjectSpaceNormal" },
		{ "ObjectSpaceNormal.ToolTip", "Interpolated normals in object space" },
		{ "One.Comment", "/* Constant value of One */" },
		{ "One.Name", "EBakeMapType::One" },
		{ "One.ToolTip", "Constant value of One" },
		{ "PolyGroupID.Comment", "/* PolyGroup IDs as unique colors */" },
		{ "PolyGroupID.DisplayName", "PolyGroup ID" },
		{ "PolyGroupID.Name", "EBakeMapType::PolyGroupID" },
		{ "PolyGroupID.ToolTip", "PolyGroup IDs as unique colors" },
		{ "Position.Comment", "/* Positions in object space */" },
		{ "Position.Name", "EBakeMapType::Position" },
		{ "Position.ToolTip", "Positions in object space" },
		{ "TangentSpaceNormal.Comment", "/* Normals in tangent space */" },
		{ "TangentSpaceNormal.DisplayName", "Tangent Normal" },
		{ "TangentSpaceNormal.Name", "EBakeMapType::TangentSpaceNormal" },
		{ "TangentSpaceNormal.ToolTip", "Normals in tangent space" },
		{ "Texture.Comment", "/* Transfer a given texture */" },
		{ "Texture.Name", "EBakeMapType::Texture" },
		{ "Texture.ToolTip", "Transfer a given texture" },
		{ "ToolTip", "Bake map enums" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "UVShell.Comment", "/* UV shell */" },
		{ "UVShell.DisplayName", "UV Shell" },
		{ "UVShell.Name", "EBakeMapType::UVShell" },
		{ "UVShell.ToolTip", "UV shell" },
		{ "VertexColor.Comment", "/* Interpolated vertex colors */" },
		{ "VertexColor.Name", "EBakeMapType::VertexColor" },
		{ "VertexColor.ToolTip", "Interpolated vertex colors" },
		{ "Zero.Comment", "/* Constant value of Zero */" },
		{ "Zero.Name", "EBakeMapType::Zero" },
		{ "Zero.ToolTip", "Constant value of Zero" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBakeMapType::None", (int64)EBakeMapType::None },
		{ "EBakeMapType::TangentSpaceNormal", (int64)EBakeMapType::TangentSpaceNormal },
		{ "EBakeMapType::ObjectSpaceNormal", (int64)EBakeMapType::ObjectSpaceNormal },
		{ "EBakeMapType::FaceNormal", (int64)EBakeMapType::FaceNormal },
		{ "EBakeMapType::BentNormal", (int64)EBakeMapType::BentNormal },
		{ "EBakeMapType::Position", (int64)EBakeMapType::Position },
		{ "EBakeMapType::Curvature", (int64)EBakeMapType::Curvature },
		{ "EBakeMapType::AmbientOcclusion", (int64)EBakeMapType::AmbientOcclusion },
		{ "EBakeMapType::Texture", (int64)EBakeMapType::Texture },
		{ "EBakeMapType::MultiTexture", (int64)EBakeMapType::MultiTexture },
		{ "EBakeMapType::VertexColor", (int64)EBakeMapType::VertexColor },
		{ "EBakeMapType::MaterialID", (int64)EBakeMapType::MaterialID },
		{ "EBakeMapType::PolyGroupID", (int64)EBakeMapType::PolyGroupID },
		{ "EBakeMapType::One", (int64)EBakeMapType::One },
		{ "EBakeMapType::Zero", (int64)EBakeMapType::Zero },
		{ "EBakeMapType::UVShell", (int64)EBakeMapType::UVShell },
		{ "EBakeMapType::All", (int64)EBakeMapType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EBakeMapType",
	"EBakeMapType",
	Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType()
{
	if (!Z_Registration_Info_UEnum_EBakeMapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeMapType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeMapType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBakeMapType.InnerSingleton;
}
// End Enum EBakeMapType

// Begin Class UBakeMeshAttributeTool
void UBakeMeshAttributeTool::StaticRegisterNativesUBakeMeshAttributeTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeTool);
UClass* Z_Construct_UClass_UBakeMeshAttributeTool_NoRegister()
{
	return UBakeMeshAttributeTool::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Mesh Bake tool\n */" },
		{ "IncludePath", "BakeMeshAttributeTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
		{ "ToolTip", "Base Mesh Bake tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionSettings_MetaData[] = {
		{ "Comment", "//\n// Bake tool property sets\n//\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
		{ "ToolTip", "Bake tool property sets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiTextureSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingPreviewMaterial_MetaData[] = {
		{ "Comment", "//\n// Preview materials\n//\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
		{ "ToolTip", "Preview materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurvatureSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiTextureSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkingPreviewMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ErrorPreviewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_OcclusionSettings = { "OcclusionSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, OcclusionSettings), Z_Construct_UClass_UBakeOcclusionMapToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionSettings_MetaData), NewProp_OcclusionSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_CurvatureSettings = { "CurvatureSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, CurvatureSettings), Z_Construct_UClass_UBakeCurvatureMapToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvatureSettings_MetaData), NewProp_CurvatureSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_TextureSettings = { "TextureSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, TextureSettings), Z_Construct_UClass_UBakeTexture2DProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSettings_MetaData), NewProp_TextureSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_MultiTextureSettings = { "MultiTextureSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, MultiTextureSettings), Z_Construct_UClass_UBakeMultiTexture2DProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiTextureSettings_MetaData), NewProp_MultiTextureSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_WorkingPreviewMaterial = { "WorkingPreviewMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, WorkingPreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingPreviewMaterial_MetaData), NewProp_WorkingPreviewMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_ErrorPreviewMaterial = { "ErrorPreviewMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeTool, ErrorPreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorPreviewMaterial_MetaData), NewProp_ErrorPreviewMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_OcclusionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_CurvatureSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_TextureSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_MultiTextureSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_WorkingPreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeTool_Statics::NewProp_ErrorPreviewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UBakeMeshAttributeTool, IInteractiveToolExclusiveToolAPI), false },  // 3683580694
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UBakeMeshAttributeTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeTool_Statics::ClassParams = {
	&UBakeMeshAttributeTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeMeshAttributeTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeTool()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeTool.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeTool>()
{
	return UBakeMeshAttributeTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeTool);
UBakeMeshAttributeTool::~UBakeMeshAttributeTool() {}
// End Class UBakeMeshAttributeTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBakeMapType_StaticEnum, TEXT("EBakeMapType"), &Z_Registration_Info_UEnum_EBakeMapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3243645587U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMeshAttributeTool, UBakeMeshAttributeTool::StaticClass, TEXT("UBakeMeshAttributeTool"), &Z_Registration_Info_UClass_UBakeMeshAttributeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeTool), 1785602127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_2154636706(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
