// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkMessageBusFramework/Public/LiveLinkMessages.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkRefSkeleton.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessages() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage();
UPackage* Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
// End Cross Module References

// Begin ScriptStruct FLiveLinkPingMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPingMessage;
class UScriptStruct* FLiveLinkPingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPingMessage>()
{
	return FLiveLinkPingMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PollRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPingMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPingMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PollRequest_MetaData), NewProp_PollRequest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPingMessage, LiveLinkVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkVersion_MetaData), NewProp_LiveLinkVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkPingMessage",
	Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers),
	sizeof(FLiveLinkPingMessage),
	alignof(FLiveLinkPingMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkPingMessage

// Begin ScriptStruct FLiveLinkPongMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPongMessage;
class UScriptStruct* FLiveLinkPongMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPongMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPongMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPongMessage>()
{
	return FLiveLinkPongMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreationPlatformTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProviderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PollRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CreationPlatformTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPongMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPongMessage, ProviderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProviderName_MetaData), NewProp_ProviderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPongMessage, MachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineName_MetaData), NewProp_MachineName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPongMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PollRequest_MetaData), NewProp_PollRequest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPongMessage, LiveLinkVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkVersion_MetaData), NewProp_LiveLinkVersion_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime = { "CreationPlatformTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPongMessage, CreationPlatformTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreationPlatformTime_MetaData), NewProp_CreationPlatformTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkPongMessage",
	Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers),
	sizeof(FLiveLinkPongMessage),
	alignof(FLiveLinkPongMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkPongMessage

// Begin ScriptStruct FLiveLinkConnectMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage;
class UScriptStruct* FLiveLinkConnectMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkConnectMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkConnectMessage>()
{
	return FLiveLinkConnectMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkConnectMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkConnectMessage, LiveLinkVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveLinkVersion_MetaData), NewProp_LiveLinkVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkConnectMessage",
	Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers),
	sizeof(FLiveLinkConnectMessage),
	alignof(FLiveLinkConnectMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkConnectMessage

// Begin ScriptStruct FLiveLinkHeartbeatMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage;
class UScriptStruct* FLiveLinkHeartbeatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkHeartbeatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkHeartbeatMessage>()
{
	return FLiveLinkHeartbeatMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkHeartbeatMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkHeartbeatMessage",
	nullptr,
	0,
	sizeof(FLiveLinkHeartbeatMessage),
	alignof(FLiveLinkHeartbeatMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkHeartbeatMessage

// Begin ScriptStruct FLiveLinkClearSubject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkClearSubject;
class UScriptStruct* FLiveLinkClearSubject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkClearSubject"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkClearSubject>()
{
	return FLiveLinkClearSubject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "Comment", "// Name of the subject to clear\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Name of the subject to clear" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkClearSubject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkClearSubject, SubjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkClearSubject",
	Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers),
	sizeof(FLiveLinkClearSubject),
	alignof(FLiveLinkClearSubject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton;
}
// End ScriptStruct FLiveLinkClearSubject

// Begin ScriptStruct FLiveLinkSubjectDataMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage;
class UScriptStruct* FLiveLinkSubjectDataMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectDataMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectDataMessage>()
{
	return FLiveLinkSubjectDataMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefSkeleton;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectDataMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton = { "RefSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, RefSkeleton), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefSkeleton_MetaData), NewProp_RefSkeleton_MetaData) }; // 3061382430
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, SubjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkSubjectDataMessage",
	Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers),
	sizeof(FLiveLinkSubjectDataMessage),
	alignof(FLiveLinkSubjectDataMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkSubjectDataMessage

// Begin ScriptStruct FLiveLinkSubjectFrameMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage;
class UScriptStruct* FLiveLinkSubjectFrameMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectFrameMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectFrameMessage>()
{
	return FLiveLinkSubjectFrameMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Comment", "// Bone Transform data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Bone Transform data for this frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Comment", "// Curve data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Curve data for this frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Comment", "// Subject MetaData for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Subject MetaData for this frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Comment", "// Incrementing time for interpolation\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Incrementing time for interpolation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectFrameMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, SubjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(0, nullptr) }; // 22027800
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) }; // 22027800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) }; // 1418216153
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
	nullptr,
	&NewStructOps,
	"LiveLinkSubjectFrameMessage",
	Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers),
	sizeof(FLiveLinkSubjectFrameMessage),
	alignof(FLiveLinkSubjectFrameMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton;
}
// End ScriptStruct FLiveLinkSubjectFrameMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkPingMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewStructOps, TEXT("LiveLinkPingMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkPingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPingMessage), 3124825402U) },
		{ FLiveLinkPongMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewStructOps, TEXT("LiveLinkPongMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkPongMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPongMessage), 1401320605U) },
		{ FLiveLinkConnectMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewStructOps, TEXT("LiveLinkConnectMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkConnectMessage), 3266225382U) },
		{ FLiveLinkHeartbeatMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::NewStructOps, TEXT("LiveLinkHeartbeatMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkHeartbeatMessage), 3527334651U) },
		{ FLiveLinkClearSubject::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewStructOps, TEXT("LiveLinkClearSubject"), &Z_Registration_Info_UScriptStruct_LiveLinkClearSubject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkClearSubject), 1270838809U) },
		{ FLiveLinkSubjectDataMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewStructOps, TEXT("LiveLinkSubjectDataMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectDataMessage), 3018923322U) },
		{ FLiveLinkSubjectFrameMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewStructOps, TEXT("LiveLinkSubjectFrameMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectFrameMessage), 2739734031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_1227760845(TEXT("/Script/LiveLinkMessageBusFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
