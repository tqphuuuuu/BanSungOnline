// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeEvents.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEvents() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEventQueue();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSharedEvent();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeLoopEvents
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeLoopEvents;
static UEnum* EStateTreeLoopEvents_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeLoopEvents"));
	}
	return Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeLoopEvents>()
{
	return EStateTreeLoopEvents_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Break.Comment", "/** Stops the event handling loop. */" },
		{ "Break.Name", "EStateTreeLoopEvents::Break" },
		{ "Break.ToolTip", "Stops the event handling loop." },
		{ "Comment", "/** Enum used for flow control during event iteration. */" },
		{ "Consume.Comment", "/** Consumes and removes the current event. */" },
		{ "Consume.Name", "EStateTreeLoopEvents::Consume" },
		{ "Consume.ToolTip", "Consumes and removes the current event." },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "Next.Comment", "/** Continues to next event. */" },
		{ "Next.Name", "EStateTreeLoopEvents::Next" },
		{ "Next.ToolTip", "Continues to next event." },
		{ "ToolTip", "Enum used for flow control during event iteration." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeLoopEvents::Next", (int64)EStateTreeLoopEvents::Next },
		{ "EStateTreeLoopEvents::Break", (int64)EStateTreeLoopEvents::Break },
		{ "EStateTreeLoopEvents::Consume", (int64)EStateTreeLoopEvents::Consume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeLoopEvents",
	"EStateTreeLoopEvents",
	Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents()
{
	if (!Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton;
}
// End Enum EStateTreeLoopEvents

// Begin ScriptStruct FStateTreeEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvent;
class UScriptStruct* FStateTreeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvent, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvent>()
{
	return FStateTreeEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree event with payload.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "StateTree event with payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "StateTreeEvent" },
		{ "Category", "Default" },
		{ "Comment", "/** Tag describing the event */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Tag describing the event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional payload for the event. */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Optional payload for the event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional info to describe who sent the event. */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Optional info to describe who sent the event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Origin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEvent, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEvent, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEvent, Origin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEvent",
	Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers),
	sizeof(FStateTreeEvent),
	alignof(FStateTreeEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton;
}
// End ScriptStruct FStateTreeEvent

// Begin ScriptStruct FStateTreeSharedEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeSharedEvent;
class UScriptStruct* FStateTreeSharedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSharedEvent, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeSharedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeSharedEvent>()
{
	return FStateTreeSharedEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A struct wrapping FStateTreeEvent in shared struct, used to make it easier to refer to the events during State Tree update.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "A struct wrapping FStateTreeEvent in shared struct, used to make it easier to refer to the events during State Tree update." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSharedEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeSharedEvent",
	nullptr,
	0,
	sizeof(FStateTreeSharedEvent),
	alignof(FStateTreeSharedEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSharedEvent()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSharedEvent.InnerSingleton;
}
// End ScriptStruct FStateTreeSharedEvent

// Begin ScriptStruct FStateTreeEventQueue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEventQueue;
class UScriptStruct* FStateTreeEventQueue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEventQueue"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEventQueue>()
{
	return FStateTreeEventQueue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event queue buffering all the events to be processed by a State Tree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Event queue buffering all the events to be processed by a State Tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEventQueue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_SharedEvents_Inner = { "SharedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeSharedEvent, METADATA_PARAMS(0, nullptr) }; // 4090353654
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_SharedEvents = { "SharedEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEventQueue, SharedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedEvents_MetaData), NewProp_SharedEvents_MetaData) }; // 4090353654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_SharedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_SharedEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEventQueue",
	Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers),
	sizeof(FStateTreeEventQueue),
	alignof(FStateTreeEventQueue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEventQueue()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton;
}
// End ScriptStruct FStateTreeEventQueue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeLoopEvents_StaticEnum, TEXT("EStateTreeLoopEvents"), &Z_Registration_Info_UEnum_EStateTreeLoopEvents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2988714826U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeEvent::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewStructOps, TEXT("StateTreeEvent"), &Z_Registration_Info_UScriptStruct_StateTreeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvent), 1586505974U) },
		{ FStateTreeSharedEvent::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::NewStructOps, TEXT("StateTreeSharedEvent"), &Z_Registration_Info_UScriptStruct_StateTreeSharedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSharedEvent), 4090353654U) },
		{ FStateTreeEventQueue::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewStructOps, TEXT("StateTreeEventQueue"), &Z_Registration_Info_UScriptStruct_StateTreeEventQueue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEventQueue), 152411184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_1843281858(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
