// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkTimecodeProvider.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimecodeProvider() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister();
LIVELINK_API UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Enum ELiveLinkTimecodeProviderEvaluationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType;
static UEnum* ELiveLinkTimecodeProviderEvaluationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("ELiveLinkTimecodeProviderEvaluationType"));
	}
	return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton;
}
template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>()
{
	return ELiveLinkTimecodeProviderEvaluationType_StaticEnum();
}
struct Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Latest.Comment", "/** Use the newest frame that was received. */" },
		{ "Latest.Name", "ELiveLinkTimecodeProviderEvaluationType::Latest" },
		{ "Latest.ToolTip", "Use the newest frame that was received." },
		{ "Lerp.Comment", "/** Interpolate between, or extrapolate using the 2 frames that are the closest to the current world time. */" },
		{ "Lerp.Name", "ELiveLinkTimecodeProviderEvaluationType::Lerp" },
		{ "Lerp.ToolTip", "Interpolate between, or extrapolate using the 2 frames that are the closest to the current world time." },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "Nearest.Comment", "/** Use the frame that is closest to the current world time. */" },
		{ "Nearest.Name", "ELiveLinkTimecodeProviderEvaluationType::Nearest" },
		{ "Nearest.ToolTip", "Use the frame that is closest to the current world time." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiveLinkTimecodeProviderEvaluationType::Lerp", (int64)ELiveLinkTimecodeProviderEvaluationType::Lerp },
		{ "ELiveLinkTimecodeProviderEvaluationType::Nearest", (int64)ELiveLinkTimecodeProviderEvaluationType::Nearest },
		{ "ELiveLinkTimecodeProviderEvaluationType::Latest", (int64)ELiveLinkTimecodeProviderEvaluationType::Latest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	"ELiveLinkTimecodeProviderEvaluationType",
	"ELiveLinkTimecodeProviderEvaluationType",
	Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton, Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton;
}
// End Enum ELiveLinkTimecodeProviderEvaluationType

// Begin Class ULiveLinkTimecodeProvider
void ULiveLinkTimecodeProvider::StaticRegisterNativesULiveLinkTimecodeProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTimecodeProvider);
UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister()
{
	return ULiveLinkTimecodeProvider::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Fetch the latest frames from the LiveLink subject and create a Timecode from it.\n */" },
		{ "IncludePath", "LiveLinkTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Fetch the latest frames from the LiveLink subject and create a Timecode from it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The specific subject that we listen to. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The specific subject that we listen to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evaluation_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** How to evaluate the timecode. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "How to evaluate the timecode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Override the frame rate at which this timecode provider will create its timecode value.\n\x09 * By default, we use the subject frame rate.\n\x09 */" },
		{ "EditCondition", "bOverrideFrameRate" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Override the frame rate at which this timecode provider will create its timecode value.\nBy default, we use the subject frame rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ClampMax", "10" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once." },
		{ "UIMax", "10" },
		{ "UIMin", "2" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Evaluation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Evaluation;
	static void NewProp_bOverrideFrameRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimecodeProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectKey_MetaData), NewProp_SubjectKey_MetaData) }; // 896940852
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation = { "Evaluation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, Evaluation), Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evaluation_MetaData), NewProp_Evaluation_MetaData) }; // 51644375
void Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit(void* Obj)
{
	((ULiveLinkTimecodeProvider*)Obj)->bOverrideFrameRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate = { "bOverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkTimecodeProvider), &Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFrameRate_MetaData), NewProp_bOverrideFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate = { "OverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, OverrideFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFrameRate_MetaData), NewProp_OverrideFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, BufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferSize_MetaData), NewProp_BufferSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams = {
	&ULiveLinkTimecodeProvider::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider()
{
	if (!Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton, Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimecodeProvider>()
{
	return ULiveLinkTimecodeProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimecodeProvider);
ULiveLinkTimecodeProvider::~ULiveLinkTimecodeProvider() {}
// End Class ULiveLinkTimecodeProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELiveLinkTimecodeProviderEvaluationType_StaticEnum, TEXT("ELiveLinkTimecodeProviderEvaluationType"), &Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 51644375U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTimecodeProvider, ULiveLinkTimecodeProvider::StaticClass, TEXT("ULiveLinkTimecodeProvider"), &Z_Registration_Info_UClass_ULiveLinkTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTimecodeProvider), 2436979276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_4016798231(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
