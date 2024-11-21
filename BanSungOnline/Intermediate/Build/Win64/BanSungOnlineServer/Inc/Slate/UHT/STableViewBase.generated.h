// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Views/STableViewBase.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATE_STableViewBase_generated_h
#error "STableViewBase.generated.h already included, missing '#pragma once' in STableViewBase.h"
#endif
#define SLATE_STableViewBase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Views_STableViewBase_h


#define FOREACH_ENUM_ELISTITEMALIGNMENT(op) \
	op(EListItemAlignment::EvenlyDistributed) \
	op(EListItemAlignment::EvenlySize) \
	op(EListItemAlignment::EvenlyWide) \
	op(EListItemAlignment::LeftAligned) \
	op(EListItemAlignment::RightAligned) \
	op(EListItemAlignment::CenterAligned) \
	op(EListItemAlignment::Fill) 

enum class EListItemAlignment : uint8;
template<> struct TIsUEnumClass<EListItemAlignment> { enum { Value = true }; };
template<> SLATE_API UEnum* StaticEnum<EListItemAlignment>();

#define FOREACH_ENUM_ESCROLLINTOVIEWALIGNMENT(op) \
	op(EScrollIntoViewAlignment::IntoView) \
	op(EScrollIntoViewAlignment::TopOrLeft) \
	op(EScrollIntoViewAlignment::CenterAligned) \
	op(EScrollIntoViewAlignment::BottomOrRight) 

enum class EScrollIntoViewAlignment : uint8;
template<> struct TIsUEnumClass<EScrollIntoViewAlignment> { enum { Value = true }; };
template<> SLATE_API UEnum* StaticEnum<EScrollIntoViewAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
