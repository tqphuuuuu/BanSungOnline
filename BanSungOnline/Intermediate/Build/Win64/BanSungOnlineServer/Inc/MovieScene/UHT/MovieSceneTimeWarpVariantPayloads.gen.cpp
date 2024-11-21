// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneTimeWarpVariantPayloads.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpVariantPayloads() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTimeWarpFixedFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame;
class UScriptStruct* FMovieSceneTimeWarpFixedFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpFixedFrame"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpFixedFrame>()
{
	return FMovieSceneTimeWarpFixedFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes a fixed time\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes a fixed time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpFixedFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpFixedFrame, FrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNumber_MetaData), NewProp_FrameNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::NewProp_FrameNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpFixedFrame",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpFixedFrame),
	alignof(FMovieSceneTimeWarpFixedFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpFixedFrame

// Begin ScriptStruct FMovieSceneFixedPlayRateStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct;
class UScriptStruct* FMovieSceneFixedPlayRateStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFixedPlayRateStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFixedPlayRateStruct>()
{
	return FMovieSceneFixedPlayRateStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used only for text serialization of a time warp variant constant play rate\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Struct used only for text serialization of a time warp variant constant play rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Comment", "/** The play rate */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "The play rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFixedPlayRateStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFixedPlayRateStruct, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneFixedPlayRateStruct",
	Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::PropPointers),
	sizeof(FMovieSceneFixedPlayRateStruct),
	alignof(FMovieSceneFixedPlayRateStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneFixedPlayRateStruct

// Begin ScriptStruct FMovieSceneCustomTimeWarpGetterStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct;
class UScriptStruct* FMovieSceneCustomTimeWarpGetterStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneCustomTimeWarpGetterStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneCustomTimeWarpGetterStruct>()
{
	return FMovieSceneCustomTimeWarpGetterStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used only for text serialization of a time warp getter struct\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Struct used only for text serialization of a time warp getter struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Comment", "/** The object implementation */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "The object implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCustomTimeWarpGetterStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneCustomTimeWarpGetterStruct, Object), Z_Construct_UClass_UMovieSceneTimeWarpGetter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneCustomTimeWarpGetterStruct",
	Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::PropPointers),
	sizeof(FMovieSceneCustomTimeWarpGetterStruct),
	alignof(FMovieSceneCustomTimeWarpGetterStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneCustomTimeWarpGetterStruct

// Begin ScriptStruct FMovieSceneTimeWarpLoop
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop;
class UScriptStruct* FMovieSceneTimeWarpLoop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpLoop"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpLoop>()
{
	return FMovieSceneTimeWarpLoop::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes Looping time range from [0:Duration)\n * @note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes Looping time range from [0:Duration)\n@note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpLoop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpLoop, Duration), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpLoop",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpLoop),
	alignof(FMovieSceneTimeWarpLoop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpLoop

// Begin ScriptStruct FMovieSceneTimeWarpClamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp;
class UScriptStruct* FMovieSceneTimeWarpClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpClamp"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpClamp>()
{
	return FMovieSceneTimeWarpClamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes clamped time range from [0:Max]\n * @note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes clamped time range from [0:Max]\n@note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpClamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpClamp, Max), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpClamp",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpClamp),
	alignof(FMovieSceneTimeWarpClamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpClamp

// Begin ScriptStruct FMovieSceneTimeWarpLoopFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat;
class UScriptStruct* FMovieSceneTimeWarpLoopFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpLoopFloat"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpLoopFloat>()
{
	return FMovieSceneTimeWarpLoopFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes Looping time range from [0:Duration)\n * @note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes Looping time range from [0:Duration)\n@note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpLoopFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpLoopFloat, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpLoopFloat",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpLoopFloat),
	alignof(FMovieSceneTimeWarpLoopFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpLoopFloat

// Begin ScriptStruct FMovieSceneTimeWarpClampFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat;
class UScriptStruct* FMovieSceneTimeWarpClampFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpClampFloat"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpClampFloat>()
{
	return FMovieSceneTimeWarpClampFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes clamped time range from [0:Max]\n * @note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes clamped time range from [0:Max]\n@note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpClampFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpClampFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpClampFloat",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpClampFloat),
	alignof(FMovieSceneTimeWarpClampFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpClampFloat

// Begin ScriptStruct FMovieSceneTimeWarpFrameRate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate;
class UScriptStruct* FMovieSceneTimeWarpFrameRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpFrameRate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpFrameRate>()
{
	return FMovieSceneTimeWarpFrameRate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Denotes a framerate conversion\n * @note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits\n */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "Denotes a framerate conversion\n@note: Specifically designed to fit into FMovieSceneNumericVariant::PAYLOAD_Bits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateNumerator_MetaData[] = {
		{ "Comment", "// FFrameRate packed into 48 bits (24 each for numerator/denominator, max of 16777215 each)\n" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
		{ "ToolTip", "FFrameRate packed into 48 bits (24 each for numerator/denominator, max of 16777215 each)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateDenominator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variants/MovieSceneTimeWarpVariantPayloads.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrameRateNumerator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrameRateDenominator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpFrameRate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::NewProp_FrameRateNumerator = { "FrameRateNumerator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FrameRateNumerator, FMovieSceneTimeWarpFrameRate), STRUCT_OFFSET(FMovieSceneTimeWarpFrameRate, FrameRateNumerator), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateNumerator_MetaData), NewProp_FrameRateNumerator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::NewProp_FrameRateDenominator = { "FrameRateDenominator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FrameRateDenominator, FMovieSceneTimeWarpFrameRate), STRUCT_OFFSET(FMovieSceneTimeWarpFrameRate, FrameRateDenominator), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateDenominator_MetaData), NewProp_FrameRateDenominator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::NewProp_FrameRateNumerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::NewProp_FrameRateDenominator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeWarpFrameRate",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpFrameRate),
	alignof(FMovieSceneTimeWarpFrameRate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpFrameRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariantPayloads_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTimeWarpFixedFrame::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame_Statics::NewStructOps, TEXT("MovieSceneTimeWarpFixedFrame"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFixedFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpFixedFrame), 97075914U) },
		{ FMovieSceneFixedPlayRateStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct_Statics::NewStructOps, TEXT("MovieSceneFixedPlayRateStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneFixedPlayRateStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFixedPlayRateStruct), 1116195554U) },
		{ FMovieSceneCustomTimeWarpGetterStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct_Statics::NewStructOps, TEXT("MovieSceneCustomTimeWarpGetterStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneCustomTimeWarpGetterStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCustomTimeWarpGetterStruct), 875226515U) },
		{ FMovieSceneTimeWarpLoop::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop_Statics::NewStructOps, TEXT("MovieSceneTimeWarpLoop"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpLoop), 1955362211U) },
		{ FMovieSceneTimeWarpClamp::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp_Statics::NewStructOps, TEXT("MovieSceneTimeWarpClamp"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpClamp), 1532291726U) },
		{ FMovieSceneTimeWarpLoopFloat::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat_Statics::NewStructOps, TEXT("MovieSceneTimeWarpLoopFloat"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpLoopFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpLoopFloat), 3928509003U) },
		{ FMovieSceneTimeWarpClampFloat::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat_Statics::NewStructOps, TEXT("MovieSceneTimeWarpClampFloat"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpClampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpClampFloat), 1281974401U) },
		{ FMovieSceneTimeWarpFrameRate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate_Statics::NewStructOps, TEXT("MovieSceneTimeWarpFrameRate"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpFrameRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpFrameRate), 2718457235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariantPayloads_h_3842524505(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariantPayloads_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneTimeWarpVariantPayloads_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
