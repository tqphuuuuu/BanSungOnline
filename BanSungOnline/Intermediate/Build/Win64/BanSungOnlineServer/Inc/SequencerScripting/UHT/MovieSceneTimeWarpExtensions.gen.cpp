// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpExtensions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneTimeWarpExtensions Function BreakTimeWarp
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics
{
	struct MovieSceneTimeWarpExtensions_eventBreakTimeWarp_Parms
	{
		FMovieSceneTimeWarpVariant TimeWarp;
		double FixedPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|TimeWarp" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWarp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeWarp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FixedPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::NewProp_TimeWarp = { "TimeWarp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventBreakTimeWarp_Parms, TimeWarp), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWarp_MetaData), NewProp_TimeWarp_MetaData) }; // 2379539647
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::NewProp_FixedPlayRate = { "FixedPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventBreakTimeWarp_Parms, FixedPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::NewProp_TimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::NewProp_FixedPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "BreakTimeWarp", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::MovieSceneTimeWarpExtensions_eventBreakTimeWarp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::MovieSceneTimeWarpExtensions_eventBreakTimeWarp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execBreakTimeWarp)
{
	P_GET_STRUCT_REF(FMovieSceneTimeWarpVariant,Z_Param_Out_TimeWarp);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_FixedPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneTimeWarpExtensions::BreakTimeWarp(Z_Param_Out_TimeWarp,Z_Param_Out_FixedPlayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function BreakTimeWarp

// Begin Class UMovieSceneTimeWarpExtensions Function Conv_PlayRateToTimeWarpVariant
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics
{
	struct MovieSceneTimeWarpExtensions_eventConv_PlayRateToTimeWarpVariant_Parms
	{
		double ConstantPlayRate;
		FMovieSceneTimeWarpVariant ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Sequencer|TimeWarp" },
		{ "Comment", "/**\n\x09 * Converts a constant playrate to a timewarp variant\n\x09 */" },
		{ "DisplayName", "To TimeWarp" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ToolTip", "Converts a constant playrate to a timewarp variant" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ConstantPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::NewProp_ConstantPlayRate = { "ConstantPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventConv_PlayRateToTimeWarpVariant_Parms, ConstantPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventConv_PlayRateToTimeWarpVariant_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(0, nullptr) }; // 2379539647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::NewProp_ConstantPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "Conv_PlayRateToTimeWarpVariant", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::MovieSceneTimeWarpExtensions_eventConv_PlayRateToTimeWarpVariant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::MovieSceneTimeWarpExtensions_eventConv_PlayRateToTimeWarpVariant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execConv_PlayRateToTimeWarpVariant)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ConstantPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneTimeWarpVariant*)Z_Param__Result=UMovieSceneTimeWarpExtensions::Conv_PlayRateToTimeWarpVariant(Z_Param_ConstantPlayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function Conv_PlayRateToTimeWarpVariant

// Begin Class UMovieSceneTimeWarpExtensions Function Conv_TimeWarpVariantToPlayRate
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics
{
	struct MovieSceneTimeWarpExtensions_eventConv_TimeWarpVariantToPlayRate_Parms
	{
		FMovieSceneTimeWarpVariant TimeWarp;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Sequencer|TimeWarp" },
		{ "Comment", "/**\n\x09 * Converts a timewarp variant struct to a constant play rate\n\x09 */" },
		{ "DisplayName", "To PlayRate" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ToolTip", "Converts a timewarp variant struct to a constant play rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWarp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeWarp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::NewProp_TimeWarp = { "TimeWarp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventConv_TimeWarpVariantToPlayRate_Parms, TimeWarp), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWarp_MetaData), NewProp_TimeWarp_MetaData) }; // 2379539647
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventConv_TimeWarpVariantToPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::NewProp_TimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "Conv_TimeWarpVariantToPlayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::MovieSceneTimeWarpExtensions_eventConv_TimeWarpVariantToPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::MovieSceneTimeWarpExtensions_eventConv_TimeWarpVariantToPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execConv_TimeWarpVariantToPlayRate)
{
	P_GET_STRUCT_REF(FMovieSceneTimeWarpVariant,Z_Param_Out_TimeWarp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneTimeWarpExtensions::Conv_TimeWarpVariantToPlayRate(Z_Param_Out_TimeWarp);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function Conv_TimeWarpVariantToPlayRate

// Begin Class UMovieSceneTimeWarpExtensions Function MakeTimeWarp
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics
{
	struct MovieSceneTimeWarpExtensions_eventMakeTimeWarp_Parms
	{
		double FixedPlayRate;
		FMovieSceneTimeWarpVariant ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|TimeWarp" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FixedPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::NewProp_FixedPlayRate = { "FixedPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventMakeTimeWarp_Parms, FixedPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventMakeTimeWarp_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(0, nullptr) }; // 2379539647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::NewProp_FixedPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "MakeTimeWarp", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::MovieSceneTimeWarpExtensions_eventMakeTimeWarp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::MovieSceneTimeWarpExtensions_eventMakeTimeWarp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execMakeTimeWarp)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_FixedPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneTimeWarpVariant*)Z_Param__Result=UMovieSceneTimeWarpExtensions::MakeTimeWarp(Z_Param_FixedPlayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function MakeTimeWarp

// Begin Class UMovieSceneTimeWarpExtensions Function SetFixedPlayRate
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics
{
	struct MovieSceneTimeWarpExtensions_eventSetFixedPlayRate_Parms
	{
		FMovieSceneTimeWarpVariant TimeWarp;
		double FixedPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|TimeWarp" },
		{ "Comment", "/**\n\x09 * Assign a constant playrate to this timewarp, overwriting any existing timewarp implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Assign a constant playrate to this timewarp, overwriting any existing timewarp implementation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeWarp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FixedPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::NewProp_TimeWarp = { "TimeWarp", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventSetFixedPlayRate_Parms, TimeWarp), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(0, nullptr) }; // 2379539647
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::NewProp_FixedPlayRate = { "FixedPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventSetFixedPlayRate_Parms, FixedPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::NewProp_TimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::NewProp_FixedPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "SetFixedPlayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::MovieSceneTimeWarpExtensions_eventSetFixedPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::MovieSceneTimeWarpExtensions_eventSetFixedPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execSetFixedPlayRate)
{
	P_GET_STRUCT_REF(FMovieSceneTimeWarpVariant,Z_Param_Out_TimeWarp);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_FixedPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneTimeWarpExtensions::SetFixedPlayRate(Z_Param_Out_TimeWarp,Z_Param_FixedPlayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function SetFixedPlayRate

// Begin Class UMovieSceneTimeWarpExtensions Function ToFixedPlayRate
struct Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics
{
	struct MovieSceneTimeWarpExtensions_eventToFixedPlayRate_Parms
	{
		FMovieSceneTimeWarpVariant TimeWarp;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|TimeWarp" },
		{ "Comment", "/**\n\x09 * Retrieve this timewarp's constant play rate. Will throw an error if the timewarp is not a constant play rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieve this timewarp's constant play rate. Will throw an error if the timewarp is not a constant play rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWarp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeWarp;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::NewProp_TimeWarp = { "TimeWarp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventToFixedPlayRate_Parms, TimeWarp), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWarp_MetaData), NewProp_TimeWarp_MetaData) }; // 2379539647
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTimeWarpExtensions_eventToFixedPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::NewProp_TimeWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTimeWarpExtensions, nullptr, "ToFixedPlayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::MovieSceneTimeWarpExtensions_eventToFixedPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::MovieSceneTimeWarpExtensions_eventToFixedPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneTimeWarpExtensions::execToFixedPlayRate)
{
	P_GET_STRUCT_REF(FMovieSceneTimeWarpVariant,Z_Param_Out_TimeWarp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneTimeWarpExtensions::ToFixedPlayRate(Z_Param_Out_TimeWarp);
	P_NATIVE_END;
}
// End Class UMovieSceneTimeWarpExtensions Function ToFixedPlayRate

// Begin Class UMovieSceneTimeWarpExtensions
void UMovieSceneTimeWarpExtensions::StaticRegisterNativesUMovieSceneTimeWarpExtensions()
{
	UClass* Class = UMovieSceneTimeWarpExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakTimeWarp", &UMovieSceneTimeWarpExtensions::execBreakTimeWarp },
		{ "Conv_PlayRateToTimeWarpVariant", &UMovieSceneTimeWarpExtensions::execConv_PlayRateToTimeWarpVariant },
		{ "Conv_TimeWarpVariantToPlayRate", &UMovieSceneTimeWarpExtensions::execConv_TimeWarpVariantToPlayRate },
		{ "MakeTimeWarp", &UMovieSceneTimeWarpExtensions::execMakeTimeWarp },
		{ "SetFixedPlayRate", &UMovieSceneTimeWarpExtensions::execSetFixedPlayRate },
		{ "ToFixedPlayRate", &UMovieSceneTimeWarpExtensions::execToFixedPlayRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTimeWarpExtensions);
UClass* Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister()
{
	return UMovieSceneTimeWarpExtensions::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that relate to time-warp within Sequencer\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTimeWarpExtensions.h" },
		{ "ToolTip", "Function library containing methods that relate to time-warp within Sequencer" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp, "BreakTimeWarp" }, // 4063645491
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant, "Conv_PlayRateToTimeWarpVariant" }, // 959172942
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate, "Conv_TimeWarpVariantToPlayRate" }, // 946732155
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp, "MakeTimeWarp" }, // 2276888988
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate, "SetFixedPlayRate" }, // 1042102751
		{ &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate, "ToFixedPlayRate" }, // 4154353225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTimeWarpExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::ClassParams = {
	&UMovieSceneTimeWarpExtensions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTimeWarpExtensions()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneTimeWarpExtensions>()
{
	return UMovieSceneTimeWarpExtensions::StaticClass();
}
UMovieSceneTimeWarpExtensions::UMovieSceneTimeWarpExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTimeWarpExtensions);
UMovieSceneTimeWarpExtensions::~UMovieSceneTimeWarpExtensions() {}
// End Class UMovieSceneTimeWarpExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTimeWarpExtensions, UMovieSceneTimeWarpExtensions::StaticClass, TEXT("UMovieSceneTimeWarpExtensions"), &Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTimeWarpExtensions), 3595337336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_2526264071(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
