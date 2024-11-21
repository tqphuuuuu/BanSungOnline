// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSourceSettings();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkDefaultSourceSettings
void ULiveLinkDefaultSourceSettings::StaticRegisterNativesULiveLinkDefaultSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkDefaultSourceSettings);
UClass* Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister()
{
	return ULiveLinkDefaultSourceSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class that allows specifying default values for Source settings.\n */" },
		{ "IncludePath", "LiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Utility class that allows specifying default values for Source settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceFrameBufferSize_MetaData[] = {
		{ "Comment", "/** Default number of frames that should be buffered by a LiveLink source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Default number of frames that should be buffered by a LiveLink source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSourceFrameBufferSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkDefaultSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::NewProp_DefaultSourceFrameBufferSize = { "DefaultSourceFrameBufferSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkDefaultSourceSettings, DefaultSourceFrameBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSourceFrameBufferSize_MetaData), NewProp_DefaultSourceFrameBufferSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::NewProp_DefaultSourceFrameBufferSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::ClassParams = {
	&ULiveLinkDefaultSourceSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkDefaultSourceSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkDefaultSourceSettings>()
{
	return ULiveLinkDefaultSourceSettings::StaticClass();
}
ULiveLinkDefaultSourceSettings::ULiveLinkDefaultSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkDefaultSourceSettings);
ULiveLinkDefaultSourceSettings::~ULiveLinkDefaultSourceSettings() {}
// End Class ULiveLinkDefaultSourceSettings

// Begin Enum ELiveLinkSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkSourceMode;
static UEnum* ELiveLinkSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkSourceMode"));
	}
	return Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSourceMode>()
{
	return ELiveLinkSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EngineTime.Comment", "//The source will use the engine's time to evaluate its subjects.\n//This mode is most useful when smooth animation is desired.\n" },
		{ "EngineTime.Name", "ELiveLinkSourceMode::EngineTime" },
		{ "EngineTime.ToolTip", "The source will use the engine's time to evaluate its subjects.\nThis mode is most useful when smooth animation is desired." },
		{ "Latest.Comment", "//The source will the latest frame available to evaluate its subjects.\n//This mode will not attempt any type of interpolation or time synchronization.\n" },
		{ "Latest.Name", "ELiveLinkSourceMode::Latest" },
		{ "Latest.ToolTip", "The source will the latest frame available to evaluate its subjects.\nThis mode will not attempt any type of interpolation or time synchronization." },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "Timecode.Comment", "//The source will use the engine's timecode to evaluate its subjects.\n//This mode is most useful when sources need to be synchronized with \n//multiple other external inputs\n//(such as video or other time synchronized sources).\n//Should not be used when the engine isn't setup with a Timecode provider.\n" },
		{ "Timecode.Name", "ELiveLinkSourceMode::Timecode" },
		{ "Timecode.ToolTip", "The source will use the engine's timecode to evaluate its subjects.\nThis mode is most useful when sources need to be synchronized with\nmultiple other external inputs\n(such as video or other time synchronized sources).\nShould not be used when the engine isn't setup with a Timecode provider." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiveLinkSourceMode::Latest", (int64)ELiveLinkSourceMode::Latest },
		{ "ELiveLinkSourceMode::EngineTime", (int64)ELiveLinkSourceMode::EngineTime },
		{ "ELiveLinkSourceMode::Timecode", (int64)ELiveLinkSourceMode::Timecode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	"ELiveLinkSourceMode",
	"ELiveLinkSourceMode",
	Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton, Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton;
}
// End Enum ELiveLinkSourceMode

// Begin ScriptStruct FLiveLinkSourceBufferManagementSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings;
class UScriptStruct* FLiveLinkSourceBufferManagementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceBufferManagementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceBufferManagementSettings>()
{
	return FLiveLinkSourceBufferManagementSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//~ A customizer will add the properties manually. You'll need to update LiveLinkSourceSettingsDetailCustomization if you add a property here.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidEngineTimeEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enabled the ValidEngineTime setting. */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Enabled the ValidEngineTime setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidEngineTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.500000" },
		{ "Comment", "/** If the frame is older than ValidTime, remove it from the buffer list (in seconds). */" },
		{ "EditCondition", "bValidEngineTimeEnabled" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame is older than ValidTime, remove it from the buffer list (in seconds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with time: how far back from current time should we read the buffer (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with time: how far back from current time should we read the buffer (in seconds)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source clock and engine clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source clock and engine clock (in seconds)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothEngineTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated offset to achieve a smooth evaluation time (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated offset to achieve a smooth evaluation time (in seconds)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameRate_MetaData[] = {
		{ "Comment", "/** DEPRECATED: TimecodeFrameRate is now read from each individual subject from FQualifiedFrameTime. \n\x09 * It is expected that all subjects under a source have the same and it will be readable in DetectedFrameRate variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "DEPRECATED: TimecodeFrameRate is now read from each individual subject from FQualifiedFrameTime.\nIt is expected that all subjects under a source have the same and it will be readable in DetectedFrameRate variable" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSubFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** FrameRate taken from one of the subjects. It's expected that all subjects have the same FrameRate */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "FrameRate taken from one of the subjects. It's expected that all subjects have the same FrameRate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeSmoothLatest_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest \n\x09 * This means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\n\x09 * will be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\n\x09 * your subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest\nThis means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\nwill be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\nyour subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTimecodeFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * What is the source frame rate.\n\x09 * When the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n\x09 * @note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n\x09 * @note The generated sub frame numbers will not be saved by Sequencer.\n\x09 */" },
		{ "EditCondition", "bGenerateSubFrame" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "What is the source frame rate.\nWhen the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n@note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n@note The generated sub frame numbers will not be saved by Sequencer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidTimecodeFrameEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidTimecodeFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "EditCondition", "bValidTimecodeFrameEnabled" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate). */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with latest: how far back from latest frame should we read the buffer */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with latest: how far back from latest frame should we read the buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFrameToBuffered_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of frames to keep in memory. */" },
		{ "DisplayName", "Buffer Size (Frames)" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Maximum number of frames to keep in memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepAtLeastOneFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options." },
	};
#endif // WITH_METADATA
	static void NewProp_bValidEngineTimeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidEngineTimeEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValidEngineTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTimeOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EngineTimeClockOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothEngineTimeOffset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeFrameRate;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bGenerateSubFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSubFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectedFrameRate;
	static void NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeSmoothLatest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTimecodeFrameRate;
	static void NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidTimecodeFrameEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValidTimecodeFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimecodeFrameOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimecodeClockOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LatestOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfFrameToBuffered;
	static void NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepAtLeastOneFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceBufferManagementSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit(void* Obj)
{
	((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidEngineTimeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled = { "bValidEngineTimeEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidEngineTimeEnabled_MetaData), NewProp_bValidEngineTimeEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime = { "ValidEngineTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidEngineTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidEngineTime_MetaData), NewProp_ValidEngineTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset = { "EngineTimeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTimeOffset_MetaData), NewProp_EngineTimeOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset = { "EngineTimeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeClockOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTimeClockOffset_MetaData), NewProp_EngineTimeClockOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset = { "SmoothEngineTimeOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, SmoothEngineTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothEngineTimeOffset_MetaData), NewProp_SmoothEngineTimeOffset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate = { "TimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameRate_DEPRECATED), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeFrameRate_MetaData), NewProp_TimecodeFrameRate_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit(void* Obj)
{
	((FLiveLinkSourceBufferManagementSettings*)Obj)->bGenerateSubFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame = { "bGenerateSubFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateSubFrame_MetaData), NewProp_bGenerateSubFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate = { "DetectedFrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedFrameRate_MetaData), NewProp_DetectedFrameRate_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj)
{
	((FLiveLinkSourceBufferManagementSettings*)Obj)->bUseTimecodeSmoothLatest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest = { "bUseTimecodeSmoothLatest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimecodeSmoothLatest_MetaData), NewProp_bUseTimecodeSmoothLatest_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate = { "SourceTimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTimecodeFrameRate_MetaData), NewProp_SourceTimecodeFrameRate_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj)
{
	((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidTimecodeFrameEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled = { "bValidTimecodeFrameEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidTimecodeFrameEnabled_MetaData), NewProp_bValidTimecodeFrameEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame = { "ValidTimecodeFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidTimecodeFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidTimecodeFrame_MetaData), NewProp_ValidTimecodeFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset = { "TimecodeFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeFrameOffset_MetaData), NewProp_TimecodeFrameOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset = { "TimecodeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeClockOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeClockOffset_MetaData), NewProp_TimecodeClockOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset = { "LatestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, LatestOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestOffset_MetaData), NewProp_LatestOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered = { "MaxNumberOfFrameToBuffered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, MaxNumberOfFrameToBuffered), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfFrameToBuffered_MetaData), NewProp_MaxNumberOfFrameToBuffered_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj)
{
	((FLiveLinkSourceBufferManagementSettings*)Obj)->bKeepAtLeastOneFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame = { "bKeepAtLeastOneFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepAtLeastOneFrame_MetaData), NewProp_bKeepAtLeastOneFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkSourceBufferManagementSettings",
	Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers),
	sizeof(FLiveLinkSourceBufferManagementSettings),
	alignof(FLiveLinkSourceBufferManagementSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton;
}
// End ScriptStruct FLiveLinkSourceBufferManagementSettings

// Begin ScriptStruct FLiveLinkSourceDebugInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo;
class UScriptStruct* FLiveLinkSourceDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceDebugInfo>()
{
	return FLiveLinkSourceDebugInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBufferAtSnapshot_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SnapshotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBufferAtSnapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) }; // 463217522
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex = { "SnapshotIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SnapshotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotIndex_MetaData), NewProp_SnapshotIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot = { "NumberOfBufferAtSnapshot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, NumberOfBufferAtSnapshot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfBufferAtSnapshot_MetaData), NewProp_NumberOfBufferAtSnapshot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkSourceDebugInfo",
	Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers),
	sizeof(FLiveLinkSourceDebugInfo),
	alignof(FLiveLinkSourceDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton;
}
// End ScriptStruct FLiveLinkSourceDebugInfo

// Begin Class ULiveLinkSourceSettings
void ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSourceSettings);
UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister()
{
	return ULiveLinkSourceSettings::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for live link source settings (can be replaced by sources themselves) */" },
		{ "IncludePath", "LiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Base class for live link source settings (can be replaced by sources themselves)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The the subject how to create the frame snapshot.\n\x09 * @note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime.\n\x09 */" },
		{ "DisplayName", "Evaluation Mode" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The the subject how to create the frame snapshot.\n@note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the frame buffers are managed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "How the frame buffers are managed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Connection information that is needed by the factory to recreate the source from a preset. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Connection information that is needed by the factory to recreate the source from a preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[] = {
		{ "Comment", "/** Factory used to create the source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Factory used to create the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSubject_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Which subject should be used as a synchronization source for this source.\n\x09 * If this is set, this source's subjects will only be rebroadcast when the parent subject receives data.\n\x09 * Additionally this source's subjects' timecode will match the parent's subject received timecode.\n\x09 * This can be useful for synchronizing a higher frequency source to a lower frequency one.\n\x09 */" },
		{ "DisplayName", "Sync Subject" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Which subject should be used as a synchronization source for this source.\nIf this is set, this source's subjects will only be rebroadcast when the parent subject receives data.\nAdditionally this source's subjects' timecode will match the parent's subject received timecode.\nThis can be useful for synchronizing a higher frequency source to a lower frequency one." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDebugInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BufferSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Factory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentSubject;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDebugInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDebugInfos;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, Mode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1781673180
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings = { "BufferSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, BufferSettings), Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferSettings_MetaData), NewProp_BufferSettings_MetaData) }; // 43849084
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, ConnectionString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionString_MetaData), NewProp_ConnectionString_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, Factory), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factory_MetaData), NewProp_Factory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ParentSubject = { "ParentSubject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, ParentSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSubject_MetaData), NewProp_ParentSubject_MetaData) }; // 463217522
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, METADATA_PARAMS(0, nullptr) }; // 2702058140
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSourceSettings, SourceDebugInfos_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDebugInfos_MetaData), NewProp_SourceDebugInfos_MetaData) }; // 2702058140
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ParentSubject,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams = {
	&ULiveLinkSourceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkSourceSettings()
{
	if (!Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSourceSettings>()
{
	return ULiveLinkSourceSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceSettings);
ULiveLinkSourceSettings::~ULiveLinkSourceSettings() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings)
// End Class ULiveLinkSourceSettings

// Begin ScriptStruct FLiveLinkTimeSynchronizationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings;
class UScriptStruct* FLiveLinkTimeSynchronizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeSynchronizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeSynchronizationSettings>()
{
	return FLiveLinkTimeSynchronizationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The frame rate of the source.\n\x09 * This should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\n\x09 * The source should supply this whenever possible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The frame rate of the source.\nThis should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\nThe source should supply this whenever possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating: how far back from current timecode should we read the buffer (in frame number) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating: how far back from current timecode should we read the buffer (in frame number)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameOffset_MetaData), NewProp_FrameOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkTimeSynchronizationSettings",
	Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers),
	sizeof(FLiveLinkTimeSynchronizationSettings),
	alignof(FLiveLinkTimeSynchronizationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton;
}
// End ScriptStruct FLiveLinkTimeSynchronizationSettings

// Begin ScriptStruct FLiveLinkInterpolationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings;
class UScriptStruct* FLiveLinkInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkInterpolationSettings>()
{
	return FLiveLinkInterpolationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When interpolating: how far back from current time should we read the buffer (in seconds) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When interpolating: how far back from current time should we read the buffer (in seconds)" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
{
	((FLiveLinkInterpolationSettings*)Obj)->bUseInterpolation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkInterpolationSettings), &Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInterpolation_MetaData), NewProp_bUseInterpolation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset = { "InterpolationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkInterpolationSettings, InterpolationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationOffset_MetaData), NewProp_InterpolationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkInterpolationSettings",
	Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers),
	sizeof(FLiveLinkInterpolationSettings),
	alignof(FLiveLinkInterpolationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton;
}
// End ScriptStruct FLiveLinkInterpolationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELiveLinkSourceMode_StaticEnum, TEXT("ELiveLinkSourceMode"), &Z_Registration_Info_UEnum_ELiveLinkSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1781673180U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkSourceBufferManagementSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewStructOps, TEXT("LiveLinkSourceBufferManagementSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceBufferManagementSettings), 43849084U) },
		{ FLiveLinkSourceDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewStructOps, TEXT("LiveLinkSourceDebugInfo"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceDebugInfo), 2702058140U) },
		{ FLiveLinkTimeSynchronizationSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps, TEXT("LiveLinkTimeSynchronizationSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTimeSynchronizationSettings), 4184107617U) },
		{ FLiveLinkInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps, TEXT("LiveLinkInterpolationSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkInterpolationSettings), 4261673037U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkDefaultSourceSettings, ULiveLinkDefaultSourceSettings::StaticClass, TEXT("ULiveLinkDefaultSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkDefaultSourceSettings), 2257972270U) },
		{ Z_Construct_UClass_ULiveLinkSourceSettings, ULiveLinkSourceSettings::StaticClass, TEXT("ULiveLinkSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSourceSettings), 3187791476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_3169686002(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
