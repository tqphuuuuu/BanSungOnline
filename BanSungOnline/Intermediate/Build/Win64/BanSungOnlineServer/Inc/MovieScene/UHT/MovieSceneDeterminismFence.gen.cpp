// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneDeterminismFence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDeterminismFence() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismFence();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneDeterminismFence
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence;
class UScriptStruct* FMovieSceneDeterminismFence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDeterminismFence, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDeterminismFence"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDeterminismFence>()
{
	return FMovieSceneDeterminismFence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure that defines a specific determinism fence */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneDeterminismFence.h" },
		{ "ToolTip", "Structure that defines a specific determinism fence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the lower bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneDeterminismFence.h" },
		{ "ToolTip", "True if this sequence should include a fence on the lower bound of any sub sequence's that include it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[] = {
		{ "Comment", "/**\n\x09 * Default: false. When true, specifies that this fence should be evaluated exactly on the specified time.\n\x09 * When false, all times up to, but not including FrameNumber will be evaluated.\n\x09 * \n\x09 * Exclusive should be used for a fence at the end of a subsection with an exclusive time to ensure that the\n\x09 *     sub-section is entirely evaluated before evaluation returns.\n\x09 * \n\x09 * Inclusive should be used if an exact time must be evaluated (such as for testing purposes)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneDeterminismFence.h" },
		{ "ToolTip", "Default: false. When true, specifies that this fence should be evaluated exactly on the specified time.\nWhen false, all times up to, but not including FrameNumber will be evaluated.\n\nExclusive should be used for a fence at the end of a subsection with an exclusive time to ensure that the\n    sub-section is entirely evaluated before evaluation returns.\n\nInclusive should be used if an exact time must be evaluated (such as for testing purposes)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameNumber;
	static void NewProp_bInclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDeterminismFence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDeterminismFence, FrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNumber_MetaData), NewProp_FrameNumber_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_bInclusive_SetBit(void* Obj)
{
	((FMovieSceneDeterminismFence*)Obj)->bInclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneDeterminismFence), &Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInclusive_MetaData), NewProp_bInclusive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewProp_bInclusive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDeterminismFence",
	Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::PropPointers),
	sizeof(FMovieSceneDeterminismFence),
	alignof(FMovieSceneDeterminismFence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismFence()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence.InnerSingleton;
}
// End ScriptStruct FMovieSceneDeterminismFence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneDeterminismFence_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDeterminismFence::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDeterminismFence_Statics::NewStructOps, TEXT("MovieSceneDeterminismFence"), &Z_Registration_Info_UScriptStruct_MovieSceneDeterminismFence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDeterminismFence), 313473132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneDeterminismFence_h_3176466834(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneDeterminismFence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneDeterminismFence_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
