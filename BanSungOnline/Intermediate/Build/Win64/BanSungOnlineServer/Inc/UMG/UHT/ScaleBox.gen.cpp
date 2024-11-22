// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleBox() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UClass* Z_Construct_UClass_UScaleBox();
UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UScaleBox Function SetIgnoreInheritedScale
struct Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics
{
	struct ScaleBox_eventSetIgnoreInheritedScale_Parms
	{
		bool bInIgnoreInheritedScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIgnoreInheritedScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreInheritedScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale_SetBit(void* Obj)
{
	((ScaleBox_eventSetIgnoreInheritedScale_Parms*)Obj)->bInIgnoreInheritedScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale = { "bInIgnoreInheritedScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScaleBox_eventSetIgnoreInheritedScale_Parms), &Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetIgnoreInheritedScale", nullptr, nullptr, Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::ScaleBox_eventSetIgnoreInheritedScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::ScaleBox_eventSetIgnoreInheritedScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScaleBox::execSetIgnoreInheritedScale)
{
	P_GET_UBOOL(Z_Param_bInIgnoreInheritedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIgnoreInheritedScale(Z_Param_bInIgnoreInheritedScale);
	P_NATIVE_END;
}
// End Class UScaleBox Function SetIgnoreInheritedScale

// Begin Class UScaleBox Function SetStretch
struct Z_Construct_UFunction_UScaleBox_SetStretch_Statics
{
	struct ScaleBox_eventSetStretch_Parms
	{
		TEnumAsByte<EStretch::Type> InStretch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InStretch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBox_SetStretch_Statics::NewProp_InStretch = { "InStretch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScaleBox_eventSetStretch_Parms, InStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(0, nullptr) }; // 1637697150
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetStretch_Statics::NewProp_InStretch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetStretch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetStretch", nullptr, nullptr, Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::ScaleBox_eventSetStretch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScaleBox_SetStretch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::ScaleBox_eventSetStretch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScaleBox_SetStretch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBox_SetStretch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScaleBox::execSetStretch)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InStretch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStretch(EStretch::Type(Z_Param_InStretch));
	P_NATIVE_END;
}
// End Class UScaleBox Function SetStretch

// Begin Class UScaleBox Function SetStretchDirection
struct Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics
{
	struct ScaleBox_eventSetStretchDirection_Parms
	{
		TEnumAsByte<EStretchDirection::Type> InStretchDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InStretchDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::NewProp_InStretchDirection = { "InStretchDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScaleBox_eventSetStretchDirection_Parms, InStretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(0, nullptr) }; // 2532123891
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::NewProp_InStretchDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetStretchDirection", nullptr, nullptr, Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::ScaleBox_eventSetStretchDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::ScaleBox_eventSetStretchDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScaleBox_SetStretchDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScaleBox::execSetStretchDirection)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InStretchDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStretchDirection(EStretchDirection::Type(Z_Param_InStretchDirection));
	P_NATIVE_END;
}
// End Class UScaleBox Function SetStretchDirection

// Begin Class UScaleBox Function SetUserSpecifiedScale
struct Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics
{
	struct ScaleBox_eventSetUserSpecifiedScale_Parms
	{
		float InUserSpecifiedScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InUserSpecifiedScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::NewProp_InUserSpecifiedScale = { "InUserSpecifiedScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScaleBox_eventSetUserSpecifiedScale_Parms, InUserSpecifiedScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::NewProp_InUserSpecifiedScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetUserSpecifiedScale", nullptr, nullptr, Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::ScaleBox_eventSetUserSpecifiedScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::ScaleBox_eventSetUserSpecifiedScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScaleBox::execSetUserSpecifiedScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InUserSpecifiedScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserSpecifiedScale(Z_Param_InUserSpecifiedScale);
	P_NATIVE_END;
}
// End Class UScaleBox Function SetUserSpecifiedScale

// Begin Class UScaleBox
void UScaleBox::GetStretch_WrapperImpl(const void* Object, void* OutValue)
{
	const UScaleBox* Obj = (const UScaleBox*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetStretch();
}
void UScaleBox::SetStretch_WrapperImpl(void* Object, const void* InValue)
{
	UScaleBox* Obj = (UScaleBox*)Object;
	EStretch::Type Value = (EStretch::Type)*(uint8*)InValue;
	Obj->SetStretch(Value);
}
void UScaleBox::GetStretchDirection_WrapperImpl(const void* Object, void* OutValue)
{
	const UScaleBox* Obj = (const UScaleBox*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetStretchDirection();
}
void UScaleBox::SetStretchDirection_WrapperImpl(void* Object, const void* InValue)
{
	UScaleBox* Obj = (UScaleBox*)Object;
	EStretchDirection::Type Value = (EStretchDirection::Type)*(uint8*)InValue;
	Obj->SetStretchDirection(Value);
}
void UScaleBox::GetUserSpecifiedScale_WrapperImpl(const void* Object, void* OutValue)
{
	const UScaleBox* Obj = (const UScaleBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetUserSpecifiedScale();
}
void UScaleBox::SetUserSpecifiedScale_WrapperImpl(void* Object, const void* InValue)
{
	UScaleBox* Obj = (UScaleBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetUserSpecifiedScale(Value);
}
void UScaleBox::GetIgnoreInheritedScale_WrapperImpl(const void* Object, void* OutValue)
{
	const UScaleBox* Obj = (const UScaleBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsIgnoreInheritedScale();
}
void UScaleBox::SetIgnoreInheritedScale_WrapperImpl(void* Object, const void* InValue)
{
	UScaleBox* Obj = (UScaleBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIgnoreInheritedScale(Value);
}
void UScaleBox::StaticRegisterNativesUScaleBox()
{
	UClass* Class = UScaleBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetIgnoreInheritedScale", &UScaleBox::execSetIgnoreInheritedScale },
		{ "SetStretch", &UScaleBox::execSetStretch },
		{ "SetStretchDirection", &UScaleBox::execSetStretchDirection },
		{ "SetUserSpecifiedScale", &UScaleBox::execSetUserSpecifiedScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleBox);
UClass* Z_Construct_UClass_UScaleBox_NoRegister()
{
	return UScaleBox::StaticClass();
}
struct Z_Construct_UClass_UScaleBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If\n * you needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need\n * to auto fit some text to an area, this is the control for you.\n *\n * * Single Child\n * * Aspect Ratio\n */" },
		{ "IncludePath", "Components/ScaleBox.h" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If\nyou needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need\nto auto fit some text to an area, this is the control for you.\n\n* Single Child\n* Aspect Ratio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[] = {
		{ "BlueprintSetter", "SetStretch" },
		{ "Category", "Stretching" },
		{ "Comment", "/** The stretching rule to apply when content is stretched */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "The stretching rule to apply when content is stretched" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchDirection_MetaData[] = {
		{ "BlueprintSetter", "SetStretchDirection" },
		{ "Category", "Stretching" },
		{ "Comment", "/** Controls in what direction content can be scaled */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Controls in what direction content can be scaled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSpecifiedScale_MetaData[] = {
		{ "BlueprintSetter", "SetUserSpecifiedScale" },
		{ "Category", "Stretching" },
		{ "Comment", "/** Optional scale that can be specified by the User. Used only for UserSpecified stretching. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Optional scale that can be specified by the User. Used only for UserSpecified stretching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreInheritedScale_MetaData[] = {
		{ "BlueprintSetter", "SetIgnoreInheritedScale" },
		{ "Category", "Stretching" },
		{ "Comment", "/** Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stretch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StretchDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserSpecifiedScale;
	static void NewProp_IgnoreInheritedScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreInheritedScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale, "SetIgnoreInheritedScale" }, // 1964824384
		{ &Z_Construct_UFunction_UScaleBox_SetStretch, "SetStretch" }, // 692610989
		{ &Z_Construct_UFunction_UScaleBox_SetStretchDirection, "SetStretchDirection" }, // 3406652699
		{ &Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale, "SetUserSpecifiedScale" }, // 181820748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UScaleBox::SetStretch_WrapperImpl, &UScaleBox::GetStretch_WrapperImpl, 1, STRUCT_OFFSET(UScaleBox, Stretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stretch_MetaData), NewProp_Stretch_MetaData) }; // 1637697150
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection = { "StretchDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UScaleBox::SetStretchDirection_WrapperImpl, &UScaleBox::GetStretchDirection_WrapperImpl, 1, STRUCT_OFFSET(UScaleBox, StretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchDirection_MetaData), NewProp_StretchDirection_MetaData) }; // 2532123891
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale = { "UserSpecifiedScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UScaleBox::SetUserSpecifiedScale_WrapperImpl, &UScaleBox::GetUserSpecifiedScale_WrapperImpl, 1, STRUCT_OFFSET(UScaleBox, UserSpecifiedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSpecifiedScale_MetaData), NewProp_UserSpecifiedScale_MetaData) };
void Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_SetBit(void* Obj)
{
	((UScaleBox*)Obj)->IgnoreInheritedScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale = { "IgnoreInheritedScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UScaleBox::SetIgnoreInheritedScale_WrapperImpl, &UScaleBox::GetIgnoreInheritedScale_WrapperImpl, 1, sizeof(bool), sizeof(UScaleBox), &Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreInheritedScale_MetaData), NewProp_IgnoreInheritedScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScaleBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleBox_Statics::ClassParams = {
	&UScaleBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScaleBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UScaleBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScaleBox()
{
	if (!Z_Registration_Info_UClass_UScaleBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleBox.OuterSingleton, Z_Construct_UClass_UScaleBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScaleBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UScaleBox>()
{
	return UScaleBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleBox);
UScaleBox::~UScaleBox() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScaleBox)
// End Class UScaleBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScaleBox, UScaleBox::StaticClass, TEXT("UScaleBox"), &Z_Registration_Info_UClass_UScaleBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleBox), 3856600464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_1010241231(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS