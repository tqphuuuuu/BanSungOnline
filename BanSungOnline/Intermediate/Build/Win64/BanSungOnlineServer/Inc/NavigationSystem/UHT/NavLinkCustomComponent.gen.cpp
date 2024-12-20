// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavLinkCustomComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkAuxiliaryId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkId();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkCustomInstanceData();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavLinkCustomComponent
void UNavLinkCustomComponent::StaticRegisterNativesUNavLinkCustomComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkCustomComponent);
UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister()
{
	return UNavLinkCustomComponent::StaticClass();
}
struct Z_Construct_UClass_UNavLinkCustomComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Encapsulates NavLinkCustomInterface interface, can be used with Actors not relevant for navigation\n *  \n *  Additional functionality:\n *  - can be toggled\n *  - can create obstacle area for easier/forced separation of link end points\n *  - can broadcast state changes to nearby agents\n */" },
		{ "IncludePath", "NavLinkCustomComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "Encapsulates NavLinkCustomInterface interface, can be used with Actors not relevant for navigation\n\nAdditional functionality:\n- can be toggled\n- can create obstacle area for easier/forced separation of link end points\n- can broadcast state changes to nearby agents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavLinkUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLinkId_MetaData[] = {
		{ "Comment", "/** link Id assigned by navigation system */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "link Id assigned by navigation system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryCustomLinkId_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Assigned in the constructor. This uniquely identifies a component in an Actor, but will not be unique between duplicate level instances.\n\x09 *  containing the same Actor.\n\x09 *  This is Hashed with the Actor Instance FGuid to create the CustomLinkId so that Actors with more than one UNavLinkCustomComponent can have a \n\x09 *  completely unique ID per UNavLinkCustomComponent even across level instances.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "Assigned in the constructor. This uniquely identifies a component in an Actor, but will not be unique between duplicate level instances.\ncontaining the same Actor.\nThis is Hashed with the Actor Instance FGuid to create the CustomLinkId so that Actors with more than one UNavLinkCustomComponent can have a\ncompletely unique ID per UNavLinkCustomComponent even across level instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledAreaClass_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** area class to use when link is enabled */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class to use when link is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledAreaClass_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** area class to use when link is disabled */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class to use when link is disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** restrict area only to specified agents */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "restrict area only to specified agents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeStart_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** start point, relative to owner */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "start point, relative to owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeEnd_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** end point, relative to owner */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "end point, relative to owner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkDirection_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** direction of link */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "direction of link" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinkEnabled_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** is link currently in enabled state? (area class) */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "is link currently in enabled state? (area class)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenEnabled_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "Comment", "/** should link notify nearby agents when it changes state to enabled */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "should link notify nearby agents when it changes state to enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenDisabled_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "Comment", "/** should link notify nearby agents when it changes state to disabled */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "should link notify nearby agents when it changes state to disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateBoxObstacle_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "Comment", "/** if set, box obstacle area will be added to generation */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "if set, box obstacle area will be added to generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleOffset_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "Comment", "/** offset of simple box obstacle */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "offset of simple box obstacle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleExtent_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "Comment", "/** extent of simple box obstacle */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "extent of simple box obstacle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAreaClass_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "Comment", "/** area class for simple box obstacle */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "area class for simple box obstacle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastRadius_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "Comment", "/** radius of state change broadcast */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "radius of state change broadcast" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastInterval_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** interval for state change broadcast (0 = single broadcast) */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "interval for state change broadcast (0 = single broadcast)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastChannel_MetaData[] = {
		{ "Category", "Broadcast" },
		{ "Comment", "/** trace channel for state change broadcast */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "trace channel for state change broadcast" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NavLinkUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLinkId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxiliaryCustomLinkId;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnabledAreaClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisabledAreaClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkRelativeStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkRelativeEnd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinkDirection;
	static void NewProp_bLinkEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkEnabled;
	static void NewProp_bNotifyWhenEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenEnabled;
	static void NewProp_bNotifyWhenDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenDisabled;
	static void NewProp_bCreateBoxObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBoxObstacle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleExtent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacleAreaClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BroadcastRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BroadcastInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BroadcastChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkCustomComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId = { "NavLinkUserId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, NavLinkUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavLinkUserId_MetaData), NewProp_NavLinkUserId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_CustomLinkId = { "CustomLinkId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, CustomLinkId), Z_Construct_UScriptStruct_FNavLinkId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLinkId_MetaData), NewProp_CustomLinkId_MetaData) }; // 828782268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_AuxiliaryCustomLinkId = { "AuxiliaryCustomLinkId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, AuxiliaryCustomLinkId), Z_Construct_UScriptStruct_FNavLinkAuxiliaryId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxiliaryCustomLinkId_MetaData), NewProp_AuxiliaryCustomLinkId_MetaData) }; // 1303876147
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass = { "EnabledAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, EnabledAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledAreaClass_MetaData), NewProp_EnabledAreaClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass = { "DisabledAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, DisabledAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledAreaClass_MetaData), NewProp_DisabledAreaClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAgents_MetaData), NewProp_SupportedAgents_MetaData) }; // 1400047301
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart = { "LinkRelativeStart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkRelativeStart_MetaData), NewProp_LinkRelativeStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd = { "LinkRelativeEnd", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkRelativeEnd_MetaData), NewProp_LinkRelativeEnd_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection = { "LinkDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, LinkDirection), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkDirection_MetaData), NewProp_LinkDirection_MetaData) }; // 469077754
void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_SetBit(void* Obj)
{
	((UNavLinkCustomComponent*)Obj)->bLinkEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled = { "bLinkEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinkEnabled_MetaData), NewProp_bLinkEnabled_MetaData) };
void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_SetBit(void* Obj)
{
	((UNavLinkCustomComponent*)Obj)->bNotifyWhenEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled = { "bNotifyWhenEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyWhenEnabled_MetaData), NewProp_bNotifyWhenEnabled_MetaData) };
void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_SetBit(void* Obj)
{
	((UNavLinkCustomComponent*)Obj)->bNotifyWhenDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled = { "bNotifyWhenDisabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyWhenDisabled_MetaData), NewProp_bNotifyWhenDisabled_MetaData) };
void Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_SetBit(void* Obj)
{
	((UNavLinkCustomComponent*)Obj)->bCreateBoxObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle = { "bCreateBoxObstacle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavLinkCustomComponent), &Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateBoxObstacle_MetaData), NewProp_bCreateBoxObstacle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset = { "ObstacleOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleOffset_MetaData), NewProp_ObstacleOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent = { "ObstacleExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleExtent_MetaData), NewProp_ObstacleExtent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass = { "ObstacleAreaClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleAreaClass_MetaData), NewProp_ObstacleAreaClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius = { "BroadcastRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastRadius_MetaData), NewProp_BroadcastRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval = { "BroadcastInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastInterval_MetaData), NewProp_BroadcastInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel = { "BroadcastChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastChannel_MetaData), NewProp_BroadcastChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_NavLinkUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_CustomLinkId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_AuxiliaryCustomLinkId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_EnabledAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_DisabledAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_SupportedAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkRelativeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_LinkDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bLinkEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bNotifyWhenDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_bCreateBoxObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_ObstacleAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkCustomComponent_Statics::NewProp_BroadcastChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavLinkCustomComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkCustomComponent, INavLinkCustomInterface), false },  // 1067698356
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkCustomComponent_Statics::ClassParams = {
	&UNavLinkCustomComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLinkCustomComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLinkCustomComponent()
{
	if (!Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton, Z_Construct_UClass_UNavLinkCustomComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLinkCustomComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkCustomComponent>()
{
	return UNavLinkCustomComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomComponent);
UNavLinkCustomComponent::~UNavLinkCustomComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavLinkCustomComponent)
// End Class UNavLinkCustomComponent

// Begin ScriptStruct FNavLinkCustomInstanceData
static_assert(std::is_polymorphic<FNavLinkCustomInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FNavLinkCustomInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData;
class UScriptStruct* FNavLinkCustomInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavLinkCustomInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavLinkCustomInstanceData>()
{
	return FNavLinkCustomInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store navlink data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
		{ "ToolTip", "Used to store navlink data during RerunConstructionScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLinkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryCustomLinkId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkCustomComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLinkId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxiliaryCustomLinkId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinkCustomInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewProp_CustomLinkId = { "CustomLinkId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkCustomInstanceData, CustomLinkId), Z_Construct_UScriptStruct_FNavLinkId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLinkId_MetaData), NewProp_CustomLinkId_MetaData) }; // 828782268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewProp_AuxiliaryCustomLinkId = { "AuxiliaryCustomLinkId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkCustomInstanceData, AuxiliaryCustomLinkId), Z_Construct_UScriptStruct_FNavLinkAuxiliaryId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxiliaryCustomLinkId_MetaData), NewProp_AuxiliaryCustomLinkId_MetaData) }; // 1303876147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewProp_CustomLinkId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewProp_AuxiliaryCustomLinkId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	Z_Construct_UScriptStruct_FActorComponentInstanceData,
	&NewStructOps,
	"NavLinkCustomInstanceData",
	Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::PropPointers),
	sizeof(FNavLinkCustomInstanceData),
	alignof(FNavLinkCustomInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinkCustomInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData.InnerSingleton;
}
// End ScriptStruct FNavLinkCustomInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavLinkCustomInstanceData::StaticStruct, Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics::NewStructOps, TEXT("NavLinkCustomInstanceData"), &Z_Registration_Info_UScriptStruct_NavLinkCustomInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinkCustomInstanceData), 2506581736U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkCustomComponent, UNavLinkCustomComponent::StaticClass, TEXT("UNavLinkCustomComponent"), &Z_Registration_Info_UClass_UNavLinkCustomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkCustomComponent), 1473799062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_1736090244(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
