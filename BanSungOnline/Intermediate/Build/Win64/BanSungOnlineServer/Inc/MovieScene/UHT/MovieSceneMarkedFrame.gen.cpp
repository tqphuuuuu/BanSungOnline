// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneMarkedFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarkedFrame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneMarkedFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame;
class UScriptStruct* FMovieSceneMarkedFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneMarkedFrame"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneMarkedFrame>()
{
	return FMovieSceneMarkedFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomColor_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "bUseCustomColor" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomColor_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeterminismFence_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "DisplayName", "Is Determinism Fence?" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
		{ "Tooltip", "When checked, treat this mark as a fence for evaluation purposes. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInclusiveTime_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "DisplayName", "Inclusive?" },
		{ "EditCondition", "bIsDeterminismFence" },
		{ "ModuleRelativePath", "Public/MovieSceneMarkedFrame.h" },
		{ "Tooltip", "Defines how this determinism fence determines the previous and next range: when true, the range will be dissected as (X, Y] -> (Y, Z], when false it will be (X, Y) -> [Y, Z]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColor;
	static void NewProp_bUseCustomColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsDeterminismFence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeterminismFence;
	static void NewProp_bIsInclusiveTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInclusiveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMarkedFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMarkedFrame, FrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNumber_MetaData), NewProp_FrameNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMarkedFrame, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMarkedFrame, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMarkedFrame, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomColor_MetaData), NewProp_CustomColor_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bUseCustomColor_SetBit(void* Obj)
{
	((FMovieSceneMarkedFrame*)Obj)->bUseCustomColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bUseCustomColor = { "bUseCustomColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneMarkedFrame), &Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bUseCustomColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomColor_MetaData), NewProp_bUseCustomColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneMarkedFrame, Color_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_SetBit(void* Obj)
{
	((FMovieSceneMarkedFrame*)Obj)->bIsDeterminismFence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence = { "bIsDeterminismFence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneMarkedFrame), &Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDeterminismFence_MetaData), NewProp_bIsDeterminismFence_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsInclusiveTime_SetBit(void* Obj)
{
	((FMovieSceneMarkedFrame*)Obj)->bIsInclusiveTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsInclusiveTime = { "bIsInclusiveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneMarkedFrame), &Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsInclusiveTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInclusiveTime_MetaData), NewProp_bIsInclusiveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_CustomColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bUseCustomColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsInclusiveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneMarkedFrame",
	Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers),
	sizeof(FMovieSceneMarkedFrame),
	alignof(FMovieSceneMarkedFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton;
}
// End ScriptStruct FMovieSceneMarkedFrame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneMarkedFrame::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewStructOps, TEXT("MovieSceneMarkedFrame"), &Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMarkedFrame), 4067290610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h_3945049754(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMarkedFrame_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
