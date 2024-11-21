// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Sections/MovieSceneSectionTimingParameters.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionTimingParameters() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSectionTimingParametersSeconds
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds;
class UScriptStruct* FMovieSceneSectionTimingParametersSeconds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionTimingParametersSeconds"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionTimingParametersSeconds>()
{
	return FMovieSceneSectionTimingParametersSeconds::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameter utility that converts section timing parameters to a transform using Seconds values.\n * \n * Transformation happens in the following order:\n * \n * InputTime (relative to section start)\n *     >> Play Rate / Time Warp\n *     >> FrameRate conversion\n *     >> +StartTimeOffset\n *     >> Loop (% duration)\n *     >> Reverse\n **/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Parameter utility that converts section timing parameters to a transform using Seconds values.\n\nTransformation happens in the following order:\n\nInputTime (relative to section start)\n    >> Play Rate / Time Warp\n    >> FrameRate conversion\n    >> +StartTimeOffset\n    >> Loop (% duration)\n    >> Reverse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Playrate optionally implemented as time-warp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Playrate optionally implemented as time-warp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerStartOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Start offset (in seconds) to apply to all loops\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Start offset (in seconds) to apply to all loops" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerEndOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * End offset (in seconds) to apply to all loops ie, loop_range=[0 + InnerStartOffset, End- InnerEndOffset)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "End offset (in seconds) to apply to all loops ie, loop_range=[0 + InnerStartOffset, End- InnerEndOffset)" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Start offset to apply only to the first loop\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Start offset to apply only to the first loop" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, apply looping to the inner range. Mutually exclusive with bClamp.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, apply looping to the inner range. Mutually exclusive with bClamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, apply clamping to the inner range. Mutually exclusive with bLoop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, apply clamping to the inner range. Mutually exclusive with bLoop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, reverses the play direction. Applied after all other transformations\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, reverses the play direction. Applied after all other transformations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerEndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstLoopStartOffset;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static void NewProp_bClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClamp;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionTimingParametersSeconds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersSeconds, PlayRate), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) }; // 2379539647
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_InnerStartOffset = { "InnerStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersSeconds, InnerStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerStartOffset_MetaData), NewProp_InnerStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_InnerEndOffset = { "InnerEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersSeconds, InnerEndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerEndOffset_MetaData), NewProp_InnerEndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_FirstLoopStartOffset = { "FirstLoopStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersSeconds, FirstLoopStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartOffset_MetaData), NewProp_FirstLoopStartOffset_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersSeconds*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersSeconds), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bClamp_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersSeconds*)Obj)->bClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersSeconds), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamp_MetaData), NewProp_bClamp_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersSeconds*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersSeconds), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_InnerStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_InnerEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_FirstLoopStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewProp_bReverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSectionTimingParametersSeconds",
	Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::PropPointers),
	sizeof(FMovieSceneSectionTimingParametersSeconds),
	alignof(FMovieSceneSectionTimingParametersSeconds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds.InnerSingleton;
}
// End ScriptStruct FMovieSceneSectionTimingParametersSeconds

// Begin ScriptStruct FMovieSceneSectionTimingParametersFrames
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames;
class UScriptStruct* FMovieSceneSectionTimingParametersFrames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionTimingParametersFrames"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionTimingParametersFrames>()
{
	return FMovieSceneSectionTimingParametersFrames::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameter utility that converts section timing parameters to a transform using inner frame values.\n * \n * Transformation happens in the following order:\n * \n * InputTime (relative to section start)\n *     >> Play Rate / Time Warp\n *     >> FrameRate conversion\n *     >> +StartTimeOffset\n *     >> Loop (% duration)\n *     >> Reverse\n **/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Parameter utility that converts section timing parameters to a transform using inner frame values.\n\nTransformation happens in the following order:\n\nInputTime (relative to section start)\n    >> Play Rate / Time Warp\n    >> FrameRate conversion\n    >> +StartTimeOffset\n    >> Loop (% duration)\n    >> Reverse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Playrate optionally implemented as time-warp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Playrate optionally implemented as time-warp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerStartOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Start offset (in inner framerate frames) to apply to all loops\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Start offset (in inner framerate frames) to apply to all loops" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerEndOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * End offset (in inner framerate frames) to apply to all loops ie, loop_range=[0 + InnerStartOffset, End- InnerEndOffset)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "End offset (in inner framerate frames) to apply to all loops ie, loop_range=[0 + InnerStartOffset, End- InnerEndOffset)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartOffset_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * Start offset to apply only to the first loop\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "Start offset to apply only to the first loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, apply looping to the inner range. Mutually exclusive with bClamp.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, apply looping to the inner range. Mutually exclusive with bClamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, apply clamping to the inner range. Mutually exclusive with bLoop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, apply clamping to the inner range. Mutually exclusive with bLoop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/**\n\x09 * When true, reverses the play direction. Applied after all other transformations\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSectionTimingParameters.h" },
		{ "ToolTip", "When true, reverses the play direction. Applied after all other transformations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerStartOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerEndOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartOffset;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static void NewProp_bClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClamp;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionTimingParametersFrames>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersFrames, PlayRate), Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) }; // 2379539647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_InnerStartOffset = { "InnerStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersFrames, InnerStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerStartOffset_MetaData), NewProp_InnerStartOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_InnerEndOffset = { "InnerEndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersFrames, InnerEndOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerEndOffset_MetaData), NewProp_InnerEndOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_FirstLoopStartOffset = { "FirstLoopStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionTimingParametersFrames, FirstLoopStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartOffset_MetaData), NewProp_FirstLoopStartOffset_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersFrames*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersFrames), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bClamp_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersFrames*)Obj)->bClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersFrames), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamp_MetaData), NewProp_bClamp_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieSceneSectionTimingParametersFrames*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSectionTimingParametersFrames), &Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_InnerStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_InnerEndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_FirstLoopStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewProp_bReverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSectionTimingParametersFrames",
	Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::PropPointers),
	sizeof(FMovieSceneSectionTimingParametersFrames),
	alignof(FMovieSceneSectionTimingParametersFrames),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames.InnerSingleton;
}
// End ScriptStruct FMovieSceneSectionTimingParametersFrames

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSectionTimingParametersSeconds::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersSeconds_Statics::NewStructOps, TEXT("MovieSceneSectionTimingParametersSeconds"), &Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersSeconds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSectionTimingParametersSeconds), 2456030909U) },
		{ FMovieSceneSectionTimingParametersFrames::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSectionTimingParametersFrames_Statics::NewStructOps, TEXT("MovieSceneSectionTimingParametersFrames"), &Z_Registration_Info_UScriptStruct_MovieSceneSectionTimingParametersFrames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSectionTimingParametersFrames), 336188707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h_3486011881(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSectionTimingParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
