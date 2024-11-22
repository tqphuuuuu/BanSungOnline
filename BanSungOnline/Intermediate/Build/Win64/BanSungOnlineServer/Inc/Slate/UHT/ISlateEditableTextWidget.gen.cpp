// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum EVirtualKeyboardTrigger
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualKeyboardTrigger;
static UEnum* EVirtualKeyboardTrigger_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardTrigger"));
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EVirtualKeyboardTrigger>()
{
	return EVirtualKeyboardTrigger_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
		{ "OnAllFocusEvents.Comment", "/** Display the virtual keyboard when the widget gains keyboard focus by any means. */" },
		{ "OnAllFocusEvents.Name", "EVirtualKeyboardTrigger::OnAllFocusEvents" },
		{ "OnAllFocusEvents.ToolTip", "Display the virtual keyboard when the widget gains keyboard focus by any means." },
		{ "OnFocusByPointer.Comment", "/** Display the virtual keyboard when the widget gains keyboard focus by a pointer action. */" },
		{ "OnFocusByPointer.Name", "EVirtualKeyboardTrigger::OnFocusByPointer" },
		{ "OnFocusByPointer.ToolTip", "Display the virtual keyboard when the widget gains keyboard focus by a pointer action." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVirtualKeyboardTrigger::OnFocusByPointer", (int64)EVirtualKeyboardTrigger::OnFocusByPointer },
		{ "EVirtualKeyboardTrigger::OnAllFocusEvents", (int64)EVirtualKeyboardTrigger::OnAllFocusEvents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EVirtualKeyboardTrigger",
	"EVirtualKeyboardTrigger",
	Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton, Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton;
}
// End Enum EVirtualKeyboardTrigger

// Begin Enum EVirtualKeyboardDismissAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction;
static UEnum* EVirtualKeyboardDismissAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardDismissAction"));
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EVirtualKeyboardDismissAction>()
{
	return EVirtualKeyboardDismissAction_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
		{ "TextChangeOnDismiss.Comment", "/** Sends a text changed message when the virtual keyboard is dismissed by the user. */" },
		{ "TextChangeOnDismiss.Name", "EVirtualKeyboardDismissAction::TextChangeOnDismiss" },
		{ "TextChangeOnDismiss.ToolTip", "Sends a text changed message when the virtual keyboard is dismissed by the user." },
		{ "TextCommitOnAccept.Comment", "/** Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard. */" },
		{ "TextCommitOnAccept.Name", "EVirtualKeyboardDismissAction::TextCommitOnAccept" },
		{ "TextCommitOnAccept.ToolTip", "Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard." },
		{ "TextCommitOnDismiss.Comment", "/** Send a text commit message when the virtual keyboard is dismissed by the user. */" },
		{ "TextCommitOnDismiss.Name", "EVirtualKeyboardDismissAction::TextCommitOnDismiss" },
		{ "TextCommitOnDismiss.ToolTip", "Send a text commit message when the virtual keyboard is dismissed by the user." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVirtualKeyboardDismissAction::TextChangeOnDismiss", (int64)EVirtualKeyboardDismissAction::TextChangeOnDismiss },
		{ "EVirtualKeyboardDismissAction::TextCommitOnAccept", (int64)EVirtualKeyboardDismissAction::TextCommitOnAccept },
		{ "EVirtualKeyboardDismissAction::TextCommitOnDismiss", (int64)EVirtualKeyboardDismissAction::TextCommitOnDismiss },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EVirtualKeyboardDismissAction",
	"EVirtualKeyboardDismissAction",
	Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton, Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton;
}
// End Enum EVirtualKeyboardDismissAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVirtualKeyboardTrigger_StaticEnum, TEXT("EVirtualKeyboardTrigger"), &Z_Registration_Info_UEnum_EVirtualKeyboardTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 393615267U) },
		{ EVirtualKeyboardDismissAction_StaticEnum, TEXT("EVirtualKeyboardDismissAction"), &Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069404810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h_201486324(TEXT("/Script/Slate"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS