// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TranslationPickerEditWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h
#error "TranslationPickerEditWindow.generated.h already included, missing '#pragma once' in TranslationPickerEditWindow.h"
#endif
#define TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h

#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTranslationPickerSettings(); \
	friend struct Z_Construct_UClass_UTranslationPickerSettings_Statics; \
public: \
	DECLARE_CLASS(UTranslationPickerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TranslationEditor"), NO_API) \
	DECLARE_SERIALIZER(UTranslationPickerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("TranslationPickerSettings");} \



#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranslationPickerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationPickerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranslationPickerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationPickerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTranslationPickerSettings(UTranslationPickerSettings&&); \
	UTranslationPickerSettings(const UTranslationPickerSettings&); \
public: \
	NO_API virtual ~UTranslationPickerSettings();


#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_33_PROLOG
#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_INCLASS \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSLATIONEDITOR_API UClass* StaticClass<class UTranslationPickerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
