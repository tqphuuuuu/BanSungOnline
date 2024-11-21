// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DynamicMaterialParameters() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraStatelessDynamicParameterSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet;
class UScriptStruct* FNiagaraStatelessDynamicParameterSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStatelessDynamicParameterSet"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStatelessDynamicParameterSet>()
{
	return FNiagaraStatelessDynamicParameterSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bXChannelEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bYChannelEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZChannelEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWChannelEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XChannelDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "X Channel" },
		{ "EditCondition", "bXChannelEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YChannelDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Y Channel" },
		{ "EditCondition", "bYChannelEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZChannelDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Z Channel" },
		{ "EditCondition", "bZChannelEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WChannelDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "W Channel" },
		{ "EditCondition", "bWChannelEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bXChannelEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bXChannelEnabled;
	static void NewProp_bYChannelEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYChannelEnabled;
	static void NewProp_bZChannelEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZChannelEnabled;
	static void NewProp_bWChannelEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWChannelEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XChannelDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YChannelDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZChannelDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WChannelDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStatelessDynamicParameterSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bXChannelEnabled_SetBit(void* Obj)
{
	((FNiagaraStatelessDynamicParameterSet*)Obj)->bXChannelEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bXChannelEnabled = { "bXChannelEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraStatelessDynamicParameterSet), &Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bXChannelEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bXChannelEnabled_MetaData), NewProp_bXChannelEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bYChannelEnabled_SetBit(void* Obj)
{
	((FNiagaraStatelessDynamicParameterSet*)Obj)->bYChannelEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bYChannelEnabled = { "bYChannelEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraStatelessDynamicParameterSet), &Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bYChannelEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bYChannelEnabled_MetaData), NewProp_bYChannelEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bZChannelEnabled_SetBit(void* Obj)
{
	((FNiagaraStatelessDynamicParameterSet*)Obj)->bZChannelEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bZChannelEnabled = { "bZChannelEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraStatelessDynamicParameterSet), &Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bZChannelEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZChannelEnabled_MetaData), NewProp_bZChannelEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bWChannelEnabled_SetBit(void* Obj)
{
	((FNiagaraStatelessDynamicParameterSet*)Obj)->bWChannelEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bWChannelEnabled = { "bWChannelEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraStatelessDynamicParameterSet), &Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bWChannelEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWChannelEnabled_MetaData), NewProp_bWChannelEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_XChannelDistribution = { "XChannelDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessDynamicParameterSet, XChannelDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XChannelDistribution_MetaData), NewProp_XChannelDistribution_MetaData) }; // 3828066781
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_YChannelDistribution = { "YChannelDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessDynamicParameterSet, YChannelDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YChannelDistribution_MetaData), NewProp_YChannelDistribution_MetaData) }; // 3828066781
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_ZChannelDistribution = { "ZChannelDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessDynamicParameterSet, ZChannelDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZChannelDistribution_MetaData), NewProp_ZChannelDistribution_MetaData) }; // 3828066781
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_WChannelDistribution = { "WChannelDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessDynamicParameterSet, WChannelDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WChannelDistribution_MetaData), NewProp_WChannelDistribution_MetaData) }; // 3828066781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bXChannelEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bYChannelEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bZChannelEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_bWChannelEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_XChannelDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_YChannelDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_ZChannelDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewProp_WChannelDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraStatelessDynamicParameterSet",
	Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::PropPointers),
	sizeof(FNiagaraStatelessDynamicParameterSet),
	alignof(FNiagaraStatelessDynamicParameterSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet.InnerSingleton;
}
// End ScriptStruct FNiagaraStatelessDynamicParameterSet

// Begin Class UNiagaraStatelessModule_DynamicMaterialParameters
void UNiagaraStatelessModule_DynamicMaterialParameters::StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_DynamicMaterialParameters);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister()
{
	return UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Write to the Dynamic Parameters that can be read in the material vertex & pixel shader vertex\n" },
		{ "DisplayName", "Dynamic Material Parameters" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
		{ "ToolTip", "Write to the Dynamic Parameters that can be read in the material vertex & pixel shader vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter0Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter1Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter2Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParameter3Enabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter0_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bParameter0Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter1_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bParameter1Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter2_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bParameter2Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter3_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bParameter3Enabled" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_DynamicMaterialParameters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bParameter0Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter0Enabled;
	static void NewProp_bParameter1Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter1Enabled;
	static void NewProp_bParameter2Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter2Enabled;
	static void NewProp_bParameter3Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameter3Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_DynamicMaterialParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter0Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0Enabled = { "bParameter0Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter0Enabled_MetaData), NewProp_bParameter0Enabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter1Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter1Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter1Enabled = { "bParameter1Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter1Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter1Enabled_MetaData), NewProp_bParameter1Enabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter2Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter2Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter2Enabled = { "bParameter2Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter2Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter2Enabled_MetaData), NewProp_bParameter2Enabled_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter3Enabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_DynamicMaterialParameters*)Obj)->bParameter3Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter3Enabled = { "bParameter3Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter3Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParameter3Enabled_MetaData), NewProp_bParameter3Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0 = { "Parameter0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0), Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter0_MetaData), NewProp_Parameter0_MetaData) }; // 2515959513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter1 = { "Parameter1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter1), Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter1_MetaData), NewProp_Parameter1_MetaData) }; // 2515959513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter2 = { "Parameter2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter2), Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter2_MetaData), NewProp_Parameter2_MetaData) }; // 2515959513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter3 = { "Parameter3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter3), Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter3_MetaData), NewProp_Parameter3_MetaData) }; // 2515959513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter0Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter1Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter2Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_bParameter3Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::NewProp_Parameter3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::ClassParams = {
	&UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_DynamicMaterialParameters>()
{
	return UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass();
}
UNiagaraStatelessModule_DynamicMaterialParameters::UNiagaraStatelessModule_DynamicMaterialParameters() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_DynamicMaterialParameters);
UNiagaraStatelessModule_DynamicMaterialParameters::~UNiagaraStatelessModule_DynamicMaterialParameters() {}
// End Class UNiagaraStatelessModule_DynamicMaterialParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraStatelessDynamicParameterSet::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewStructOps, TEXT("NiagaraStatelessDynamicParameterSet"), &Z_Registration_Info_UScriptStruct_NiagaraStatelessDynamicParameterSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStatelessDynamicParameterSet), 2515959513U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters, UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass, TEXT("UNiagaraStatelessModule_DynamicMaterialParameters"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_DynamicMaterialParameters), 720059112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_2332021089(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
