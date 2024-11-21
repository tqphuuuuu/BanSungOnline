// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeConditionBase() {}

// Begin Cross Module References
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeConditionBase
static_assert(std::is_polymorphic<FStateTreeConditionBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeConditionBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConditionBase;
class UScriptStruct* FStateTreeConditionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConditionBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConditionBase>()
{
	return FStateTreeConditionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all conditions.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
		{ "ToolTip", "Base struct for all conditions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaIndent_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operand;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_DeltaIndent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConditionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConditionBase, Operand), Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operand_MetaData), NewProp_Operand_MetaData) }; // 2760319656
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent = { "DeltaIndent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConditionBase, DeltaIndent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaIndent_MetaData), NewProp_DeltaIndent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_EvaluationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_EvaluationMode = { "EvaluationMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConditionBase, EvaluationMode), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationMode_MetaData), NewProp_EvaluationMode_MetaData) }; // 4101265614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_EvaluationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_EvaluationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeNodeBase,
	&NewStructOps,
	"StateTreeConditionBase",
	Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers),
	sizeof(FStateTreeConditionBase),
	alignof(FStateTreeConditionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton;
}
// End ScriptStruct FStateTreeConditionBase

// Begin ScriptStruct FStateTreeConditionCommonBase
static_assert(std::is_polymorphic<FStateTreeConditionCommonBase>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FStateTreeConditionCommonBase cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase;
class UScriptStruct* FStateTreeConditionCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConditionCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConditionCommonBase>()
{
	return FStateTreeConditionCommonBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all common Conditions that are generally applicable.\n * This allows schemas to safely include all conditions child of this struct. \n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Conditions that are generally applicable.\nThis allows schemas to safely include all conditions child of this struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConditionCommonBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConditionBase,
	&NewStructOps,
	"StateTreeConditionCommonBase",
	nullptr,
	0,
	sizeof(FStateTreeConditionCommonBase),
	alignof(FStateTreeConditionCommonBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton;
}
// End ScriptStruct FStateTreeConditionCommonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeConditionBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewStructOps, TEXT("StateTreeConditionBase"), &Z_Registration_Info_UScriptStruct_StateTreeConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConditionBase), 3754548357U) },
		{ FStateTreeConditionCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::NewStructOps, TEXT("StateTreeConditionCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConditionCommonBase), 1912130444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_2813047702(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
