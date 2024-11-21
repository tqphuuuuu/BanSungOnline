// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolWidgets/Public/ToolWidgetsSlateTypes.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolWidgetsSlateTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
TOOLWIDGETS_API UClass* Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary();
TOOLWIDGETS_API UClass* Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_NoRegister();
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FActionButtonStyle();
UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References

// Begin ScriptStruct FActionButtonStyle
static_assert(std::is_polymorphic<FActionButtonStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FActionButtonStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionButtonStyle;
class UScriptStruct* FActionButtonStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionButtonStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionButtonStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionButtonStyle, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("ActionButtonStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ActionButtonStyle.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FActionButtonStyle>()
{
	return FActionButtonStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActionButtonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SActionButton\n */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an SActionButton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SButton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for our SButton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Spacing between button's border and the content. Default uses ButtonStyle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Spacing between button's border and the content. Default uses ButtonStyle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SComboButton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for our SComboButton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDownArrow_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Whether to show a down arrow for the combo button\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Whether to show a down arrow for the combo button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Spacing between button's border and the content. Default uses ComboButtonStyle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Spacing between button's border and the content. Default uses ComboButtonStyle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalContentAlignment_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Horizontal Content alignment within the button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Horizontal Content alignment within the button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlockStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for the button Text.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the button Text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Icon Brush to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Icon Brush to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Icon Color/Tint, defaults is determined by ActionButtonType.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "Icon Color/Tint, defaults is determined by ActionButtonType." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionButtonType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The type to use for our SActionButton.\n\x09 */" },
		{ "GetOptions", "Engine.ToolSlateWidgetTypesFunctionLibrary.GetActionButtonTypeNames" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "The type to use for our SActionButton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our SButton when an icon is present. ButtonStyle used if not specified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for our SButton when an icon is present. ButtonStyle used if not specified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonContentPadding_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_ButtonContentPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
	static void NewProp_bHasDownArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDownArrow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonContentPadding_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_ComboButtonContentPadding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalContentAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBlockStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconBrush_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_IconBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconColorAndOpacity_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_IconColorAndOpacity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionButtonType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconButtonStyle_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_IconButtonStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionButtonStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 1848157003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonContentPadding_Inner = { "ButtonContentPadding", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonContentPadding = { "ButtonContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, ButtonContentPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonContentPadding_MetaData), NewProp_ButtonContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboButtonStyle_MetaData), NewProp_ComboButtonStyle_MetaData) }; // 225837121
void Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_bHasDownArrow_SetBit(void* Obj)
{
	((FActionButtonStyle*)Obj)->bHasDownArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_bHasDownArrow = { "bHasDownArrow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActionButtonStyle), &Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_bHasDownArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDownArrow_MetaData), NewProp_bHasDownArrow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonContentPadding_Inner = { "ComboButtonContentPadding", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonContentPadding = { "ComboButtonContentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, ComboButtonContentPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboButtonContentPadding_MetaData), NewProp_ComboButtonContentPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_HorizontalContentAlignment = { "HorizontalContentAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, HorizontalContentAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalContentAlignment_MetaData), NewProp_HorizontalContentAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_TextBlockStyle = { "TextBlockStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, TextBlockStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlockStyle_MetaData), NewProp_TextBlockStyle_MetaData) }; // 3854901059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconBrush_Inner = { "IconBrush", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 4269649686
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconBrush = { "IconBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, IconBrush), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconBrush_MetaData), NewProp_IconBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconColorAndOpacity_Inner = { "IconColorAndOpacity", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconColorAndOpacity = { "IconColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, IconColorAndOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconColorAndOpacity_MetaData), NewProp_IconColorAndOpacity_MetaData) }; // 2024315916
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ActionButtonType = { "ActionButtonType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, ActionButtonType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionButtonType_MetaData), NewProp_ActionButtonType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconButtonStyle_Inner = { "IconButtonStyle", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(0, nullptr) }; // 1848157003
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconButtonStyle = { "IconButtonStyle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionButtonStyle, IconButtonStyle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconButtonStyle_MetaData), NewProp_IconButtonStyle_MetaData) }; // 1848157003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionButtonStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonContentPadding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ButtonContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_bHasDownArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonContentPadding_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ComboButtonContentPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_HorizontalContentAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_TextBlockStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconBrush_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconColorAndOpacity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_ActionButtonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconButtonStyle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewProp_IconButtonStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionButtonStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionButtonStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	Z_Construct_UScriptStruct_FSlateWidgetStyle,
	&NewStructOps,
	"ActionButtonStyle",
	Z_Construct_UScriptStruct_FActionButtonStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionButtonStyle_Statics::PropPointers),
	sizeof(FActionButtonStyle),
	alignof(FActionButtonStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionButtonStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionButtonStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActionButtonStyle()
{
	if (!Z_Registration_Info_UScriptStruct_ActionButtonStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionButtonStyle.InnerSingleton, Z_Construct_UScriptStruct_FActionButtonStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActionButtonStyle.InnerSingleton;
}
// End ScriptStruct FActionButtonStyle

// Begin Class UToolSlateWidgetTypesFunctionLibrary Function GetActionButtonTypeNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics
{
	struct ToolSlateWidgetTypesFunctionLibrary_eventGetActionButtonTypeNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolSlateWidgetTypesFunctionLibrary_eventGetActionButtonTypeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary, nullptr, "GetActionButtonTypeNames", nullptr, nullptr, Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::ToolSlateWidgetTypesFunctionLibrary_eventGetActionButtonTypeNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::ToolSlateWidgetTypesFunctionLibrary_eventGetActionButtonTypeNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UToolSlateWidgetTypesFunctionLibrary::execGetActionButtonTypeNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UToolSlateWidgetTypesFunctionLibrary::GetActionButtonTypeNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UToolSlateWidgetTypesFunctionLibrary Function GetActionButtonTypeNames

// Begin Class UToolSlateWidgetTypesFunctionLibrary
void UToolSlateWidgetTypesFunctionLibrary::StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary()
{
#if WITH_EDITOR
	UClass* Class = UToolSlateWidgetTypesFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionButtonTypeNames", &UToolSlateWidgetTypesFunctionLibrary::execGetActionButtonTypeNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolSlateWidgetTypesFunctionLibrary);
UClass* Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_NoRegister()
{
	return UToolSlateWidgetTypesFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolWidgetsSlateTypes.h" },
		{ "ModuleRelativePath", "Public/ToolWidgetsSlateTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolSlateWidgetTypesFunctionLibrary_GetActionButtonTypeNames, "GetActionButtonTypeNames" }, // 3488984642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolSlateWidgetTypesFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::ClassParams = {
	&UToolSlateWidgetTypesFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary.OuterSingleton;
}
template<> TOOLWIDGETS_API UClass* StaticClass<UToolSlateWidgetTypesFunctionLibrary>()
{
	return UToolSlateWidgetTypesFunctionLibrary::StaticClass();
}
UToolSlateWidgetTypesFunctionLibrary::UToolSlateWidgetTypesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolSlateWidgetTypesFunctionLibrary);
UToolSlateWidgetTypesFunctionLibrary::~UToolSlateWidgetTypesFunctionLibrary() {}
// End Class UToolSlateWidgetTypesFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActionButtonStyle::StaticStruct, Z_Construct_UScriptStruct_FActionButtonStyle_Statics::NewStructOps, TEXT("ActionButtonStyle"), &Z_Registration_Info_UScriptStruct_ActionButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionButtonStyle), 3513737145U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary, UToolSlateWidgetTypesFunctionLibrary::StaticClass, TEXT("UToolSlateWidgetTypesFunctionLibrary"), &Z_Registration_Info_UClass_UToolSlateWidgetTypesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolSlateWidgetTypesFunctionLibrary), 894522083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_311291501(TEXT("/Script/ToolWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
