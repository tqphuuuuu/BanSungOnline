// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/FontRasterizationMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_FontRasterizationMode_generated_h
#error "FontRasterizationMode.generated.h already included, missing '#pragma once' in FontRasterizationMode.h"
#endif
#define SLATECORE_FontRasterizationMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontRasterizationMode_h


#define FOREACH_ENUM_EFONTRASTERIZATIONMODE(op) \
	op(EFontRasterizationMode::Bitmap) \
	op(EFontRasterizationMode::Msdf) \
	op(EFontRasterizationMode::Sdf) \
	op(EFontRasterizationMode::SdfApproximation) 

enum class EFontRasterizationMode : uint8;
template<> struct TIsUEnumClass<EFontRasterizationMode> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EFontRasterizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
