// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSynesthesia.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOSYNESTHESIA_AudioSynesthesia_generated_h
#error "AudioSynesthesia.generated.h already included, missing '#pragma once' in AudioSynesthesia.h"
#endif
#define AUDIOSYNESTHESIA_AudioSynesthesia_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSynesthesiaSettings(); \
	friend struct Z_Construct_UClass_UAudioSynesthesiaSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioSynesthesiaSettings, UAudioAnalyzerSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), AUDIOSYNESTHESIA_API) \
	DECLARE_SERIALIZER(UAudioSynesthesiaSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOSYNESTHESIA_API UAudioSynesthesiaSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioSynesthesiaSettings(UAudioSynesthesiaSettings&&); \
	UAudioSynesthesiaSettings(const UAudioSynesthesiaSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOSYNESTHESIA_API, UAudioSynesthesiaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSynesthesiaSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSynesthesiaSettings) \
	AUDIOSYNESTHESIA_API virtual ~UAudioSynesthesiaSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UAudioSynesthesiaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
