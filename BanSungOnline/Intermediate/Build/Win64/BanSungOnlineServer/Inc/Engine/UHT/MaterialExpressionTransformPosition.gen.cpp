// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionTransformPosition.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransformPosition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialPositionTransformSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialPositionTransformSource;
static UEnum* EMaterialPositionTransformSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialPositionTransformSource"));
	}
	return Z_Registration_Info_UEnum_EMaterialPositionTransformSource.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialPositionTransformSource>()
{
	return EMaterialPositionTransformSource_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "TRANSFORMPOSSOURCE_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORMPOSSOURCE_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORMPOSSOURCE_Camera.Name", "TRANSFORMPOSSOURCE_Camera" },
		{ "TRANSFORMPOSSOURCE_Camera.ToolTip", "Camera space" },
		{ "TRANSFORMPOSSOURCE_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORMPOSSOURCE_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORMPOSSOURCE_Instance.Name", "TRANSFORMPOSSOURCE_Instance" },
		{ "TRANSFORMPOSSOURCE_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORMPOSSOURCE_Local.Comment", "/** Local space */" },
		{ "TRANSFORMPOSSOURCE_Local.DisplayName", "Local Space" },
		{ "TRANSFORMPOSSOURCE_Local.Name", "TRANSFORMPOSSOURCE_Local" },
		{ "TRANSFORMPOSSOURCE_Local.ToolTip", "Local space" },
		{ "TRANSFORMPOSSOURCE_MAX.Name", "TRANSFORMPOSSOURCE_MAX" },
		{ "TRANSFORMPOSSOURCE_Particle.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORMPOSSOURCE_Particle.DisplayName", "Mesh Particle Space" },
		{ "TRANSFORMPOSSOURCE_Particle.Hidden", "" },
		{ "TRANSFORMPOSSOURCE_Particle.Name", "TRANSFORMPOSSOURCE_Particle" },
		{ "TRANSFORMPOSSOURCE_Particle.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORMPOSSOURCE_PeriodicWorld.Comment", "/**\n\x09  Like absolute world space, but the world origin is moved to the center of the tile the camera is in.\n\x09  Logically similar to `fmod(CameraAbsoluteWorldPosition, TileSize) + CameraRelativeWorldPosition`.\n\x09  This offers better precision and scalability than absolute world position.\n\x09  Suitable as a position input for functions that tile based on world position, e.g. frac(Position / TileSize).\n\x09  Works best when the tile size is a power of two.\n\x09*/" },
		{ "TRANSFORMPOSSOURCE_PeriodicWorld.DisplayName", "Periodic World Space" },
		{ "TRANSFORMPOSSOURCE_PeriodicWorld.Name", "TRANSFORMPOSSOURCE_PeriodicWorld" },
		{ "TRANSFORMPOSSOURCE_PeriodicWorld.ToolTip", "Like absolute world space, but the world origin is moved to the center of the tile the camera is in.\nLogically similar to `fmod(CameraAbsoluteWorldPosition, TileSize) + CameraRelativeWorldPosition`.\nThis offers better precision and scalability than absolute world position.\nSuitable as a position input for functions that tile based on world position, e.g. frac(Position / TileSize).\nWorks best when the tile size is a power of two." },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.Comment", "/** Translated world space, i.e. world space rotation and scale but with a position relative to the camera */" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.DisplayName", "Camera Relative World Space" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.Name", "TRANSFORMPOSSOURCE_TranslatedWorld" },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld.ToolTip", "Translated world space, i.e. world space rotation and scale but with a position relative to the camera" },
		{ "TRANSFORMPOSSOURCE_View.Comment", "/** View space (differs from camera space in the shadow passes) */" },
		{ "TRANSFORMPOSSOURCE_View.DisplayName", "View Space" },
		{ "TRANSFORMPOSSOURCE_View.Name", "TRANSFORMPOSSOURCE_View" },
		{ "TRANSFORMPOSSOURCE_View.ToolTip", "View space (differs from camera space in the shadow passes)" },
		{ "TRANSFORMPOSSOURCE_World.Comment", "/** Absolute world space */" },
		{ "TRANSFORMPOSSOURCE_World.DisplayName", "Absolute World Space" },
		{ "TRANSFORMPOSSOURCE_World.Name", "TRANSFORMPOSSOURCE_World" },
		{ "TRANSFORMPOSSOURCE_World.ToolTip", "Absolute world space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TRANSFORMPOSSOURCE_Local", (int64)TRANSFORMPOSSOURCE_Local },
		{ "TRANSFORMPOSSOURCE_World", (int64)TRANSFORMPOSSOURCE_World },
		{ "TRANSFORMPOSSOURCE_PeriodicWorld", (int64)TRANSFORMPOSSOURCE_PeriodicWorld },
		{ "TRANSFORMPOSSOURCE_TranslatedWorld", (int64)TRANSFORMPOSSOURCE_TranslatedWorld },
		{ "TRANSFORMPOSSOURCE_View", (int64)TRANSFORMPOSSOURCE_View },
		{ "TRANSFORMPOSSOURCE_Camera", (int64)TRANSFORMPOSSOURCE_Camera },
		{ "TRANSFORMPOSSOURCE_Particle", (int64)TRANSFORMPOSSOURCE_Particle },
		{ "TRANSFORMPOSSOURCE_Instance", (int64)TRANSFORMPOSSOURCE_Instance },
		{ "TRANSFORMPOSSOURCE_MAX", (int64)TRANSFORMPOSSOURCE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialPositionTransformSource",
	"EMaterialPositionTransformSource",
	Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource()
{
	if (!Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialPositionTransformSource.InnerSingleton;
}
// End Enum EMaterialPositionTransformSource

// Begin Class UMaterialExpressionTransformPosition
void UMaterialExpressionTransformPosition::StaticRegisterNativesUMaterialExpressionTransformPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTransformPosition);
UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister()
{
	return UMaterialExpressionTransformPosition::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTransformPosition.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Comment", "/** input expression for this transform */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "ToolTip", "input expression for this transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSourceType_MetaData[] = {
		{ "Category", "MaterialExpressionTransformPosition" },
		{ "Comment", "/** source format of the position that will be transformed */" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "source format of the position that will be transformed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "MaterialExpressionTransformPosition" },
		{ "Comment", "/** type of transform to apply to the input expression */" },
		{ "DisplayName", "Destination" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "type of transform to apply to the input expression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicWorldTileSize_MetaData[] = {
		{ "DisplayName", "Periodic World Tile Size" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Distance the camera can move before the world origin is moved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstPeriodicWorldTileSize_MetaData[] = {
		{ "Category", "MaterialExpressionTransformPosition" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "/** only used if PeriodicWorldTileSize is not hooked up */" },
		{ "DisplayName", "Periodic World Tile Size" },
		{ "EditCondition", "bUsesPeriodicWorldPosition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
		{ "OverridingInputProperty", "PeriodicWorldTileSize" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "only used if PeriodicWorldTileSize is not hooked up" },
		{ "UIMax", "524288.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesPeriodicWorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTransformPosition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSourceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeriodicWorldTileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstPeriodicWorldTileSize;
	static void NewProp_bUsesPeriodicWorldPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPeriodicWorldPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTransformPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransformPosition, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType = { "TransformSourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSourceType_MetaData), NewProp_TransformSourceType_MetaData) }; // 2657259930
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 2657259930
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_PeriodicWorldTileSize = { "PeriodicWorldTileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransformPosition, PeriodicWorldTileSize), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodicWorldTileSize_MetaData), NewProp_PeriodicWorldTileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_ConstPeriodicWorldTileSize = { "ConstPeriodicWorldTileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransformPosition, ConstPeriodicWorldTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstPeriodicWorldTileSize_MetaData), NewProp_ConstPeriodicWorldTileSize_MetaData) };
void Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_bUsesPeriodicWorldPosition_SetBit(void* Obj)
{
	((UMaterialExpressionTransformPosition*)Obj)->bUsesPeriodicWorldPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_bUsesPeriodicWorldPosition = { "bUsesPeriodicWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionTransformPosition), &Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_bUsesPeriodicWorldPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesPeriodicWorldPosition_MetaData), NewProp_bUsesPeriodicWorldPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformSourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_TransformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_PeriodicWorldTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_ConstPeriodicWorldTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::NewProp_bUsesPeriodicWorldPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::ClassParams = {
	&UMaterialExpressionTransformPosition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTransformPosition>()
{
	return UMaterialExpressionTransformPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransformPosition);
UMaterialExpressionTransformPosition::~UMaterialExpressionTransformPosition() {}
// End Class UMaterialExpressionTransformPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialPositionTransformSource_StaticEnum, TEXT("EMaterialPositionTransformSource"), &Z_Registration_Info_UEnum_EMaterialPositionTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2657259930U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTransformPosition, UMaterialExpressionTransformPosition::StaticClass, TEXT("UMaterialExpressionTransformPosition"), &Z_Registration_Info_UClass_UMaterialExpressionTransformPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTransformPosition), 3174985784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_3978115664(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
