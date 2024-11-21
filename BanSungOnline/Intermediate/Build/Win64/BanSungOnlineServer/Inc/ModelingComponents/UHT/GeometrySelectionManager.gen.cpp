// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Selection/GeometrySelectionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySelectionManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FMeshElementSelectionParams();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin ScriptStruct FMeshElementSelectionParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshElementSelectionParams;
class UScriptStruct* FMeshElementSelectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementSelectionParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("MeshElementSelectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FMeshElementSelectionParams>()
{
	return FMeshElementSelectionParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionFillColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionFillColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshElementSelectionParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::NewProp_SelectionFillColor = { "SelectionFillColor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshElementSelectionParams, SelectionFillColor), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionFillColor_MetaData), NewProp_SelectionFillColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::NewProp_SelectionFillColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"MeshElementSelectionParams",
	Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::PropPointers),
	sizeof(FMeshElementSelectionParams),
	alignof(FMeshElementSelectionParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshElementSelectionParams()
{
	if (!Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshElementSelectionParams.InnerSingleton;
}
// End ScriptStruct FMeshElementSelectionParams

// Begin Class UGeometrySelectionManager
void UGeometrySelectionManager::StaticRegisterNativesUGeometrySelectionManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionManager);
UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister()
{
	return UGeometrySelectionManager::StaticClass();
}
struct Z_Construct_UClass_UGeometrySelectionManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGeometrySelectionManager provides the infrastructure for \"Element Selection\", ie \n * geometric sub-elements of some geometry object like a Triangle Mesh. The Manager is\n * designed to work with a relatively vague concept of \"element\", so it doesn't explicitly\n * reference triangles/etc, and the selectable-elements and how-elements-are-selected\n * concepts are provided by abstract-interfaces that allow various implememtations.\n * \n * The \"Geometry Objects\", eg like a DynamicMeshComponent, Gameplay Volume, etc, are\n * referred to as \"Active Targets\" in the Manager. External code provides and updates\n * the set of Active Targets, eg for example tracking the active Actor Selection in the Editor.\n * \n * For a given Target, a tuple (Selector, Selection, SelectionEditor) is created and maintained.\n * The FGeometrySelection is ultimately a basic list of integers and does not have any knowledge\n * of what it is a selection *of*, and is not intended to be directly edited. Instead the\n * SelectionEditor provides that functionality. This separation allows \"selection editing\" to\n * be customized, eg to enforce invariants or constraints that might apply to certain kinds of selections.\n * \n * The IGeometrySelector provides the core implementation of what \"selection\" means for a given\n * Target, eg like a mesh Component, or mesh object like a UDynamicMesh. The Selector is\n * created by a registered Factory, allowing client code to provide custom implementations for\n * different Target Types. Updates to the Selection are done via the Selector, as well as queries\n * about (eg) renderable selection geometry. 3D Transforms are also applied via the Selector,\n * as only it has the knowledge about what can be transformed and how it can be applied.\n * \n * The GeometrySelectionManager provides high-level interfaces for this system, for example\n * external code (eg such as something that creates a Gizmo for the active selection) only\n * needs to interact with SelectionManager, calling functions like \n * ::BeginTransformation() / ::UpdateTransformation() / ::EndTransformation().\n * The SelectionManager also handles Transactions/FChanges for the active Targets and Selections. \n * \n */" },
		{ "IncludePath", "Selection/GeometrySelectionManager.h" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "UGeometrySelectionManager provides the infrastructure for \"Element Selection\", ie\ngeometric sub-elements of some geometry object like a Triangle Mesh. The Manager is\ndesigned to work with a relatively vague concept of \"element\", so it doesn't explicitly\nreference triangles/etc, and the selectable-elements and how-elements-are-selected\nconcepts are provided by abstract-interfaces that allow various implememtations.\n\nThe \"Geometry Objects\", eg like a DynamicMeshComponent, Gameplay Volume, etc, are\nreferred to as \"Active Targets\" in the Manager. External code provides and updates\nthe set of Active Targets, eg for example tracking the active Actor Selection in the Editor.\n\nFor a given Target, a tuple (Selector, Selection, SelectionEditor) is created and maintained.\nThe FGeometrySelection is ultimately a basic list of integers and does not have any knowledge\nof what it is a selection *of*, and is not intended to be directly edited. Instead the\nSelectionEditor provides that functionality. This separation allows \"selection editing\" to\nbe customized, eg to enforce invariants or constraints that might apply to certain kinds of selections.\n\nThe IGeometrySelector provides the core implementation of what \"selection\" means for a given\nTarget, eg like a mesh Component, or mesh object like a UDynamicMesh. The Selector is\ncreated by a registered Factory, allowing client code to provide custom implementations for\ndifferent Target Types. Updates to the Selection are done via the Selector, as well as queries\nabout (eg) renderable selection geometry. 3D Transforms are also applied via the Selector,\nas only it has the knowledge about what can be transformed and how it can be applied.\n\nThe GeometrySelectionManager provides high-level interfaces for this system, for example\nexternal code (eg such as something that creates a Gizmo for the active selection) only\nneeds to interact with SelectionManager, calling functions like\n::BeginTransformation() / ::UpdateTransformation() / ::EndTransformation().\nThe SelectionManager also handles Transactions/FChanges for the active Targets and Selections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionArguments_MetaData[] = {
		{ "Comment", "// This is set to current selection during CanExecuteSelectionCommand/ExecuteSelectionCommand, to keep the UObject alive\n// Not expected to be used outside that context\n" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "This is set to current selection during CanExecuteSelectionCommand/ExecuteSelectionCommand, to keep the UObject alive\nNot expected to be used outside that context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolsContext_MetaData[] = {
		{ "Comment", "// ITF references\n" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "ITF references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[] = {
		{ "Comment", "// todo [nickolas.drake]: cane we move CachedSelectionRenderElements, Cached[Un]selectedPreviewRenderElements, and bSelectionRenderCachesDirty to private?\n" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "todo [nickolas.drake]: cane we move CachedSelectionRenderElements, Cached[Un]selectedPreviewRenderElements, and bSelectionRenderCachesDirty to private?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectedParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverOverSelectedParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverOverUnselectedParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionArguments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolsContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnselectedParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverOverSelectedParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverOverUnselectedParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments = { "SelectionArguments", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, SelectionArguments), Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionArguments_MetaData), NewProp_SelectionArguments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext = { "ToolsContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, ToolsContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolsContext_MetaData), NewProp_ToolsContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometry_MetaData), NewProp_PreviewGeometry_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_UnselectedParams = { "UnselectedParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, UnselectedParams), Z_Construct_UScriptStruct_FMeshElementSelectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectedParams_MetaData), NewProp_UnselectedParams_MetaData) }; // 3968767812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_HoverOverSelectedParams = { "HoverOverSelectedParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, HoverOverSelectedParams), Z_Construct_UScriptStruct_FMeshElementSelectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverOverSelectedParams_MetaData), NewProp_HoverOverSelectedParams_MetaData) }; // 3968767812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_HoverOverUnselectedParams = { "HoverOverUnselectedParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, HoverOverUnselectedParams), Z_Construct_UScriptStruct_FMeshElementSelectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverOverUnselectedParams_MetaData), NewProp_HoverOverUnselectedParams_MetaData) }; // 3968767812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectedParams = { "SelectedParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionManager, SelectedParams), Z_Construct_UScriptStruct_FMeshElementSelectionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedParams_MetaData), NewProp_SelectedParams_MetaData) }; // 3968767812
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_PreviewGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_UnselectedParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_HoverOverSelectedParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_HoverOverUnselectedParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectedParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometrySelectionManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionManager_Statics::ClassParams = {
	&UGeometrySelectionManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometrySelectionManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometrySelectionManager()
{
	if (!Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton, Z_Construct_UClass_UGeometrySelectionManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionManager>()
{
	return UGeometrySelectionManager::StaticClass();
}
UGeometrySelectionManager::UGeometrySelectionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionManager);
UGeometrySelectionManager::~UGeometrySelectionManager() {}
// End Class UGeometrySelectionManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshElementSelectionParams::StaticStruct, Z_Construct_UScriptStruct_FMeshElementSelectionParams_Statics::NewStructOps, TEXT("MeshElementSelectionParams"), &Z_Registration_Info_UScriptStruct_MeshElementSelectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshElementSelectionParams), 3968767812U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometrySelectionManager, UGeometrySelectionManager::StaticClass, TEXT("UGeometrySelectionManager"), &Z_Registration_Info_UClass_UGeometrySelectionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionManager), 2269278278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_1512320856(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
