// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlock() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UTextBlock();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UTextBlock Function GetDynamicFontMaterial
struct Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics
{
	struct TextBlock_eventGetDynamicFontMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicFontMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicFontMaterial", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::TextBlock_eventGetDynamicFontMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::TextBlock_eventGetDynamicFontMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execGetDynamicFontMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicFontMaterial();
	P_NATIVE_END;
}
// End Class UTextBlock Function GetDynamicFontMaterial

// Begin Class UTextBlock Function GetDynamicOutlineMaterial
struct Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics
{
	struct TextBlock_eventGetDynamicOutlineMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicOutlineMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicOutlineMaterial", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::TextBlock_eventGetDynamicOutlineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::TextBlock_eventGetDynamicOutlineMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execGetDynamicOutlineMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicOutlineMaterial();
	P_NATIVE_END;
}
// End Class UTextBlock Function GetDynamicOutlineMaterial

// Begin Class UTextBlock Function GetText
struct Z_Construct_UFunction_UTextBlock_GetText_Statics
{
	struct TextBlock_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** \n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_GetText_Statics::TextBlock_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_GetText_Statics::TextBlock_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UTextBlock Function GetText

// Begin Class UTextBlock Function SetAutoWrapText
struct Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics
{
	struct TextBlock_eventSetAutoWrapText_Parms
	{
		bool InAutoTextWrap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the auto wrap for this text block.\n\x09 *\n\x09 * @param InAutoTextWrap to turn wrap on or off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the auto wrap for this text block.\n\n@param InAutoTextWrap to turn wrap on or off." },
	};
#endif // WITH_METADATA
	static void NewProp_InAutoTextWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InAutoTextWrap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit(void* Obj)
{
	((TextBlock_eventSetAutoWrapText_Parms*)Obj)->InAutoTextWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap = { "InAutoTextWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TextBlock_eventSetAutoWrapText_Parms), &Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetAutoWrapText", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::TextBlock_eventSetAutoWrapText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::TextBlock_eventSetAutoWrapText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetAutoWrapText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetAutoWrapText)
{
	P_GET_UBOOL(Z_Param_InAutoTextWrap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetAutoWrapText

// Begin Class UTextBlock Function SetColorAndOpacity
struct Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics
{
	struct TextBlock_eventSetColorAndOpacity_Parms
	{
		FSlateColor InColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the text in this text block\n\x09 *\n\x09 * @param InColorAndOpacity\x09\x09The new text color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity             The new text color and opacity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::TextBlock_eventSetColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::TextBlock_eventSetColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetColorAndOpacity)
{
	P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetColorAndOpacity

// Begin Class UTextBlock Function SetFont
struct Z_Construct_UFunction_UTextBlock_SetFont_Statics
{
	struct TextBlock_eventSetFont_Parms
	{
		FSlateFontInfo InFontInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the font info for this text block\n\x09 * \n\x09 * @param InFontInfo The new font info\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the font info for this text block\n\n@param InFontInfo The new font info" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(0, nullptr) }; // 1633227880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetFont", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetFont_Statics::TextBlock_eventSetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetFont_Statics::TextBlock_eventSetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetFont)
{
	P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFont(Z_Param_InFontInfo);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetFont

// Begin Class UTextBlock Function SetFontMaterial
struct Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics
{
	struct TextBlock_eventSetFontMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetFontMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetFontMaterial", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::TextBlock_eventSetFontMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::TextBlock_eventSetFontMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetFontMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetFontMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetFontMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetFontMaterial

// Begin Class UTextBlock Function SetFontOutlineMaterial
struct Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics
{
	struct TextBlock_eventSetFontOutlineMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetFontOutlineMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetFontOutlineMaterial", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::TextBlock_eventSetFontOutlineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::TextBlock_eventSetFontOutlineMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetFontOutlineMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFontOutlineMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetFontOutlineMaterial

// Begin Class UTextBlock Function SetMinDesiredWidth
struct Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics
{
	struct TextBlock_eventSetMinDesiredWidth_Parms
	{
		float InMinDesiredWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 *  Set the minimum desired width for this text block\n\x09 *\n\x09 *  @param InMinDesiredWidth new minimum desired width\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the minimum desired width for this text block\n\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetMinDesiredWidth", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::TextBlock_eventSetMinDesiredWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::TextBlock_eventSetMinDesiredWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetMinDesiredWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetMinDesiredWidth

// Begin Class UTextBlock Function SetOpacity
struct Z_Construct_UFunction_UTextBlock_SetOpacity_Statics
{
	struct TextBlock_eventSetOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the opacity of the text in this text block\n\x09*\n\x09* @param InOpacity\x09\x09The new text opacity\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetOpacity", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::TextBlock_eventSetOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::TextBlock_eventSetOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetOpacity

// Begin Class UTextBlock Function SetShadowColorAndOpacity
struct Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics
{
	struct TextBlock_eventSetShadowColorAndOpacity_Parms
	{
		FLinearColor InShadowColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the text drop shadow\n\x09 * Note: if opacity is zero no shadow will be drawn\n\x09 *\n\x09 * @param InShadowColorAndOpacity\x09\x09The new drop shadow color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text drop shadow\nNote: if opacity is zero no shadow will be drawn\n\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity = { "InShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::TextBlock_eventSetShadowColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::TextBlock_eventSetShadowColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetShadowColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetShadowColorAndOpacity

// Begin Class UTextBlock Function SetShadowOffset
struct Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics
{
	struct TextBlock_eventSetShadowOffset_Parms
	{
		FVector2D InShadowOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the offset that the text drop shadow should be drawn at\n\x09 *\n\x09 * @param InShadowOffset\x09\x09The new offset\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the offset that the text drop shadow should be drawn at\n\n@param InShadowOffset                The new offset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InShadowOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset = { "InShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowOffset", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::TextBlock_eventSetShadowOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::TextBlock_eventSetShadowOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetShadowOffset)
{
	P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowOffset(Z_Param_InShadowOffset);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetShadowOffset

// Begin Class UTextBlock Function SetStrikeBrush
struct Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics
{
	struct TextBlock_eventSetStrikeBrush_Parms
	{
		FSlateBrush InStrikeBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the strike brush for this text block\n\x09 *\n\x09 * @param InStrikeBrush The new brush to use to strike through text\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the strike brush for this text block\n\n@param InStrikeBrush The new brush to use to strike through text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStrikeBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush = { "InStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetStrikeBrush_Parms, InStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetStrikeBrush", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::TextBlock_eventSetStrikeBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::TextBlock_eventSetStrikeBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetStrikeBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetStrikeBrush)
{
	P_GET_STRUCT(FSlateBrush,Z_Param_InStrikeBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStrikeBrush(Z_Param_InStrikeBrush);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetStrikeBrush

// Begin Class UTextBlock Function SetText
struct Z_Construct_UFunction_UTextBlock_SetText_Statics
{
	struct TextBlock_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetText_Parms, InText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetText_Statics::TextBlock_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetText_Statics::TextBlock_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_InText);
	P_NATIVE_END;
}
// End Class UTextBlock Function SetText

// Begin Class UTextBlock Function SetTextOverflowPolicy
struct Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics
{
	struct TextBlock_eventSetTextOverflowPolicy_Parms
	{
		ETextOverflowPolicy InOverflowPolicy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the text overflow policy for this text block.\n\x09 *\n\x09 * @param InOverflowPolicy the new text overflow policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the text overflow policy for this text block.\n\n@param InOverflowPolicy the new text overflow policy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOverflowPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy = { "InOverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetTextOverflowPolicy_Parms, InOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(0, nullptr) }; // 2954379844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetTextOverflowPolicy", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::TextBlock_eventSetTextOverflowPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::TextBlock_eventSetTextOverflowPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetTextOverflowPolicy)
{
	P_GET_ENUM(ETextOverflowPolicy,Z_Param_InOverflowPolicy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextOverflowPolicy(ETextOverflowPolicy(Z_Param_InOverflowPolicy));
	P_NATIVE_END;
}
// End Class UTextBlock Function SetTextOverflowPolicy

// Begin Class UTextBlock Function SetTextTransformPolicy
struct Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics
{
	struct TextBlock_eventSetTextTransformPolicy_Parms
	{
		ETextTransformPolicy InTransformPolicy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the text transformation policy for this text block.\n\x09 *\n\x09 * @param InTransformPolicy the new text transformation policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the text transformation policy for this text block.\n\n@param InTransformPolicy the new text transformation policy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InTransformPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InTransformPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy = { "InTransformPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBlock_eventSetTextTransformPolicy_Parms, InTransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(0, nullptr) }; // 1188934248
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetTextTransformPolicy", nullptr, nullptr, Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::TextBlock_eventSetTextTransformPolicy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::TextBlock_eventSetTextTransformPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBlock::execSetTextTransformPolicy)
{
	P_GET_ENUM(ETextTransformPolicy,Z_Param_InTransformPolicy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextTransformPolicy(ETextTransformPolicy(Z_Param_InTransformPolicy));
	P_NATIVE_END;
}
// End Class UTextBlock Function SetTextTransformPolicy

// Begin Class UTextBlock
void UTextBlock::GetText_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetText();
}
void UTextBlock::SetText_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetText(Value);
}
void UTextBlock::GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FSlateColor& Result = *(FSlateColor*)OutValue;
	Result = (FSlateColor)Obj->GetColorAndOpacity();
}
void UTextBlock::SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FSlateColor& Value = *(FSlateColor*)InValue;
	Obj->SetColorAndOpacity(Value);
}
void UTextBlock::GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinDesiredWidth();
}
void UTextBlock::SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinDesiredWidth(Value);
}
void UTextBlock::GetFont_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FSlateFontInfo& Result = *(FSlateFontInfo*)OutValue;
	Result = (FSlateFontInfo)Obj->GetFont();
}
void UTextBlock::SetFont_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FSlateFontInfo& Value = *(FSlateFontInfo*)InValue;
	Obj->SetFont(Value);
}
void UTextBlock::GetStrikeBrush_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetStrikeBrush();
}
void UTextBlock::SetStrikeBrush_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetStrikeBrush(Value);
}
void UTextBlock::GetShadowOffset_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetShadowOffset();
}
void UTextBlock::SetShadowOffset_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetShadowOffset(Value);
}
void UTextBlock::GetShadowColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetShadowColorAndOpacity();
}
void UTextBlock::SetShadowColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetShadowColorAndOpacity(Value);
}
void UTextBlock::GetTextTransformPolicy_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	ETextTransformPolicy& Result = *(ETextTransformPolicy*)OutValue;
	Result = (ETextTransformPolicy)Obj->GetTextTransformPolicy();
}
void UTextBlock::SetTextTransformPolicy_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	ETextTransformPolicy& Value = *(ETextTransformPolicy*)InValue;
	Obj->SetTextTransformPolicy(Value);
}
void UTextBlock::GetTextOverflowPolicy_WrapperImpl(const void* Object, void* OutValue)
{
	const UTextBlock* Obj = (const UTextBlock*)Object;
	ETextOverflowPolicy& Result = *(ETextOverflowPolicy*)OutValue;
	Result = (ETextOverflowPolicy)Obj->GetTextOverflowPolicy();
}
void UTextBlock::SetTextOverflowPolicy_WrapperImpl(void* Object, const void* InValue)
{
	UTextBlock* Obj = (UTextBlock*)Object;
	ETextOverflowPolicy& Value = *(ETextOverflowPolicy*)InValue;
	Obj->SetTextOverflowPolicy(Value);
}
void UTextBlock::StaticRegisterNativesUTextBlock()
{
	UClass* Class = UTextBlock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDynamicFontMaterial", &UTextBlock::execGetDynamicFontMaterial },
		{ "GetDynamicOutlineMaterial", &UTextBlock::execGetDynamicOutlineMaterial },
		{ "GetText", &UTextBlock::execGetText },
		{ "SetAutoWrapText", &UTextBlock::execSetAutoWrapText },
		{ "SetColorAndOpacity", &UTextBlock::execSetColorAndOpacity },
		{ "SetFont", &UTextBlock::execSetFont },
		{ "SetFontMaterial", &UTextBlock::execSetFontMaterial },
		{ "SetFontOutlineMaterial", &UTextBlock::execSetFontOutlineMaterial },
		{ "SetMinDesiredWidth", &UTextBlock::execSetMinDesiredWidth },
		{ "SetOpacity", &UTextBlock::execSetOpacity },
		{ "SetShadowColorAndOpacity", &UTextBlock::execSetShadowColorAndOpacity },
		{ "SetShadowOffset", &UTextBlock::execSetShadowOffset },
		{ "SetStrikeBrush", &UTextBlock::execSetStrikeBrush },
		{ "SetText", &UTextBlock::execSetText },
		{ "SetTextOverflowPolicy", &UTextBlock::execSetTextOverflowPolicy },
		{ "SetTextTransformPolicy", &UTextBlock::execSetTextTransformPolicy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextBlock);
UClass* Z_Construct_UClass_UTextBlock_NoRegister()
{
	return UTextBlock::StaticClass();
}
struct Z_Construct_UClass_UTextBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple static text widget.\n *\n * * No Children\n * * Text\n */" },
		{ "DisplayName", "Text" },
		{ "IncludePath", "Components/TextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A simple static text widget.\n\n* No Children\n* Text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BlueprintGetter", "GetText" },
		{ "BlueprintSetter", "SetText" },
		{ "Category", "Content" },
		{ "Comment", "/** The text to display */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of the text */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMinDesiredWidth" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired size for the text */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "BlueprintSetter", "SetFont" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The font to render the text with */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The font to render the text with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[] = {
		{ "BlueprintSetter", "SetStrikeBrush" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush to strike through text with */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The brush to strike through text with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
		{ "BlueprintSetter", "SetShadowOffset" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The direction the shadow is cast */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The direction the shadow is cast" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetShadowColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of the shadow */" },
		{ "DisplayName", "Shadow Color" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the shadow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ShadowColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ShadowColorAndOpacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapWithInvalidationPanel_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, it will automatically wrap this text widget with an invalidation panel */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If true, it will automatically wrap this text widget with an invalidation panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextTransformPolicy_MetaData[] = {
		{ "BlueprintSetter", "SetTextTransformPolicy" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The text transformation policy to apply to this text block. */" },
		{ "DisplayName", "Transform Policy" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The text transformation policy to apply to this text block." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextOverflowPolicy_MetaData[] = {
		{ "BlueprintSetter", "SetTextOverflowPolicy" },
		{ "Category", "Clipping" },
		{ "Comment", "/** Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget */" },
		{ "DisplayName", "Overflow Policy" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleTextMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * If this is enabled, text shaping, wrapping, justification are disabled in favor of much faster text layout and measurement.\n\x09 * This feature is only suitable for \"simple\" text (ie, text containing only numbers or basic ASCII) as it disables the complex text rendering support required for certain languages (such as Arabic and Thai).\n\x09 * It is significantly faster for text that can take advantage of it (particularly if that text changes frequently), but shouldn't be used for localized user-facing text.\n\x09 */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If this is enabled, text shaping, wrapping, justification are disabled in favor of much faster text layout and measurement.\nThis feature is only suitable for \"simple\" text (ie, text containing only numbers or basic ASCII) as it disables the complex text rendering support required for certain languages (such as Arabic and Thai).\nIt is significantly faster for text that can take advantage of it (particularly if that text changes frequently), but shouldn't be used for localized user-facing text." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ShadowColorAndOpacityDelegate;
	static void NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapWithInvalidationPanel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextTransformPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextTransformPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextOverflowPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextOverflowPolicy;
	static void NewProp_bSimpleTextMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleTextMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial, "GetDynamicFontMaterial" }, // 1579315475
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial, "GetDynamicOutlineMaterial" }, // 2005566090
		{ &Z_Construct_UFunction_UTextBlock_GetText, "GetText" }, // 4079371058
		{ &Z_Construct_UFunction_UTextBlock_SetAutoWrapText, "SetAutoWrapText" }, // 2173750166
		{ &Z_Construct_UFunction_UTextBlock_SetColorAndOpacity, "SetColorAndOpacity" }, // 1273850807
		{ &Z_Construct_UFunction_UTextBlock_SetFont, "SetFont" }, // 861092160
		{ &Z_Construct_UFunction_UTextBlock_SetFontMaterial, "SetFontMaterial" }, // 3106559181
		{ &Z_Construct_UFunction_UTextBlock_SetFontOutlineMaterial, "SetFontOutlineMaterial" }, // 3016804669
		{ &Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 2478900007
		{ &Z_Construct_UFunction_UTextBlock_SetOpacity, "SetOpacity" }, // 2941555620
		{ &Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity, "SetShadowColorAndOpacity" }, // 2079534392
		{ &Z_Construct_UFunction_UTextBlock_SetShadowOffset, "SetShadowOffset" }, // 426929642
		{ &Z_Construct_UFunction_UTextBlock_SetStrikeBrush, "SetStrikeBrush" }, // 2397993109
		{ &Z_Construct_UFunction_UTextBlock_SetText, "SetText" }, // 3809097475
		{ &Z_Construct_UFunction_UTextBlock_SetTextOverflowPolicy, "SetTextOverflowPolicy" }, // 3388916330
		{ &Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy, "SetTextTransformPolicy" }, // 1007731651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetText_WrapperImpl, &UTextBlock::GetText_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextDelegate_MetaData), NewProp_TextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetColorAndOpacity_WrapperImpl, &UTextBlock::GetColorAndOpacity_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacityDelegate_MetaData), NewProp_ColorAndOpacityDelegate_MetaData) }; // 3342372159
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetMinDesiredWidth_WrapperImpl, &UTextBlock::GetMinDesiredWidth_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, MinDesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDesiredWidth_MetaData), NewProp_MinDesiredWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetFont_WrapperImpl, &UTextBlock::GetFont_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 1633227880
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetStrikeBrush_WrapperImpl, &UTextBlock::GetStrikeBrush_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrikeBrush_MetaData), NewProp_StrikeBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetShadowOffset_WrapperImpl, &UTextBlock::GetShadowOffset_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowOffset_MetaData), NewProp_ShadowOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetShadowColorAndOpacity_WrapperImpl, &UTextBlock::GetShadowColorAndOpacity_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData), NewProp_ShadowColorAndOpacity_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate = { "ShadowColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColorAndOpacityDelegate_MetaData), NewProp_ShadowColorAndOpacityDelegate_MetaData) }; // 3367946829
void Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj)
{
	((UTextBlock*)Obj)->bWrapWithInvalidationPanel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel = { "bWrapWithInvalidationPanel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapWithInvalidationPanel_MetaData), NewProp_bWrapWithInvalidationPanel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy = { "TextTransformPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetTextTransformPolicy_WrapperImpl, &UTextBlock::GetTextTransformPolicy_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, TextTransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextTransformPolicy_MetaData), NewProp_TextTransformPolicy_MetaData) }; // 1188934248
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextOverflowPolicy = { "TextOverflowPolicy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UTextBlock::SetTextOverflowPolicy_WrapperImpl, &UTextBlock::GetTextOverflowPolicy_WrapperImpl, 1, STRUCT_OFFSET(UTextBlock, TextOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextOverflowPolicy_MetaData), NewProp_TextOverflowPolicy_MetaData) }; // 2954379844
void Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit(void* Obj)
{
	((UTextBlock*)Obj)->bSimpleTextMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode = { "bSimpleTextMode", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimpleTextMode_MetaData), NewProp_bSimpleTextMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextOverflowPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextOverflowPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextBlock_Statics::ClassParams = {
	&UTextBlock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTextBlock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextBlock()
{
	if (!Z_Registration_Info_UClass_UTextBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextBlock.OuterSingleton, Z_Construct_UClass_UTextBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextBlock.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UTextBlock>()
{
	return UTextBlock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlock);
UTextBlock::~UTextBlock() {}
// End Class UTextBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextBlock, UTextBlock::StaticClass, TEXT("UTextBlock"), &Z_Registration_Info_UClass_UTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextBlock), 165479878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_1138514829(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
