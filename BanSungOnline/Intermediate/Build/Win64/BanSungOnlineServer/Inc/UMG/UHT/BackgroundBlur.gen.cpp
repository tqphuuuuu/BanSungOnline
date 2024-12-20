// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlur() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlur();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UBackgroundBlur Function SetApplyAlphaToBlur
struct Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics
{
	struct BackgroundBlur_eventSetApplyAlphaToBlur_Parms
	{
		bool bInApplyAlphaToBlur;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInApplyAlphaToBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInApplyAlphaToBlur;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit(void* Obj)
{
	((BackgroundBlur_eventSetApplyAlphaToBlur_Parms*)Obj)->bInApplyAlphaToBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur = { "bInApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundBlur_eventSetApplyAlphaToBlur_Parms), &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetApplyAlphaToBlur", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::BackgroundBlur_eventSetApplyAlphaToBlur_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::BackgroundBlur_eventSetApplyAlphaToBlur_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetApplyAlphaToBlur)
{
	P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetApplyAlphaToBlur

// Begin Class UBackgroundBlur Function SetBlurRadius
struct Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics
{
	struct BackgroundBlur_eventSetBlurRadius_Parms
	{
		int32 InBlurRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InBlurRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::NewProp_InBlurRadius = { "InBlurRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetBlurRadius_Parms, InBlurRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::NewProp_InBlurRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetBlurRadius", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::BackgroundBlur_eventSetBlurRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::BackgroundBlur_eventSetBlurRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetBlurRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InBlurRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlurRadius(Z_Param_InBlurRadius);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetBlurRadius

// Begin Class UBackgroundBlur Function SetBlurStrength
struct Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics
{
	struct BackgroundBlur_eventSetBlurStrength_Parms
	{
		float InStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::NewProp_InStrength = { "InStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetBlurStrength_Parms, InStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::NewProp_InStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetBlurStrength", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::BackgroundBlur_eventSetBlurStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::BackgroundBlur_eventSetBlurStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetBlurStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlurStrength(Z_Param_InStrength);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetBlurStrength

// Begin Class UBackgroundBlur Function SetCornerRadius
struct Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics
{
	struct BackgroundBlur_eventSetCornerRadius_Parms
	{
		FVector4 InCornerRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCornerRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::NewProp_InCornerRadius = { "InCornerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetCornerRadius_Parms, InCornerRadius), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::NewProp_InCornerRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetCornerRadius", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::BackgroundBlur_eventSetCornerRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::BackgroundBlur_eventSetCornerRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetCornerRadius)
{
	P_GET_STRUCT(FVector4,Z_Param_InCornerRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCornerRadius(Z_Param_InCornerRadius);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetCornerRadius

// Begin Class UBackgroundBlur Function SetHorizontalAlignment
struct Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics
{
	struct BackgroundBlur_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::BackgroundBlur_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::BackgroundBlur_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetHorizontalAlignment

// Begin Class UBackgroundBlur Function SetLowQualityFallbackBrush
struct Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics
{
	struct BackgroundBlur_eventSetLowQualityFallbackBrush_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetLowQualityFallbackBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetLowQualityFallbackBrush", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::BackgroundBlur_eventSetLowQualityFallbackBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::BackgroundBlur_eventSetLowQualityFallbackBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetLowQualityFallbackBrush)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetLowQualityFallbackBrush

// Begin Class UBackgroundBlur Function SetPadding
struct Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics
{
	struct BackgroundBlur_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::BackgroundBlur_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::BackgroundBlur_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetPadding

// Begin Class UBackgroundBlur Function SetVerticalAlignment
struct Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics
{
	struct BackgroundBlur_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlur_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlur, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::BackgroundBlur_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::BackgroundBlur_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlur::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UBackgroundBlur Function SetVerticalAlignment

// Begin Class UBackgroundBlur
void UBackgroundBlur::GetPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetPadding();
}
void UBackgroundBlur::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void UBackgroundBlur::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetHorizontalAlignment();
}
void UBackgroundBlur::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void UBackgroundBlur::GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetVerticalAlignment();
}
void UBackgroundBlur::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void UBackgroundBlur::GetbApplyAlphaToBlur_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetApplyAlphaToBlur();
}
void UBackgroundBlur::SetbApplyAlphaToBlur_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetApplyAlphaToBlur(Value);
}
void UBackgroundBlur::GetBlurStrength_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetBlurStrength();
}
void UBackgroundBlur::SetBlurStrength_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	float& Value = *(float*)InValue;
	Obj->SetBlurStrength(Value);
}
void UBackgroundBlur::GetbOverrideAutoRadiusCalculation_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetOverrideAutoRadiusCalculation();
}
void UBackgroundBlur::SetbOverrideAutoRadiusCalculation_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetOverrideAutoRadiusCalculation(Value);
}
void UBackgroundBlur::GetBlurRadius_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetBlurRadius();
}
void UBackgroundBlur::SetBlurRadius_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetBlurRadius(Value);
}
void UBackgroundBlur::GetCornerRadius_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	FVector4& Result = *(FVector4*)OutValue;
	Result = (FVector4)Obj->GetCornerRadius();
}
void UBackgroundBlur::SetCornerRadius_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	FVector4& Value = *(FVector4*)InValue;
	Obj->SetCornerRadius(Value);
}
void UBackgroundBlur::GetLowQualityFallbackBrush_WrapperImpl(const void* Object, void* OutValue)
{
	const UBackgroundBlur* Obj = (const UBackgroundBlur*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetLowQualityFallbackBrush();
}
void UBackgroundBlur::SetLowQualityFallbackBrush_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlur* Obj = (UBackgroundBlur*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetLowQualityFallbackBrush(Value);
}
void UBackgroundBlur::StaticRegisterNativesUBackgroundBlur()
{
	UClass* Class = UBackgroundBlur::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetApplyAlphaToBlur", &UBackgroundBlur::execSetApplyAlphaToBlur },
		{ "SetBlurRadius", &UBackgroundBlur::execSetBlurRadius },
		{ "SetBlurStrength", &UBackgroundBlur::execSetBlurStrength },
		{ "SetCornerRadius", &UBackgroundBlur::execSetCornerRadius },
		{ "SetHorizontalAlignment", &UBackgroundBlur::execSetHorizontalAlignment },
		{ "SetLowQualityFallbackBrush", &UBackgroundBlur::execSetLowQualityFallbackBrush },
		{ "SetPadding", &UBackgroundBlur::execSetPadding },
		{ "SetVerticalAlignment", &UBackgroundBlur::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackgroundBlur);
UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister()
{
	return UBackgroundBlur::StaticClass();
}
struct Z_Construct_UClass_UBackgroundBlur_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A background blur is a container widget that can contain one child widget, providing an opportunity \n * to surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.\n *\n * * Single Child\n * * Blur Effect\n */" },
		{ "IncludePath", "Components/BackgroundBlur.h" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "A background blur is a container widget that can contain one child widget, providing an opportunity\nto surround it with adjustable padding and apply a post-process Gaussian blur to all content beneath the widget.\n\n* Single Child\n* Blur Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaToBlur_MetaData[] = {
		{ "BlueprintSetter", "SetApplyAlphaToBlur" },
		{ "Category", "Content" },
		{ "Comment", "/** True to modulate the strength of the blur based on the widget alpha. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "True to modulate the strength of the blur based on the widget alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurStrength_MetaData[] = {
		{ "BlueprintSetter", "SetBlurStrength" },
		{ "Category", "Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the GPU.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the GPU." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutoRadiusCalculation_MetaData[] = {
		{ "Comment", "/** When OverrideAutoRadiusCalculation is set to true, BlurRadius is used for the radius of the blur. When false, it's automatically calculated using the BlurStength value. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "When OverrideAutoRadiusCalculation is set to true, BlurRadius is used for the radius of the blur. When false, it's automatically calculated using the BlurStength value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[] = {
		{ "BlueprintSetter", "SetBlurRadius" },
		{ "Category", "Appearance" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\n\x09 * A larger value is more costly but allows for stronger blurs.\n\x09 */" },
		{ "EditCondition", "bOverrideAutoRadiusCalculation" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "BlueprintSetter", "SetCornerRadius" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\n\x09 * A larger value is more costly but allows for stronger blurs.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowQualityFallbackBrush_MetaData[] = {
		{ "BlueprintSetter", "SetLowQualityFallbackBrush" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * An image to draw instead of applying a blur when low quality override mode is enabled. \n\x09 * You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1. \n\x09 * This is usually done in the project's scalability settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlur.h" },
		{ "ToolTip", "An image to draw instead of applying a blur when low quality override mode is enabled.\nYou can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\nThis is usually done in the project's scalability settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static void NewProp_bApplyAlphaToBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaToBlur;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurStrength;
	static void NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutoRadiusCalculation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowQualityFallbackBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlur_SetApplyAlphaToBlur, "SetApplyAlphaToBlur" }, // 83655502
		{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurRadius, "SetBlurRadius" }, // 2035197337
		{ &Z_Construct_UFunction_UBackgroundBlur_SetBlurStrength, "SetBlurStrength" }, // 2996727726
		{ &Z_Construct_UFunction_UBackgroundBlur_SetCornerRadius, "SetCornerRadius" }, // 3464429976
		{ &Z_Construct_UFunction_UBackgroundBlur_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 4268154861
		{ &Z_Construct_UFunction_UBackgroundBlur_SetLowQualityFallbackBrush, "SetLowQualityFallbackBrush" }, // 900427057
		{ &Z_Construct_UFunction_UBackgroundBlur_SetPadding, "SetPadding" }, // 2247983477
		{ &Z_Construct_UFunction_UBackgroundBlur_SetVerticalAlignment, "SetVerticalAlignment" }, // 1731729051
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlur>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetPadding_WrapperImpl, &UBackgroundBlur::GetPadding_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetHorizontalAlignment_WrapperImpl, &UBackgroundBlur::GetHorizontalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetVerticalAlignment_WrapperImpl, &UBackgroundBlur::GetVerticalAlignment_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
void Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_SetBit(void* Obj)
{
	((UBackgroundBlur*)Obj)->bApplyAlphaToBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur = { "bApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetbApplyAlphaToBlur_WrapperImpl, &UBackgroundBlur::GetbApplyAlphaToBlur_WrapperImpl, 1, sizeof(bool), sizeof(UBackgroundBlur), &Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAlphaToBlur_MetaData), NewProp_bApplyAlphaToBlur_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength = { "BlurStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetBlurStrength_WrapperImpl, &UBackgroundBlur::GetBlurStrength_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, BlurStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurStrength_MetaData), NewProp_BlurStrength_MetaData) };
void Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj)
{
	((UBackgroundBlur*)Obj)->bOverrideAutoRadiusCalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation = { "bOverrideAutoRadiusCalculation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetbOverrideAutoRadiusCalculation_WrapperImpl, &UBackgroundBlur::GetbOverrideAutoRadiusCalculation_WrapperImpl, 1, sizeof(bool), sizeof(UBackgroundBlur), &Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAutoRadiusCalculation_MetaData), NewProp_bOverrideAutoRadiusCalculation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetBlurRadius_WrapperImpl, &UBackgroundBlur::GetBlurRadius_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, BlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadius_MetaData), NewProp_BlurRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetCornerRadius_WrapperImpl, &UBackgroundBlur::GetCornerRadius_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, CornerRadius), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush = { "LowQualityFallbackBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlur::SetLowQualityFallbackBrush_WrapperImpl, &UBackgroundBlur::GetLowQualityFallbackBrush_WrapperImpl, 1, STRUCT_OFFSET(UBackgroundBlur, LowQualityFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowQualityFallbackBrush_MetaData), NewProp_LowQualityFallbackBrush_MetaData) }; // 4269649686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bApplyAlphaToBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_bOverrideAutoRadiusCalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_BlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlur_Statics::NewProp_LowQualityFallbackBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackgroundBlur_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundBlur_Statics::ClassParams = {
	&UBackgroundBlur::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlur_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackgroundBlur_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackgroundBlur()
{
	if (!Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton, Z_Construct_UClass_UBackgroundBlur_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackgroundBlur.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UBackgroundBlur>()
{
	return UBackgroundBlur::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlur);
UBackgroundBlur::~UBackgroundBlur() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlur)
// End Class UBackgroundBlur

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlur, UBackgroundBlur::StaticClass, TEXT("UBackgroundBlur"), &Z_Registration_Info_UClass_UBackgroundBlur, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlur), 1972511683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_2008295716(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
