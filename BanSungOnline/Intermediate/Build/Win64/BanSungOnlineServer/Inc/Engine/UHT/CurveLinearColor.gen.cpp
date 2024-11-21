// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRuntimeCurveLinearColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor;
class UScriptStruct* FRuntimeCurveLinearColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeCurveLinearColor"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeCurveLinearColor>()
{
	return FRuntimeCurveLinearColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves = { "ColorCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ColorCurves, FRuntimeCurveLinearColor), STRUCT_OFFSET(FRuntimeCurveLinearColor, ColorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorCurves_MetaData), NewProp_ColorCurves_MetaData) }; // 777865741
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeCurveLinearColor, ExternalCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalCurve_MetaData), NewProp_ExternalCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimeCurveLinearColor",
	Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers),
	sizeof(FRuntimeCurveLinearColor),
	alignof(FRuntimeCurveLinearColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton;
}
// End ScriptStruct FRuntimeCurveLinearColor

// Begin Class UCurveLinearColor Function GetClampedLinearColorValue
struct Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics
{
	struct CurveLinearColor_eventGetClampedLinearColorValue_Parms
	{
		float InTime;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetClampedLinearColorValue", nullptr, nullptr, Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::CurveLinearColor_eventGetClampedLinearColorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::CurveLinearColor_eventGetClampedLinearColorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveLinearColor::execGetClampedLinearColorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetClampedLinearColorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UCurveLinearColor Function GetClampedLinearColorValue

// Begin Class UCurveLinearColor Function GetLinearColorValue
struct Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics
{
	struct CurveLinearColor_eventGetLinearColorValue_Parms
	{
		float InTime;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetLinearColorValue", nullptr, nullptr, Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::CurveLinearColor_eventGetLinearColorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::CurveLinearColor_eventGetLinearColorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveLinearColor::execGetLinearColorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearColorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UCurveLinearColor Function GetLinearColorValue

// Begin Class UCurveLinearColor Function GetUnadjustedLinearColorValue
struct Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics
{
	struct CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms
	{
		float InTime;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms, InTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetUnadjustedLinearColorValue", nullptr, nullptr, Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveLinearColor::execGetUnadjustedLinearColorValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetUnadjustedLinearColorValue(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class UCurveLinearColor Function GetUnadjustedLinearColorValue

// Begin Class UCurveLinearColor
void UCurveLinearColor::StaticRegisterNativesUCurveLinearColor()
{
	UClass* Class = UCurveLinearColor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClampedLinearColorValue", &UCurveLinearColor::execGetClampedLinearColorValue },
		{ "GetLinearColorValue", &UCurveLinearColor::execGetLinearColorValue },
		{ "GetUnadjustedLinearColorValue", &UCurveLinearColor::execGetUnadjustedLinearColorValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColor);
UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister()
{
	return UCurveLinearColor::StaticClass();
}
struct Z_Construct_UClass_UCurveLinearColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "FilePath" },
		{ "IncludePath", "Curves/CurveLinearColor.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Keyframe data, one curve for red, green, blue, and alpha */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Keyframe data, one curve for red, green, blue, and alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "359.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Properties for adjusting the color of the gradient\n" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Properties for adjusting the color of the gradient" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue, "GetClampedLinearColorValue" }, // 1861503197
		{ &Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue, "GetLinearColorValue" }, // 4251088356
		{ &Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue, "GetUnadjustedLinearColorValue" }, // 2031533617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FloatCurves, UCurveLinearColor), STRUCT_OFFSET(UCurveLinearColor, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurves_MetaData), NewProp_FloatCurves_MetaData) }; // 777865741
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustHue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustHue_MetaData), NewProp_AdjustHue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustSaturation_MetaData), NewProp_AdjustSaturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightness_MetaData), NewProp_AdjustBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightnessCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightnessCurve_MetaData), NewProp_AdjustBrightnessCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustVibrance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustVibrance_MetaData), NewProp_AdjustVibrance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustMinAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMinAlpha_MetaData), NewProp_AdjustMinAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColor, AdjustMaxAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMaxAlpha_MetaData), NewProp_AdjustMaxAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveLinearColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams = {
	&UCurveLinearColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers),
	0,
	0x008820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveLinearColor()
{
	if (!Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton, Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveLinearColor>()
{
	return UCurveLinearColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColor);
UCurveLinearColor::~UCurveLinearColor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveLinearColor)
// End Class UCurveLinearColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRuntimeCurveLinearColor::StaticStruct, Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps, TEXT("RuntimeCurveLinearColor"), &Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeCurveLinearColor), 3389895945U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColor, UCurveLinearColor::StaticClass, TEXT("UCurveLinearColor"), &Z_Registration_Info_UClass_UCurveLinearColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColor), 2142277839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_2190155360(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
