// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeConsiderationBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeConsiderationBase() {}

// Begin Cross Module References
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeConsiderationBase
static_assert(std::is_polymorphic<FStateTreeConsiderationBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeConsiderationBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase;
class UScriptStruct* FStateTreeConsiderationBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConsiderationBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConsiderationBase>()
{
	return FStateTreeConsiderationBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This feature is experimental and the API is expected to change. \n * Base struct for all utility considerations.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConsiderationBase.h" },
		{ "ToolTip", "This feature is experimental and the API is expected to change.\nBase struct for all utility considerations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConsiderationBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaIndent_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConsiderationBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operand;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_DeltaIndent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConsiderationBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_Operand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConsiderationBase, Operand), Z_Construct_UEnum_StateTreeModule_EStateTreeExpressionOperand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operand_MetaData), NewProp_Operand_MetaData) }; // 2760319656
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_DeltaIndent = { "DeltaIndent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConsiderationBase, DeltaIndent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaIndent_MetaData), NewProp_DeltaIndent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_Operand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_Operand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewProp_DeltaIndent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeNodeBase,
	&NewStructOps,
	"StateTreeConsiderationBase",
	Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::PropPointers),
	sizeof(FStateTreeConsiderationBase),
	alignof(FStateTreeConsiderationBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase.InnerSingleton;
}
// End ScriptStruct FStateTreeConsiderationBase

// Begin ScriptStruct FStateTreeConsiderationCommonBase
static_assert(std::is_polymorphic<FStateTreeConsiderationCommonBase>() == std::is_polymorphic<FStateTreeConsiderationBase>(), "USTRUCT FStateTreeConsiderationCommonBase cannot be polymorphic unless super FStateTreeConsiderationBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase;
class UScriptStruct* FStateTreeConsiderationCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConsiderationCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConsiderationCommonBase>()
{
	return FStateTreeConsiderationCommonBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all common Utility Considerations that are generally applicable.\n * This allows schemas to safely include all considerations child of this struct.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConsiderationBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Utility Considerations that are generally applicable.\nThis allows schemas to safely include all considerations child of this struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConsiderationCommonBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConsiderationBase,
	&NewStructOps,
	"StateTreeConsiderationCommonBase",
	nullptr,
	0,
	sizeof(FStateTreeConsiderationCommonBase),
	alignof(FStateTreeConsiderationCommonBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase.InnerSingleton;
}
// End ScriptStruct FStateTreeConsiderationCommonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConsiderationBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeConsiderationBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConsiderationBase_Statics::NewStructOps, TEXT("StateTreeConsiderationBase"), &Z_Registration_Info_UScriptStruct_StateTreeConsiderationBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConsiderationBase), 42588276U) },
		{ FStateTreeConsiderationCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase_Statics::NewStructOps, TEXT("StateTreeConsiderationCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeConsiderationCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConsiderationCommonBase), 2381944748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConsiderationBase_h_426962085(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConsiderationBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConsiderationBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
