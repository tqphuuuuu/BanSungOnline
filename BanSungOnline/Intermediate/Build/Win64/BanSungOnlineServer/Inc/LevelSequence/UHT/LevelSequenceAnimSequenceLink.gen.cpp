// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceAnimSequenceLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceAnimSequenceLinkItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem;
class UScriptStruct* FLevelSequenceAnimSequenceLinkItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceAnimSequenceLinkItem"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceAnimSequenceLinkItem>()
{
	return FLevelSequenceAnimSequenceLinkItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Link To Anim Sequence that we are linked too.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Anim Sequence that we are linked too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToAnimSequence_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportTransforms_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "//From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically\n" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMorphTargets_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportAttributeCurves_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialCurves_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveInterpolation_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateAllSkeletalMeshComponents_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAnimationNames_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Include only the animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Include only the animation bones/curves that match this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeAnimationNames_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Exclude all animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Exclude all animation bones/curves that match this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrames_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Number of Display Rate frames to evaluate before doing the export. It will evaluate after any Delay. This will use frames before the start frame. Use it if there is some post anim BP effects you want to run before export start time.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Number of Display Rate frames to evaluate before doing the export. It will evaluate after any Delay. This will use frames before the start frame. Use it if there is some post anim BP effects you want to run before export start time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeStart_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Number of Display Rate frames to delay at the same frame before doing the export. It will evalaute first, then any warm up, then the export. Use it if there is some post anim BP effects you want to ran repeatedly at the start.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Number of Display Rate frames to delay at the same frame before doing the export. It will evalaute first, then any warm up, then the export. Use it if there is some post anim BP effects you want to ran repeatedly at the start." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomTimeRange_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Whether or not to use custom time range */" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Whether or not to use custom time range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomStartFrame_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Custom start frame in display rate*/" },
		{ "EditCondition", "bUseCustomTimeRange" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Custom start frame in display rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEndFrame_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Custom end frame in display rate */" },
		{ "EditCondition", "bUseCustomTimeRange" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Custom end frame in display rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayRate_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Custom display rate, should be set from the movie scene/sequencer display rate */" },
		{ "EditCondition", "bUseCustomTimeRange" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Custom display rate, should be set from the movie scene/sequencer display rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathToAnimSequence;
	static void NewProp_bExportTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTransforms;
	static void NewProp_bExportMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMorphTargets;
	static void NewProp_bExportAttributeCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAttributeCurves;
	static void NewProp_bExportMaterialCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialCurves;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveInterpolation;
	static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
	static void NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateAllSkeletalMeshComponents;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncludeAnimationNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeAnimationNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeAnimationNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeAnimationNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarmUpFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayBeforeStart;
	static void NewProp_bUseCustomTimeRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomTimeRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomStartFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomEndFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomDisplayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceAnimSequenceLinkItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelTrackGuid_MetaData), NewProp_SkelTrackGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence = { "PathToAnimSequence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToAnimSequence_MetaData), NewProp_PathToAnimSequence_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms = { "bExportTransforms", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportTransforms_MetaData), NewProp_bExportTransforms_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets = { "bExportMorphTargets", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMorphTargets_MetaData), NewProp_bExportMorphTargets_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportAttributeCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves = { "bExportAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportAttributeCurves_MetaData), NewProp_bExportAttributeCurves_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMaterialCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves = { "bExportMaterialCurves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMaterialCurves_MetaData), NewProp_bExportMaterialCurves_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 1943220743
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CurveInterpolation = { "CurveInterpolation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, CurveInterpolation), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveInterpolation_MetaData), NewProp_CurveInterpolation_MetaData) }; // 294528593
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bRecordInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordInWorldSpace_MetaData), NewProp_bRecordInWorldSpace_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bEvaluateAllSkeletalMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents = { "bEvaluateAllSkeletalMeshComponents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateAllSkeletalMeshComponents_MetaData), NewProp_bEvaluateAllSkeletalMeshComponents_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_IncludeAnimationNames_Inner = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_IncludeAnimationNames = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, IncludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeAnimationNames_MetaData), NewProp_IncludeAnimationNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_ExcludeAnimationNames_Inner = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_ExcludeAnimationNames = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, ExcludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeAnimationNames_MetaData), NewProp_ExcludeAnimationNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_WarmUpFrames = { "WarmUpFrames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, WarmUpFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmUpFrames_MetaData), NewProp_WarmUpFrames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_DelayBeforeStart = { "DelayBeforeStart", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, DelayBeforeStart), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayBeforeStart_MetaData), NewProp_DelayBeforeStart_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bUseCustomTimeRange_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bUseCustomTimeRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bUseCustomTimeRange = { "bUseCustomTimeRange", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bUseCustomTimeRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomTimeRange_MetaData), NewProp_bUseCustomTimeRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomStartFrame = { "CustomStartFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, CustomStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomStartFrame_MetaData), NewProp_CustomStartFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomEndFrame = { "CustomEndFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, CustomEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEndFrame_MetaData), NewProp_CustomEndFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomDisplayRate = { "CustomDisplayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, CustomDisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDisplayRate_MetaData), NewProp_CustomDisplayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CurveInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_IncludeAnimationNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_IncludeAnimationNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_ExcludeAnimationNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_ExcludeAnimationNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_WarmUpFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_DelayBeforeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bUseCustomTimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomEndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CustomDisplayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceAnimSequenceLinkItem",
	Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers),
	sizeof(FLevelSequenceAnimSequenceLinkItem),
	alignof(FLevelSequenceAnimSequenceLinkItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton;
}
// End ScriptStruct FLevelSequenceAnimSequenceLinkItem

// Begin Class ULevelSequenceAnimSequenceLink
void ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceAnimSequenceLink);
UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister()
{
	return ULevelSequenceAnimSequenceLink::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Link To Set of Anim Sequences that we may belinked to.*/" },
		{ "IncludePath", "LevelSequenceAnimSequenceLink.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Set of Anim Sequences that we may belinked to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceLinks_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequenceLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceAnimSequenceLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, METADATA_PARAMS(0, nullptr) }; // 2383604365
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceAnimSequenceLink, AnimSequenceLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequenceLinks_MetaData), NewProp_AnimSequenceLinks_MetaData) }; // 2383604365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams = {
	&ULevelSequenceAnimSequenceLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton, Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceAnimSequenceLink>()
{
	return ULevelSequenceAnimSequenceLink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceAnimSequenceLink);
ULevelSequenceAnimSequenceLink::~ULevelSequenceAnimSequenceLink() {}
// End Class ULevelSequenceAnimSequenceLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceAnimSequenceLinkItem::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps, TEXT("LevelSequenceAnimSequenceLinkItem"), &Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceAnimSequenceLinkItem), 2383604365U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceAnimSequenceLink, ULevelSequenceAnimSequenceLink::StaticClass, TEXT("ULevelSequenceAnimSequenceLink"), &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceAnimSequenceLink), 2473531400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_207049856(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
