// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Net/Core/Public/Net/Core/Connection/EscalationStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscalationStates() {}

// Begin Cross Module References
NETCORE_API UClass* Z_Construct_UClass_UEscalationManagerConfig();
NETCORE_API UClass* Z_Construct_UClass_UEscalationManagerConfig_NoRegister();
NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEscalationState();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStateStruct();
UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References

// Begin ScriptStruct FEscalationState
static_assert(std::is_polymorphic<FEscalationState>() == std::is_polymorphic<FStateStruct>(), "USTRUCT FEscalationState cannot be polymorphic unless super FStateStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EscalationState;
class UScriptStruct* FEscalationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EscalationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EscalationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEscalationState, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("EscalationState"));
	}
	return Z_Registration_Info_UScriptStruct_EscalationState.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FEscalationState>()
{
	return FEscalationState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEscalationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct which defines an escalation state, which is subclassed to implement custom state variables and (de-)escalation quota's.\n * NOTE: Subclasses must also implement the TEscalationStateStatics interface.\n */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Base struct which defines an escalation state, which is subclassed to implement custom state variables and (de-)escalation quota's.\nNOTE: Subclasses must also implement the TEscalationStateStatics interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogEscalate_MetaData[] = {
		{ "Comment", "/** Whether or not to log when escalating to this state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Whether or not to log when escalating to this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDormant_MetaData[] = {
		{ "Comment", "/** This escalation state is considered to be dormant/inactive - and the escalation manager may no longer need ticking in this state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "This escalation state is considered to be dormant/inactive - and the escalation manager may no longer need ticking in this state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooloffTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, before the current severity state cools off and de-escalates */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "The amount of time, in seconds, before the current severity state cools off and de-escalates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoEscalateTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, spent in the current severity state before it automatically escalates to the next state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "The amount of time, in seconds, spent in the current severity state before it automatically escalates to the next state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighestTimePeriod_MetaData[] = {
		{ "Comment", "/** Cached value for the highest time period in this config state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Cached value for the highest time period in this config state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTimePeriods_MetaData[] = {
		{ "Comment", "/** Cached value for all different time periods in this state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Cached value for all different time periods in this state" },
	};
#endif // WITH_METADATA
	static void NewProp_bLogEscalate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogEscalate;
	static void NewProp_bDormant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDormant;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_CooloffTime;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_AutoEscalateTime;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_HighestTimePeriod;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AllTimePeriods_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTimePeriods;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEscalationState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bLogEscalate_SetBit(void* Obj)
{
	((FEscalationState*)Obj)->bLogEscalate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bLogEscalate = { "bLogEscalate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEscalationState), &Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bLogEscalate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogEscalate_MetaData), NewProp_bLogEscalate_MetaData) };
void Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bDormant_SetBit(void* Obj)
{
	((FEscalationState*)Obj)->bDormant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bDormant = { "bDormant", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEscalationState), &Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bDormant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDormant_MetaData), NewProp_bDormant_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_CooloffTime = { "CooloffTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEscalationState, CooloffTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooloffTime_MetaData), NewProp_CooloffTime_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AutoEscalateTime = { "AutoEscalateTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEscalationState, AutoEscalateTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoEscalateTime_MetaData), NewProp_AutoEscalateTime_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_HighestTimePeriod = { "HighestTimePeriod", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEscalationState, HighestTimePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighestTimePeriod_MetaData), NewProp_HighestTimePeriod_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AllTimePeriods_Inner = { "AllTimePeriods", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AllTimePeriods = { "AllTimePeriods", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEscalationState, AllTimePeriods), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTimePeriods_MetaData), NewProp_AllTimePeriods_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEscalationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bLogEscalate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bDormant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_CooloffTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AutoEscalateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_HighestTimePeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AllTimePeriods_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_AllTimePeriods,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscalationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEscalationState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	Z_Construct_UScriptStruct_FStateStruct,
	&NewStructOps,
	"EscalationState",
	Z_Construct_UScriptStruct_FEscalationState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscalationState_Statics::PropPointers),
	sizeof(FEscalationState),
	alignof(FEscalationState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscalationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEscalationState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEscalationState()
{
	if (!Z_Registration_Info_UScriptStruct_EscalationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EscalationState.InnerSingleton, Z_Construct_UScriptStruct_FEscalationState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EscalationState.InnerSingleton;
}
// End ScriptStruct FEscalationState

// Begin Class UEscalationManagerConfig
void UEscalationManagerConfig::StaticRegisterNativesUEscalationManagerConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEscalationManagerConfig);
UClass* Z_Construct_UClass_UEscalationManagerConfig_NoRegister()
{
	return UEscalationManagerConfig::StaticClass();
}
struct Z_Construct_UClass_UEscalationManagerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for defining escalation state configuration.\n *\n * Subclass and override 'InitConfigDefaultsInternal' to initialize EscalationSeverity and bEnabled (and other custom config variables).\n */" },
		{ "IncludePath", "Net/Core/Connection/EscalationStates.h" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Base class for defining escalation state configuration.\n\nSubclass and override 'InitConfigDefaultsInternal' to initialize EscalationSeverity and bEnabled (and other custom config variables)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscalationSeverity_MetaData[] = {
		{ "Comment", "/** Names of the different states for escalating severity, depending on conditions for each state */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/EscalationStates.h" },
		{ "ToolTip", "Names of the different states for escalating severity, depending on conditions for each state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EscalationSeverity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EscalationSeverity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscalationManagerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEscalationManagerConfig_Statics::NewProp_EscalationSeverity_Inner = { "EscalationSeverity", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEscalationManagerConfig_Statics::NewProp_EscalationSeverity = { "EscalationSeverity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEscalationManagerConfig, EscalationSeverity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscalationSeverity_MetaData), NewProp_EscalationSeverity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscalationManagerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscalationManagerConfig_Statics::NewProp_EscalationSeverity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscalationManagerConfig_Statics::NewProp_EscalationSeverity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEscalationManagerConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEscalationManagerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatePerObjectConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEscalationManagerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEscalationManagerConfig_Statics::ClassParams = {
	&UEscalationManagerConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEscalationManagerConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEscalationManagerConfig_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEscalationManagerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UEscalationManagerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEscalationManagerConfig()
{
	if (!Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton, Z_Construct_UClass_UEscalationManagerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton;
}
template<> NETCORE_API UClass* StaticClass<UEscalationManagerConfig>()
{
	return UEscalationManagerConfig::StaticClass();
}
UEscalationManagerConfig::UEscalationManagerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEscalationManagerConfig);
UEscalationManagerConfig::~UEscalationManagerConfig() {}
// End Class UEscalationManagerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEscalationState::StaticStruct, Z_Construct_UScriptStruct_FEscalationState_Statics::NewStructOps, TEXT("EscalationState"), &Z_Registration_Info_UScriptStruct_EscalationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEscalationState), 3418448685U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEscalationManagerConfig, UEscalationManagerConfig::StaticClass, TEXT("UEscalationManagerConfig"), &Z_Registration_Info_UClass_UEscalationManagerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEscalationManagerConfig), 2692468094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_1940156067(TEXT("/Script/NetCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
