// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEDenoiserResourceName.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNEDENOISER_NNEDenoiserResourceName_generated_h
#error "NNEDenoiserResourceName.generated.h already included, missing '#pragma once' in NNEDenoiserResourceName.h"
#endif
#define NNEDENOISER_NNEDenoiserResourceName_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h


#define FOREACH_ENUM_ERESOURCENAME(op) \
	op(EResourceName::Color) \
	op(EResourceName::Albedo) \
	op(EResourceName::Normal) \
	op(EResourceName::Flow) \
	op(EResourceName::Output) 

enum class EResourceName : uint8;
template<> struct TIsUEnumClass<EResourceName> { enum { Value = true }; };
template<> NNEDENOISER_API UEnum* StaticEnum<EResourceName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
