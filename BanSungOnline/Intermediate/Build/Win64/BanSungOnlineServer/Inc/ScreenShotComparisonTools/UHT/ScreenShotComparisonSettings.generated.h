// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenShotComparisonSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCREENSHOTCOMPARISONTOOLS_ScreenShotComparisonSettings_generated_h
#error "ScreenShotComparisonSettings.generated.h already included, missing '#pragma once' in ScreenShotComparisonSettings.h"
#endif
#define SCREENSHOTCOMPARISONTOOLS_ScreenShotComparisonSettings_generated_h

#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics; \
	SCREENSHOTCOMPARISONTOOLS_API static class UScriptStruct* StaticStruct();


template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<struct FScreenshotFallbackEntry>();

#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUScreenShotComparisonSettings(); \
	friend struct Z_Construct_UClass_UScreenShotComparisonSettings_Statics; \
public: \
	DECLARE_CLASS(UScreenShotComparisonSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScreenShotComparisonTools"), NO_API) \
	DECLARE_SERIALIZER(UScreenShotComparisonSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenShotComparisonSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenShotComparisonSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenShotComparisonSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenShotComparisonSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScreenShotComparisonSettings(UScreenShotComparisonSettings&&); \
	UScreenShotComparisonSettings(const UScreenShotComparisonSettings&); \
public: \
	NO_API virtual ~UScreenShotComparisonSettings();


#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_36_PROLOG
#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_39_INCLASS \
	FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCREENSHOTCOMPARISONTOOLS_API UClass* StaticClass<class UScreenShotComparisonSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
