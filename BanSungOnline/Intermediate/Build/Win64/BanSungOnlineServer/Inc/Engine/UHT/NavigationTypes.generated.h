// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationTypes_generated_h
#error "NavigationTypes.generated.h already included, missing '#pragma once' in NavigationTypes.h"
#endif
#define ENGINE_NavigationTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavLinkAuxiliaryId>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinkId_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavLinkId>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMovementProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavMovementProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavMovementProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_454_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovementProperties Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavAgentProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_526_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavDataConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavAgentProperties Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavDataConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h


#define FOREACH_ENUM_ENAVIGATIONOPTIONFLAG(op) \
	op(ENavigationOptionFlag::Default) \
	op(ENavigationOptionFlag::Enable) \
	op(ENavigationOptionFlag::Disable) 

enum class ENavigationOptionFlag : uint8;
template<> struct TIsUEnumClass<ENavigationOptionFlag> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavigationOptionFlag>();

#define FOREACH_ENUM_ENAVDATAGATHERINGMODECONFIG(op) \
	op(ENavDataGatheringModeConfig::Invalid) \
	op(ENavDataGatheringModeConfig::Instant) \
	op(ENavDataGatheringModeConfig::Lazy) 

enum class ENavDataGatheringModeConfig : uint8;
template<> struct TIsUEnumClass<ENavDataGatheringModeConfig> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringModeConfig>();

#define FOREACH_ENUM_ENAVIGATIONSORTPENDINGTILESMETHOD(op) \
	op(ENavigationSortPendingTilesMethod::SortWithSeedLocations) \
	op(ENavigationSortPendingTilesMethod::SortByPriority) \
	op(ENavigationSortPendingTilesMethod::None) 

enum class ENavigationSortPendingTilesMethod : uint8;
template<> struct TIsUEnumClass<ENavigationSortPendingTilesMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavigationSortPendingTilesMethod>();

#define FOREACH_ENUM_ENAVPATHEVENT(op) \
	op(ENavPathEvent::Cleared) \
	op(ENavPathEvent::NewPath) \
	op(ENavPathEvent::UpdatedDueToGoalMoved) \
	op(ENavPathEvent::UpdatedDueToNavigationChanged) \
	op(ENavPathEvent::Invalidated) \
	op(ENavPathEvent::RePathFailed) \
	op(ENavPathEvent::MetaPathUpdate) \
	op(ENavPathEvent::Custom) 

namespace ENavPathEvent { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavPathEvent::Type>();

#define FOREACH_ENUM_ENAVIGATIONQUERYRESULT(op) \
	op(ENavigationQueryResult::Invalid) \
	op(ENavigationQueryResult::Error) \
	op(ENavigationQueryResult::Fail) \
	op(ENavigationQueryResult::Success) 

namespace ENavigationQueryResult { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavigationQueryResult::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
