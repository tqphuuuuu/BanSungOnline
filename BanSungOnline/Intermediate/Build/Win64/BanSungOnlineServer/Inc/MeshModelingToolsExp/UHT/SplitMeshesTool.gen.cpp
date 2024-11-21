// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/SplitMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitMeshesTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class USplitMeshesToolBuilder
void USplitMeshesToolBuilder::StaticRegisterNativesUSplitMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesToolBuilder);
UClass* Z_Construct_UClass_USplitMeshesToolBuilder_NoRegister()
{
	return USplitMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USplitMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USplitMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesToolBuilder_Statics::ClassParams = {
	&USplitMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_USplitMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesToolBuilder>()
{
	return USplitMeshesToolBuilder::StaticClass();
}
USplitMeshesToolBuilder::USplitMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesToolBuilder);
USplitMeshesToolBuilder::~USplitMeshesToolBuilder() {}
// End Class USplitMeshesToolBuilder

// Begin Enum ESplitMeshesMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplitMeshesMethod;
static UEnum* ESplitMeshesMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplitMeshesMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplitMeshesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESplitMeshesMethod"));
	}
	return Z_Registration_Info_UEnum_ESplitMeshesMethod.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESplitMeshesMethod>()
{
	return ESplitMeshesMethod_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByMaterialID.Comment", "// Split meshes based on material ID\n" },
		{ "ByMaterialID.Name", "ESplitMeshesMethod::ByMaterialID" },
		{ "ByMaterialID.ToolTip", "Split meshes based on material ID" },
		{ "ByMeshTopology.Comment", "// Split meshes based on the triangle-connected regions of the mesh\n" },
		{ "ByMeshTopology.Name", "ESplitMeshesMethod::ByMeshTopology" },
		{ "ByMeshTopology.ToolTip", "Split meshes based on the triangle-connected regions of the mesh" },
		{ "ByPolyGroup.Comment", "// Split meshes based on PolyGroup ID\n" },
		{ "ByPolyGroup.Name", "ESplitMeshesMethod::ByPolyGroup" },
		{ "ByPolyGroup.ToolTip", "Split meshes based on PolyGroup ID" },
		{ "ByVertexOverlap.Comment", "// Split meshes based on triangle-connected regions, and consider vertices to be connected if they are within a tolerance distance\n" },
		{ "ByVertexOverlap.Name", "ESplitMeshesMethod::ByVertexOverlap" },
		{ "ByVertexOverlap.ToolTip", "Split meshes based on triangle-connected regions, and consider vertices to be connected if they are within a tolerance distance" },
		{ "Comment", "// Methods for splitting meshes\n" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Methods for splitting meshes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplitMeshesMethod::ByMeshTopology", (int64)ESplitMeshesMethod::ByMeshTopology },
		{ "ESplitMeshesMethod::ByVertexOverlap", (int64)ESplitMeshesMethod::ByVertexOverlap },
		{ "ESplitMeshesMethod::ByMaterialID", (int64)ESplitMeshesMethod::ByMaterialID },
		{ "ESplitMeshesMethod::ByPolyGroup", (int64)ESplitMeshesMethod::ByPolyGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ESplitMeshesMethod",
	"ESplitMeshesMethod",
	Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod()
{
	if (!Z_Registration_Info_UEnum_ESplitMeshesMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplitMeshesMethod.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplitMeshesMethod.InnerSingleton;
}
// End Enum ESplitMeshesMethod

// Begin Class USplitMeshesToolProperties
void USplitMeshesToolProperties::StaticRegisterNativesUSplitMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesToolProperties);
UClass* Z_Construct_UClass_USplitMeshesToolProperties_NoRegister()
{
	return USplitMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_USplitMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Method to use to split the input(s) into output meshes\n" },
		{ "EditCondition", "!bIsInSelectionMode" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Method to use to split the input(s) into output meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectVerticesThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "// Vertices as close as this distance will be treated as overlapping, and kept in the same output mesh\n" },
		{ "EditCondition", "!bIsInSelectionMode && SplitMethod == ESplitMeshesMethod::ByVertexOverlap" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Vertices as close as this distance will be treated as overlapping, and kept in the same output mesh" },
		{ "UIMax", "1.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether to transfer materials to the output meshes\n" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Whether to transfer materials to the output meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether to color mesh faces based on how they will be split into output meshes\n" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Whether to color mesh faces based on how they will be split into output meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInSelectionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplitMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ConnectVerticesThreshold;
	static void NewProp_bTransferMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferMaterials;
	static void NewProp_bShowPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
	static void NewProp_bIsInSelectionMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInSelectionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_SplitMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_SplitMethod = { "SplitMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesToolProperties, SplitMethod), Z_Construct_UEnum_MeshModelingToolsExp_ESplitMeshesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitMethod_MetaData), NewProp_SplitMethod_MetaData) }; // 700836160
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_ConnectVerticesThreshold = { "ConnectVerticesThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesToolProperties, ConnectVerticesThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectVerticesThreshold_MetaData), NewProp_ConnectVerticesThreshold_MetaData) };
void Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit(void* Obj)
{
	((USplitMeshesToolProperties*)Obj)->bTransferMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials = { "bTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplitMeshesToolProperties), &Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferMaterials_MetaData), NewProp_bTransferMaterials_MetaData) };
void Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
{
	((USplitMeshesToolProperties*)Obj)->bShowPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplitMeshesToolProperties), &Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreview_MetaData), NewProp_bShowPreview_MetaData) };
void Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bIsInSelectionMode_SetBit(void* Obj)
{
	((USplitMeshesToolProperties*)Obj)->bIsInSelectionMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bIsInSelectionMode = { "bIsInSelectionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplitMeshesToolProperties), &Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bIsInSelectionMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInSelectionMode_MetaData), NewProp_bIsInSelectionMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_SplitMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_SplitMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_ConnectVerticesThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bShowPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bIsInSelectionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplitMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::ClassParams = {
	&USplitMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton, Z_Construct_UClass_USplitMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesToolProperties>()
{
	return USplitMeshesToolProperties::StaticClass();
}
USplitMeshesToolProperties::USplitMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesToolProperties);
USplitMeshesToolProperties::~USplitMeshesToolProperties() {}
// End Class USplitMeshesToolProperties

// Begin Class USplitMeshesTool
void USplitMeshesTool::StaticRegisterNativesUSplitMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesTool);
UClass* Z_Construct_UClass_USplitMeshesTool_NoRegister()
{
	return USplitMeshesTool::StaticClass();
}
struct Z_Construct_UClass_USplitMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerTargetPreviews_MetaData[] = {
		{ "Comment", "// Preview how the meshes are to be split\n" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
		{ "ToolTip", "Preview how the meshes are to be split" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerTargetPreviews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerTargetPreviews;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesTool, BasicProperties), Z_Construct_UClass_USplitMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PerTargetPreviews_Inner = { "PerTargetPreviews", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PerTargetPreviews = { "PerTargetPreviews", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesTool, PerTargetPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerTargetPreviews_MetaData), NewProp_PerTargetPreviews_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitMeshesTool, PreviewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PerTargetPreviews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PerTargetPreviews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_PreviewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplitMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesTool_Statics::ClassParams = {
	&USplitMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitMeshesTool()
{
	if (!Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton, Z_Construct_UClass_USplitMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesTool>()
{
	return USplitMeshesTool::StaticClass();
}
USplitMeshesTool::USplitMeshesTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesTool);
USplitMeshesTool::~USplitMeshesTool() {}
// End Class USplitMeshesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplitMeshesMethod_StaticEnum, TEXT("ESplitMeshesMethod"), &Z_Registration_Info_UEnum_ESplitMeshesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 700836160U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplitMeshesToolBuilder, USplitMeshesToolBuilder::StaticClass, TEXT("USplitMeshesToolBuilder"), &Z_Registration_Info_UClass_USplitMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesToolBuilder), 2820242136U) },
		{ Z_Construct_UClass_USplitMeshesToolProperties, USplitMeshesToolProperties::StaticClass, TEXT("USplitMeshesToolProperties"), &Z_Registration_Info_UClass_USplitMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesToolProperties), 760026581U) },
		{ Z_Construct_UClass_USplitMeshesTool, USplitMeshesTool::StaticClass, TEXT("USplitMeshesTool"), &Z_Registration_Info_UClass_USplitMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesTool), 3648258221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_1420018587(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
