// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Sections/MovieSceneSubSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneDoubleChannel.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSectionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSubSectionOriginOverrideMask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask;
class UScriptStruct* FMovieSceneSubSectionOriginOverrideMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionOriginOverrideMask"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSectionOriginOverrideMask>()
{
	return FMovieSceneSubSectionOriginOverrideMask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionOriginOverrideMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSectionOriginOverrideMask, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::NewProp_Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSubSectionOriginOverrideMask",
	Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::PropPointers),
	sizeof(FMovieSceneSubSectionOriginOverrideMask),
	alignof(FMovieSceneSubSectionOriginOverrideMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask.InnerSingleton;
}
// End ScriptStruct FMovieSceneSubSectionOriginOverrideMask

// Begin Class UMovieSceneSubSection Function GetSequence
struct Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics
{
	struct MovieSceneSubSection_eventGetSequence_Parms
	{
		UMovieSceneSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get the sequence that is assigned to this section.\n\x09 *\n\x09 * @return The sequence.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Get the sequence that is assigned to this section.\n\n@return The sequence.\n@see SetSequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSubSection_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::MovieSceneSubSection_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::MovieSceneSubSection_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSubSection_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSubSection::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class UMovieSceneSubSection Function GetSequence

// Begin Class UMovieSceneSubSection Function SetSequence
struct Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics
{
	struct MovieSceneSubSection_eventSetSequence_Parms
	{
		UMovieSceneSequence* Sequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Sets the sequence played by this section.\n\x09 *\n\x09 * @param Sequence The sequence to play.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Sets the sequence played by this section.\n\n@param Sequence The sequence to play.\n@see GetSequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSubSection_eventSetSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "SetSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::MovieSceneSubSection_eventSetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::MovieSceneSubSection_eventSetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSubSection_SetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSubSection::execSetSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSequence(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSubSection Function SetSequence

// Begin Class UMovieSceneSubSection
void UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection()
{
	UClass* Class = UMovieSceneSubSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSequence", &UMovieSceneSubSection::execGetSequence },
		{ "SetSequence", &UMovieSceneSubSection::execSetSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSubSection);
UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister()
{
	return UMovieSceneSubSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSubSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a section in sub-sequence tracks.\n */" },
		{ "IncludePath", "Sections/MovieSceneSubSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a section in sub-sequence tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MovieScene.EMovieSceneServerClientMask" },
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginOverrideMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPreviewPosition_MetaData[] = {
		{ "Comment", "/** Preview value of position used for keying. This allows for transforms without needing to commit them to the channel */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Preview value of position used for keying. This allows for transforms without needing to commit them to the channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyPreviewRotation_MetaData[] = {
		{ "Comment", "/** Preview value of rotation used for keying. This allows for transforms without needing to commit them to the channel */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Preview value of rotation used for keying. This allows for transforms without needing to commit them to the channel" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Movie scene being played by this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Movie scene being played by this section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NetworkMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginOverrideMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyPreviewPosition_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_KeyPreviewPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyPreviewRotation_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_KeyPreviewRotation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSubSection_GetSequence, "GetSequence" }, // 446299630
		{ &Z_Construct_UFunction_UMovieSceneSubSection_SetSequence, "SetSequence" }, // 1055881738
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSubSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, Parameters), Z_Construct_UScriptStruct_FMovieSceneSectionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 3878081335
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime = { "PrerollTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerollTime_MetaData), NewProp_PrerollTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask = { "NetworkMask", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, NetworkMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMask_MetaData), NewProp_NetworkMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_OriginOverrideMask = { "OriginOverrideMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, OriginOverrideMask), Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginOverrideMask_MetaData), NewProp_OriginOverrideMask_MetaData) }; // 3596725105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Translation, UMovieSceneSubSection), STRUCT_OFFSET(UMovieSceneSubSection, Translation), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) }; // 3417982846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Rotation, UMovieSceneSubSection), STRUCT_OFFSET(UMovieSceneSubSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3417982846
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewPosition_Inner = { "KeyPreviewPosition", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewPosition = { "KeyPreviewPosition", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, KeyPreviewPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPreviewPosition_MetaData), NewProp_KeyPreviewPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewRotation_Inner = { "KeyPreviewRotation", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewRotation = { "KeyPreviewRotation", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, KeyPreviewRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyPreviewRotation_MetaData), NewProp_KeyPreviewRotation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence = { "SubSequence", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSubSection, SubSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSequence_MetaData), NewProp_SubSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_OriginOverrideMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Rotation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewPosition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewRotation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_KeyPreviewRotation,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSubSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSubSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSubSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams = {
	&UMovieSceneSubSection::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSubSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSubSection>()
{
	return UMovieSceneSubSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubSection);
UMovieSceneSubSection::~UMovieSceneSubSection() {}
// End Class UMovieSceneSubSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSubSectionOriginOverrideMask::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSectionOriginOverrideMask_Statics::NewStructOps, TEXT("MovieSceneSubSectionOriginOverrideMask"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSectionOriginOverrideMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSectionOriginOverrideMask), 3596725105U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSubSection, UMovieSceneSubSection::StaticClass, TEXT("UMovieSceneSubSection"), &Z_Registration_Info_UClass_UMovieSceneSubSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSubSection), 1631269591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_2701489796(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
