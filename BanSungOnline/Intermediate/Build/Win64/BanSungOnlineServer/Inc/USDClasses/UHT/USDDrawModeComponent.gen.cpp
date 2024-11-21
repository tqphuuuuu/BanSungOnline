// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDClasses/Public/USDDrawModeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDDrawModeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_USDClasses();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdDrawModeComponent();
USDCLASSES_API UClass* Z_Construct_UClass_UUsdDrawModeComponent_NoRegister();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdDrawMode();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdModelCardFace();
USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry();
// End Cross Module References

// Begin Enum EUsdDrawMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdDrawMode;
static UEnum* EUsdDrawMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdDrawMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdDrawMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdDrawMode, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdDrawMode"));
	}
	return Z_Registration_Info_UEnum_EUsdDrawMode.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdDrawMode>()
{
	return EUsdDrawMode_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bounds.Name", "EUsdDrawMode::Bounds" },
		{ "Cards.Name", "EUsdDrawMode::Cards" },
		{ "Default.Comment", "// For now we just hide these, so that the user can't pick them on the component details panel.\n// This because we don't yet have a good way of having component changes trigger resyncs: OnObjectPropertyChanged\n// is fired immediately for each property change, and resyncing right away may cause some trouble in case it\n// deletes components (which it will in this case) and the previous callstack of the OnObjectPropertyChanged still\n// wants to interact with the component, or fire OnObjectPropertyChanged for other properties, etc.\n" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EUsdDrawMode::Default" },
		{ "Default.ToolTip", "For now we just hide these, so that the user can't pick them on the component details panel.\nThis because we don't yet have a good way of having component changes trigger resyncs: OnObjectPropertyChanged\nis fired immediately for each property change, and resyncing right away may cause some trouble in case it\ndeletes components (which it will in this case) and the previous callstack of the OnObjectPropertyChanged still\nwants to interact with the component, or fire OnObjectPropertyChanged for other properties, etc." },
		{ "Inherited.Hidden", "" },
		{ "Inherited.Name", "EUsdDrawMode::Inherited" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "Origin.Name", "EUsdDrawMode::Origin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdDrawMode::Origin", (int64)EUsdDrawMode::Origin },
		{ "EUsdDrawMode::Bounds", (int64)EUsdDrawMode::Bounds },
		{ "EUsdDrawMode::Cards", (int64)EUsdDrawMode::Cards },
		{ "EUsdDrawMode::Default", (int64)EUsdDrawMode::Default },
		{ "EUsdDrawMode::Inherited", (int64)EUsdDrawMode::Inherited },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdDrawMode",
	"EUsdDrawMode",
	Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdDrawMode()
{
	if (!Z_Registration_Info_UEnum_EUsdDrawMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdDrawMode.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdDrawMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdDrawMode.InnerSingleton;
}
// End Enum EUsdDrawMode

// Begin Enum EUsdModelCardGeometry
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdModelCardGeometry;
static UEnum* EUsdModelCardGeometry_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdModelCardGeometry.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdModelCardGeometry.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdModelCardGeometry"));
	}
	return Z_Registration_Info_UEnum_EUsdModelCardGeometry.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdModelCardGeometry>()
{
	return EUsdModelCardGeometry_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "EUsdModelCardGeometry::Box" },
		{ "Comment", "// When we're on EUsdDrawMode::Cards, describes how to draw our cards\n" },
		{ "Cross.Name", "EUsdModelCardGeometry::Cross" },
		{ "FromTexture.Hidden", "" },
		{ "FromTexture.Name", "EUsdModelCardGeometry::FromTexture" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "ToolTip", "When we're on EUsdDrawMode::Cards, describes how to draw our cards" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdModelCardGeometry::Cross", (int64)EUsdModelCardGeometry::Cross },
		{ "EUsdModelCardGeometry::Box", (int64)EUsdModelCardGeometry::Box },
		{ "EUsdModelCardGeometry::FromTexture", (int64)EUsdModelCardGeometry::FromTexture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdModelCardGeometry",
	"EUsdModelCardGeometry",
	Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry()
{
	if (!Z_Registration_Info_UEnum_EUsdModelCardGeometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdModelCardGeometry.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdModelCardGeometry.InnerSingleton;
}
// End Enum EUsdModelCardGeometry

// Begin Enum EUsdModelCardFace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdModelCardFace;
static UEnum* EUsdModelCardFace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUsdModelCardFace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUsdModelCardFace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdModelCardFace, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdModelCardFace"));
	}
	return Z_Registration_Info_UEnum_EUsdModelCardFace.OuterSingleton;
}
template<> USDCLASSES_API UEnum* StaticEnum<EUsdModelCardFace>()
{
	return EUsdModelCardFace_StaticEnum();
}
struct Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUsdModelCardFace::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "XNeg.Name", "EUsdModelCardFace::XNeg" },
		{ "XPos.Name", "EUsdModelCardFace::XPos" },
		{ "YNeg.Name", "EUsdModelCardFace::YNeg" },
		{ "YPos.Name", "EUsdModelCardFace::YPos" },
		{ "ZNeg.Name", "EUsdModelCardFace::ZNeg" },
		{ "ZPos.Name", "EUsdModelCardFace::ZPos" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUsdModelCardFace::None", (int64)EUsdModelCardFace::None },
		{ "EUsdModelCardFace::XPos", (int64)EUsdModelCardFace::XPos },
		{ "EUsdModelCardFace::YPos", (int64)EUsdModelCardFace::YPos },
		{ "EUsdModelCardFace::ZPos", (int64)EUsdModelCardFace::ZPos },
		{ "EUsdModelCardFace::XNeg", (int64)EUsdModelCardFace::XNeg },
		{ "EUsdModelCardFace::YNeg", (int64)EUsdModelCardFace::YNeg },
		{ "EUsdModelCardFace::ZNeg", (int64)EUsdModelCardFace::ZNeg },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
	nullptr,
	"EUsdModelCardFace",
	"EUsdModelCardFace",
	Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_USDClasses_EUsdModelCardFace()
{
	if (!Z_Registration_Info_UEnum_EUsdModelCardFace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdModelCardFace.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdModelCardFace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUsdModelCardFace.InnerSingleton;
}
// End Enum EUsdModelCardFace

// Begin Class UUsdDrawModeComponent Function GetTextureForFace
struct Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics
{
	struct UsdDrawModeComponent_eventGetTextureForFace_Parms
	{
		EUsdModelCardFace Face;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Face_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Face;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_Face_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_Face = { "Face", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventGetTextureForFace_Parms, Face), Z_Construct_UEnum_USDClasses_EUsdModelCardFace, METADATA_PARAMS(0, nullptr) }; // 4121093060
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventGetTextureForFace_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_Face_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_Face,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "GetTextureForFace", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::UsdDrawModeComponent_eventGetTextureForFace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::UsdDrawModeComponent_eventGetTextureForFace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execGetTextureForFace)
{
	P_GET_ENUM(EUsdModelCardFace,Z_Param_Face);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetTextureForFace(EUsdModelCardFace(Z_Param_Face));
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function GetTextureForFace

// Begin Class UUsdDrawModeComponent Function SetBoundsColor
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics
{
	struct UsdDrawModeComponent_eventSetBoundsColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetBoundsColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetBoundsColor", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::UsdDrawModeComponent_eventSetBoundsColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::UsdDrawModeComponent_eventSetBoundsColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetBoundsColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundsColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetBoundsColor

// Begin Class UUsdDrawModeComponent Function SetBoundsMax
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics
{
	struct UsdDrawModeComponent_eventSetBoundsMax_Parms
	{
		FVector NewMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMax_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::NewProp_NewMax = { "NewMax", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetBoundsMax_Parms, NewMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMax_MetaData), NewProp_NewMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::NewProp_NewMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetBoundsMax", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::UsdDrawModeComponent_eventSetBoundsMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::UsdDrawModeComponent_eventSetBoundsMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetBoundsMax)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundsMax(Z_Param_Out_NewMax);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetBoundsMax

// Begin Class UUsdDrawModeComponent Function SetBoundsMin
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics
{
	struct UsdDrawModeComponent_eventSetBoundsMin_Parms
	{
		FVector NewMin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::NewProp_NewMin = { "NewMin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetBoundsMin_Parms, NewMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMin_MetaData), NewProp_NewMin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::NewProp_NewMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetBoundsMin", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::UsdDrawModeComponent_eventSetBoundsMin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::UsdDrawModeComponent_eventSetBoundsMin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetBoundsMin)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewMin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundsMin(Z_Param_Out_NewMin);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetBoundsMin

// Begin Class UUsdDrawModeComponent Function SetCardGeometry
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics
{
	struct UsdDrawModeComponent_eventSetCardGeometry_Parms
	{
		EUsdModelCardGeometry NewGeometry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGeometry_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::NewProp_NewGeometry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::NewProp_NewGeometry = { "NewGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardGeometry_Parms, NewGeometry), Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry, METADATA_PARAMS(0, nullptr) }; // 2896074311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::NewProp_NewGeometry_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::NewProp_NewGeometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardGeometry", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::UsdDrawModeComponent_eventSetCardGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::UsdDrawModeComponent_eventSetCardGeometry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardGeometry)
{
	P_GET_ENUM(EUsdModelCardGeometry,Z_Param_NewGeometry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardGeometry(EUsdModelCardGeometry(Z_Param_NewGeometry));
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardGeometry

// Begin Class UUsdDrawModeComponent Function SetCardTextureXNeg
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureXNeg_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureXNeg_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureXNeg", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::UsdDrawModeComponent_eventSetCardTextureXNeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::UsdDrawModeComponent_eventSetCardTextureXNeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureXNeg)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureXNeg(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureXNeg

// Begin Class UUsdDrawModeComponent Function SetCardTextureXPos
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureXPos_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureXPos_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureXPos", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::UsdDrawModeComponent_eventSetCardTextureXPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::UsdDrawModeComponent_eventSetCardTextureXPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureXPos)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureXPos(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureXPos

// Begin Class UUsdDrawModeComponent Function SetCardTextureYNeg
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureYNeg_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureYNeg_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureYNeg", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::UsdDrawModeComponent_eventSetCardTextureYNeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::UsdDrawModeComponent_eventSetCardTextureYNeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureYNeg)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureYNeg(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureYNeg

// Begin Class UUsdDrawModeComponent Function SetCardTextureYPos
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureYPos_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureYPos_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureYPos", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::UsdDrawModeComponent_eventSetCardTextureYPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::UsdDrawModeComponent_eventSetCardTextureYPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureYPos)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureYPos(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureYPos

// Begin Class UUsdDrawModeComponent Function SetCardTextureZNeg
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureZNeg_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureZNeg_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureZNeg", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::UsdDrawModeComponent_eventSetCardTextureZNeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::UsdDrawModeComponent_eventSetCardTextureZNeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureZNeg)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureZNeg(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureZNeg

// Begin Class UUsdDrawModeComponent Function SetCardTextureZPos
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics
{
	struct UsdDrawModeComponent_eventSetCardTextureZPos_Parms
	{
		UTexture2D* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetCardTextureZPos_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetCardTextureZPos", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::UsdDrawModeComponent_eventSetCardTextureZPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::UsdDrawModeComponent_eventSetCardTextureZPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetCardTextureZPos)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCardTextureZPos(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetCardTextureZPos

// Begin Class UUsdDrawModeComponent Function SetDrawMode
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics
{
	struct UsdDrawModeComponent_eventSetDrawMode_Parms
	{
		EUsdDrawMode NewDrawMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDrawMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDrawMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::NewProp_NewDrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::NewProp_NewDrawMode = { "NewDrawMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetDrawMode_Parms, NewDrawMode), Z_Construct_UEnum_USDClasses_EUsdDrawMode, METADATA_PARAMS(0, nullptr) }; // 1729231847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::NewProp_NewDrawMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::NewProp_NewDrawMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetDrawMode", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::UsdDrawModeComponent_eventSetDrawMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::UsdDrawModeComponent_eventSetDrawMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetDrawMode)
{
	P_GET_ENUM(EUsdDrawMode,Z_Param_NewDrawMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawMode(EUsdDrawMode(Z_Param_NewDrawMode));
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetDrawMode

// Begin Class UUsdDrawModeComponent Function SetTextureForFace
struct Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics
{
	struct UsdDrawModeComponent_eventSetTextureForFace_Parms
	{
		EUsdModelCardFace Face;
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Face_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Face;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Face_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Face = { "Face", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetTextureForFace_Parms, Face), Z_Construct_UEnum_USDClasses_EUsdModelCardFace, METADATA_PARAMS(0, nullptr) }; // 4121093060
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDrawModeComponent_eventSetTextureForFace_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Face_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Face,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDrawModeComponent, nullptr, "SetTextureForFace", nullptr, nullptr, Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::UsdDrawModeComponent_eventSetTextureForFace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::UsdDrawModeComponent_eventSetTextureForFace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUsdDrawModeComponent::execSetTextureForFace)
{
	P_GET_ENUM(EUsdModelCardFace,Z_Param_Face);
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureForFace(EUsdModelCardFace(Z_Param_Face),Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UUsdDrawModeComponent Function SetTextureForFace

// Begin Class UUsdDrawModeComponent
void UUsdDrawModeComponent::StaticRegisterNativesUUsdDrawModeComponent()
{
	UClass* Class = UUsdDrawModeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTextureForFace", &UUsdDrawModeComponent::execGetTextureForFace },
		{ "SetBoundsColor", &UUsdDrawModeComponent::execSetBoundsColor },
		{ "SetBoundsMax", &UUsdDrawModeComponent::execSetBoundsMax },
		{ "SetBoundsMin", &UUsdDrawModeComponent::execSetBoundsMin },
		{ "SetCardGeometry", &UUsdDrawModeComponent::execSetCardGeometry },
		{ "SetCardTextureXNeg", &UUsdDrawModeComponent::execSetCardTextureXNeg },
		{ "SetCardTextureXPos", &UUsdDrawModeComponent::execSetCardTextureXPos },
		{ "SetCardTextureYNeg", &UUsdDrawModeComponent::execSetCardTextureYNeg },
		{ "SetCardTextureYPos", &UUsdDrawModeComponent::execSetCardTextureYPos },
		{ "SetCardTextureZNeg", &UUsdDrawModeComponent::execSetCardTextureZNeg },
		{ "SetCardTextureZPos", &UUsdDrawModeComponent::execSetCardTextureZPos },
		{ "SetDrawMode", &UUsdDrawModeComponent::execSetDrawMode },
		{ "SetTextureForFace", &UUsdDrawModeComponent::execSetTextureForFace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdDrawModeComponent);
UClass* Z_Construct_UClass_UUsdDrawModeComponent_NoRegister()
{
	return UUsdDrawModeComponent::StaticClass();
}
struct Z_Construct_UClass_UUsdDrawModeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "USD" },
		{ "Comment", "/**\n * Component type that is used to draw bounds, cards and origin axes when translating a prim that has the UsdGeomModelAPI schema\n * applied.\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "USDDrawModeComponent.h" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "ToolTip", "Component type that is used to draw bounds, cards and origin axes when translating a prim that has the UsdGeomModelAPI schema\napplied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[] = {
		{ "BlueprintSetter", "SetBoundsMin" },
		{ "Category", "USD" },
		{ "Comment", "// Separate vectors instead of an FBox so we can get Sequencer tracks for these as is\n" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "ToolTip", "Separate vectors instead of an FBox so we can get Sequencer tracks for these as is" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[] = {
		{ "BlueprintSetter", "SetBoundsMax" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawMode_MetaData[] = {
		{ "BlueprintSetter", "SetDrawMode" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsColor_MetaData[] = {
		{ "BlueprintSetter", "SetBoundsColor" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardGeometry_MetaData[] = {
		{ "BlueprintSetter", "SetCardGeometry" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureXPos_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureXPos" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureYPos_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureYPos" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureZPos_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureZPos" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureXNeg_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureXNeg" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureYNeg_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureYNeg" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTextureZNeg_MetaData[] = {
		{ "BlueprintSetter", "SetCardTextureZNeg" },
		{ "Category", "USD|Cards" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthoredFaces_MetaData[] = {
		{ "Comment", "// EUsdModelCardFace flags to enable the card faces to draw.\n// We need these because the required USD behavior specifies a difference between not having a texture because\n// one wasn't authored (at which point we flip the opposite face), and not having a texture because it failed\n// to resolve (at which point we draw vertex color). In both of those cases we'll end up with nullptr on the\n// CardTexture property, but this will help us tell which case we're talking about.\n// Note that this must be an int32 instead of the actual EUsdModelCardFace type because otherwise during any\n// transaction the UPROPERTY Enum code will freak out if we have more than one flag set, presumably consider\n// the combination of flags an invalid value for the enum, and then just set it to zero instead (see UE-200646).\n" },
		{ "ModuleRelativePath", "Public/USDDrawModeComponent.h" },
		{ "ToolTip", "EUsdModelCardFace flags to enable the card faces to draw.\nWe need these because the required USD behavior specifies a difference between not having a texture because\none wasn't authored (at which point we flip the opposite face), and not having a texture because it failed\nto resolve (at which point we draw vertex color). In both of those cases we'll end up with nullptr on the\nCardTexture property, but this will help us tell which case we're talking about.\nNote that this must be an int32 instead of the actual EUsdModelCardFace type because otherwise during any\ntransaction the UPROPERTY Enum code will freak out if we have more than one flag set, presumably consider\nthe combination of flags an invalid value for the enum, and then just set it to zero instead (see UE-200646)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardGeometry_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CardGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureXPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureYPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureZPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureXNeg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureYNeg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTextureZNeg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuthoredFaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_GetTextureForFace, "GetTextureForFace" }, // 2177188862
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsColor, "SetBoundsColor" }, // 1752322665
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMax, "SetBoundsMax" }, // 3840781789
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetBoundsMin, "SetBoundsMin" }, // 277016713
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardGeometry, "SetCardGeometry" }, // 4073003959
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXNeg, "SetCardTextureXNeg" }, // 3598314717
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureXPos, "SetCardTextureXPos" }, // 969061038
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYNeg, "SetCardTextureYNeg" }, // 534158615
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureYPos, "SetCardTextureYPos" }, // 1771825277
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZNeg, "SetCardTextureZNeg" }, // 3142307126
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetCardTextureZPos, "SetCardTextureZPos" }, // 75584409
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetDrawMode, "SetDrawMode" }, // 1444195697
		{ &Z_Construct_UFunction_UUsdDrawModeComponent_SetTextureForFace, "SetTextureForFace" }, // 2087959998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdDrawModeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, BoundsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMin_MetaData), NewProp_BoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, BoundsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMax_MetaData), NewProp_BoundsMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_DrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_DrawMode = { "DrawMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, DrawMode), Z_Construct_UEnum_USDClasses_EUsdDrawMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawMode_MetaData), NewProp_DrawMode_MetaData) }; // 1729231847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsColor = { "BoundsColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, BoundsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsColor_MetaData), NewProp_BoundsColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardGeometry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardGeometry = { "CardGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardGeometry), Z_Construct_UEnum_USDClasses_EUsdModelCardGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardGeometry_MetaData), NewProp_CardGeometry_MetaData) }; // 2896074311
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureXPos = { "CardTextureXPos", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureXPos), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureXPos_MetaData), NewProp_CardTextureXPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureYPos = { "CardTextureYPos", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureYPos), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureYPos_MetaData), NewProp_CardTextureYPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureZPos = { "CardTextureZPos", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureZPos), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureZPos_MetaData), NewProp_CardTextureZPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureXNeg = { "CardTextureXNeg", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureXNeg), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureXNeg_MetaData), NewProp_CardTextureXNeg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureYNeg = { "CardTextureYNeg", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureYNeg), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureYNeg_MetaData), NewProp_CardTextureYNeg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureZNeg = { "CardTextureZNeg", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, CardTextureZNeg), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTextureZNeg_MetaData), NewProp_CardTextureZNeg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_AuthoredFaces = { "AuthoredFaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUsdDrawModeComponent, AuthoredFaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthoredFaces_MetaData), NewProp_AuthoredFaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdDrawModeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_DrawMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_DrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_BoundsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardGeometry_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureXPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureYPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureZPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureXNeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureYNeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_CardTextureZNeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_MaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdDrawModeComponent_Statics::NewProp_AuthoredFaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDrawModeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUsdDrawModeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDrawModeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdDrawModeComponent_Statics::ClassParams = {
	&UUsdDrawModeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUsdDrawModeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDrawModeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDrawModeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdDrawModeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUsdDrawModeComponent()
{
	if (!Z_Registration_Info_UClass_UUsdDrawModeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdDrawModeComponent.OuterSingleton, Z_Construct_UClass_UUsdDrawModeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUsdDrawModeComponent.OuterSingleton;
}
template<> USDCLASSES_API UClass* StaticClass<UUsdDrawModeComponent>()
{
	return UUsdDrawModeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdDrawModeComponent);
// End Class UUsdDrawModeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUsdDrawMode_StaticEnum, TEXT("EUsdDrawMode"), &Z_Registration_Info_UEnum_EUsdDrawMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1729231847U) },
		{ EUsdModelCardGeometry_StaticEnum, TEXT("EUsdModelCardGeometry"), &Z_Registration_Info_UEnum_EUsdModelCardGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2896074311U) },
		{ EUsdModelCardFace_StaticEnum, TEXT("EUsdModelCardFace"), &Z_Registration_Info_UEnum_EUsdModelCardFace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4121093060U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUsdDrawModeComponent, UUsdDrawModeComponent::StaticClass, TEXT("UUsdDrawModeComponent"), &Z_Registration_Info_UClass_UUsdDrawModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdDrawModeComponent), 1765923817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_1843788825(TEXT("/Script/USDClasses"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_USDCore_Source_USDClasses_Public_USDDrawModeComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
