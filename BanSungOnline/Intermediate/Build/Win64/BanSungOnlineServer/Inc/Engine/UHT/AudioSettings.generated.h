// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioSettings_generated_h
#error "AudioSettings.generated.h already included, missing '#pragma once' in AudioSettings.h"
#endif
#define ENGINE_AudioSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioQualitySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioQualitySettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundDebugEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundDebugEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDefaultAudioBusSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSettings(); \
	friend struct Z_Construct_UClass_UAudioSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioSettings(UAudioSettings&&); \
	UAudioSettings(const UAudioSettings&); \
public: \
	ENGINE_API virtual ~UAudioSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_122_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_125_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h


#define FOREACH_ENUM_EVOICESAMPLERATE(op) \
	op(EVoiceSampleRate::Low16000Hz) \
	op(EVoiceSampleRate::Normal24000Hz) 

enum class EVoiceSampleRate : int32;
template<> struct TIsUEnumClass<EVoiceSampleRate> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVoiceSampleRate>();

#define FOREACH_ENUM_EPANNINGMETHOD(op) \
	op(EPanningMethod::Linear) \
	op(EPanningMethod::EqualPower) 

enum class EPanningMethod : int8;
template<> struct TIsUEnumClass<EPanningMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPanningMethod>();

#define FOREACH_ENUM_EMONOCHANNELUPMIXMETHOD(op) \
	op(EMonoChannelUpmixMethod::Linear) \
	op(EMonoChannelUpmixMethod::EqualPower) \
	op(EMonoChannelUpmixMethod::FullVolume) 

enum class EMonoChannelUpmixMethod : int8;
template<> struct TIsUEnumClass<EMonoChannelUpmixMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMonoChannelUpmixMethod>();

#define FOREACH_ENUM_EDEFAULTAUDIOCOMPRESSIONTYPE(op) \
	op(EDefaultAudioCompressionType::BinkAudio) \
	op(EDefaultAudioCompressionType::ADPCM) \
	op(EDefaultAudioCompressionType::PCM) \
	op(EDefaultAudioCompressionType::Opus) \
	op(EDefaultAudioCompressionType::PlatformSpecific) \
	op(EDefaultAudioCompressionType::RADAudio) 

enum class EDefaultAudioCompressionType : uint8;
template<> struct TIsUEnumClass<EDefaultAudioCompressionType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EDefaultAudioCompressionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
