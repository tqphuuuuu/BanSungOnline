// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioAnalyzer/Classes/AudioAnalyzerNRT.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerNRT() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References

// Begin Class UAudioAnalyzerNRTSettings
void UAudioAnalyzerNRTSettings::StaticRegisterNativesUAudioAnalyzerNRTSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerNRTSettings);
UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister()
{
	return UAudioAnalyzerNRTSettings::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerNRTSettings\n *\n * UAudioAnalyzerNRTSettings provides a way to store and reuse existing analyzer settings\n * across multiple analyzers. This class provides the interface and functionality to \n * automatically trigger reanalysis of audio across all analyzers associated with this \n * setting when when a UPROPERTY in this setting object is edited.\n *\n */" },
		{ "IncludePath", "AudioAnalyzerNRT.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "UAudioAnalyzerNRTSettings\n\nUAudioAnalyzerNRTSettings provides a way to store and reuse existing analyzer settings\nacross multiple analyzers. This class provides the interface and functionality to\nautomatically trigger reanalysis of audio across all analyzers associated with this\nsetting when when a UPROPERTY in this setting object is edited." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerNRTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAssetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::ClassParams = {
	&UAudioAnalyzerNRTSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerNRTSettings>()
{
	return UAudioAnalyzerNRTSettings::StaticClass();
}
UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerNRTSettings);
UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings() {}
// End Class UAudioAnalyzerNRTSettings

// Begin Class UAudioAnalyzerNRT Function AnalyzeAudio
#if WITH_EDITOR
struct Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Performs the analaysis of the audio */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "Performs the analaysis of the audio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerNRT, nullptr, "AnalyzeAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAudioAnalyzerNRT::execAnalyzeAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnalyzeAudio();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAudioAnalyzerNRT Function AnalyzeAudio

// Begin Class UAudioAnalyzerNRT
void UAudioAnalyzerNRT::StaticRegisterNativesUAudioAnalyzerNRT()
{
#if WITH_EDITOR
	UClass* Class = UAudioAnalyzerNRT::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnalyzeAudio", &UAudioAnalyzerNRT::execAnalyzeAudio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerNRT);
UClass* Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister()
{
	return UAudioAnalyzerNRT::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzerNRT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerNRT\n *\n * UAudioAnalyzerNRT applies an analyzer to a sound using specific settings, stores the \n * results and exposes them via blueprints. \n *\n * Subclasses of UAudioAnalyzerNRT must implement GetAnalyzerNRTFactoryName() to associate\n * the UAudioAnalyzerNRT with an IAudioAnalyzerNRTFactory implementation. \n *\n * To support blueprint access, subclasses can implement UFUNCTIONs to expose the data\n * returned by GetResult().\n */" },
		{ "IncludePath", "AudioAnalyzerNRT.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "UAudioAnalyzerNRT\n\nUAudioAnalyzerNRT applies an analyzer to a sound using specific settings, stores the\nresults and exposes them via blueprints.\n\nSubclasses of UAudioAnalyzerNRT must implement GetAnalyzerNRTFactoryName() to associate\nthe UAudioAnalyzerNRT with an IAudioAnalyzerNRTFactory implementation.\n\nTo support blueprint access, subclasses can implement UFUNCTIONs to expose the data\nreturned by GetResult()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/**\n\x09\x09 * The USoundWave which is analyzed.\n\x09\x09 */" },
		{ "DisallowedClasses", "/Script/MetasoundEngine.MetaSoundSource, /Script/Engine.SoundSourceBus" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "The USoundWave which is analyzed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationInSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The duration of the analyzed audio in seconds. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzerNRT.h" },
		{ "ToolTip", "The duration of the analyzed audio in seconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioAnalyzerNRT_AnalyzeAudio, "AnalyzeAudio" }, // 3351692614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerNRT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioAnalyzerNRT, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds = { "DurationInSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioAnalyzerNRT, DurationInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationInSeconds_MetaData), NewProp_DurationInSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerNRT_Statics::NewProp_DurationInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioAnalyzerNRT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAssetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerNRT_Statics::ClassParams = {
	&UAudioAnalyzerNRT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerNRT_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzerNRT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzerNRT()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerNRT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerNRT>()
{
	return UAudioAnalyzerNRT::StaticClass();
}
UAudioAnalyzerNRT::UAudioAnalyzerNRT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerNRT);
UAudioAnalyzerNRT::~UAudioAnalyzerNRT() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioAnalyzerNRT)
// End Class UAudioAnalyzerNRT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerNRTSettings, UAudioAnalyzerNRTSettings::StaticClass, TEXT("UAudioAnalyzerNRTSettings"), &Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerNRTSettings), 806779676U) },
		{ Z_Construct_UClass_UAudioAnalyzerNRT, UAudioAnalyzerNRT::StaticClass, TEXT("UAudioAnalyzerNRT"), &Z_Registration_Info_UClass_UAudioAnalyzerNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerNRT), 1377403905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_1624492778(TEXT("/Script/AudioAnalyzer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS