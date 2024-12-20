// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoBoxComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoBoxComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBoxComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoBoxComponent
void UGizmoBoxComponent::StaticRegisterNativesUGizmoBoxComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBoxComponent);
UClass* Z_Construct_UClass_UGizmoBoxComponent_NoRegister()
{
	return UGizmoBoxComponent::StaticClass();
}
struct Z_Construct_UClass_UGizmoBoxComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos. \n * Draws outline of 3D Box based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoBoxComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws outline of 3D Box based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHiddenLines_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAxisFlip_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBoxComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bRemoveHiddenLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHiddenLines;
	static void NewProp_bEnableAxisFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAxisFlip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBoxComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBoxComponent, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBoxComponent, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBoxComponent, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBoxComponent, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bRemoveHiddenLines_SetBit(void* Obj)
{
	((UGizmoBoxComponent*)Obj)->bRemoveHiddenLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bRemoveHiddenLines = { "bRemoveHiddenLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoBoxComponent), &Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bRemoveHiddenLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveHiddenLines_MetaData), NewProp_bRemoveHiddenLines_MetaData) };
void Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bEnableAxisFlip_SetBit(void* Obj)
{
	((UGizmoBoxComponent*)Obj)->bEnableAxisFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bEnableAxisFlip = { "bEnableAxisFlip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoBoxComponent), &Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bEnableAxisFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAxisFlip_MetaData), NewProp_bEnableAxisFlip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoBoxComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bRemoveHiddenLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBoxComponent_Statics::NewProp_bEnableAxisFlip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBoxComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoBoxComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBoxComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBoxComponent_Statics::ClassParams = {
	&UGizmoBoxComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoBoxComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBoxComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBoxComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoBoxComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoBoxComponent()
{
	if (!Z_Registration_Info_UClass_UGizmoBoxComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBoxComponent.OuterSingleton, Z_Construct_UClass_UGizmoBoxComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoBoxComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBoxComponent>()
{
	return UGizmoBoxComponent::StaticClass();
}
UGizmoBoxComponent::UGizmoBoxComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBoxComponent);
UGizmoBoxComponent::~UGizmoBoxComponent() {}
// End Class UGizmoBoxComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBoxComponent, UGizmoBoxComponent::StaticClass, TEXT("UGizmoBoxComponent"), &Z_Registration_Info_UClass_UGizmoBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBoxComponent), 144208254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_1882126867(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBoxComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
