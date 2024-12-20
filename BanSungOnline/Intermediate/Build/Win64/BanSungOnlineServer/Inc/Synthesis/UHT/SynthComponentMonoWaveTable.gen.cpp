// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SynthComponents/SynthComponentMonoWaveTable.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentMonoWaveTable() {}

// Begin Cross Module References
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
SYNTHESIS_API UClass* Z_Construct_UClass_UMonoWaveTableSynthPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentMonoWaveTable();
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_CurveInterpolationType();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature();
SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Class UMonoWaveTableSynthPreset
void UMonoWaveTableSynthPreset::StaticRegisterNativesUMonoWaveTableSynthPreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonoWaveTableSynthPreset);
UClass* Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister()
{
	return UMonoWaveTableSynthPreset::StaticClass();
}
struct Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "Comment", "// UStruct Mono Wave Table Synth Preset\n" },
		{ "IncludePath", "SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "UStruct Mono Wave Table Synth Preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Name the preset\x09\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Name the preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockKeyframesToGridBool_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Lock wavetables to evenly spaced keyframes that can be edited vertically only (will re-sample)\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Lock wavetables to evenly spaced keyframes that can be edited vertically only (will re-sample)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockKeyframesToGrid_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "256" },
		{ "ClampMin", "3" },
		{ "Comment", "// How many evenly-spaced keyframes to use when LockKeyframesToGrid is true\n" },
		{ "EditCondition", "bLockKeyframesToGridBool" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "How many evenly-spaced keyframes to use when LockKeyframesToGrid is true" },
		{ "UIMax", "256" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableResolution_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "3" },
		{ "Comment", "// How many samples will be taken of the curve from time = [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "How many samples will be taken of the curve from time = [0.0, 1.0]" },
		{ "UIMax", "4096" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTable_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Wave Table Editor\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Wave Table Editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeWaveTables_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Normalize the WaveTable data? False will allow clipping, True will normalize the tables when sent to the synth for rendering\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Normalize the WaveTable data? False will allow clipping, True will normalize the tables when sent to the synth for rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static void NewProp_bLockKeyframesToGridBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockKeyframesToGridBool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LockKeyframesToGrid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaveTableResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveTable;
	static void NewProp_bNormalizeWaveTables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeWaveTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonoWaveTableSynthPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonoWaveTableSynthPreset, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
void Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bLockKeyframesToGridBool_SetBit(void* Obj)
{
	((UMonoWaveTableSynthPreset*)Obj)->bLockKeyframesToGridBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bLockKeyframesToGridBool = { "bLockKeyframesToGridBool", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMonoWaveTableSynthPreset), &Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bLockKeyframesToGridBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockKeyframesToGridBool_MetaData), NewProp_bLockKeyframesToGridBool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_LockKeyframesToGrid = { "LockKeyframesToGrid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonoWaveTableSynthPreset, LockKeyframesToGrid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockKeyframesToGrid_MetaData), NewProp_LockKeyframesToGrid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTableResolution = { "WaveTableResolution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonoWaveTableSynthPreset, WaveTableResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTableResolution_MetaData), NewProp_WaveTableResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTable_Inner = { "WaveTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(0, nullptr) }; // 1495033350
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTable = { "WaveTable", nullptr, (EPropertyFlags)0x0010000400000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMonoWaveTableSynthPreset, WaveTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTable_MetaData), NewProp_WaveTable_MetaData) }; // 1495033350
void Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bNormalizeWaveTables_SetBit(void* Obj)
{
	((UMonoWaveTableSynthPreset*)Obj)->bNormalizeWaveTables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bNormalizeWaveTables = { "bNormalizeWaveTables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMonoWaveTableSynthPreset), &Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bNormalizeWaveTables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeWaveTables_MetaData), NewProp_bNormalizeWaveTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bLockKeyframesToGridBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_LockKeyframesToGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTableResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_WaveTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::NewProp_bNormalizeWaveTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::ClassParams = {
	&UMonoWaveTableSynthPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMonoWaveTableSynthPreset()
{
	if (!Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton, Z_Construct_UClass_UMonoWaveTableSynthPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMonoWaveTableSynthPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<UMonoWaveTableSynthPreset>()
{
	return UMonoWaveTableSynthPreset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMonoWaveTableSynthPreset);
UMonoWaveTableSynthPreset::~UMonoWaveTableSynthPreset() {}
// End Class UMonoWaveTableSynthPreset

// Begin Delegate FOnTableAltered
struct Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics
{
	struct _Script_Synthesis_eventOnTableAltered_Parms
	{
		int32 TableIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Synthesis_eventOnTableAltered_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::NewProp_TableIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnTableAltered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::_Script_Synthesis_eventOnTableAltered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::_Script_Synthesis_eventOnTableAltered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTableAltered_DelegateWrapper(const FMulticastScriptDelegate& OnTableAltered, int32 TableIndex)
{
	struct _Script_Synthesis_eventOnTableAltered_Parms
	{
		int32 TableIndex;
	};
	_Script_Synthesis_eventOnTableAltered_Parms Parms;
	Parms.TableIndex=TableIndex;
	OnTableAltered.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTableAltered

// Begin Delegate FNumTablesChanged
struct Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "NumTablesChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNumTablesChanged_DelegateWrapper(const FMulticastScriptDelegate& NumTablesChanged)
{
	NumTablesChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FNumTablesChanged

// Begin Enum CurveInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CurveInterpolationType;
static UEnum* CurveInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_CurveInterpolationType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("CurveInterpolationType"));
	}
	return Z_Registration_Info_UEnum_CurveInterpolationType.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<CurveInterpolationType>()
{
	return CurveInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AUTOINTERP.DisplayName", "Auto" },
		{ "AUTOINTERP.Name", "CurveInterpolationType::AUTOINTERP" },
		{ "BlueprintType", "true" },
		{ "CONSTANT.DisplayName", "Constant" },
		{ "CONSTANT.Name", "CurveInterpolationType::CONSTANT" },
		{ "LINEAR.DisplayName", "Linear" },
		{ "LINEAR.Name", "CurveInterpolationType::LINEAR" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CurveInterpolationType::AUTOINTERP", (int64)CurveInterpolationType::AUTOINTERP },
		{ "CurveInterpolationType::LINEAR", (int64)CurveInterpolationType::LINEAR },
		{ "CurveInterpolationType::CONSTANT", (int64)CurveInterpolationType::CONSTANT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"CurveInterpolationType",
	"CurveInterpolationType",
	Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_CurveInterpolationType()
{
	if (!Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton, Z_Construct_UEnum_Synthesis_CurveInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CurveInterpolationType.InnerSingleton;
}
// End Enum CurveInterpolationType

// Begin Class USynthComponentMonoWaveTable Function GetCurveTangent
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics
{
	struct SynthComponentMonoWaveTable_eventGetCurveTangent_Parms
	{
		int32 TableIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Get the curve interpolation type (What the curve is doing between keyframes)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Get the curve interpolation type (What the curve is doing between keyframes)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetCurveTangent_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetCurveTangent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::NewProp_TableIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "GetCurveTangent", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::SynthComponentMonoWaveTable_eventGetCurveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::SynthComponentMonoWaveTable_eventGetCurveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execGetCurveTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TableIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurveTangent(Z_Param_TableIndex);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function GetCurveTangent

// Begin Class USynthComponentMonoWaveTable Function GetKeyFrameValuesForTable
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics
{
	struct SynthComponentMonoWaveTable_eventGetKeyFrameValuesForTable_Parms
	{
		float TableIndex;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Get an array of floats that represent the key frames in the requested curve\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Get an array of floats that represent the key frames in the requested curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TableIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetKeyFrameValuesForTable_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetKeyFrameValuesForTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_TableIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "GetKeyFrameValuesForTable", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::SynthComponentMonoWaveTable_eventGetKeyFrameValuesForTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::SynthComponentMonoWaveTable_eventGetKeyFrameValuesForTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execGetKeyFrameValuesForTable)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TableIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetKeyFrameValuesForTable(Z_Param_TableIndex);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function GetKeyFrameValuesForTable

// Begin Class USynthComponentMonoWaveTable Function GetMaxTableIndex
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics
{
	struct SynthComponentMonoWaveTable_eventGetMaxTableIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Get the number of curves in the wave table. (returns -1 if there is no asset)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Get the number of curves in the wave table. (returns -1 if there is no asset)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetMaxTableIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "GetMaxTableIndex", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::SynthComponentMonoWaveTable_eventGetMaxTableIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::SynthComponentMonoWaveTable_eventGetMaxTableIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execGetMaxTableIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxTableIndex();
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function GetMaxTableIndex

// Begin Class USynthComponentMonoWaveTable Function GetNumTableEntries
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics
{
	struct SynthComponentMonoWaveTable_eventGetNumTableEntries_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/* Start BP functionality */// Get the number of table elements from Blueprint\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Start BP functionality // Get the number of table elements from Blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventGetNumTableEntries_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "GetNumTableEntries", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::SynthComponentMonoWaveTable_eventGetNumTableEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::SynthComponentMonoWaveTable_eventGetNumTableEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execGetNumTableEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTableEntries();
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function GetNumTableEntries

// Begin Class USynthComponentMonoWaveTable Function NoteOff
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics
{
	struct SynthComponentMonoWaveTable_eventNoteOff_Parms
	{
		float InMidiNote;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts a new note (retrigs modulators, etc.)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Starts a new note (retrigs modulators, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMidiNote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventNoteOff_Parms, InMidiNote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMidiNote_MetaData), NewProp_InMidiNote_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::NewProp_InMidiNote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "NoteOff", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::SynthComponentMonoWaveTable_eventNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::SynthComponentMonoWaveTable_eventNoteOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execNoteOff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMidiNote);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOff(Z_Param_InMidiNote);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function NoteOff

// Begin Class USynthComponentMonoWaveTable Function NoteOn
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics
{
	struct SynthComponentMonoWaveTable_eventNoteOn_Parms
	{
		float InMidiNote;
		float InVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts a new note (retrigs modulators, etc.)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Starts a new note (retrigs modulators, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMidiNote;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventNoteOn_Parms, InMidiNote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMidiNote_MetaData), NewProp_InMidiNote_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventNoteOn_Parms, InVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVelocity_MetaData), NewProp_InVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::NewProp_InMidiNote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::NewProp_InVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "NoteOn", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::SynthComponentMonoWaveTable_eventNoteOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::SynthComponentMonoWaveTable_eventNoteOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execNoteOn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMidiNote);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoteOn(Z_Param_InMidiNote,Z_Param_InVelocity);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function NoteOn

// Begin Class USynthComponentMonoWaveTable Function RefreshAllWaveTables
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Refresh all wavetables (from Game Thread data)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Refresh all wavetables (from Game Thread data)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "RefreshAllWaveTables", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execRefreshAllWaveTables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshAllWaveTables();
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function RefreshAllWaveTables

// Begin Class USynthComponentMonoWaveTable Function RefreshWaveTable
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics
{
	struct SynthComponentMonoWaveTable_eventRefreshWaveTable_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Refresh a particular wavetable (from Game Thread data)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Refresh a particular wavetable (from Game Thread data)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventRefreshWaveTable_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "RefreshWaveTable", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::SynthComponentMonoWaveTable_eventRefreshWaveTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::SynthComponentMonoWaveTable_eventRefreshWaveTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execRefreshWaveTable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshWaveTable(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function RefreshWaveTable

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeAttackTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeAttackTime_Parms
	{
		float InAttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Amp envelope attack time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Amp envelope attack time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeAttackTime_Parms, InAttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttackTimeMsec_MetaData), NewProp_InAttackTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeAttackTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeAttackTime(Z_Param_InAttackTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeAttackTime

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeBiasDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the bias depth of the the Amp envelope\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the bias depth of the the Amp envelope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeBiasDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeBiasDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeBiasDepth

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeBiasInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasInvert_Parms
	{
		bool bInBiasInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set whether or not the Amp envelope's bias is inverted\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set whether or not the Amp envelope's bias is inverted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInBiasInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInBiasInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBiasInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasInvert_Parms*)Obj)->bInBiasInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert = { "bInBiasInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInBiasInvert_MetaData), NewProp_bInBiasInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeBiasInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeBiasInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasInvert)
{
	P_GET_UBOOL(Z_Param_bInBiasInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeBiasInvert(Z_Param_bInBiasInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeBiasInvert

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeDecayTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeDecayTime_Parms
	{
		float InDecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Amp envelope decay time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Amp envelope decay time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::NewProp_InDecayTimeMsec = { "InDecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeDecayTime_Parms, InDecayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDecayTimeMsec_MetaData), NewProp_InDecayTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::NewProp_InDecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeDecayTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeDecayTime(Z_Param_InDecayTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeDecayTime

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the overall depth of the Amp envelope\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the overall depth of the Amp envelope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeDepth

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeInvert_Parms
	{
		bool bInInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set whether or not the Amp envelope is inverted\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set whether or not the Amp envelope is inverted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::NewProp_bInInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetAmpEnvelopeInvert_Parms*)Obj)->bInInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::NewProp_bInInvert = { "bInInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetAmpEnvelopeInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::NewProp_bInInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInvert_MetaData), NewProp_bInInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::NewProp_bInInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeInvert)
{
	P_GET_UBOOL(Z_Param_bInInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeInvert(Z_Param_bInInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeInvert

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeReleaseTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeReleaseTime_Parms
	{
		float InReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Amp envelope release time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Amp envelope release time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReleaseTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeReleaseTime_Parms, InReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReleaseTimeMsec_MetaData), NewProp_InReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeReleaseTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeReleaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeReleaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeReleaseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeReleaseTime(Z_Param_InReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeReleaseTime

// Begin Class USynthComponentMonoWaveTable Function SetAmpEnvelopeSustainGain
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics
{
	struct SynthComponentMonoWaveTable_eventSetAmpEnvelopeSustainGain_Parms
	{
		float InSustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Amp envelope sustain gain [0.0, 1.0]\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Amp envelope sustain gain [0.0, 1.0]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::NewProp_InSustainGain = { "InSustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetAmpEnvelopeSustainGain_Parms, InSustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSustainGain_MetaData), NewProp_InSustainGain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::NewProp_InSustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetAmpEnvelopeSustainGain", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetAmpEnvelopeSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetAmpEnvelopeSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmpEnvelopeSustainGain(Z_Param_InSustainGain);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetAmpEnvelopeSustainGain

// Begin Class USynthComponentMonoWaveTable Function SetCurveInterpolationType
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics
{
	struct SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms
	{
		CurveInterpolationType InterpolationType;
		int32 TableIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/*\n\x09\x09Set the curve interpolation type (What the curve is doing between keyframes)\n\x09\x09This should only be used for live-editing features! (changing the curves at runtime is expensive)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the curve interpolation type (What the curve is doing between keyframes)\nThis should only be used for live-editing features! (changing the curves at runtime is expensive)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms, InterpolationType), Z_Construct_UEnum_Synthesis_CurveInterpolationType, METADATA_PARAMS(0, nullptr) }; // 589207983
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_TableIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetCurveInterpolationType", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::SynthComponentMonoWaveTable_eventSetCurveInterpolationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetCurveInterpolationType)
{
	P_GET_ENUM(CurveInterpolationType,Z_Param_InterpolationType);
	P_GET_PROPERTY(FIntProperty,Z_Param_TableIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveInterpolationType(CurveInterpolationType(Z_Param_InterpolationType),Z_Param_TableIndex);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetCurveInterpolationType

// Begin Class USynthComponentMonoWaveTable Function SetCurveTangent
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics
{
	struct SynthComponentMonoWaveTable_eventSetCurveTangent_Parms
	{
		int32 TableIndex;
		float InNewTangent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/*\n\x09\x09Set the curve tangent (\"Curve depth\" between keyframes)\n\x09\x09This should only be used for live-editing features! (changing the curves at runtime is expensive)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the curve tangent (\"Curve depth\" between keyframes)\nThis should only be used for live-editing features! (changing the curves at runtime is expensive)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewTangent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveTangent_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_InNewTangent = { "InNewTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveTangent_Parms, InNewTangent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetCurveTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetCurveTangent_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_TableIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_InNewTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetCurveTangent", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::SynthComponentMonoWaveTable_eventSetCurveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::SynthComponentMonoWaveTable_eventSetCurveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetCurveTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TableIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewTangent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveTangent(Z_Param_TableIndex,Z_Param_InNewTangent);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetCurveTangent

// Begin Class USynthComponentMonoWaveTable Function SetCurveValue
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics
{
	struct SynthComponentMonoWaveTable_eventSetCurveValue_Parms
	{
		int32 TableIndex;
		int32 KeyframeIndex;
		float NewValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/* Set a Keyframe value given a Table number and Keyframe number.\n\x09   Returns false if the request was invalid.\n\x09   NewValue will be clamped from +/- 1.0 */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set a Keyframe value given a Table number and Keyframe number.\n         Returns false if the request was invalid.\n         NewValue will be clamped from +/- 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TableIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyframeIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_TableIndex = { "TableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveValue_Parms, TableIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_KeyframeIndex = { "KeyframeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveValue_Parms, KeyframeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetCurveValue_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetCurveValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetCurveValue_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_TableIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_KeyframeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetCurveValue", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::SynthComponentMonoWaveTable_eventSetCurveValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::SynthComponentMonoWaveTable_eventSetCurveValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetCurveValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TableIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyframeIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveValue(Z_Param_TableIndex,Z_Param_KeyframeIndex,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetCurveValue

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeAttackTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeAttackTime_Parms
	{
		float InAttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope attack time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope attack time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopeAttackTime_Parms, InAttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttackTimeMsec_MetaData), NewProp_InAttackTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeAttackTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeAttackTime(Z_Param_InAttackTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeAttackTime

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeBiasDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope bias depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope bias depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeBiasDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeBiasDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeBiasDepth

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeBiasInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasInvert_Parms
	{
		bool bInBiasInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope bias inversion\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope bias inversion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInBiasInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInBiasInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBiasInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasInvert_Parms*)Obj)->bInBiasInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert = { "bInBiasInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInBiasInvert_MetaData), NewProp_bInBiasInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeBiasInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeBiasInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasInvert)
{
	P_GET_UBOOL(Z_Param_bInBiasInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeBiasInvert(Z_Param_bInBiasInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeBiasInvert

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopeDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeDepth

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeInvert_Parms
	{
		bool bInInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope inversion\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope inversion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::NewProp_bInInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetFilterEnvelopeInvert_Parms*)Obj)->bInInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::NewProp_bInInvert = { "bInInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetFilterEnvelopeInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::NewProp_bInInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInvert_MetaData), NewProp_bInInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::NewProp_bInInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeInvert)
{
	P_GET_UBOOL(Z_Param_bInInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeInvert(Z_Param_bInInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeInvert

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopenDecayTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopenDecayTime_Parms
	{
		float InDecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope decay time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope decay time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::NewProp_InDecayTimeMsec = { "InDecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopenDecayTime_Parms, InDecayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDecayTimeMsec_MetaData), NewProp_InDecayTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::NewProp_InDecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopenDecayTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopenDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopenDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopenDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopenDecayTime(Z_Param_InDecayTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopenDecayTime

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeReleaseTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeReleaseTime_Parms
	{
		float InReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope release time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope release time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReleaseTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopeReleaseTime_Parms, InReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReleaseTimeMsec_MetaData), NewProp_InReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeReleaseTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeReleaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeReleaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeReleaseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeReleaseTime(Z_Param_InReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeReleaseTime

// Begin Class USynthComponentMonoWaveTable Function SetFilterEnvelopeSustainGain
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFilterEnvelopeSustainGain_Parms
	{
		float InSustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Low-Pass Filter envelope sustain gain\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Low-Pass Filter envelope sustain gain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::NewProp_InSustainGain = { "InSustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFilterEnvelopeSustainGain_Parms, InSustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSustainGain_MetaData), NewProp_InSustainGain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::NewProp_InSustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFilterEnvelopeSustainGain", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetFilterEnvelopeSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFilterEnvelopeSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilterEnvelopeSustainGain(Z_Param_InSustainGain);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFilterEnvelopeSustainGain

// Begin Class USynthComponentMonoWaveTable Function SetFrequency
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFrequency_Parms
	{
		float FrequencyHz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator's frequency\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Sets the oscillator's frequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFrequency_Parms, FrequencyHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyHz_MetaData), NewProp_FrequencyHz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::NewProp_FrequencyHz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFrequency", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::SynthComponentMonoWaveTable_eventSetFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::SynthComponentMonoWaveTable_eventSetFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyHz);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequency(Z_Param_FrequencyHz);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFrequency

// Begin Class USynthComponentMonoWaveTable Function SetFrequencyPitchBend
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFrequencyPitchBend_Parms
	{
		float FrequencyOffsetCents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set a frequency offset in cents (for pitch modulation such as the Pitch Bend Wheel)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set a frequency offset in cents (for pitch modulation such as the Pitch Bend Wheel)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyOffsetCents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyOffsetCents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::NewProp_FrequencyOffsetCents = { "FrequencyOffsetCents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFrequencyPitchBend_Parms, FrequencyOffsetCents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyOffsetCents_MetaData), NewProp_FrequencyOffsetCents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::NewProp_FrequencyOffsetCents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFrequencyPitchBend", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::SynthComponentMonoWaveTable_eventSetFrequencyPitchBend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::SynthComponentMonoWaveTable_eventSetFrequencyPitchBend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFrequencyPitchBend)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyOffsetCents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequencyPitchBend(Z_Param_FrequencyOffsetCents);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFrequencyPitchBend

// Begin Class USynthComponentMonoWaveTable Function SetFrequencyWithMidiNote
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics
{
	struct SynthComponentMonoWaveTable_eventSetFrequencyWithMidiNote_Parms
	{
		float InMidiNote;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the oscillator's frequency via midi note number\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the oscillator's frequency via midi note number" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMidiNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMidiNote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetFrequencyWithMidiNote_Parms, InMidiNote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMidiNote_MetaData), NewProp_InMidiNote_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::NewProp_InMidiNote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetFrequencyWithMidiNote", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::SynthComponentMonoWaveTable_eventSetFrequencyWithMidiNote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::SynthComponentMonoWaveTable_eventSetFrequencyWithMidiNote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetFrequencyWithMidiNote)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMidiNote);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrequencyWithMidiNote(Z_Param_InMidiNote);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetFrequencyWithMidiNote

// Begin Class USynthComponentMonoWaveTable Function SetLowPassFilterResonance
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics
{
	struct SynthComponentMonoWaveTable_eventSetLowPassFilterResonance_Parms
	{
		float InNewQ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Set the Cut-off frequency of the low-pass filter\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the Cut-off frequency of the low-pass filter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewQ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::NewProp_InNewQ = { "InNewQ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetLowPassFilterResonance_Parms, InNewQ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::NewProp_InNewQ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetLowPassFilterResonance", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::SynthComponentMonoWaveTable_eventSetLowPassFilterResonance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::SynthComponentMonoWaveTable_eventSetLowPassFilterResonance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetLowPassFilterResonance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewQ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowPassFilterResonance(Z_Param_InNewQ);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetLowPassFilterResonance

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeAttackTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeAttackTime_Parms
	{
		float InAttackTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope attack time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope attack time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttackTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAttackTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeAttackTime_Parms, InAttackTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttackTimeMsec_MetaData), NewProp_InAttackTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::NewProp_InAttackTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeAttackTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeAttackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeAttackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeAttackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAttackTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeAttackTime(Z_Param_InAttackTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeAttackTime

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeBiasDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope bias depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope bias depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeBiasDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeBiasDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeBiasDepth

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeBiasInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasInvert_Parms
	{
		bool bInBiasInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope bias inversion\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope bias inversion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInBiasInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInBiasInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBiasInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasInvert_Parms*)Obj)->bInBiasInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert = { "bInBiasInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInBiasInvert_MetaData), NewProp_bInBiasInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::NewProp_bInBiasInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeBiasInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeBiasInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasInvert)
{
	P_GET_UBOOL(Z_Param_bInBiasInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeBiasInvert(Z_Param_bInBiasInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeBiasInvert

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeDecayTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeDecayTime_Parms
	{
		float InDecayTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope decay time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope decay time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDecayTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDecayTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::NewProp_InDecayTimeMsec = { "InDecayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeDecayTime_Parms, InDecayTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDecayTimeMsec_MetaData), NewProp_InDecayTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::NewProp_InDecayTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeDecayTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeDecayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeDecayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeDecayTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDecayTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeDecayTime(Z_Param_InDecayTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeDecayTime

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeDepth_Parms
	{
		float InDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope envelope depth\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope envelope depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::NewProp_InDepth = { "InDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeDepth_Parms, InDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDepth_MetaData), NewProp_InDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::NewProp_InDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeDepth(Z_Param_InDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeDepth

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeInvert
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeInvert_Parms
	{
		bool bInInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope envelope inversion\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope envelope inversion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::NewProp_bInInvert_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetPositionEnvelopeInvert_Parms*)Obj)->bInInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::NewProp_bInInvert = { "bInInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetPositionEnvelopeInvert_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::NewProp_bInInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInvert_MetaData), NewProp_bInInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::NewProp_bInInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeInvert", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeInvert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeInvert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeInvert)
{
	P_GET_UBOOL(Z_Param_bInInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeInvert(Z_Param_bInInvert);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeInvert

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeReleaseTime
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeReleaseTime_Parms
	{
		float InReleaseTimeMsec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope release time (msec)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope release time (msec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReleaseTimeMsec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InReleaseTimeMsec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeReleaseTime_Parms, InReleaseTimeMsec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReleaseTimeMsec_MetaData), NewProp_InReleaseTimeMsec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::NewProp_InReleaseTimeMsec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeReleaseTime", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeReleaseTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeReleaseTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeReleaseTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InReleaseTimeMsec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeReleaseTime(Z_Param_InReleaseTimeMsec);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeReleaseTime

// Begin Class USynthComponentMonoWaveTable Function SetPositionEnvelopeSustainGain
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPositionEnvelopeSustainGain_Parms
	{
		float InSustainGain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set Position envelope sustain gain\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set Position envelope sustain gain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSustainGain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSustainGain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::NewProp_InSustainGain = { "InSustainGain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPositionEnvelopeSustainGain_Parms, InSustainGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSustainGain_MetaData), NewProp_InSustainGain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::NewProp_InSustainGain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPositionEnvelopeSustainGain", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeSustainGain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::SynthComponentMonoWaveTable_eventSetPositionEnvelopeSustainGain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPositionEnvelopeSustainGain)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSustainGain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionEnvelopeSustainGain(Z_Param_InSustainGain);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPositionEnvelopeSustainGain

// Begin Class USynthComponentMonoWaveTable Function SetPosLfoDepth
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPosLfoDepth_Parms
	{
		float InLfoDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/* Set the Modulation depth of the Lfo controlling the Table Position around the current position value\n\x09   0.0 = no modulation, 1.0 = current position +/- 0.5 (Lfo + Position result will clamp [0.0, 1.0]) */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the Modulation depth of the Lfo controlling the Table Position around the current position value\n         0.0 = no modulation, 1.0 = current position +/- 0.5 (Lfo + Position result will clamp [0.0, 1.0])" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLfoDepth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLfoDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::NewProp_InLfoDepth = { "InLfoDepth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPosLfoDepth_Parms, InLfoDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLfoDepth_MetaData), NewProp_InLfoDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::NewProp_InLfoDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPosLfoDepth", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::SynthComponentMonoWaveTable_eventSetPosLfoDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::SynthComponentMonoWaveTable_eventSetPosLfoDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPosLfoDepth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLfoDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosLfoDepth(Z_Param_InLfoDepth);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPosLfoDepth

// Begin Class USynthComponentMonoWaveTable Function SetPosLfoFrequency
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPosLfoFrequency_Parms
	{
		float InLfoFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set frequency of LFO controlling Table Position (in Hz)\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set frequency of LFO controlling Table Position (in Hz)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLfoFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLfoFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::NewProp_InLfoFrequency = { "InLfoFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPosLfoFrequency_Parms, InLfoFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLfoFrequency_MetaData), NewProp_InLfoFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::NewProp_InLfoFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPosLfoFrequency", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::SynthComponentMonoWaveTable_eventSetPosLfoFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::SynthComponentMonoWaveTable_eventSetPosLfoFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPosLfoFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLfoFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosLfoFrequency(Z_Param_InLfoFrequency);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPosLfoFrequency

// Begin Class USynthComponentMonoWaveTable Function SetPosLfoType
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics
{
	struct SynthComponentMonoWaveTable_eventSetPosLfoType_Parms
	{
		ESynthLFOType InLfoType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Set the shape of the Lfo controlling the position\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Set the shape of the Lfo controlling the position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLfoType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InLfoType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InLfoType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::NewProp_InLfoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::NewProp_InLfoType = { "InLfoType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetPosLfoType_Parms, InLfoType), Z_Construct_UEnum_Synthesis_ESynthLFOType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLfoType_MetaData), NewProp_InLfoType_MetaData) }; // 456560989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::NewProp_InLfoType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::NewProp_InLfoType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetPosLfoType", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::SynthComponentMonoWaveTable_eventSetPosLfoType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::SynthComponentMonoWaveTable_eventSetPosLfoType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetPosLfoType)
{
	P_GET_ENUM(ESynthLFOType,Z_Param_InLfoType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosLfoType(ESynthLFOType(Z_Param_InLfoType));
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetPosLfoType

// Begin Class USynthComponentMonoWaveTable Function SetSustainPedalState
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics
{
	struct SynthComponentMonoWaveTable_eventSetSustainPedalState_Parms
	{
		bool InSustainPedalState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Inform the synth if the sustain pedal is pressed or not\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Inform the synth if the sustain pedal is pressed or not" },
	};
#endif // WITH_METADATA
	static void NewProp_InSustainPedalState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InSustainPedalState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::NewProp_InSustainPedalState_SetBit(void* Obj)
{
	((SynthComponentMonoWaveTable_eventSetSustainPedalState_Parms*)Obj)->InSustainPedalState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::NewProp_InSustainPedalState = { "InSustainPedalState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SynthComponentMonoWaveTable_eventSetSustainPedalState_Parms), &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::NewProp_InSustainPedalState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::NewProp_InSustainPedalState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetSustainPedalState", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::SynthComponentMonoWaveTable_eventSetSustainPedalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::SynthComponentMonoWaveTable_eventSetSustainPedalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetSustainPedalState)
{
	P_GET_UBOOL(Z_Param_InSustainPedalState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSustainPedalState(Z_Param_InSustainPedalState);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetSustainPedalState

// Begin Class USynthComponentMonoWaveTable Function SetWaveTablePosition
struct Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics
{
	struct SynthComponentMonoWaveTable_eventSetWaveTablePosition_Parms
	{
		float InPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Sets the wavetable position. Expects a percentage between 0.0 and 1.0\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Sets the wavetable position. Expects a percentage between 0.0 and 1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SynthComponentMonoWaveTable_eventSetWaveTablePosition_Parms, InPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::NewProp_InPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMonoWaveTable, nullptr, "SetWaveTablePosition", nullptr, nullptr, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::SynthComponentMonoWaveTable_eventSetWaveTablePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::SynthComponentMonoWaveTable_eventSetWaveTablePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USynthComponentMonoWaveTable::execSetWaveTablePosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWaveTablePosition(Z_Param_InPosition);
	P_NATIVE_END;
}
// End Class USynthComponentMonoWaveTable Function SetWaveTablePosition

// Begin Class USynthComponentMonoWaveTable
void USynthComponentMonoWaveTable::StaticRegisterNativesUSynthComponentMonoWaveTable()
{
	UClass* Class = USynthComponentMonoWaveTable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurveTangent", &USynthComponentMonoWaveTable::execGetCurveTangent },
		{ "GetKeyFrameValuesForTable", &USynthComponentMonoWaveTable::execGetKeyFrameValuesForTable },
		{ "GetMaxTableIndex", &USynthComponentMonoWaveTable::execGetMaxTableIndex },
		{ "GetNumTableEntries", &USynthComponentMonoWaveTable::execGetNumTableEntries },
		{ "NoteOff", &USynthComponentMonoWaveTable::execNoteOff },
		{ "NoteOn", &USynthComponentMonoWaveTable::execNoteOn },
		{ "RefreshAllWaveTables", &USynthComponentMonoWaveTable::execRefreshAllWaveTables },
		{ "RefreshWaveTable", &USynthComponentMonoWaveTable::execRefreshWaveTable },
		{ "SetAmpEnvelopeAttackTime", &USynthComponentMonoWaveTable::execSetAmpEnvelopeAttackTime },
		{ "SetAmpEnvelopeBiasDepth", &USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasDepth },
		{ "SetAmpEnvelopeBiasInvert", &USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasInvert },
		{ "SetAmpEnvelopeDecayTime", &USynthComponentMonoWaveTable::execSetAmpEnvelopeDecayTime },
		{ "SetAmpEnvelopeDepth", &USynthComponentMonoWaveTable::execSetAmpEnvelopeDepth },
		{ "SetAmpEnvelopeInvert", &USynthComponentMonoWaveTable::execSetAmpEnvelopeInvert },
		{ "SetAmpEnvelopeReleaseTime", &USynthComponentMonoWaveTable::execSetAmpEnvelopeReleaseTime },
		{ "SetAmpEnvelopeSustainGain", &USynthComponentMonoWaveTable::execSetAmpEnvelopeSustainGain },
		{ "SetCurveInterpolationType", &USynthComponentMonoWaveTable::execSetCurveInterpolationType },
		{ "SetCurveTangent", &USynthComponentMonoWaveTable::execSetCurveTangent },
		{ "SetCurveValue", &USynthComponentMonoWaveTable::execSetCurveValue },
		{ "SetFilterEnvelopeAttackTime", &USynthComponentMonoWaveTable::execSetFilterEnvelopeAttackTime },
		{ "SetFilterEnvelopeBiasDepth", &USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasDepth },
		{ "SetFilterEnvelopeBiasInvert", &USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasInvert },
		{ "SetFilterEnvelopeDepth", &USynthComponentMonoWaveTable::execSetFilterEnvelopeDepth },
		{ "SetFilterEnvelopeInvert", &USynthComponentMonoWaveTable::execSetFilterEnvelopeInvert },
		{ "SetFilterEnvelopenDecayTime", &USynthComponentMonoWaveTable::execSetFilterEnvelopenDecayTime },
		{ "SetFilterEnvelopeReleaseTime", &USynthComponentMonoWaveTable::execSetFilterEnvelopeReleaseTime },
		{ "SetFilterEnvelopeSustainGain", &USynthComponentMonoWaveTable::execSetFilterEnvelopeSustainGain },
		{ "SetFrequency", &USynthComponentMonoWaveTable::execSetFrequency },
		{ "SetFrequencyPitchBend", &USynthComponentMonoWaveTable::execSetFrequencyPitchBend },
		{ "SetFrequencyWithMidiNote", &USynthComponentMonoWaveTable::execSetFrequencyWithMidiNote },
		{ "SetLowPassFilterResonance", &USynthComponentMonoWaveTable::execSetLowPassFilterResonance },
		{ "SetPositionEnvelopeAttackTime", &USynthComponentMonoWaveTable::execSetPositionEnvelopeAttackTime },
		{ "SetPositionEnvelopeBiasDepth", &USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasDepth },
		{ "SetPositionEnvelopeBiasInvert", &USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasInvert },
		{ "SetPositionEnvelopeDecayTime", &USynthComponentMonoWaveTable::execSetPositionEnvelopeDecayTime },
		{ "SetPositionEnvelopeDepth", &USynthComponentMonoWaveTable::execSetPositionEnvelopeDepth },
		{ "SetPositionEnvelopeInvert", &USynthComponentMonoWaveTable::execSetPositionEnvelopeInvert },
		{ "SetPositionEnvelopeReleaseTime", &USynthComponentMonoWaveTable::execSetPositionEnvelopeReleaseTime },
		{ "SetPositionEnvelopeSustainGain", &USynthComponentMonoWaveTable::execSetPositionEnvelopeSustainGain },
		{ "SetPosLfoDepth", &USynthComponentMonoWaveTable::execSetPosLfoDepth },
		{ "SetPosLfoFrequency", &USynthComponentMonoWaveTable::execSetPosLfoFrequency },
		{ "SetPosLfoType", &USynthComponentMonoWaveTable::execSetPosLfoType },
		{ "SetSustainPedalState", &USynthComponentMonoWaveTable::execSetSustainPedalState },
		{ "SetWaveTablePosition", &USynthComponentMonoWaveTable::execSetWaveTablePosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponentMonoWaveTable);
UClass* Z_Construct_UClass_USynthComponentMonoWaveTable_NoRegister()
{
	return USynthComponentMonoWaveTable::StaticClass();
}
struct Z_Construct_UClass_USynthComponentMonoWaveTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTableAltered_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Wave Table curve was edited\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Wave Table curve was edited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNumTablesChanged_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// Curve array altered\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "Curve array altered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPreset_MetaData[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/** The settings asset to use for this synth */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMonoWaveTable.h" },
		{ "ToolTip", "The settings asset to use for this synth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTableAltered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNumTablesChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetCurveTangent, "GetCurveTangent" }, // 3754204824
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetKeyFrameValuesForTable, "GetKeyFrameValuesForTable" }, // 894153547
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetMaxTableIndex, "GetMaxTableIndex" }, // 3059113552
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_GetNumTableEntries, "GetNumTableEntries" }, // 1956586590
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOff, "NoteOff" }, // 329063543
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_NoteOn, "NoteOn" }, // 3094878345
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshAllWaveTables, "RefreshAllWaveTables" }, // 416223602
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_RefreshWaveTable, "RefreshWaveTable" }, // 1016683111
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime, "SetAmpEnvelopeAttackTime" }, // 1268811777
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth, "SetAmpEnvelopeBiasDepth" }, // 940997015
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert, "SetAmpEnvelopeBiasInvert" }, // 158870902
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime, "SetAmpEnvelopeDecayTime" }, // 1673524789
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeDepth, "SetAmpEnvelopeDepth" }, // 2999610054
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeInvert, "SetAmpEnvelopeInvert" }, // 3108095522
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime, "SetAmpEnvelopeReleaseTime" }, // 3300733051
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain, "SetAmpEnvelopeSustainGain" }, // 3357720533
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveInterpolationType, "SetCurveInterpolationType" }, // 2281906318
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveTangent, "SetCurveTangent" }, // 935442776
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetCurveValue, "SetCurveValue" }, // 3461190139
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime, "SetFilterEnvelopeAttackTime" }, // 4054304311
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth, "SetFilterEnvelopeBiasDepth" }, // 2644400276
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert, "SetFilterEnvelopeBiasInvert" }, // 3896583635
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeDepth, "SetFilterEnvelopeDepth" }, // 2783888515
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeInvert, "SetFilterEnvelopeInvert" }, // 3436048570
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime, "SetFilterEnvelopenDecayTime" }, // 933086000
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime, "SetFilterEnvelopeReleaseTime" }, // 4185319629
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain, "SetFilterEnvelopeSustainGain" }, // 181489594
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequency, "SetFrequency" }, // 1934525333
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyPitchBend, "SetFrequencyPitchBend" }, // 828251489
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetFrequencyWithMidiNote, "SetFrequencyWithMidiNote" }, // 1542653012
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetLowPassFilterResonance, "SetLowPassFilterResonance" }, // 1481612381
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime, "SetPositionEnvelopeAttackTime" }, // 2990489100
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth, "SetPositionEnvelopeBiasDepth" }, // 847551422
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert, "SetPositionEnvelopeBiasInvert" }, // 1813928580
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime, "SetPositionEnvelopeDecayTime" }, // 3419879914
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeDepth, "SetPositionEnvelopeDepth" }, // 737941349
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeInvert, "SetPositionEnvelopeInvert" }, // 3579791350
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime, "SetPositionEnvelopeReleaseTime" }, // 3836460924
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain, "SetPositionEnvelopeSustainGain" }, // 3319240683
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoDepth, "SetPosLfoDepth" }, // 2306357272
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoFrequency, "SetPosLfoFrequency" }, // 3691041093
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetPosLfoType, "SetPosLfoType" }, // 2448843592
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetSustainPedalState, "SetSustainPedalState" }, // 1133281566
		{ &Z_Construct_UFunction_USynthComponentMonoWaveTable_SetWaveTablePosition, "SetWaveTablePosition" }, // 1776424189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentMonoWaveTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_OnTableAltered = { "OnTableAltered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentMonoWaveTable, OnTableAltered), Z_Construct_UDelegateFunction_Synthesis_OnTableAltered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTableAltered_MetaData), NewProp_OnTableAltered_MetaData) }; // 3238602650
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_OnNumTablesChanged = { "OnNumTablesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentMonoWaveTable, OnNumTablesChanged), Z_Construct_UDelegateFunction_Synthesis_NumTablesChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNumTablesChanged_MetaData), NewProp_OnNumTablesChanged_MetaData) }; // 4157810744
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_CurrentPreset = { "CurrentPreset", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USynthComponentMonoWaveTable, CurrentPreset), Z_Construct_UClass_UMonoWaveTableSynthPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPreset_MetaData), NewProp_CurrentPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_OnTableAltered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_OnNumTablesChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::NewProp_CurrentPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::ClassParams = {
	&USynthComponentMonoWaveTable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::Class_MetaDataParams), Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USynthComponentMonoWaveTable()
{
	if (!Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton, Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USynthComponentMonoWaveTable.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USynthComponentMonoWaveTable>()
{
	return USynthComponentMonoWaveTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentMonoWaveTable);
// End Class USynthComponentMonoWaveTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CurveInterpolationType_StaticEnum, TEXT("CurveInterpolationType"), &Z_Registration_Info_UEnum_CurveInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 589207983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMonoWaveTableSynthPreset, UMonoWaveTableSynthPreset::StaticClass, TEXT("UMonoWaveTableSynthPreset"), &Z_Registration_Info_UClass_UMonoWaveTableSynthPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonoWaveTableSynthPreset), 1365518716U) },
		{ Z_Construct_UClass_USynthComponentMonoWaveTable, USynthComponentMonoWaveTable::StaticClass, TEXT("USynthComponentMonoWaveTable"), &Z_Registration_Info_UClass_USynthComponentMonoWaveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponentMonoWaveTable), 1177035396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_1303077456(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentMonoWaveTable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
