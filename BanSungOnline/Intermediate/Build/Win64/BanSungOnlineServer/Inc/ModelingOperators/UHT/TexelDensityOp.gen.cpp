// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/ParameterizationOps/TexelDensityOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexelDensityOp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVEditorTexelDensitySettings();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVEditorTexelDensitySettings_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVTexelDensityOperatorFactory();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVTexelDensityOperatorFactory_NoRegister();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum ETexelDensityToolMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETexelDensityToolMode;
static UEnum* ETexelDensityToolMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETexelDensityToolMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETexelDensityToolMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ETexelDensityToolMode"));
	}
	return Z_Registration_Info_UEnum_ETexelDensityToolMode.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ETexelDensityToolMode>()
{
	return ETexelDensityToolMode_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyToIslands.Name", "ETexelDensityToolMode::ApplyToIslands" },
		{ "ApplyToWhole.Name", "ETexelDensityToolMode::ApplyToWhole" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
		{ "Normalize.Name", "ETexelDensityToolMode::Normalize" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETexelDensityToolMode::ApplyToIslands", (int64)ETexelDensityToolMode::ApplyToIslands },
		{ "ETexelDensityToolMode::ApplyToWhole", (int64)ETexelDensityToolMode::ApplyToWhole },
		{ "ETexelDensityToolMode::Normalize", (int64)ETexelDensityToolMode::Normalize },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ETexelDensityToolMode",
	"ETexelDensityToolMode",
	Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode()
{
	if (!Z_Registration_Info_UEnum_ETexelDensityToolMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETexelDensityToolMode.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETexelDensityToolMode.InnerSingleton;
}
// End Enum ETexelDensityToolMode

// Begin Class UUVEditorTexelDensitySettings Function InSamplingMode
struct Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics
{
	struct UVEditorTexelDensitySettings_eventInSamplingMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UVEditorTexelDensitySettings_eventInSamplingMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVEditorTexelDensitySettings_eventInSamplingMode_Parms), &Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorTexelDensitySettings, nullptr, "InSamplingMode", nullptr, nullptr, Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::UVEditorTexelDensitySettings_eventInSamplingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::UVEditorTexelDensitySettings_eventInSamplingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUVEditorTexelDensitySettings::execInSamplingMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InSamplingMode();
	P_NATIVE_END;
}
// End Class UUVEditorTexelDensitySettings Function InSamplingMode

// Begin Class UUVEditorTexelDensitySettings
void UUVEditorTexelDensitySettings::StaticRegisterNativesUUVEditorTexelDensitySettings()
{
	UClass* Class = UUVEditorTexelDensitySettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InSamplingMode", &UUVEditorTexelDensitySettings::execInSamplingMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorTexelDensitySettings);
UClass* Z_Construct_UClass_UUVEditorTexelDensitySettings_NoRegister()
{
	return UUVEditorTexelDensitySettings::StaticClass();
}
struct Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ParameterizationOps/TexelDensityOp.h" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexelDensityMode_MetaData[] = {
		{ "Category", "TexelDensity" },
		{ "DisplayName", "Scale Mode" },
		{ "EditCondition", "!InSamplingMode" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorldUnits_MetaData[] = {
		{ "Category", "TexelDensity" },
		{ "DisplayName", "World Units" },
		{ "EditCondition", "TexelDensityMode != ETexelDensityToolMode::Normalize" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPixelCount_MetaData[] = {
		{ "Category", "TexelDensity" },
		{ "DisplayName", "Pixels" },
		{ "EditCondition", "TexelDensityMode != ETexelDensityToolMode::Normalize && !InSamplingMode" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[] = {
		{ "Category", "TexelDensity" },
		{ "Delta", "64" },
		{ "DisplayName", "Texture Dimensions" },
		{ "EditCondition", "TexelDensityMode != ETexelDensityToolMode::Normalize && !InSamplingMode" },
		{ "LinearDeltaSensitivity", "1000" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
		{ "SliderExponent", "1" },
		{ "UIMax", "16384" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUDIMLayout_MetaData[] = {
		{ "Category", "TexelDensity" },
		{ "DisplayName", "Use UDIMs" },
		{ "EditCondition", "TexelDensityMode != ETexelDensityToolMode::Normalize && !InSamplingMode" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TexelDensityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TexelDensityMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetWorldUnits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPixelCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureResolution;
	static void NewProp_bEnableUDIMLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUDIMLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVEditorTexelDensitySettings_InSamplingMode, "InSamplingMode" }, // 2105527903
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorTexelDensitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TexelDensityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TexelDensityMode = { "TexelDensityMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorTexelDensitySettings, TexelDensityMode), Z_Construct_UEnum_ModelingOperators_ETexelDensityToolMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexelDensityMode_MetaData), NewProp_TexelDensityMode_MetaData) }; // 3645577490
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TargetWorldUnits = { "TargetWorldUnits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorTexelDensitySettings, TargetWorldUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorldUnits_MetaData), NewProp_TargetWorldUnits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TargetPixelCount = { "TargetPixelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorTexelDensitySettings, TargetPixelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPixelCount_MetaData), NewProp_TargetPixelCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVEditorTexelDensitySettings, TextureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResolution_MetaData), NewProp_TextureResolution_MetaData) };
void Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_bEnableUDIMLayout_SetBit(void* Obj)
{
	((UUVEditorTexelDensitySettings*)Obj)->bEnableUDIMLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_bEnableUDIMLayout = { "bEnableUDIMLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVEditorTexelDensitySettings), &Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_bEnableUDIMLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUDIMLayout_MetaData), NewProp_bEnableUDIMLayout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TexelDensityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TexelDensityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TargetWorldUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TargetPixelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_TextureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::NewProp_bEnableUDIMLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::ClassParams = {
	&UUVEditorTexelDensitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVEditorTexelDensitySettings()
{
	if (!Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.OuterSingleton, Z_Construct_UClass_UUVEditorTexelDensitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVEditorTexelDensitySettings.OuterSingleton;
}
template<> MODELINGOPERATORS_API UClass* StaticClass<UUVEditorTexelDensitySettings>()
{
	return UUVEditorTexelDensitySettings::StaticClass();
}
UUVEditorTexelDensitySettings::UUVEditorTexelDensitySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorTexelDensitySettings);
UUVEditorTexelDensitySettings::~UUVEditorTexelDensitySettings() {}
// End Class UUVEditorTexelDensitySettings

// Begin Class UUVTexelDensityOperatorFactory
void UUVTexelDensityOperatorFactory::StaticRegisterNativesUUVTexelDensityOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVTexelDensityOperatorFactory);
UClass* Z_Construct_UClass_UUVTexelDensityOperatorFactory_NoRegister()
{
	return UUVTexelDensityOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Layout operations.\n *\n * Inherits from UObject so that it can hold a strong pointer to the settings UObject, which\n * needs to be a UObject to be displayed in the details panel.\n */" },
		{ "IncludePath", "ParameterizationOps/TexelDensityOp.h" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
		{ "ToolTip", "Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Layout operations.\n\nInherits from UObject so that it can hold a strong pointer to the settings UObject, which\nneeds to be a UObject to be displayed in the details panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/TexelDensityOp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVTexelDensityOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVTexelDensityOperatorFactory, Settings), Z_Construct_UClass_UUVEditorTexelDensitySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::ClassParams = {
	&UUVTexelDensityOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVTexelDensityOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.OuterSingleton, Z_Construct_UClass_UUVTexelDensityOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.OuterSingleton;
}
template<> MODELINGOPERATORS_API UClass* StaticClass<UUVTexelDensityOperatorFactory>()
{
	return UUVTexelDensityOperatorFactory::StaticClass();
}
UUVTexelDensityOperatorFactory::UUVTexelDensityOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVTexelDensityOperatorFactory);
UUVTexelDensityOperatorFactory::~UUVTexelDensityOperatorFactory() {}
// End Class UUVTexelDensityOperatorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETexelDensityToolMode_StaticEnum, TEXT("ETexelDensityToolMode"), &Z_Registration_Info_UEnum_ETexelDensityToolMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3645577490U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorTexelDensitySettings, UUVEditorTexelDensitySettings::StaticClass, TEXT("UUVEditorTexelDensitySettings"), &Z_Registration_Info_UClass_UUVEditorTexelDensitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorTexelDensitySettings), 4042168470U) },
		{ Z_Construct_UClass_UUVTexelDensityOperatorFactory, UUVTexelDensityOperatorFactory::StaticClass, TEXT("UUVTexelDensityOperatorFactory"), &Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVTexelDensityOperatorFactory), 479069265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_4204850131(TEXT("/Script/ModelingOperators"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_TexelDensityOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
