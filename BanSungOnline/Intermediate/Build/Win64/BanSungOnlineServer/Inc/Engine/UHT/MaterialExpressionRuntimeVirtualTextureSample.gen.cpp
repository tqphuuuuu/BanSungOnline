// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h"
#include "Runtime/Engine/Public/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRuntimeVirtualTextureSample() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ERuntimeVirtualTextureMipValueMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode;
static UEnum* ERuntimeVirtualTextureMipValueMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMipValueMode"));
	}
	return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMipValueMode>()
{
	return ERuntimeVirtualTextureMipValueMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Set how Mip levels are calculated.\n * Internally we will convert to ETextureMipValueMode which is used by internal APIs.\n */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RVTMVM_DerivativeUV.Comment", "/* \n\x09 * Compute mip level from explicitly provided DDX and DDY derivatives of the virtual texture UV coordinates.\n\x09 */" },
		{ "RVTMVM_DerivativeUV.DisplayName", "Derivatives (UV Space)" },
		{ "RVTMVM_DerivativeUV.Name", "RVTMVM_DerivativeUV" },
		{ "RVTMVM_DerivativeUV.ToolTip", "* Compute mip level from explicitly provided DDX and DDY derivatives of the virtual texture UV coordinates." },
		{ "RVTMVM_DerivativeWorld.Comment", "/*\n\x09 * Compute mip level from explicitly provided DDX and DDY derivatives of the world position.\n\x09 */" },
		{ "RVTMVM_DerivativeWorld.DisplayName", "Derivatives (World Space)" },
		{ "RVTMVM_DerivativeWorld.Name", "RVTMVM_DerivativeWorld" },
		{ "RVTMVM_DerivativeWorld.ToolTip", "* Compute mip level from explicitly provided DDX and DDY derivatives of the world position." },
		{ "RVTMVM_MAX.Name", "RVTMVM_MAX" },
		{ "RVTMVM_MipBias.Comment", "/* \n\x09 * Bias the default computed mip level using the MipBias pin. \n\x09 * Negative values increase resolution.\n\x09 */" },
		{ "RVTMVM_MipBias.DisplayName", "Mip Bias" },
		{ "RVTMVM_MipBias.Name", "RVTMVM_MipBias" },
		{ "RVTMVM_MipBias.ToolTip", "* Bias the default computed mip level using the MipBias pin.\n* Negative values increase resolution." },
		{ "RVTMVM_MipLevel.Comment", "/* \n\x09 * Use an absolute mip level from the MipLevel pin. \n\x09 * 0 is full resolution.\n\x09 */" },
		{ "RVTMVM_MipLevel.DisplayName", "Mip Level" },
		{ "RVTMVM_MipLevel.Name", "RVTMVM_MipLevel" },
		{ "RVTMVM_MipLevel.ToolTip", "* Use an absolute mip level from the MipLevel pin.\n* 0 is full resolution." },
		{ "RVTMVM_None.Comment", "/* \n\x09 * Use default computed mip level. Takes into account UV scaling from using the WorldPosition pin.\n\x09 */" },
		{ "RVTMVM_None.DisplayName", "Default" },
		{ "RVTMVM_None.Name", "RVTMVM_None" },
		{ "RVTMVM_None.ToolTip", "* Use default computed mip level. Takes into account UV scaling from using the WorldPosition pin." },
		{ "RVTMVM_RecalculateDerivatives.Comment", "/* \n\x09* Compute mip level from world position derivatives.\n\x09* This is intended for cases where the value passed to the WorldPosition pin doesn't give good derivatives.\n\x09* (For example when using a constant value from primitive world position).\n\x09* This is deprecated. Use Derivative (World Space) instead, and pass in DDX/DDY of world space.\n\x09 */" },
		{ "RVTMVM_RecalculateDerivatives.DisplayName", "Ignore Input WorldPosition" },
		{ "RVTMVM_RecalculateDerivatives.Hidden", "" },
		{ "RVTMVM_RecalculateDerivatives.Name", "RVTMVM_RecalculateDerivatives" },
		{ "RVTMVM_RecalculateDerivatives.ToolTip", "* Compute mip level from world position derivatives.\n* This is intended for cases where the value passed to the WorldPosition pin doesn't give good derivatives.\n* (For example when using a constant value from primitive world position).\n* This is deprecated. Use Derivative (World Space) instead, and pass in DDX/DDY of world space." },
		{ "ToolTip", "Set how Mip levels are calculated.\nInternally we will convert to ETextureMipValueMode which is used by internal APIs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RVTMVM_None", (int64)RVTMVM_None },
		{ "RVTMVM_MipLevel", (int64)RVTMVM_MipLevel },
		{ "RVTMVM_MipBias", (int64)RVTMVM_MipBias },
		{ "RVTMVM_RecalculateDerivatives", (int64)RVTMVM_RecalculateDerivatives },
		{ "RVTMVM_DerivativeUV", (int64)RVTMVM_DerivativeUV },
		{ "RVTMVM_DerivativeWorld", (int64)RVTMVM_DerivativeWorld },
		{ "RVTMVM_MAX", (int64)RVTMVM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERuntimeVirtualTextureMipValueMode",
	"ERuntimeVirtualTextureMipValueMode",
	Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.InnerSingleton, Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode.InnerSingleton;
}
// End Enum ERuntimeVirtualTextureMipValueMode

// Begin Enum ERuntimeVirtualTextureTextureAddressMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode;
static UEnum* ERuntimeVirtualTextureTextureAddressMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureTextureAddressMode"));
	}
	return Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureTextureAddressMode>()
{
	return ERuntimeVirtualTextureTextureAddressMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines texture addressing behavior.\n */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RVTTA_Clamp.Comment", "/* Clamp mode. */" },
		{ "RVTTA_Clamp.DisplayName", "Clamp" },
		{ "RVTTA_Clamp.Name", "RVTTA_Clamp" },
		{ "RVTTA_Clamp.ToolTip", "Clamp mode." },
		{ "RVTTA_MAX.Name", "RVTTA_MAX" },
		{ "RVTTA_Wrap.Comment", "/* Wrap mode. */" },
		{ "RVTTA_Wrap.DisplayName", "Wrap" },
		{ "RVTTA_Wrap.Name", "RVTTA_Wrap" },
		{ "RVTTA_Wrap.ToolTip", "Wrap mode." },
		{ "ToolTip", "Defines texture addressing behavior." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RVTTA_Clamp", (int64)RVTTA_Clamp },
		{ "RVTTA_Wrap", (int64)RVTTA_Wrap },
		{ "RVTTA_MAX", (int64)RVTTA_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERuntimeVirtualTextureTextureAddressMode",
	"ERuntimeVirtualTextureTextureAddressMode",
	Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode()
{
	if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.InnerSingleton, Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode.InnerSingleton;
}
// End Enum ERuntimeVirtualTextureTextureAddressMode

// Begin Class UMaterialExpressionRuntimeVirtualTextureSample
void UMaterialExpressionRuntimeVirtualTextureSample::StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRuntimeVirtualTextureSample);
UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_NoRegister()
{
	return UMaterialExpressionRuntimeVirtualTextureSample::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material expression for sampling from a runtime virtual texture. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Material expression for sampling from a runtime virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/** Optional UV coordinates input if we want to override standard world position based coordinates. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Optional UV coordinates input if we want to override standard world position based coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** Optional world position input to override the default world position. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Optional world position input to override the default world position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[] = {
		{ "Comment", "/** Meaning depends on MipValueMode. A single unit is one mip level.  */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Meaning depends on MipValueMode. A single unit is one mip level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DDX_MetaData[] = {
		{ "Comment", "/** Derivative over the X axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Derivative over the X axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DDY_MetaData[] = {
		{ "Comment", "/** Derivative over the Y axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Derivative over the Y axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to sample. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "The virtual texture object to sample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** How to interpret the virtual texture contents. Note that the bound Virtual Texture should have the same setting for sampling to work correctly. */" },
		{ "DisplayName", "Virtual texture content" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "How to interpret the virtual texture contents. Note that the bound Virtual Texture should have the same setting for sampling to work correctly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Enable page table channel packing. Note that the bound Virtual Texture should have the same setting for sampling to work correctly. */" },
		{ "DisplayName", "Enable packed page table" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Enable page table channel packing. Note that the bound Virtual Texture should have the same setting for sampling to work correctly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdaptive_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Enable sparse adaptive page tables. Note that the bound Virtual Texture should have valid adaptive virtual texture settings for sampling to work correctly. */" },
		{ "DisplayName", "Enable adaptive page table" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Enable sparse adaptive page tables. Note that the bound Virtual Texture should have valid adaptive virtual texture settings for sampling to work correctly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "UV Coordinates" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAddressMode_MetaData[] = {
		{ "Category", "TextureSample" },
		{ "Comment", "/** Defines the texture addressing mode. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Defines the texture addressing mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[] = {
		{ "Category", "TextureSample" },
		{ "Comment", "/** Defines how the mip level is calculated for the virtual texture lookup. */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Defines how the mip level is calculated for the virtual texture lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFeedback_MetaData[] = {
		{ "Category", "TextureSample" },
		{ "Comment", "/** \n\x09 * Enable virtual texture feedback. \n\x09 * Disabling this can result in the virtual texture not reaching the correct mip level. \n\x09 * It should only be used in cases where we don't care about the correct mip level being resident, or some other process is maintaining the correct level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Materials/MaterialExpressionRuntimeVirtualTextureSample.h" },
		{ "ToolTip", "Enable virtual texture feedback.\nDisabling this can result in the virtual texture not reaching the correct mip level.\nIt should only be used in cases where we don't care about the correct mip level being resident, or some other process is maintaining the correct level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MipValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DDX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DDY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
	static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
	static void NewProp_bAdaptive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdaptive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAddressMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipValueMode;
	static void NewProp_bEnableFeedback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFeedback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRuntimeVirtualTextureSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue = { "MipValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipValue_MetaData), NewProp_MipValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_DDX = { "DDX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, DDX), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DDX_MetaData), NewProp_DDX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_DDY = { "DDY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, DDY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DDY_MetaData), NewProp_DDY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTexture_MetaData), NewProp_VirtualTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MaterialType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialType_MetaData), NewProp_MaterialType_MetaData) }; // 1328463900
void Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
{
	((UMaterialExpressionRuntimeVirtualTextureSample*)Obj)->bSinglePhysicalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionRuntimeVirtualTextureSample), &Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSinglePhysicalSpace_MetaData), NewProp_bSinglePhysicalSpace_MetaData) };
void Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_SetBit(void* Obj)
{
	((UMaterialExpressionRuntimeVirtualTextureSample*)Obj)->bAdaptive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive = { "bAdaptive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionRuntimeVirtualTextureSample), &Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdaptive_MetaData), NewProp_bAdaptive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 3050082427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode = { "TextureAddressMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, TextureAddressMode), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureTextureAddressMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAddressMode_MetaData), NewProp_TextureAddressMode_MetaData) }; // 572427326
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode = { "MipValueMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMipValueMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipValueMode_MetaData), NewProp_MipValueMode_MetaData) }; // 3486120688
void Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bEnableFeedback_SetBit(void* Obj)
{
	((UMaterialExpressionRuntimeVirtualTextureSample*)Obj)->bEnableFeedback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bEnableFeedback = { "bEnableFeedback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionRuntimeVirtualTextureSample), &Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bEnableFeedback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFeedback_MetaData), NewProp_bEnableFeedback_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_DDX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_DDY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_VirtualTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MaterialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bSinglePhysicalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bAdaptive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_TextureAddressMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_MipValueMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::NewProp_bEnableFeedback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::ClassParams = {
	&UMaterialExpressionRuntimeVirtualTextureSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRuntimeVirtualTextureSample>()
{
	return UMaterialExpressionRuntimeVirtualTextureSample::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRuntimeVirtualTextureSample);
UMaterialExpressionRuntimeVirtualTextureSample::~UMaterialExpressionRuntimeVirtualTextureSample() {}
// End Class UMaterialExpressionRuntimeVirtualTextureSample

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERuntimeVirtualTextureMipValueMode_StaticEnum, TEXT("ERuntimeVirtualTextureMipValueMode"), &Z_Registration_Info_UEnum_ERuntimeVirtualTextureMipValueMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3486120688U) },
		{ ERuntimeVirtualTextureTextureAddressMode_StaticEnum, TEXT("ERuntimeVirtualTextureTextureAddressMode"), &Z_Registration_Info_UEnum_ERuntimeVirtualTextureTextureAddressMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 572427326U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample, UMaterialExpressionRuntimeVirtualTextureSample::StaticClass, TEXT("UMaterialExpressionRuntimeVirtualTextureSample"), &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRuntimeVirtualTextureSample), 2456712242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_1660023505(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
