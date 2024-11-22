// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionTextureCoordinate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureCoordinate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureCoordinate
void UMaterialExpressionTextureCoordinate::StaticRegisterNativesUMaterialExpressionTextureCoordinate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureCoordinate);
UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister()
{
	return UMaterialExpressionTextureCoordinate::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "Comment", "/** Texture coordinate index */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Texture coordinate index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UTiling_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "Comment", "/** Controls how much the texture tiles horizontally, by scaling the U component of the vertex UVs by the specified amount. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Controls how much the texture tiles horizontally, by scaling the U component of the vertex UVs by the specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VTiling_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "Comment", "/** Controls how much the texture tiles vertically, by scaling the V component of the vertex UVs by the specified amount. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Controls how much the texture tiles vertically, by scaling the V component of the vertex UVs by the specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnMirrorU_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "Comment", "/** Would like to unmirror U or V \n\x09 *  - if the texture is mirrored and if you would like to undo mirroring for this texture sample, use this to unmirror */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Would like to unmirror U or V\n- if the texture is mirrored and if you would like to undo mirroring for this texture sample, use this to unmirror" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnMirrorV_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoordinateIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UTiling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VTiling;
	static void NewProp_UnMirrorU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UnMirrorU;
	static void NewProp_UnMirrorV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UnMirrorV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureCoordinate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex = { "CoordinateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, CoordinateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordinateIndex_MetaData), NewProp_CoordinateIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling = { "UTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, UTiling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UTiling_MetaData), NewProp_UTiling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling = { "VTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, VTiling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VTiling_MetaData), NewProp_VTiling_MetaData) };
void Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_SetBit(void* Obj)
{
	((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU = { "UnMirrorU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureCoordinate), &Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnMirrorU_MetaData), NewProp_UnMirrorU_MetaData) };
void Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_SetBit(void* Obj)
{
	((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV = { "UnMirrorV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureCoordinate), &Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnMirrorV_MetaData), NewProp_UnMirrorV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::ClassParams = {
	&UMaterialExpressionTextureCoordinate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureCoordinate>()
{
	return UMaterialExpressionTextureCoordinate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureCoordinate);
UMaterialExpressionTextureCoordinate::~UMaterialExpressionTextureCoordinate() {}
// End Class UMaterialExpressionTextureCoordinate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureCoordinate, UMaterialExpressionTextureCoordinate::StaticClass, TEXT("UMaterialExpressionTextureCoordinate"), &Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureCoordinate), 427680443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_225561349(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS