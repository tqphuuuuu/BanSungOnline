// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/BackgroundBlurSlot.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurSlot() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlurSlot();
UMG_API UClass* Z_Construct_UClass_UBackgroundBlurSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UBackgroundBlurSlot Function SetHorizontalAlignment
struct Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics
{
	struct BackgroundBlurSlot_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::BackgroundBlurSlot_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::BackgroundBlurSlot_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurSlot::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UBackgroundBlurSlot Function SetHorizontalAlignment

// Begin Class UBackgroundBlurSlot Function SetPadding
struct Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics
{
	struct BackgroundBlurSlot_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::BackgroundBlurSlot_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::BackgroundBlurSlot_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurSlot::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UBackgroundBlurSlot Function SetPadding

// Begin Class UBackgroundBlurSlot Function SetVerticalAlignment
struct Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics
{
	struct BackgroundBlurSlot_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::BackgroundBlurSlot_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::BackgroundBlurSlot_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurSlot::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UBackgroundBlurSlot Function SetVerticalAlignment

// Begin Class UBackgroundBlurSlot
void UBackgroundBlurSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlurSlot* Obj = (UBackgroundBlurSlot*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void UBackgroundBlurSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlurSlot* Obj = (UBackgroundBlurSlot*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void UBackgroundBlurSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UBackgroundBlurSlot* Obj = (UBackgroundBlurSlot*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void UBackgroundBlurSlot::StaticRegisterNativesUBackgroundBlurSlot()
{
	UClass* Class = UBackgroundBlurSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHorizontalAlignment", &UBackgroundBlurSlot::execSetHorizontalAlignment },
		{ "SetPadding", &UBackgroundBlurSlot::execSetPadding },
		{ "SetVerticalAlignment", &UBackgroundBlurSlot::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackgroundBlurSlot);
UClass* Z_Construct_UClass_UBackgroundBlurSlot_NoRegister()
{
	return UBackgroundBlurSlot::StaticClass();
}
struct Z_Construct_UClass_UBackgroundBlurSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Slot for the UBackgroundBlurSlot, contains the widget displayed in a BackgroundBlur's single slot\n */" },
		{ "IncludePath", "Components/BackgroundBlurSlot.h" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
		{ "ToolTip", "The Slot for the UBackgroundBlurSlot, contains the widget displayed in a BackgroundBlur's single slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/BackgroundBlurSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1613303236
		{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetPadding, "SetPadding" }, // 2877043517
		{ &Z_Construct_UFunction_UBackgroundBlurSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 1568481066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlurSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlurSlot::SetPadding_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlurSlot::SetHorizontalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UBackgroundBlurSlot::SetVerticalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlurSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurSlot_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBackgroundBlurSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundBlurSlot_Statics::ClassParams = {
	&UBackgroundBlurSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackgroundBlurSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackgroundBlurSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBackgroundBlurSlot()
{
	if (!Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton, Z_Construct_UClass_UBackgroundBlurSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackgroundBlurSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UBackgroundBlurSlot>()
{
	return UBackgroundBlurSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlurSlot);
UBackgroundBlurSlot::~UBackgroundBlurSlot() {}
// End Class UBackgroundBlurSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlurSlot, UBackgroundBlurSlot::StaticClass, TEXT("UBackgroundBlurSlot"), &Z_Registration_Info_UClass_UBackgroundBlurSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlurSlot), 357239420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_2872884764(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
