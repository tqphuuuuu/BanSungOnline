// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/FieldNotification/Public/FieldNotificationId.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
FIELDNOTIFICATION_API UFunction* Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature();
FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFlowDirectionPreference();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVisual();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateAccessibleBehavior();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetDesignFlags();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Enum EWidgetDesignFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetDesignFlags;
static UEnum* EWidgetDesignFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWidgetDesignFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWidgetDesignFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetDesignFlags, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetDesignFlags"));
	}
	return Z_Registration_Info_UEnum_EWidgetDesignFlags.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<EWidgetDesignFlags>()
{
	return EWidgetDesignFlags_StaticEnum();
}
struct Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Flags used by the widget designer.\n */" },
		{ "Designing.Name", "EWidgetDesignFlags::Designing" },
		{ "ExecutePreConstruct.Name", "EWidgetDesignFlags::ExecutePreConstruct" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "None.Name", "EWidgetDesignFlags::None" },
		{ "Previewing.Name", "EWidgetDesignFlags::Previewing" },
		{ "ShowOutline.Name", "EWidgetDesignFlags::ShowOutline" },
		{ "ToolTip", "Flags used by the widget designer." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWidgetDesignFlags::None", (int64)EWidgetDesignFlags::None },
		{ "EWidgetDesignFlags::Designing", (int64)EWidgetDesignFlags::Designing },
		{ "EWidgetDesignFlags::ShowOutline", (int64)EWidgetDesignFlags::ShowOutline },
		{ "EWidgetDesignFlags::ExecutePreConstruct", (int64)EWidgetDesignFlags::ExecutePreConstruct },
		{ "EWidgetDesignFlags::Previewing", (int64)EWidgetDesignFlags::Previewing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"EWidgetDesignFlags",
	"EWidgetDesignFlags",
	Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_EWidgetDesignFlags()
{
	if (!Z_Registration_Info_UEnum_EWidgetDesignFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetDesignFlags.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetDesignFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWidgetDesignFlags.InnerSingleton;
}
// End Enum EWidgetDesignFlags

// Begin Delegate FGetBool
struct Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics
{
	struct Widget_eventGetBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Common Bindings - If you add any new common binding, you must provide a UPropertyBinding for it.\n//                   all primitive binding in UMG goes through native binding evaluators to prevent\n//                   thunking through the VM.\n" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Common Bindings - If you add any new common binding, you must provide a UPropertyBinding for it.\n                  all primitive binding in UMG goes through native binding evaluators to prevent\n                  thunking through the VM." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventGetBool_Parms), &Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetBool__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::Widget_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::Widget_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool UWidget::FGetBool_DelegateWrapper(const FScriptDelegate& GetBool)
{
	struct Widget_eventGetBool_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetBool_Parms()
			: ReturnValue(false)
		{
		}
	};
	Widget_eventGetBool_Parms Parms;
	GetBool.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
// End Delegate FGetBool

// Begin Delegate FGetFloat
struct Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics
{
	struct Widget_eventGetFloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetFloat__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::Widget_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::Widget_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
float UWidget::FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat)
{
	struct Widget_eventGetFloat_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetFloat_Parms()
			: ReturnValue(0)
		{
		}
	};
	Widget_eventGetFloat_Parms Parms;
	GetFloat.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetFloat

// Begin Delegate FGetInt32
struct Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics
{
	struct Widget_eventGetInt32_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetInt32__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::Widget_eventGetInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::Widget_eventGetInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
int32 UWidget::FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32)
{
	struct Widget_eventGetInt32_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetInt32_Parms()
			: ReturnValue(0)
		{
		}
	};
	Widget_eventGetInt32_Parms Parms;
	GetInt32.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetInt32

// Begin Delegate FGetText
struct Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics
{
	struct Widget_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetText__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::Widget_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::Widget_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FText UWidget::FGetText_DelegateWrapper(const FScriptDelegate& GetText)
{
	struct Widget_eventGetText_Parms
	{
		FText ReturnValue;
	};
	Widget_eventGetText_Parms Parms;
	GetText.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetText

// Begin Delegate FGetSlateColor
struct Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics
{
	struct Widget_eventGetSlateColor_Parms
	{
		FSlateColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetSlateColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetSlateColor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::Widget_eventGetSlateColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::Widget_eventGetSlateColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FSlateColor UWidget::FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor)
{
	struct Widget_eventGetSlateColor_Parms
	{
		FSlateColor ReturnValue;
	};
	Widget_eventGetSlateColor_Parms Parms;
	GetSlateColor.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetSlateColor

// Begin Delegate FGetLinearColor
struct Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics
{
	struct Widget_eventGetLinearColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetLinearColor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::Widget_eventGetLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::Widget_eventGetLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FLinearColor UWidget::FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor)
{
	struct Widget_eventGetLinearColor_Parms
	{
		FLinearColor ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetLinearColor_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	Widget_eventGetLinearColor_Parms Parms;
	GetLinearColor.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetLinearColor

// Begin Delegate FGetSlateBrush
struct Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics
{
	struct Widget_eventGetSlateBrush_Parms
	{
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetSlateBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetSlateBrush__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::Widget_eventGetSlateBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::Widget_eventGetSlateBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FSlateBrush UWidget::FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush)
{
	struct Widget_eventGetSlateBrush_Parms
	{
		FSlateBrush ReturnValue;
	};
	Widget_eventGetSlateBrush_Parms Parms;
	GetSlateBrush.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetSlateBrush

// Begin Delegate FGetSlateVisibility
struct Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics
{
	struct Widget_eventGetSlateVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetSlateVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetSlateVisibility__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::Widget_eventGetSlateVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::Widget_eventGetSlateVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
ESlateVisibility UWidget::FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility)
{
	struct Widget_eventGetSlateVisibility_Parms
	{
		ESlateVisibility ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetSlateVisibility_Parms()
			: ReturnValue((ESlateVisibility)0)
		{
		}
	};
	Widget_eventGetSlateVisibility_Parms Parms;
	GetSlateVisibility.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetSlateVisibility

// Begin Delegate FGetMouseCursor
struct Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics
{
	struct Widget_eventGetMouseCursor_Parms
	{
		TEnumAsByte<EMouseCursor::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetMouseCursor_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(0, nullptr) }; // 2895712077
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetMouseCursor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::Widget_eventGetMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::Widget_eventGetMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
EMouseCursor::Type UWidget::FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor)
{
	struct Widget_eventGetMouseCursor_Parms
	{
		TEnumAsByte<EMouseCursor::Type> ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetMouseCursor_Parms()
			: ReturnValue(0)
		{
		}
	};
	Widget_eventGetMouseCursor_Parms Parms;
	GetMouseCursor.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetMouseCursor

// Begin Delegate FGetCheckBoxState
struct Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics
{
	struct Widget_eventGetCheckBoxState_Parms
	{
		ECheckBoxState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetCheckBoxState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(0, nullptr) }; // 274390384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetCheckBoxState__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::Widget_eventGetCheckBoxState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::Widget_eventGetCheckBoxState_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
ECheckBoxState UWidget::FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState)
{
	struct Widget_eventGetCheckBoxState_Parms
	{
		ECheckBoxState ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetCheckBoxState_Parms()
			: ReturnValue((ECheckBoxState)0)
		{
		}
	};
	Widget_eventGetCheckBoxState_Parms Parms;
	GetCheckBoxState.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetCheckBoxState

// Begin Delegate FGetWidget
struct Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics
{
	struct Widget_eventGetWidget_Parms
	{
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetWidget__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::Widget_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::Widget_eventGetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
UWidget* UWidget::FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget)
{
	struct Widget_eventGetWidget_Parms
	{
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGetWidget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	Widget_eventGetWidget_Parms Parms;
	GetWidget.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetWidget

// Begin Delegate FGenerateWidgetForString
struct Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics
{
	struct Widget_eventGenerateWidgetForString_Parms
	{
		FString Item;
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGenerateWidgetForString_Parms, Item), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGenerateWidgetForString_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GenerateWidgetForString__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::Widget_eventGenerateWidgetForString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::Widget_eventGenerateWidgetForString_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
UWidget* UWidget::FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item)
{
	struct Widget_eventGenerateWidgetForString_Parms
	{
		FString Item;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGenerateWidgetForString_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	Widget_eventGenerateWidgetForString_Parms Parms;
	Parms.Item=Item;
	GenerateWidgetForString.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGenerateWidgetForString

// Begin Delegate FGenerateWidgetForObject
struct Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics
{
	struct Widget_eventGenerateWidgetForObject_Parms
	{
		UObject* Item;
		UWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGenerateWidgetForObject_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGenerateWidgetForObject_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GenerateWidgetForObject__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::Widget_eventGenerateWidgetForObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::Widget_eventGenerateWidgetForObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
UWidget* UWidget::FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item)
{
	struct Widget_eventGenerateWidgetForObject_Parms
	{
		UObject* Item;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		Widget_eventGenerateWidgetForObject_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	Widget_eventGenerateWidgetForObject_Parms Parms;
	Parms.Item=Item;
	GenerateWidgetForObject.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGenerateWidgetForObject

// Begin Delegate FOnReply
struct Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics
{
	struct Widget_eventOnReply_Parms
	{
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Events" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventOnReply_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "OnReply__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::Widget_eventOnReply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::Widget_eventOnReply_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FEventReply UWidget::FOnReply_DelegateWrapper(const FScriptDelegate& OnReply)
{
	struct Widget_eventOnReply_Parms
	{
		FEventReply ReturnValue;
	};
	Widget_eventOnReply_Parms Parms;
	OnReply.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FOnReply

// Begin Delegate FOnPointerEvent
struct Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics
{
	struct Widget_eventOnPointerEvent_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventOnPointerEvent_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(0, nullptr) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventOnPointerEvent_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventOnPointerEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_MyGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_MouseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "OnPointerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::Widget_eventOnPointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::Widget_eventOnPointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FEventReply UWidget::FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, FPointerEvent const& MouseEvent)
{
	struct Widget_eventOnPointerEvent_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	Widget_eventOnPointerEvent_Parms Parms;
	Parms.MyGeometry=MyGeometry;
	Parms.MouseEvent=MouseEvent;
	OnPointerEvent.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FOnPointerEvent

// Begin Class UWidget Function ForceLayoutPrepass
struct Z_Construct_UFunction_UWidget_ForceLayoutPrepass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Forces a pre-pass.  A pre-pass caches the desired size of the widget hierarchy owned by this widget.  \n\x09 * One pre-pass already happens for every widget before Tick occurs.  You only need to perform another \n\x09 * pre-pass if you are adding child widgets this frame and want them to immediately be visible this frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Forces a pre-pass.  A pre-pass caches the desired size of the widget hierarchy owned by this widget.\nOne pre-pass already happens for every widget before Tick occurs.  You only need to perform another\npre-pass if you are adding child widgets this frame and want them to immediately be visible this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_ForceLayoutPrepass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "ForceLayoutPrepass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ForceLayoutPrepass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_ForceLayoutPrepass_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_ForceLayoutPrepass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_ForceLayoutPrepass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execForceLayoutPrepass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceLayoutPrepass();
	P_NATIVE_END;
}
// End Class UWidget Function ForceLayoutPrepass

// Begin Class UWidget Function ForceVolatile
struct Z_Construct_UFunction_UWidget_ForceVolatile_Statics
{
	struct Widget_eventForceVolatile_Parms
	{
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the forced volatility of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the forced volatility of the widget." },
	};
#endif // WITH_METADATA
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_ForceVolatile_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((Widget_eventForceVolatile_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_ForceVolatile_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventForceVolatile_Parms), &Z_Construct_UFunction_UWidget_ForceVolatile_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_ForceVolatile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_ForceVolatile_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ForceVolatile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_ForceVolatile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "ForceVolatile", nullptr, nullptr, Z_Construct_UFunction_UWidget_ForceVolatile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ForceVolatile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_ForceVolatile_Statics::Widget_eventForceVolatile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ForceVolatile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_ForceVolatile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_ForceVolatile_Statics::Widget_eventForceVolatile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_ForceVolatile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_ForceVolatile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execForceVolatile)
{
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceVolatile(Z_Param_bForce);
	P_NATIVE_END;
}
// End Class UWidget Function ForceVolatile

// Begin Class UWidget Function GetAccessibleSummaryText
struct Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics
{
	struct Widget_eventGetAccessibleSummaryText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the accessible summary text from the underlying Slate accessible widget.\n\x09 * @return The accessible summary text of the underlying Slate accessible widget. Returns an empty text if\n\x09  * accessibility is dsabled or the underlying accessible widget is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the accessible summary text from the underlying Slate accessible widget.\n@return The accessible summary text of the underlying Slate accessible widget. Returns an empty text if\naccessibility is dsabled or the underlying accessible widget is invalid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetAccessibleSummaryText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetAccessibleSummaryText", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::Widget_eventGetAccessibleSummaryText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::Widget_eventGetAccessibleSummaryText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetAccessibleSummaryText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetAccessibleSummaryText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetAccessibleSummaryText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetAccessibleSummaryText();
	P_NATIVE_END;
}
// End Class UWidget Function GetAccessibleSummaryText

// Begin Class UWidget Function GetAccessibleText
struct Z_Construct_UFunction_UWidget_GetAccessibleText_Statics
{
	struct Widget_eventGetAccessibleText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the accessible text from the underlying Slate accessible widget\n\x09 * @return The accessible text of the underlying Slate accessible widget. Returns an empty text if\n\x09  * accessibility is dsabled or the underlying accessible widget is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the accessible text from the underlying Slate accessible widget\n@return The accessible text of the underlying Slate accessible widget. Returns an empty text if\naccessibility is dsabled or the underlying accessible widget is invalid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetAccessibleText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetAccessibleText", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::Widget_eventGetAccessibleText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::Widget_eventGetAccessibleText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetAccessibleText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetAccessibleText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetAccessibleText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetAccessibleText();
	P_NATIVE_END;
}
// End Class UWidget Function GetAccessibleText

// Begin Class UWidget Function GetCachedGeometry
struct Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics
{
	struct Widget_eventGetCachedGeometry_Parms
	{
		FGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the last geometry used to Tick the widget.  This data may not exist yet if this call happens prior to \n\x09 * the widget having been ticked/painted, or it may be out of date, or a frame behind.\n\x09 *\n\x09 * We recommend not to use this data unless there's no other way to solve your problem.  Normally in Slate we\n\x09 * try and handle these issues by making a dependent widget part of the hierarchy, as to avoid frame behind\n\x09 * or what are referred to as hysteresis problems, both caused by depending on geometry from the previous frame\n\x09 * being used to advise how to layout a dependent object the current frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the last geometry used to Tick the widget.  This data may not exist yet if this call happens prior to\nthe widget having been ticked/painted, or it may be out of date, or a frame behind.\n\nWe recommend not to use this data unless there's no other way to solve your problem.  Normally in Slate we\ntry and handle these issues by making a dependent widget part of the hierarchy, as to avoid frame behind\nor what are referred to as hysteresis problems, both caused by depending on geometry from the previous frame\nbeing used to advise how to layout a dependent object the current frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetCachedGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3532897347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetCachedGeometry", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::Widget_eventGetCachedGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::Widget_eventGetCachedGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetCachedGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetCachedGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetCachedGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGeometry*)Z_Param__Result=P_THIS->GetCachedGeometry();
	P_NATIVE_END;
}
// End Class UWidget Function GetCachedGeometry

// Begin Class UWidget Function GetClipping
struct Z_Construct_UFunction_UWidget_GetClipping_Statics
{
	struct Widget_eventGetClipping_Parms
	{
		EWidgetClipping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the clipping state of this widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the clipping state of this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_GetClipping_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_GetClipping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetClipping_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EWidgetClipping, METADATA_PARAMS(0, nullptr) }; // 950503845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetClipping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetClipping_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetClipping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetClipping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetClipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetClipping", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetClipping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetClipping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetClipping_Statics::Widget_eventGetClipping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetClipping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetClipping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetClipping_Statics::Widget_eventGetClipping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetClipping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetClipping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetClipping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWidgetClipping*)Z_Param__Result=P_THIS->GetClipping();
	P_NATIVE_END;
}
// End Class UWidget Function GetClipping

// Begin Class UWidget Function GetDesiredSize
struct Z_Construct_UFunction_UWidget_GetDesiredSize_Statics
{
	struct Widget_eventGetDesiredSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the widgets desired size.\n\x09 * NOTE: The underlying Slate widget must exist and be valid, also at least one pre-pass must\n\x09 *       have occurred before this value will be of any use.\n\x09 * \n\x09 * @return The widget's desired size\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the widgets desired size.\nNOTE: The underlying Slate widget must exist and be valid, also at least one pre-pass must\n      have occurred before this value will be of any use.\n\n@return The widget's desired size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetDesiredSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetDesiredSize", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::Widget_eventGetDesiredSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::Widget_eventGetDesiredSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetDesiredSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetDesiredSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetDesiredSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDesiredSize();
	P_NATIVE_END;
}
// End Class UWidget Function GetDesiredSize

// Begin Class UWidget Function GetGameInstance
struct Z_Construct_UFunction_UWidget_GetGameInstance_Statics
{
	struct Widget_eventGetGameInstance_Parms
	{
		UGameInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the game instance associated with this UI.\n\x09 * @return a pointer to the owning game instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the game instance associated with this UI.\n@return a pointer to the owning game instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetGameInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetGameInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetGameInstance", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetGameInstance_Statics::Widget_eventGetGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5402040B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetGameInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetGameInstance_Statics::Widget_eventGetGameInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetGameInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameInstance**)Z_Param__Result=P_THIS->GetGameInstance();
	P_NATIVE_END;
}
// End Class UWidget Function GetGameInstance

// Begin Class UWidget Function GetIsEnabled
struct Z_Construct_UFunction_UWidget_GetIsEnabled_Statics
{
	struct Widget_eventGetIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the current enabled status of the widget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the current enabled status of the widget" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventGetIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventGetIsEnabled_Parms), &Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetIsEnabled", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::Widget_eventGetIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::Widget_eventGetIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsEnabled();
	P_NATIVE_END;
}
// End Class UWidget Function GetIsEnabled

// Begin Class UWidget Function GetOwningLocalPlayer
struct Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics
{
	struct Widget_eventGetOwningLocalPlayer_Parms
	{
		ULocalPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the local player associated with this UI.\n\x09 * @return The owning local player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the local player associated with this UI.\n@return The owning local player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetOwningLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetOwningLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::Widget_eventGetOwningLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5402040A, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::Widget_eventGetOwningLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetOwningLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetOwningLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetOwningLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwningLocalPlayer();
	P_NATIVE_END;
}
// End Class UWidget Function GetOwningLocalPlayer

// Begin Class UWidget Function GetOwningPlayer
struct Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics
{
	struct Widget_eventGetOwningPlayer_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Gets the player controller associated with this UI.\n\x09 * @return The player controller that owns the UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the player controller associated with this UI.\n@return The player controller that owns the UI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetOwningPlayer", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::Widget_eventGetOwningPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5402040A, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::Widget_eventGetOwningPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetOwningPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetOwningPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetOwningPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayer();
	P_NATIVE_END;
}
// End Class UWidget Function GetOwningPlayer

// Begin Class UWidget Function GetPaintSpaceGeometry
struct Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics
{
	struct Widget_eventGetPaintSpaceGeometry_Parms
	{
		FGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetPaintSpaceGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3532897347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetPaintSpaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::Widget_eventGetPaintSpaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::Widget_eventGetPaintSpaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetPaintSpaceGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGeometry*)Z_Param__Result=P_THIS->GetPaintSpaceGeometry();
	P_NATIVE_END;
}
// End Class UWidget Function GetPaintSpaceGeometry

// Begin Class UWidget Function GetParent
struct Z_Construct_UFunction_UWidget_GetParent_Statics
{
	struct Widget_eventGetParent_Parms
	{
		UPanelWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the parent widget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the parent widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetParent", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetParent_Statics::Widget_eventGetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetParent_Statics::Widget_eventGetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPanelWidget**)Z_Param__Result=P_THIS->GetParent();
	P_NATIVE_END;
}
// End Class UWidget Function GetParent

// Begin Class UWidget Function GetRenderOpacity
struct Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics
{
	struct Widget_eventGetRenderOpacity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the current visibility of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the current visibility of the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetRenderOpacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetRenderOpacity", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::Widget_eventGetRenderOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::Widget_eventGetRenderOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetRenderOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetRenderOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetRenderOpacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRenderOpacity();
	P_NATIVE_END;
}
// End Class UWidget Function GetRenderOpacity

// Begin Class UWidget Function GetRenderTransformAngle
struct Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics
{
	struct Widget_eventGetRenderTransformAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetRenderTransformAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetRenderTransformAngle", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::Widget_eventGetRenderTransformAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::Widget_eventGetRenderTransformAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetRenderTransformAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetRenderTransformAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetRenderTransformAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRenderTransformAngle();
	P_NATIVE_END;
}
// End Class UWidget Function GetRenderTransformAngle

// Begin Class UWidget Function GetTickSpaceGeometry
struct Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics
{
	struct Widget_eventGetTickSpaceGeometry_Parms
	{
		FGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetTickSpaceGeometry_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3532897347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetTickSpaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::Widget_eventGetTickSpaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::Widget_eventGetTickSpaceGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetTickSpaceGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetTickSpaceGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetTickSpaceGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGeometry*)Z_Param__Result=P_THIS->GetTickSpaceGeometry();
	P_NATIVE_END;
}
// End Class UWidget Function GetTickSpaceGeometry

// Begin Class UWidget Function GetVisibility
struct Z_Construct_UFunction_UWidget_GetVisibility_Statics
{
	struct Widget_eventGetVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Gets the current visibility of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Gets the current visibility of the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_GetVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventGetVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_GetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_GetVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "GetVisibility", nullptr, nullptr, Z_Construct_UFunction_UWidget_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_GetVisibility_Statics::Widget_eventGetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_GetVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_GetVisibility_Statics::Widget_eventGetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_GetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execGetVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetVisibility();
	P_NATIVE_END;
}
// End Class UWidget Function GetVisibility

// Begin Class UWidget Function HasAnyUserFocus
struct Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics
{
	struct Widget_eventHasAnyUserFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if this widget is focused by any user. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if this widget is focused by any user." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasAnyUserFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasAnyUserFocus_Parms), &Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasAnyUserFocus", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::Widget_eventHasAnyUserFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::Widget_eventHasAnyUserFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasAnyUserFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasAnyUserFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasAnyUserFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyUserFocus();
	P_NATIVE_END;
}
// End Class UWidget Function HasAnyUserFocus

// Begin Class UWidget Function HasFocusedDescendants
struct Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics
{
	struct Widget_eventHasFocusedDescendants_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if any descendant widget is focused by any user. */" },
		{ "DisplayName", "HasAnyUserFocusedDescendants" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if any descendant widget is focused by any user." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasFocusedDescendants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasFocusedDescendants_Parms), &Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasFocusedDescendants", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::Widget_eventHasFocusedDescendants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::Widget_eventHasFocusedDescendants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasFocusedDescendants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasFocusedDescendants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasFocusedDescendants)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFocusedDescendants();
	P_NATIVE_END;
}
// End Class UWidget Function HasFocusedDescendants

// Begin Class UWidget Function HasKeyboardFocus
struct Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics
{
	struct Widget_eventHasKeyboardFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Checks to see if this widget currently has the keyboard focus\n\x09 *\n\x09 * @return  True if this widget has keyboard focus\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Checks to see if this widget currently has the keyboard focus\n\n@return  True if this widget has keyboard focus" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasKeyboardFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasKeyboardFocus_Parms), &Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasKeyboardFocus", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::Widget_eventHasKeyboardFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::Widget_eventHasKeyboardFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasKeyboardFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasKeyboardFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasKeyboardFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasKeyboardFocus();
	P_NATIVE_END;
}
// End Class UWidget Function HasKeyboardFocus

// Begin Class UWidget Function HasMouseCapture
struct Z_Construct_UFunction_UWidget_HasMouseCapture_Statics
{
	struct Widget_eventHasMouseCapture_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Checks to see if this widget is the current mouse captor\n\x09 * @return  True if this widget has captured the mouse\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Checks to see if this widget is the current mouse captor\n@return  True if this widget has captured the mouse" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasMouseCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasMouseCapture_Parms), &Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasMouseCapture", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::Widget_eventHasMouseCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::Widget_eventHasMouseCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasMouseCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasMouseCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasMouseCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMouseCapture();
	P_NATIVE_END;
}
// End Class UWidget Function HasMouseCapture

// Begin Class UWidget Function HasMouseCaptureByUser
struct Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics
{
	struct Widget_eventHasMouseCaptureByUser_Parms
	{
		int32 UserIndex;
		int32 PointerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Checks to see if this widget is the current mouse captor\n\x09 *\x09@param User index to check for capture\n\x09 *\x09@param Optional pointer index to check for capture\n\x09 *\x09@return  True if this widget has captured the mouse with given user and pointer\n\x09 */" },
		{ "CPP_Default_PointerIndex", "-1" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Checks to see if this widget is the current mouse captor\n     @param User index to check for capture\n     @param Optional pointer index to check for capture\n     @return  True if this widget has captured the mouse with given user and pointer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventHasMouseCaptureByUser_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_PointerIndex = { "PointerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventHasMouseCaptureByUser_Parms, PointerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasMouseCaptureByUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasMouseCaptureByUser_Parms), &Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_PointerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasMouseCaptureByUser", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::Widget_eventHasMouseCaptureByUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::Widget_eventHasMouseCaptureByUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasMouseCaptureByUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasMouseCaptureByUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasMouseCaptureByUser)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_PointerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMouseCaptureByUser(Z_Param_UserIndex,Z_Param_PointerIndex);
	P_NATIVE_END;
}
// End Class UWidget Function HasMouseCaptureByUser

// Begin Class UWidget Function HasUserFocus
struct Z_Construct_UFunction_UWidget_HasUserFocus_Statics
{
	struct Widget_eventHasUserFocus_Parms
	{
		APlayerController* PlayerController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if this widget is focused by a specific user. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if this widget is focused by a specific user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventHasUserFocus_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasUserFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasUserFocus_Parms), &Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasUserFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasUserFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasUserFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasUserFocus", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasUserFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasUserFocus_Statics::Widget_eventHasUserFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasUserFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasUserFocus_Statics::Widget_eventHasUserFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasUserFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasUserFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasUserFocus)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasUserFocus(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UWidget Function HasUserFocus

// Begin Class UWidget Function HasUserFocusedDescendants
struct Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics
{
	struct Widget_eventHasUserFocusedDescendants_Parms
	{
		APlayerController* PlayerController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if any descendant widget is focused by a specific user. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if any descendant widget is focused by a specific user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventHasUserFocusedDescendants_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventHasUserFocusedDescendants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventHasUserFocusedDescendants_Parms), &Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "HasUserFocusedDescendants", nullptr, nullptr, Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::Widget_eventHasUserFocusedDescendants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::Widget_eventHasUserFocusedDescendants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_HasUserFocusedDescendants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_HasUserFocusedDescendants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execHasUserFocusedDescendants)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasUserFocusedDescendants(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UWidget Function HasUserFocusedDescendants

// Begin Class UWidget Function InvalidateLayoutAndVolatility
struct Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Invalidates the widget from the view of a layout caching widget that may own this widget.\n\x09 * will force the owning widget to redraw and cache children on the next paint pass.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Invalidates the widget from the view of a layout caching widget that may own this widget.\nwill force the owning widget to redraw and cache children on the next paint pass." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "InvalidateLayoutAndVolatility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execInvalidateLayoutAndVolatility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvalidateLayoutAndVolatility();
	P_NATIVE_END;
}
// End Class UWidget Function InvalidateLayoutAndVolatility

// Begin Class UWidget Function IsHovered
struct Z_Construct_UFunction_UWidget_IsHovered_Statics
{
	struct Widget_eventIsHovered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the widget is currently being hovered by a pointer device */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if the widget is currently being hovered by a pointer device" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_IsHovered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventIsHovered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_IsHovered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventIsHovered_Parms), &Z_Construct_UFunction_UWidget_IsHovered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_IsHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_IsHovered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_IsHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "IsHovered", nullptr, nullptr, Z_Construct_UFunction_UWidget_IsHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_IsHovered_Statics::Widget_eventIsHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_IsHovered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_IsHovered_Statics::Widget_eventIsHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_IsHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_IsHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execIsHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHovered();
	P_NATIVE_END;
}
// End Class UWidget Function IsHovered

// Begin Class UWidget Function IsInViewport
struct Z_Construct_UFunction_UWidget_IsInViewport_Statics
{
	struct Widget_eventIsInViewport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/* @return true if the widget was added to the viewport using AddToViewport or AddToPlayerScreen. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "@return true if the widget was added to the viewport using AddToViewport or AddToPlayerScreen." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_IsInViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventIsInViewport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_IsInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventIsInViewport_Parms), &Z_Construct_UFunction_UWidget_IsInViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_IsInViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_IsInViewport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsInViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_IsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "IsInViewport", nullptr, nullptr, Z_Construct_UFunction_UWidget_IsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_IsInViewport_Statics::Widget_eventIsInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5402040B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_IsInViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_IsInViewport_Statics::Widget_eventIsInViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_IsInViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_IsInViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execIsInViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInViewport();
	P_NATIVE_END;
}
// End Class UWidget Function IsInViewport

// Begin Class UWidget Function IsRendered
struct Z_Construct_UFunction_UWidget_IsRendered_Statics
{
	struct Widget_eventIsRendered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible and the Render Opacity is greater than 0. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible and the Render Opacity is greater than 0." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_IsRendered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventIsRendered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_IsRendered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventIsRendered_Parms), &Z_Construct_UFunction_UWidget_IsRendered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_IsRendered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_IsRendered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsRendered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_IsRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "IsRendered", nullptr, nullptr, Z_Construct_UFunction_UWidget_IsRendered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsRendered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_IsRendered_Statics::Widget_eventIsRendered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsRendered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_IsRendered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_IsRendered_Statics::Widget_eventIsRendered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_IsRendered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_IsRendered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execIsRendered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRendered();
	P_NATIVE_END;
}
// End Class UWidget Function IsRendered

// Begin Class UWidget Function IsVisible
struct Z_Construct_UFunction_UWidget_IsVisible_Statics
{
	struct Widget_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Widget_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventIsVisible_Parms), &Z_Construct_UFunction_UWidget_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_UWidget_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_IsVisible_Statics::Widget_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_IsVisible_Statics::Widget_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class UWidget Function IsVisible

// Begin Class UWidget Function K2_AddFieldValueChangedDelegate
struct Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics
{
	struct Widget_eventK2_AddFieldValueChangedDelegate_Parms
	{
		FFieldNotificationId FieldId;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "Comment", "//~ End INotifyFieldValueChanged Interface\n" },
		{ "DisplayName", "Add Field Value Changed Delegate" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ScriptName", "AddFieldValueChangedDelegate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventK2_AddFieldValueChangedDelegate_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventK2_AddFieldValueChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4153579605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::NewProp_FieldId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "K2_AddFieldValueChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::Widget_eventK2_AddFieldValueChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::Widget_eventK2_AddFieldValueChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execK2_AddFieldValueChangedDelegate)
{
	P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddFieldValueChangedDelegate(Z_Param_FieldId,FFieldValueChangedDynamicDelegate(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidget Function K2_AddFieldValueChangedDelegate

// Begin Class UWidget Function K2_BroadcastFieldValueChanged
struct Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics
{
	struct Widget_eventK2_BroadcastFieldValueChanged_Parms
	{
		FFieldNotificationId FieldId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "DisplayName", "Broadcast Field Value Changed" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ScriptName", "BroadcastFieldValueChanged" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventK2_BroadcastFieldValueChanged_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::NewProp_FieldId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "K2_BroadcastFieldValueChanged", nullptr, nullptr, Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::Widget_eventK2_BroadcastFieldValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::Widget_eventK2_BroadcastFieldValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execK2_BroadcastFieldValueChanged)
{
	P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_BroadcastFieldValueChanged(Z_Param_FieldId);
	P_NATIVE_END;
}
// End Class UWidget Function K2_BroadcastFieldValueChanged

// Begin Class UWidget Function K2_RemoveFieldValueChangedDelegate
struct Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics
{
	struct Widget_eventK2_RemoveFieldValueChangedDelegate_Parms
	{
		FFieldNotificationId FieldId;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "DisplayName", "Remove Field Value Changed Delegate" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ScriptName", "RemoveFieldValueChangedDelegate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventK2_RemoveFieldValueChangedDelegate_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventK2_RemoveFieldValueChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4153579605
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_FieldId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "K2_RemoveFieldValueChangedDelegate", nullptr, nullptr, Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::Widget_eventK2_RemoveFieldValueChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::Widget_eventK2_RemoveFieldValueChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execK2_RemoveFieldValueChangedDelegate)
{
	P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_RemoveFieldValueChangedDelegate(Z_Param_FieldId,FFieldValueChangedDynamicDelegate(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidget Function K2_RemoveFieldValueChangedDelegate

// Begin Class UWidget Function RemoveFromParent
struct Z_Construct_UFunction_UWidget_RemoveFromParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Removes the widget from its parent widget.  If this widget was added to the player's screen or the viewport\n\x09 * it will also be removed from those containers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Removes the widget from its parent widget.  If this widget was added to the player's screen or the viewport\nit will also be removed from those containers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_RemoveFromParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "RemoveFromParent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_RemoveFromParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_RemoveFromParent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_RemoveFromParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_RemoveFromParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execRemoveFromParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromParent();
	P_NATIVE_END;
}
// End Class UWidget Function RemoveFromParent

// Begin Class UWidget Function ResetCursor
struct Z_Construct_UFunction_UWidget_ResetCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Resets the cursor to use on the widget, removing any customization for it. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Resets the cursor to use on the widget, removing any customization for it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_ResetCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "ResetCursor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_ResetCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_ResetCursor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_ResetCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_ResetCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execResetCursor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCursor();
	P_NATIVE_END;
}
// End Class UWidget Function ResetCursor

// Begin Class UWidget Function SetAllNavigationRules
struct Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics
{
	struct Widget_eventSetAllNavigationRules_Parms
	{
		EUINavigationRule Rule;
		FName WidgetToFocus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 *\x09Sets the widget navigation rules for all directions. This can only be called on widgets that are in a widget tree.\n\x09 *\x09@param Rule The rule to use when navigation is taking place\n\x09 *\x09@param WidgetToFocus When using the Explicit rule, focus on this widget\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the widget navigation rules for all directions. This can only be called on widgets that are in a widget tree.\n@param Rule The rule to use when navigation is taking place\n@param WidgetToFocus When using the Explicit rule, focus on this widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetAllNavigationRules_Parms, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(0, nullptr) }; // 3695984133
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_WidgetToFocus = { "WidgetToFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetAllNavigationRules_Parms, WidgetToFocus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_Rule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_Rule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::NewProp_WidgetToFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetAllNavigationRules", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::Widget_eventSetAllNavigationRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::Widget_eventSetAllNavigationRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetAllNavigationRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetAllNavigationRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetAllNavigationRules)
{
	P_GET_ENUM(EUINavigationRule,Z_Param_Rule);
	P_GET_PROPERTY(FNameProperty,Z_Param_WidgetToFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllNavigationRules(EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus);
	P_NATIVE_END;
}
// End Class UWidget Function SetAllNavigationRules

// Begin Class UWidget Function SetClipping
struct Z_Construct_UFunction_UWidget_SetClipping_Statics
{
	struct Widget_eventSetClipping_Parms
	{
		EWidgetClipping InClipping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the clipping state of this widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the clipping state of this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InClipping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InClipping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetClipping_Statics::NewProp_InClipping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetClipping_Statics::NewProp_InClipping = { "InClipping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetClipping_Parms, InClipping), Z_Construct_UEnum_SlateCore_EWidgetClipping, METADATA_PARAMS(0, nullptr) }; // 950503845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetClipping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetClipping_Statics::NewProp_InClipping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetClipping_Statics::NewProp_InClipping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetClipping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetClipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetClipping", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetClipping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetClipping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetClipping_Statics::Widget_eventSetClipping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetClipping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetClipping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetClipping_Statics::Widget_eventSetClipping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetClipping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetClipping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetClipping)
{
	P_GET_ENUM(EWidgetClipping,Z_Param_InClipping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClipping(EWidgetClipping(Z_Param_InClipping));
	P_NATIVE_END;
}
// End Class UWidget Function SetClipping

// Begin Class UWidget Function SetCursor
struct Z_Construct_UFunction_UWidget_SetCursor_Statics
{
	struct Widget_eventSetCursor_Parms
	{
		TEnumAsByte<EMouseCursor::Type> InCursor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the cursor to show over the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the cursor to show over the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCursor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetCursor_Statics::NewProp_InCursor = { "InCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetCursor_Parms, InCursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(0, nullptr) }; // 2895712077
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetCursor_Statics::NewProp_InCursor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetCursor", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetCursor_Statics::Widget_eventSetCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetCursor_Statics::Widget_eventSetCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetCursor)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InCursor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCursor(EMouseCursor::Type(Z_Param_InCursor));
	P_NATIVE_END;
}
// End Class UWidget Function SetCursor

// Begin Class UWidget Function SetFocus
struct Z_Construct_UFunction_UWidget_SetFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the focus to this widget for the owning user */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the focus to this widget for the owning user" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetFocus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_SetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocus();
	P_NATIVE_END;
}
// End Class UWidget Function SetFocus

// Begin Class UWidget Function SetIsEnabled
struct Z_Construct_UFunction_UWidget_SetIsEnabled_Statics
{
	struct Widget_eventSetIsEnabled_Parms
	{
		bool bInIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the current enabled status of the widget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the current enabled status of the widget" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::NewProp_bInIsEnabled_SetBit(void* Obj)
{
	((Widget_eventSetIsEnabled_Parms*)Obj)->bInIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::NewProp_bInIsEnabled = { "bInIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Widget_eventSetIsEnabled_Parms), &Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::NewProp_bInIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::NewProp_bInIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetIsEnabled", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::Widget_eventSetIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::Widget_eventSetIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetIsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetIsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetIsEnabled)
{
	P_GET_UBOOL(Z_Param_bInIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsEnabled(Z_Param_bInIsEnabled);
	P_NATIVE_END;
}
// End Class UWidget Function SetIsEnabled

// Begin Class UWidget Function SetKeyboardFocus
struct Z_Construct_UFunction_UWidget_SetKeyboardFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the focus to this widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the focus to this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetKeyboardFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetKeyboardFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetKeyboardFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetKeyboardFocus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidget_SetKeyboardFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetKeyboardFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetKeyboardFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetKeyboardFocus();
	P_NATIVE_END;
}
// End Class UWidget Function SetKeyboardFocus

// Begin Class UWidget Function SetNavigationRule
struct Z_Construct_UFunction_UWidget_SetNavigationRule_Statics
{
	struct Widget_eventSetNavigationRule_Parms
	{
		EUINavigation Direction;
		EUINavigationRule Rule;
		FName WidgetToFocus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "Please use either SetNavigationRuleBase or SetNavigationRuleExplicit or SetNavigationRuleCustom or SetNavigationRuleCustomBoundary." },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRule_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRule_Parms, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(0, nullptr) }; // 3695984133
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_WidgetToFocus = { "WidgetToFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRule_Parms, WidgetToFocus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Rule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_Rule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::NewProp_WidgetToFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetNavigationRule", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::Widget_eventSetNavigationRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::Widget_eventSetNavigationRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetNavigationRule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetNavigationRule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetNavigationRule)
{
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_GET_ENUM(EUINavigationRule,Z_Param_Rule);
	P_GET_PROPERTY(FNameProperty,Z_Param_WidgetToFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRule(EUINavigation(Z_Param_Direction),EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus);
	P_NATIVE_END;
}
// End Class UWidget Function SetNavigationRule

// Begin Class UWidget Function SetNavigationRuleBase
struct Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics
{
	struct Widget_eventSetNavigationRuleBase_Parms
	{
		EUINavigation Direction;
		EUINavigationRule Rule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 *\x09Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for non Explicit, non Custom and non CustomBoundary Rules.\n\x09 *\x09@param Direction\n\x09 *\x09@param Rule The rule to use when navigation is taking place\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for non Explicit, non Custom and non CustomBoundary Rules.\n@param Direction\n@param Rule The rule to use when navigation is taking place" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleBase_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleBase_Parms, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(0, nullptr) }; // 3695984133
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Rule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::NewProp_Rule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetNavigationRuleBase", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::Widget_eventSetNavigationRuleBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::Widget_eventSetNavigationRuleBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetNavigationRuleBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetNavigationRuleBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetNavigationRuleBase)
{
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_GET_ENUM(EUINavigationRule,Z_Param_Rule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRuleBase(EUINavigation(Z_Param_Direction),EUINavigationRule(Z_Param_Rule));
	P_NATIVE_END;
}
// End Class UWidget Function SetNavigationRuleBase

// Begin Class UWidget Function SetNavigationRuleCustom
struct Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics
{
	struct Widget_eventSetNavigationRuleCustom_Parms
	{
		EUINavigation Direction;
		FScriptDelegate InCustomDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 *\x09Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Custom Rule.\n\x09 *\x09@param Direction\n\x09 *\x09@param InCustomDelegate Custom Delegate that will be called\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Custom Rule.\n@param Direction\n@param InCustomDelegate Custom Delegate that will be called" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCustomDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleCustom_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_InCustomDelegate = { "InCustomDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleCustom_Parms, InCustomDelegate), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 481314445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::NewProp_InCustomDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetNavigationRuleCustom", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::Widget_eventSetNavigationRuleCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::Widget_eventSetNavigationRuleCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetNavigationRuleCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetNavigationRuleCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetNavigationRuleCustom)
{
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InCustomDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRuleCustom(EUINavigation(Z_Param_Direction),FCustomWidgetNavigationDelegate(Z_Param_InCustomDelegate));
	P_NATIVE_END;
}
// End Class UWidget Function SetNavigationRuleCustom

// Begin Class UWidget Function SetNavigationRuleCustomBoundary
struct Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics
{
	struct Widget_eventSetNavigationRuleCustomBoundary_Parms
	{
		EUINavigation Direction;
		FScriptDelegate InCustomDelegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 *\x09Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for CustomBoundary Rule.\n\x09 *\x09@param Direction\n\x09 *\x09@param InCustomDelegate Custom Delegate that will be called\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for CustomBoundary Rule.\n@param Direction\n@param InCustomDelegate Custom Delegate that will be called" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InCustomDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleCustomBoundary_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_InCustomDelegate = { "InCustomDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleCustomBoundary_Parms, InCustomDelegate), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 481314445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::NewProp_InCustomDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetNavigationRuleCustomBoundary", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::Widget_eventSetNavigationRuleCustomBoundary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::Widget_eventSetNavigationRuleCustomBoundary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetNavigationRuleCustomBoundary)
{
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InCustomDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRuleCustomBoundary(EUINavigation(Z_Param_Direction),FCustomWidgetNavigationDelegate(Z_Param_InCustomDelegate));
	P_NATIVE_END;
}
// End Class UWidget Function SetNavigationRuleCustomBoundary

// Begin Class UWidget Function SetNavigationRuleExplicit
struct Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics
{
	struct Widget_eventSetNavigationRuleExplicit_Parms
	{
		EUINavigation Direction;
		UWidget* InWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 *\x09Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Explicit Rule.\n\x09 *\x09@param Direction\n\x09 *\x09@param InWidget Focus on this widget instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Explicit Rule.\n@param Direction\n@param InWidget Focus on this widget instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleExplicit_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetNavigationRuleExplicit_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidget_MetaData), NewProp_InWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::NewProp_InWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetNavigationRuleExplicit", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::Widget_eventSetNavigationRuleExplicit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::Widget_eventSetNavigationRuleExplicit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetNavigationRuleExplicit)
{
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_GET_OBJECT(UWidget,Z_Param_InWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationRuleExplicit(EUINavigation(Z_Param_Direction),Z_Param_InWidget);
	P_NATIVE_END;
}
// End Class UWidget Function SetNavigationRuleExplicit

// Begin Class UWidget Function SetRenderOpacity
struct Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics
{
	struct Widget_eventSetRenderOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the visibility of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the visibility of the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderOpacity", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::Widget_eventSetRenderOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::Widget_eventSetRenderOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderOpacity

// Begin Class UWidget Function SetRenderScale
struct Z_Construct_UFunction_UWidget_SetRenderScale_Statics
{
	struct Widget_eventSetRenderScale_Parms
	{
		FVector2D Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_SetRenderScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderScale_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderScale", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderScale_Statics::Widget_eventSetRenderScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderScale_Statics::Widget_eventSetRenderScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderScale)
{
	P_GET_STRUCT(FVector2D,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderScale(Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderScale

// Begin Class UWidget Function SetRenderShear
struct Z_Construct_UFunction_UWidget_SetRenderShear_Statics
{
	struct Widget_eventSetRenderShear_Parms
	{
		FVector2D Shear;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_SetRenderShear_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderShear_Parms, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderShear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderShear_Statics::NewProp_Shear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderShear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderShear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderShear", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderShear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderShear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderShear_Statics::Widget_eventSetRenderShear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderShear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderShear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderShear_Statics::Widget_eventSetRenderShear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderShear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderShear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderShear)
{
	P_GET_STRUCT(FVector2D,Z_Param_Shear);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderShear(Z_Param_Shear);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderShear

// Begin Class UWidget Function SetRenderTransform
struct Z_Construct_UFunction_UWidget_SetRenderTransform_Statics
{
	struct Widget_eventSetRenderTransform_Parms
	{
		FWidgetTransform InTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderTransform_Parms, InTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(0, nullptr) }; // 201331753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::NewProp_InTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderTransform", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::Widget_eventSetRenderTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::Widget_eventSetRenderTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderTransform)
{
	P_GET_STRUCT(FWidgetTransform,Z_Param_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTransform(Z_Param_InTransform);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderTransform

// Begin Class UWidget Function SetRenderTransformAngle
struct Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics
{
	struct Widget_eventSetRenderTransformAngle_Parms
	{
		float Angle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderTransformAngle_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderTransformAngle", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::Widget_eventSetRenderTransformAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::Widget_eventSetRenderTransformAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderTransformAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderTransformAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderTransformAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTransformAngle(Z_Param_Angle);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderTransformAngle

// Begin Class UWidget Function SetRenderTransformPivot
struct Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics
{
	struct Widget_eventSetRenderTransformPivot_Parms
	{
		FVector2D Pivot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderTransformPivot_Parms, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::NewProp_Pivot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderTransformPivot", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::Widget_eventSetRenderTransformPivot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::Widget_eventSetRenderTransformPivot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderTransformPivot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderTransformPivot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderTransformPivot)
{
	P_GET_STRUCT(FVector2D,Z_Param_Pivot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTransformPivot(Z_Param_Pivot);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderTransformPivot

// Begin Class UWidget Function SetRenderTranslation
struct Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics
{
	struct Widget_eventSetRenderTranslation_Parms
	{
		FVector2D Translation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Transform" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetRenderTranslation_Parms, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::NewProp_Translation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetRenderTranslation", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::Widget_eventSetRenderTranslation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::Widget_eventSetRenderTranslation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetRenderTranslation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetRenderTranslation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetRenderTranslation)
{
	P_GET_STRUCT(FVector2D,Z_Param_Translation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTranslation(Z_Param_Translation);
	P_NATIVE_END;
}
// End Class UWidget Function SetRenderTranslation

// Begin Class UWidget Function SetToolTip
struct Z_Construct_UFunction_UWidget_SetToolTip_Statics
{
	struct Widget_eventSetToolTip_Parms
	{
		UWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets a custom widget as the tooltip of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets a custom widget as the tooltip of the widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_SetToolTip_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetToolTip_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetToolTip_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetToolTip", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetToolTip_Statics::Widget_eventSetToolTip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetToolTip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetToolTip_Statics::Widget_eventSetToolTip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetToolTip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetToolTip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetToolTip)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolTip(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UWidget Function SetToolTip

// Begin Class UWidget Function SetToolTipText
struct Z_Construct_UFunction_UWidget_SetToolTipText_Statics
{
	struct Widget_eventSetToolTipText_Parms
	{
		FText InToolTipText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the tooltip text for the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the tooltip text for the widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InToolTipText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InToolTipText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidget_SetToolTipText_Statics::NewProp_InToolTipText = { "InToolTipText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetToolTipText_Parms, InToolTipText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InToolTipText_MetaData), NewProp_InToolTipText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetToolTipText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetToolTipText_Statics::NewProp_InToolTipText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTipText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetToolTipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetToolTipText", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetToolTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTipText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetToolTipText_Statics::Widget_eventSetToolTipText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetToolTipText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetToolTipText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetToolTipText_Statics::Widget_eventSetToolTipText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetToolTipText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetToolTipText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetToolTipText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InToolTipText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolTipText(Z_Param_Out_InToolTipText);
	P_NATIVE_END;
}
// End Class UWidget Function SetToolTipText

// Begin Class UWidget Function SetUserFocus
struct Z_Construct_UFunction_UWidget_SetUserFocus_Statics
{
	struct Widget_eventSetUserFocus_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the focus to this widget for a specific user (if setting focus for the owning user, prefer SetFocus()) */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the focus to this widget for a specific user (if setting focus for the owning user, prefer SetFocus())" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_SetUserFocus_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetUserFocus_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetUserFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetUserFocus_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetUserFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetUserFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetUserFocus", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetUserFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetUserFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetUserFocus_Statics::Widget_eventSetUserFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetUserFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetUserFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetUserFocus_Statics::Widget_eventSetUserFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetUserFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetUserFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetUserFocus)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserFocus(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UWidget Function SetUserFocus

// Begin Class UWidget Function SetVisibility
struct Z_Construct_UFunction_UWidget_SetVisibility_Statics
{
	struct Widget_eventSetVisibility_Parms
	{
		ESlateVisibility InVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the visibility of the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets the visibility of the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidget_SetVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidget_SetVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_eventSetVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_SetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetVisibility_Statics::NewProp_InVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_SetVisibility_Statics::NewProp_InVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget, nullptr, "SetVisibility", nullptr, nullptr, Z_Construct_UFunction_UWidget_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_SetVisibility_Statics::Widget_eventSetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_SetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_SetVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_SetVisibility_Statics::Widget_eventSetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_SetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_SetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget::execSetVisibility)
{
	P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibility(ESlateVisibility(Z_Param_InVisibility));
	P_NATIVE_END;
}
// End Class UWidget Function SetVisibility

// Begin Class UWidget
void UWidget::GetToolTipText_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	FText& Result = *(FText*)OutValue;
	Result = (FText)Obj->GetToolTipText();
}
void UWidget::SetToolTipText_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetToolTipText(Value);
}
void UWidget::GetToolTipWidget_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	UWidget*& Result = *(UWidget**)OutValue;
	Result = (UWidget*)Obj->GetToolTip();
}
void UWidget::SetToolTipWidget_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	UWidget*& Value = *(UWidget**)InValue;
	Obj->SetToolTip(Value);
}
void UWidget::GetRenderTransform_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	FWidgetTransform& Result = *(FWidgetTransform*)OutValue;
	Result = (FWidgetTransform)Obj->GetRenderTransform();
}
void UWidget::SetRenderTransform_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	FWidgetTransform& Value = *(FWidgetTransform*)InValue;
	Obj->SetRenderTransform(Value);
}
void UWidget::GetRenderTransformPivot_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetRenderTransformPivot();
}
void UWidget::SetRenderTransformPivot_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetRenderTransformPivot(Value);
}
void UWidget::GetFlowDirectionPreference_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	EFlowDirectionPreference& Result = *(EFlowDirectionPreference*)OutValue;
	Result = (EFlowDirectionPreference)Obj->GetFlowDirectionPreference();
}
void UWidget::SetFlowDirectionPreference_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	EFlowDirectionPreference& Value = *(EFlowDirectionPreference*)InValue;
	Obj->SetFlowDirectionPreference(Value);
}
void UWidget::GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsEnabled();
}
void UWidget::SetbIsEnabled_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsEnabled(Value);
}
void UWidget::GetCursor_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetCursor();
}
void UWidget::SetCursor_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	EMouseCursor::Type Value = (EMouseCursor::Type)*(uint8*)InValue;
	Obj->SetCursor(Value);
}
void UWidget::GetClipping_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	EWidgetClipping& Result = *(EWidgetClipping*)OutValue;
	Result = (EWidgetClipping)Obj->GetClipping();
}
void UWidget::SetClipping_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	EWidgetClipping& Value = *(EWidgetClipping*)InValue;
	Obj->SetClipping(Value);
}
void UWidget::GetVisibility_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	ESlateVisibility& Result = *(ESlateVisibility*)OutValue;
	Result = (ESlateVisibility)Obj->GetVisibility();
}
void UWidget::SetVisibility_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	ESlateVisibility& Value = *(ESlateVisibility*)InValue;
	Obj->SetVisibility(Value);
}
void UWidget::GetPixelSnapping_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	EWidgetPixelSnapping& Result = *(EWidgetPixelSnapping*)OutValue;
	Result = (EWidgetPixelSnapping)Obj->GetPixelSnapping();
}
void UWidget::SetPixelSnapping_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	EWidgetPixelSnapping& Value = *(EWidgetPixelSnapping*)InValue;
	Obj->SetPixelSnapping(Value);
}
void UWidget::GetRenderOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UWidget* Obj = (const UWidget*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetRenderOpacity();
}
void UWidget::SetRenderOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UWidget* Obj = (UWidget*)Object;
	float& Value = *(float*)InValue;
	Obj->SetRenderOpacity(Value);
}
void UWidget::StaticRegisterNativesUWidget()
{
	UClass* Class = UWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceLayoutPrepass", &UWidget::execForceLayoutPrepass },
		{ "ForceVolatile", &UWidget::execForceVolatile },
		{ "GetAccessibleSummaryText", &UWidget::execGetAccessibleSummaryText },
		{ "GetAccessibleText", &UWidget::execGetAccessibleText },
		{ "GetCachedGeometry", &UWidget::execGetCachedGeometry },
		{ "GetClipping", &UWidget::execGetClipping },
		{ "GetDesiredSize", &UWidget::execGetDesiredSize },
		{ "GetGameInstance", &UWidget::execGetGameInstance },
		{ "GetIsEnabled", &UWidget::execGetIsEnabled },
		{ "GetOwningLocalPlayer", &UWidget::execGetOwningLocalPlayer },
		{ "GetOwningPlayer", &UWidget::execGetOwningPlayer },
		{ "GetPaintSpaceGeometry", &UWidget::execGetPaintSpaceGeometry },
		{ "GetParent", &UWidget::execGetParent },
		{ "GetRenderOpacity", &UWidget::execGetRenderOpacity },
		{ "GetRenderTransformAngle", &UWidget::execGetRenderTransformAngle },
		{ "GetTickSpaceGeometry", &UWidget::execGetTickSpaceGeometry },
		{ "GetVisibility", &UWidget::execGetVisibility },
		{ "HasAnyUserFocus", &UWidget::execHasAnyUserFocus },
		{ "HasFocusedDescendants", &UWidget::execHasFocusedDescendants },
		{ "HasKeyboardFocus", &UWidget::execHasKeyboardFocus },
		{ "HasMouseCapture", &UWidget::execHasMouseCapture },
		{ "HasMouseCaptureByUser", &UWidget::execHasMouseCaptureByUser },
		{ "HasUserFocus", &UWidget::execHasUserFocus },
		{ "HasUserFocusedDescendants", &UWidget::execHasUserFocusedDescendants },
		{ "InvalidateLayoutAndVolatility", &UWidget::execInvalidateLayoutAndVolatility },
		{ "IsHovered", &UWidget::execIsHovered },
		{ "IsInViewport", &UWidget::execIsInViewport },
		{ "IsRendered", &UWidget::execIsRendered },
		{ "IsVisible", &UWidget::execIsVisible },
		{ "K2_AddFieldValueChangedDelegate", &UWidget::execK2_AddFieldValueChangedDelegate },
		{ "K2_BroadcastFieldValueChanged", &UWidget::execK2_BroadcastFieldValueChanged },
		{ "K2_RemoveFieldValueChangedDelegate", &UWidget::execK2_RemoveFieldValueChangedDelegate },
		{ "RemoveFromParent", &UWidget::execRemoveFromParent },
		{ "ResetCursor", &UWidget::execResetCursor },
		{ "SetAllNavigationRules", &UWidget::execSetAllNavigationRules },
		{ "SetClipping", &UWidget::execSetClipping },
		{ "SetCursor", &UWidget::execSetCursor },
		{ "SetFocus", &UWidget::execSetFocus },
		{ "SetIsEnabled", &UWidget::execSetIsEnabled },
		{ "SetKeyboardFocus", &UWidget::execSetKeyboardFocus },
		{ "SetNavigationRule", &UWidget::execSetNavigationRule },
		{ "SetNavigationRuleBase", &UWidget::execSetNavigationRuleBase },
		{ "SetNavigationRuleCustom", &UWidget::execSetNavigationRuleCustom },
		{ "SetNavigationRuleCustomBoundary", &UWidget::execSetNavigationRuleCustomBoundary },
		{ "SetNavigationRuleExplicit", &UWidget::execSetNavigationRuleExplicit },
		{ "SetRenderOpacity", &UWidget::execSetRenderOpacity },
		{ "SetRenderScale", &UWidget::execSetRenderScale },
		{ "SetRenderShear", &UWidget::execSetRenderShear },
		{ "SetRenderTransform", &UWidget::execSetRenderTransform },
		{ "SetRenderTransformAngle", &UWidget::execSetRenderTransformAngle },
		{ "SetRenderTransformPivot", &UWidget::execSetRenderTransformPivot },
		{ "SetRenderTranslation", &UWidget::execSetRenderTranslation },
		{ "SetToolTip", &UWidget::execSetToolTip },
		{ "SetToolTipText", &UWidget::execSetToolTipText },
		{ "SetUserFocus", &UWidget::execSetUserFocus },
		{ "SetVisibility", &UWidget::execSetVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget);
UClass* Z_Construct_UClass_UWidget_NoRegister()
{
	return UWidget::StaticClass();
}
struct Z_Construct_UClass_UWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is the base class for all wrapped Slate controls that are exposed to UObjects.\n */" },
		{ "IncludePath", "Components/Widget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "This is the base class for all wrapped Slate controls that are exposed to UObjects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * The parent slot of the UWidget.  Allows us to easily inline edit the layout controlling this widget.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The parent slot of the UWidget.  Allows us to easily inline edit the layout controlling this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for bIsEnabled */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "A bindable delegate for bIsEnabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipTextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for ToolTipText */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "A bindable delegate for ToolTipText" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipText_MetaData[] = {
		{ "BlueprintSetter", "SetToolTipText" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Tooltip text to show when the user hovers over the widget with the mouse */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Tooltip text to show when the user hovers over the widget with the mouse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipWidget_MetaData[] = {
		{ "BlueprintSetter", "SetToolTip" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Tooltip widget to show when the user hovers over the widget with the mouse */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Tooltip widget to show when the user hovers over the widget with the mouse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipWidgetDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for ToolTipWidget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "A bindable delegate for ToolTipWidget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for Visibility */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "A bindable delegate for Visibility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTransform_MetaData[] = {
		{ "BlueprintSetter", "SetRenderTransform" },
		{ "Category", "Render Transform" },
		{ "Comment", "/** The render transform of the widget allows for arbitrary 2D transforms to be applied to the widget. */" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The render transform of the widget allows for arbitrary 2D transforms to be applied to the widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTransformPivot_MetaData[] = {
		{ "BlueprintSetter", "SetRenderTransformPivot" },
		{ "Category", "Render Transform" },
		{ "Comment", "/**\n\x09 * The render transform pivot controls the location about which transforms are applied.  \n\x09 * This value is a normalized coordinate about which things like rotations will occur.\n\x09 */" },
		{ "DisplayName", "Pivot" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The render transform pivot controls the location about which transforms are applied.\nThis value is a normalized coordinate about which things like rotations will occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowDirectionPreference_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Allows you to set a new flow direction */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Allows you to set a new flow direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVariable_MetaData[] = {
		{ "Comment", "/**\n\x09 * Allows controls to be exposed as variables in a blueprint.  Not all controls need to be exposed\n\x09 * as variables, so this allows only the most useful ones to end up being exposed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Allows controls to be exposed as variables in a blueprint.  Not all controls need to be exposed\nas variables, so this allows only the most useful ones to end up being exposed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedByConstructionScript_MetaData[] = {
		{ "Comment", "/** Flag if the Widget was created from a blueprint */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Flag if the Widget was created from a blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "BlueprintGetter", "GetIsEnabled" },
		{ "BlueprintSetter", "SetIsEnabled" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets whether this widget can be modified interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Sets whether this widget can be modified interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Cursor_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAccessibleDefaults_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** Override all of the default accessibility behavior and text for this widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Override all of the default accessibility behavior and text for this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanChildrenBeAccessible_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** Whether or not children of this widget can appear as distinct accessible widgets. */" },
		{ "EditCondition", "bOverrideAccessibleDefaults" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Whether or not children of this widget can appear as distinct accessible widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleBehavior_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** Whether or not the widget is accessible, and how to describe it. If set to custom, additional customization options will appear. */" },
		{ "EditCondition", "bOverrideAccessibleDefaults" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Whether or not the widget is accessible, and how to describe it. If set to custom, additional customization options will appear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryBehavior_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** How to describe this widget when it's being presented through a summary of a parent widget. If set to custom, additional customization options will appear. */" },
		{ "EditCondition", "bOverrideAccessibleDefaults" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "How to describe this widget when it's being presented through a summary of a parent widget. If set to custom, additional customization options will appear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleText_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** When AccessibleBehavior is set to Custom, this is the text that will be used to describe the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "When AccessibleBehavior is set to Custom, this is the text that will be used to describe the widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleTextDelegate_MetaData[] = {
		{ "Comment", "/** An optional delegate that may be assigned in place of AccessibleText for creating a TAttribute */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "An optional delegate that may be assigned in place of AccessibleText for creating a TAttribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryText_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** When AccessibleSummaryBehavior is set to Custom, this is the text that will be used to describe the widget. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "When AccessibleSummaryBehavior is set to Custom, this is the text that will be used to describe the widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryTextDelegate_MetaData[] = {
		{ "Comment", "/** An optional delegate that may be assigned in place of AccessibleSummaryText for creating a TAttribute */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "An optional delegate that may be assigned in place of AccessibleSummaryText for creating a TAttribute" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVolatile_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * If true prevents the widget or its child's geometry or layout information from being cached.  If this widget\n\x09 * changes every frame, but you want it to still be in an invalidation panel you should make it as volatile\n\x09 * instead of invalidating it every frame, which would prevent the invalidation panel from actually\n\x09 * ever caching anything.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "If true prevents the widget or its child's geometry or layout information from being cached.  If this widget\nchanges every frame, but you want it to still be in an invalidation panel you should make it as volatile\ninstead of invalidating it every frame, which would prevent the invalidation panel from actually\never caching anything." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInDesigner_MetaData[] = {
		{ "Comment", "/** Stores the design time flag setting if the widget is hidden inside the designer */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Stores the design time flag setting if the widget is hidden inside the designer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandedInDesigner_MetaData[] = {
		{ "Comment", "/** Stores the design time flag setting if the widget is expanded inside the designer */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Stores the design time flag setting if the widget is expanded inside the designer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockedInDesigner_MetaData[] = {
		{ "Comment", "/** Stores the design time flag setting if the widget is locked inside the designer */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Stores the design time flag setting if the widget is locked inside the designer" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[] = {
		{ "BlueprintSetter", "SetCursor" },
		{ "Category", "Behavior" },
		{ "Comment", "/** The cursor to show when the mouse is over the widget */" },
		{ "editcondition", "bOverride_Cursor" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The cursor to show when the mouse is over the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clipping_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Controls how the clipping behavior of this widget.  Normally content that overflows the\n\x09 * bounds of the widget continues rendering.  Enabling clipping prevents that overflowing content\n\x09 * from being seen.\n\x09 *\n\x09 * NOTE: Elements in different clipping spaces can not be batched together, and so there is a\n\x09 * performance cost to clipping.  Do not enable clipping unless a panel actually needs to prevent\n\x09 * content from showing up outside its bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Controls how the clipping behavior of this widget.  Normally content that overflows the\nbounds of the widget continues rendering.  Enabling clipping prevents that overflowing content\nfrom being seen.\n\nNOTE: Elements in different clipping spaces can not be batched together, and so there is a\nperformance cost to clipping.  Do not enable clipping unless a panel actually needs to prevent\ncontent from showing up outside its bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "BlueprintGetter", "GetVisibility" },
		{ "BlueprintSetter", "SetVisibility" },
		{ "Category", "Behavior" },
		{ "Comment", "/** The visibility of the widget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The visibility of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Rendering" },
		{ "Comment", "/** If the widget will draw snapped to the nearest pixel.  Improves clarity but might cause visibile stepping in animation */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "If the widget will draw snapped to the nearest pixel.  Improves clarity but might cause visibile stepping in animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderOpacity_MetaData[] = {
		{ "BlueprintGetter", "GetRenderOpacity" },
		{ "BlueprintSetter", "SetRenderOpacity" },
		{ "Category", "Rendering" },
		{ "Comment", "/** The opacity of the widget */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The opacity of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleWidgetData_MetaData[] = {
		{ "Comment", "/** A custom set of accessibility rules for this widget. If null, default rules for the widget are used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "A custom set of accessibility rules for this widget. If null, default rules for the widget are used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Navigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/**\n\x09 * The navigation object for this widget is optionally created if the user has configured custom\n\x09 * navigation rules for this widget in the widget designer.  Those rules determine how navigation transitions\n\x09 * can occur between widgets.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The navigation object for this widget is optionally created if the user has configured custom\nnavigation rules for this widget in the widget designer.  Those rules determine how navigation transitions\ncan occur between widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeBindings_MetaData[] = {
		{ "Comment", "/** Native property bindings. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Native property bindings." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignerFlags_MetaData[] = {
		{ "Comment", "/** Any flags used by the designer at edit time. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Any flags used by the designer at edit time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "Comment", "/** The friendly name for this widget displayed in the designer and BP graph. */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "The friendly name for this widget displayed in the designer and BP graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Comment", "/** Category name used in the widget designer for sorting purpose */" },
		{ "ModuleRelativePath", "Public/Components/Widget.h" },
		{ "ToolTip", "Category name used in the widget designer for sorting purpose" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_bIsEnabledDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ToolTipTextDelegate;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTipText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolTipWidget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ToolTipWidgetDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_VisibilityDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTransformPivot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlowDirectionPreference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlowDirectionPreference;
	static void NewProp_bIsVariable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVariable;
	static void NewProp_bCreatedByConstructionScript_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedByConstructionScript;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_bOverride_Cursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Cursor;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOverrideAccessibleDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAccessibleDefaults;
	static void NewProp_bCanChildrenBeAccessible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChildrenBeAccessible;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccessibleBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessibleBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccessibleSummaryBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessibleSummaryBehavior;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AccessibleText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AccessibleTextDelegate;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AccessibleSummaryText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AccessibleSummaryTextDelegate;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsVolatile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVolatile;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHiddenInDesigner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInDesigner;
	static void NewProp_bExpandedInDesigner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandedInDesigner;
	static void NewProp_bLockedInDesigner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockedInDesigner;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Cursor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Clipping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Clipping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PixelSnapping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelSnapping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderOpacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessibleWidgetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Navigation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NativeBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeBindings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesignerFlags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_ForceLayoutPrepass, "ForceLayoutPrepass" }, // 1388819649
		{ &Z_Construct_UFunction_UWidget_ForceVolatile, "ForceVolatile" }, // 4270666002
		{ &Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature, "GenerateWidgetForObject__DelegateSignature" }, // 3343311897
		{ &Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature, "GenerateWidgetForString__DelegateSignature" }, // 3399290350
		{ &Z_Construct_UFunction_UWidget_GetAccessibleSummaryText, "GetAccessibleSummaryText" }, // 126600143
		{ &Z_Construct_UFunction_UWidget_GetAccessibleText, "GetAccessibleText" }, // 2010163248
		{ &Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature, "GetBool__DelegateSignature" }, // 3771472630
		{ &Z_Construct_UFunction_UWidget_GetCachedGeometry, "GetCachedGeometry" }, // 725923605
		{ &Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, "GetCheckBoxState__DelegateSignature" }, // 2305274545
		{ &Z_Construct_UFunction_UWidget_GetClipping, "GetClipping" }, // 3166877390
		{ &Z_Construct_UFunction_UWidget_GetDesiredSize, "GetDesiredSize" }, // 3992036945
		{ &Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, "GetFloat__DelegateSignature" }, // 4086961303
		{ &Z_Construct_UFunction_UWidget_GetGameInstance, "GetGameInstance" }, // 1001405102
		{ &Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature, "GetInt32__DelegateSignature" }, // 209225695
		{ &Z_Construct_UFunction_UWidget_GetIsEnabled, "GetIsEnabled" }, // 909233158
		{ &Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, "GetLinearColor__DelegateSignature" }, // 3367946829
		{ &Z_Construct_UDelegateFunction_UWidget_GetMouseCursor__DelegateSignature, "GetMouseCursor__DelegateSignature" }, // 3721221284
		{ &Z_Construct_UFunction_UWidget_GetOwningLocalPlayer, "GetOwningLocalPlayer" }, // 1150237738
		{ &Z_Construct_UFunction_UWidget_GetOwningPlayer, "GetOwningPlayer" }, // 90547828
		{ &Z_Construct_UFunction_UWidget_GetPaintSpaceGeometry, "GetPaintSpaceGeometry" }, // 2153294487
		{ &Z_Construct_UFunction_UWidget_GetParent, "GetParent" }, // 3007022756
		{ &Z_Construct_UFunction_UWidget_GetRenderOpacity, "GetRenderOpacity" }, // 3569116532
		{ &Z_Construct_UFunction_UWidget_GetRenderTransformAngle, "GetRenderTransformAngle" }, // 305053511
		{ &Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, "GetSlateBrush__DelegateSignature" }, // 1119893337
		{ &Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, "GetSlateColor__DelegateSignature" }, // 3342372159
		{ &Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature, "GetSlateVisibility__DelegateSignature" }, // 2981937729
		{ &Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, "GetText__DelegateSignature" }, // 1712476551
		{ &Z_Construct_UFunction_UWidget_GetTickSpaceGeometry, "GetTickSpaceGeometry" }, // 999420533
		{ &Z_Construct_UFunction_UWidget_GetVisibility, "GetVisibility" }, // 3792710350
		{ &Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature, "GetWidget__DelegateSignature" }, // 1293422287
		{ &Z_Construct_UFunction_UWidget_HasAnyUserFocus, "HasAnyUserFocus" }, // 4084596845
		{ &Z_Construct_UFunction_UWidget_HasFocusedDescendants, "HasFocusedDescendants" }, // 1792365435
		{ &Z_Construct_UFunction_UWidget_HasKeyboardFocus, "HasKeyboardFocus" }, // 327745867
		{ &Z_Construct_UFunction_UWidget_HasMouseCapture, "HasMouseCapture" }, // 450706674
		{ &Z_Construct_UFunction_UWidget_HasMouseCaptureByUser, "HasMouseCaptureByUser" }, // 2410333425
		{ &Z_Construct_UFunction_UWidget_HasUserFocus, "HasUserFocus" }, // 648629157
		{ &Z_Construct_UFunction_UWidget_HasUserFocusedDescendants, "HasUserFocusedDescendants" }, // 1308748275
		{ &Z_Construct_UFunction_UWidget_InvalidateLayoutAndVolatility, "InvalidateLayoutAndVolatility" }, // 1772868864
		{ &Z_Construct_UFunction_UWidget_IsHovered, "IsHovered" }, // 3015185152
		{ &Z_Construct_UFunction_UWidget_IsInViewport, "IsInViewport" }, // 1558179420
		{ &Z_Construct_UFunction_UWidget_IsRendered, "IsRendered" }, // 1117558386
		{ &Z_Construct_UFunction_UWidget_IsVisible, "IsVisible" }, // 2029232119
		{ &Z_Construct_UFunction_UWidget_K2_AddFieldValueChangedDelegate, "K2_AddFieldValueChangedDelegate" }, // 528955472
		{ &Z_Construct_UFunction_UWidget_K2_BroadcastFieldValueChanged, "K2_BroadcastFieldValueChanged" }, // 468594378
		{ &Z_Construct_UFunction_UWidget_K2_RemoveFieldValueChangedDelegate, "K2_RemoveFieldValueChangedDelegate" }, // 2235395055
		{ &Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, "OnPointerEvent__DelegateSignature" }, // 951480833
		{ &Z_Construct_UDelegateFunction_UWidget_OnReply__DelegateSignature, "OnReply__DelegateSignature" }, // 67944816
		{ &Z_Construct_UFunction_UWidget_RemoveFromParent, "RemoveFromParent" }, // 2055986741
		{ &Z_Construct_UFunction_UWidget_ResetCursor, "ResetCursor" }, // 3183692004
		{ &Z_Construct_UFunction_UWidget_SetAllNavigationRules, "SetAllNavigationRules" }, // 2598120274
		{ &Z_Construct_UFunction_UWidget_SetClipping, "SetClipping" }, // 3271220567
		{ &Z_Construct_UFunction_UWidget_SetCursor, "SetCursor" }, // 3978153258
		{ &Z_Construct_UFunction_UWidget_SetFocus, "SetFocus" }, // 2199793677
		{ &Z_Construct_UFunction_UWidget_SetIsEnabled, "SetIsEnabled" }, // 3868523310
		{ &Z_Construct_UFunction_UWidget_SetKeyboardFocus, "SetKeyboardFocus" }, // 82661950
		{ &Z_Construct_UFunction_UWidget_SetNavigationRule, "SetNavigationRule" }, // 82765777
		{ &Z_Construct_UFunction_UWidget_SetNavigationRuleBase, "SetNavigationRuleBase" }, // 1621947422
		{ &Z_Construct_UFunction_UWidget_SetNavigationRuleCustom, "SetNavigationRuleCustom" }, // 3681327589
		{ &Z_Construct_UFunction_UWidget_SetNavigationRuleCustomBoundary, "SetNavigationRuleCustomBoundary" }, // 3722142424
		{ &Z_Construct_UFunction_UWidget_SetNavigationRuleExplicit, "SetNavigationRuleExplicit" }, // 2872331239
		{ &Z_Construct_UFunction_UWidget_SetRenderOpacity, "SetRenderOpacity" }, // 333238176
		{ &Z_Construct_UFunction_UWidget_SetRenderScale, "SetRenderScale" }, // 1525394285
		{ &Z_Construct_UFunction_UWidget_SetRenderShear, "SetRenderShear" }, // 356402409
		{ &Z_Construct_UFunction_UWidget_SetRenderTransform, "SetRenderTransform" }, // 921896076
		{ &Z_Construct_UFunction_UWidget_SetRenderTransformAngle, "SetRenderTransformAngle" }, // 135367215
		{ &Z_Construct_UFunction_UWidget_SetRenderTransformPivot, "SetRenderTransformPivot" }, // 2518396273
		{ &Z_Construct_UFunction_UWidget_SetRenderTranslation, "SetRenderTranslation" }, // 812679238
		{ &Z_Construct_UFunction_UWidget_SetToolTip, "SetToolTip" }, // 1178141593
		{ &Z_Construct_UFunction_UWidget_SetToolTipText, "SetToolTipText" }, // 370264060
		{ &Z_Construct_UFunction_UWidget_SetUserFocus, "SetUserFocus" }, // 4008847788
		{ &Z_Construct_UFunction_UWidget_SetVisibility, "SetVisibility" }, // 2921933160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x011640000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, Slot), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabledDelegate = { "bIsEnabledDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, bIsEnabledDelegate), Z_Construct_UDelegateFunction_UWidget_GetBool__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabledDelegate_MetaData), NewProp_bIsEnabledDelegate_MetaData) }; // 3771472630
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipTextDelegate = { "ToolTipTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, ToolTipTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipTextDelegate_MetaData), NewProp_ToolTipTextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipText = { "ToolTipText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetToolTipText_WrapperImpl, &UWidget::GetToolTipText_WrapperImpl, 1, STRUCT_OFFSET(UWidget, ToolTipText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipText_MetaData), NewProp_ToolTipText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipWidget = { "ToolTipWidget", nullptr, (EPropertyFlags)0x01140400000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetToolTipWidget_WrapperImpl, &UWidget::GetToolTipWidget_WrapperImpl, 1, STRUCT_OFFSET(UWidget, ToolTipWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipWidget_MetaData), NewProp_ToolTipWidget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipWidgetDelegate = { "ToolTipWidgetDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, ToolTipWidgetDelegate), Z_Construct_UDelegateFunction_UWidget_GetWidget__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipWidgetDelegate_MetaData), NewProp_ToolTipWidgetDelegate_MetaData) }; // 1293422287
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_VisibilityDelegate = { "VisibilityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, VisibilityDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateVisibility__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityDelegate_MetaData), NewProp_VisibilityDelegate_MetaData) }; // 2981937729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_RenderTransform = { "RenderTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetRenderTransform_WrapperImpl, &UWidget::GetRenderTransform_WrapperImpl, 1, STRUCT_OFFSET(UWidget, RenderTransform), Z_Construct_UScriptStruct_FWidgetTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTransform_MetaData), NewProp_RenderTransform_MetaData) }; // 201331753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_RenderTransformPivot = { "RenderTransformPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetRenderTransformPivot_WrapperImpl, &UWidget::GetRenderTransformPivot_WrapperImpl, 1, STRUCT_OFFSET(UWidget, RenderTransformPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTransformPivot_MetaData), NewProp_RenderTransformPivot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_FlowDirectionPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_FlowDirectionPreference = { "FlowDirectionPreference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetFlowDirectionPreference_WrapperImpl, &UWidget::GetFlowDirectionPreference_WrapperImpl, 1, STRUCT_OFFSET(UWidget, FlowDirectionPreference), Z_Construct_UEnum_SlateCore_EFlowDirectionPreference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowDirectionPreference_MetaData), NewProp_FlowDirectionPreference_MetaData) }; // 2187315268
void Z_Construct_UClass_UWidget_Statics::NewProp_bIsVariable_SetBit(void* Obj)
{
	((UWidget*)Obj)->bIsVariable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bIsVariable = { "bIsVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bIsVariable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVariable_MetaData), NewProp_bIsVariable_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bCreatedByConstructionScript_SetBit(void* Obj)
{
	((UWidget*)Obj)->bCreatedByConstructionScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bCreatedByConstructionScript = { "bCreatedByConstructionScript", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bCreatedByConstructionScript_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatedByConstructionScript_MetaData), NewProp_bCreatedByConstructionScript_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UWidget*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetbIsEnabled_WrapperImpl, &UWidget::GetbIsEnabled_WrapperImpl, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bOverride_Cursor_SetBit(void* Obj)
{
	((UWidget*)Obj)->bOverride_Cursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bOverride_Cursor = { "bOverride_Cursor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bOverride_Cursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Cursor_MetaData), NewProp_bOverride_Cursor_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWidget_Statics::NewProp_bOverrideAccessibleDefaults_SetBit(void* Obj)
{
	((UWidget*)Obj)->bOverrideAccessibleDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bOverrideAccessibleDefaults = { "bOverrideAccessibleDefaults", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bOverrideAccessibleDefaults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAccessibleDefaults_MetaData), NewProp_bOverrideAccessibleDefaults_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bCanChildrenBeAccessible_SetBit(void* Obj)
{
	((UWidget*)Obj)->bCanChildrenBeAccessible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bCanChildrenBeAccessible = { "bCanChildrenBeAccessible", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bCanChildrenBeAccessible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanChildrenBeAccessible_MetaData), NewProp_bCanChildrenBeAccessible_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleBehavior = { "AccessibleBehavior", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleBehavior_MetaData), NewProp_AccessibleBehavior_MetaData) }; // 2421214166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryBehavior = { "AccessibleSummaryBehavior", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleSummaryBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryBehavior_MetaData), NewProp_AccessibleSummaryBehavior_MetaData) }; // 2421214166
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleText = { "AccessibleText", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleText_MetaData), NewProp_AccessibleText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleTextDelegate = { "AccessibleTextDelegate", nullptr, (EPropertyFlags)0x0010000800080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleTextDelegate_MetaData), NewProp_AccessibleTextDelegate_MetaData) }; // 1712476551
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryText = { "AccessibleSummaryText", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleSummaryText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryText_MetaData), NewProp_AccessibleSummaryText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryTextDelegate = { "AccessibleSummaryTextDelegate", nullptr, (EPropertyFlags)0x0010000800080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleSummaryTextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryTextDelegate_MetaData), NewProp_AccessibleSummaryTextDelegate_MetaData) }; // 1712476551
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWidget_Statics::NewProp_bIsVolatile_SetBit(void* Obj)
{
	((UWidget*)Obj)->bIsVolatile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bIsVolatile = { "bIsVolatile", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bIsVolatile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVolatile_MetaData), NewProp_bIsVolatile_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UWidget_Statics::NewProp_bHiddenInDesigner_SetBit(void* Obj)
{
	((UWidget*)Obj)->bHiddenInDesigner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bHiddenInDesigner = { "bHiddenInDesigner", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bHiddenInDesigner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInDesigner_MetaData), NewProp_bHiddenInDesigner_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bExpandedInDesigner_SetBit(void* Obj)
{
	((UWidget*)Obj)->bExpandedInDesigner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bExpandedInDesigner = { "bExpandedInDesigner", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bExpandedInDesigner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandedInDesigner_MetaData), NewProp_bExpandedInDesigner_MetaData) };
void Z_Construct_UClass_UWidget_Statics::NewProp_bLockedInDesigner_SetBit(void* Obj)
{
	((UWidget*)Obj)->bLockedInDesigner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_bLockedInDesigner = { "bLockedInDesigner", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UWidget), &Z_Construct_UClass_UWidget_Statics::NewProp_bLockedInDesigner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockedInDesigner_MetaData), NewProp_bLockedInDesigner_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetCursor_WrapperImpl, &UWidget::GetCursor_WrapperImpl, 1, STRUCT_OFFSET(UWidget, Cursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cursor_MetaData), NewProp_Cursor_MetaData) }; // 2895712077
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Clipping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Clipping = { "Clipping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetClipping_WrapperImpl, &UWidget::GetClipping_WrapperImpl, 1, STRUCT_OFFSET(UWidget, Clipping), Z_Construct_UEnum_SlateCore_EWidgetClipping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clipping_MetaData), NewProp_Clipping_MetaData) }; // 950503845
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetVisibility_WrapperImpl, &UWidget::GetVisibility_WrapperImpl, 1, STRUCT_OFFSET(UWidget, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 2974316103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_PixelSnapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_PixelSnapping = { "PixelSnapping", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetPixelSnapping_WrapperImpl, &UWidget::GetPixelSnapping_WrapperImpl, 1, STRUCT_OFFSET(UWidget, PixelSnapping), Z_Construct_UEnum_SlateCore_EWidgetPixelSnapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelSnapping_MetaData), NewProp_PixelSnapping_MetaData) }; // 3249707767
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_RenderOpacity = { "RenderOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UWidget::SetRenderOpacity_WrapperImpl, &UWidget::GetRenderOpacity_WrapperImpl, 1, STRUCT_OFFSET(UWidget, RenderOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderOpacity_MetaData), NewProp_RenderOpacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleWidgetData = { "AccessibleWidgetData", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, AccessibleWidgetData), Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleWidgetData_MetaData), NewProp_AccessibleWidgetData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_Navigation = { "Navigation", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, Navigation), Z_Construct_UClass_UWidgetNavigation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Navigation_MetaData), NewProp_Navigation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_NativeBindings_Inner = { "NativeBindings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPropertyBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_NativeBindings = { "NativeBindings", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, NativeBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeBindings_MetaData), NewProp_NativeBindings_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_DesignerFlags = { "DesignerFlags", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, DesignerFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignerFlags_MetaData), NewProp_DesignerFlags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidget_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabledDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_ToolTipWidgetDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_VisibilityDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_RenderTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_RenderTransformPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_FlowDirectionPreference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_FlowDirectionPreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bIsVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bCreatedByConstructionScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bOverride_Cursor,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bOverrideAccessibleDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bCanChildrenBeAccessible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleSummaryTextDelegate,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bIsVolatile,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bHiddenInDesigner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bExpandedInDesigner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_bLockedInDesigner,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Cursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Clipping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Clipping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_PixelSnapping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_PixelSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_RenderOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_AccessibleWidgetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_Navigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_NativeBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_NativeBindings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_DesignerFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_DisplayLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Statics::NewProp_CategoryName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVisual,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, (int32)VTABLE_OFFSET(UWidget, INotifyFieldValueChanged), false },  // 1691237991
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Statics::ClassParams = {
	&UWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget()
{
	if (!Z_Registration_Info_UClass_UWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget.OuterSingleton, Z_Construct_UClass_UWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidget>()
{
	return UWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget);
UWidget::~UWidget() {}
// End Class UWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWidgetDesignFlags_StaticEnum, TEXT("EWidgetDesignFlags"), &Z_Registration_Info_UEnum_EWidgetDesignFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3428772166U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget, UWidget::StaticClass, TEXT("UWidget"), &Z_Registration_Info_UClass_UWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget), 4288183525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_3737404144(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
