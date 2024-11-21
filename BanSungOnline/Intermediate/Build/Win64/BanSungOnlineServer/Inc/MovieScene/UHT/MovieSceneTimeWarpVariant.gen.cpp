// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariant.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneNumericVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpVariant() {}

// Begin Cross Module References
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNumericVariant();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneTimeWarpType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneTimeWarpType;
static UEnum* EMovieSceneTimeWarpType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneTimeWarpType"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneTimeWarpType>()
{
	return EMovieSceneTimeWarpType_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clamp.Comment", "// PAYLOAD_Bits is a FMovieSceneTimeWarpLoop\n" },
		{ "Clamp.Name", "EMovieSceneTimeWarpType::Clamp" },
		{ "Clamp.ToolTip", "PAYLOAD_Bits is a FMovieSceneTimeWarpLoop" },
		{ "ClampFloat.Comment", "// PAYLOAD_Bits is a FMovieSceneTimeWarpLoopFloat\n" },
		{ "ClampFloat.Name", "EMovieSceneTimeWarpType::ClampFloat" },
		{ "ClampFloat.ToolTip", "PAYLOAD_Bits is a FMovieSceneTimeWarpLoopFloat" },
		{ "Comment", "/** Enumeration defining the type stored within an FMovieSceneTimeWarpVariant */" },
		{ "Custom.Comment", "// FMovieSceneNumericVariant is a fixed double\n" },
		{ "Custom.Name", "EMovieSceneTimeWarpType::Custom" },
		{ "Custom.ToolTip", "FMovieSceneNumericVariant is a fixed double" },
		{ "FixedPlayRate.Name", "EMovieSceneTimeWarpType::FixedPlayRate" },
		{ "FixedTime.Comment", "// PAYLOAD_Bits is a UMovieSceneTimeWarpGetter* - matches FMovieSceneNumericVariant::TYPE_CustomPtr - 1\n" },
		{ "FixedTime.Name", "EMovieSceneTimeWarpType::FixedTime" },
		{ "FixedTime.ToolTip", "PAYLOAD_Bits is a UMovieSceneTimeWarpGetter* - matches FMovieSceneNumericVariant::TYPE_CustomPtr - 1" },
		{ "FrameRate.Comment", "// PAYLOAD_Bits is a FMovieSceneTimeWarpFixedFrame (explicitly fixed time or zero timescale)\n" },
		{ "FrameRate.Name", "EMovieSceneTimeWarpType::FrameRate" },
		{ "FrameRate.ToolTip", "PAYLOAD_Bits is a FMovieSceneTimeWarpFixedFrame (explicitly fixed time or zero timescale)" },
		{ "Loop.Comment", "// PAYLOAD_Bits is a FMovieSceneTimeWarpFrameRate defining a frame rate from outer to inner space\n" },
		{ "Loop.Name", "EMovieSceneTimeWarpType::Loop" },
		{ "Loop.ToolTip", "PAYLOAD_Bits is a FMovieSceneTimeWarpFrameRate defining a frame rate from outer to inner space" },
		{ "LoopFloat.Comment", "// PAYLOAD_Bits is a FMovieSceneTimeWarpClamp\n" },
		{ "LoopFloat.Name", "EMovieSceneTimeWarpType::LoopFloat" },
		{ "LoopFloat.ToolTip", "PAYLOAD_Bits is a FMovieSceneTimeWarpClamp" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariant.h" },
		{ "ToolTip", "Enumeration defining the type stored within an FMovieSceneTimeWarpVariant" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneTimeWarpType::FixedPlayRate", (int64)EMovieSceneTimeWarpType::FixedPlayRate },
		{ "EMovieSceneTimeWarpType::Custom", (int64)EMovieSceneTimeWarpType::Custom },
		{ "EMovieSceneTimeWarpType::FixedTime", (int64)EMovieSceneTimeWarpType::FixedTime },
		{ "EMovieSceneTimeWarpType::FrameRate", (int64)EMovieSceneTimeWarpType::FrameRate },
		{ "EMovieSceneTimeWarpType::Loop", (int64)EMovieSceneTimeWarpType::Loop },
		{ "EMovieSceneTimeWarpType::Clamp", (int64)EMovieSceneTimeWarpType::Clamp },
		{ "EMovieSceneTimeWarpType::LoopFloat", (int64)EMovieSceneTimeWarpType::LoopFloat },
		{ "EMovieSceneTimeWarpType::ClampFloat", (int64)EMovieSceneTimeWarpType::ClampFloat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneTimeWarpType",
	"EMovieSceneTimeWarpType",
	Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.InnerSingleton;
}
// End Enum EMovieSceneTimeWarpType

// Begin ScriptStruct FMovieSceneTimeWarpVariant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant;
class UScriptStruct* FMovieSceneTimeWarpVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpVariant"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpVariant>()
{
	return FMovieSceneTimeWarpVariant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Numeric variant type that represents a 'time-warp' operation transforming a time into another time.\n * \n * By default this variant is a literal value that represents a play rate of 1.0 (ie, a 1:1 mapping), but it can be customized\n * to provide a wide range of different transformations such as looping, clamping and custom curves\n */" },
		{ "HasNativeBreak", "/Script/SequencerScripting.MovieSceneTimeWarpExtensions.BreakTimeWarp" },
		{ "HasNativeMake", "/Script/SequencerScripting.MovieSceneTimeWarpExtensions.MakeTimeWarp" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariant.h" },
		{ "ToolTip", "Numeric variant type that represents a 'time-warp' operation transforming a time into another time.\n\nBy default this variant is a literal value that represents a play rate of 1.0 (ie, a 1:1 mapping), but it can be customized\nto provide a wide range of different transformations such as looping, clamping and custom curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpVariant, Variant), Z_Construct_UScriptStruct_FMovieSceneNumericVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) }; // 1219497573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::NewProp_Variant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpVariant",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpVariant),
	alignof(FMovieSceneTimeWarpVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpVariant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneTimeWarpType_StaticEnum, TEXT("EMovieSceneTimeWarpType"), &Z_Registration_Info_UEnum_EMovieSceneTimeWarpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 866176812U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTimeWarpVariant::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant_Statics::NewStructOps, TEXT("MovieSceneTimeWarpVariant"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpVariant), 2379539647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_3863071715(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariant_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
