// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/Application/SlateApplication.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATE_SlateApplication_generated_h
#error "SlateApplication.generated.h already included, missing '#pragma once' in SlateApplication.h"
#endif
#define SLATE_SlateApplication_generated_h

#define FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputPreprocessorRegistrationKey_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct();


template<> SLATE_API UScriptStruct* StaticStruct<struct FInputPreprocessorRegistrationKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_Application_SlateApplication_h


#define FOREACH_ENUM_EINPUTPREPROCESSORTYPE(op) \
	op(EInputPreProcessorType::Overlay) \
	op(EInputPreProcessorType::PreEngine) \
	op(EInputPreProcessorType::Engine) \
	op(EInputPreProcessorType::PreEditor) \
	op(EInputPreProcessorType::Editor) \
	op(EInputPreProcessorType::PreGame) \
	op(EInputPreProcessorType::Game) \
	op(EInputPreProcessorType::Count) 

enum class EInputPreProcessorType : uint8;
template<> struct TIsUEnumClass<EInputPreProcessorType> { enum { Value = true }; };
template<> SLATE_API UEnum* StaticEnum<EInputPreProcessorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
