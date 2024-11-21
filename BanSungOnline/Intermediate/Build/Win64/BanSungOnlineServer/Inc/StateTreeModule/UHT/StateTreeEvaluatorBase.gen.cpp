// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeEvaluatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEvaluatorBase() {}

// Begin Cross Module References
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeEvaluatorBase
static_assert(std::is_polymorphic<FStateTreeEvaluatorBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeEvaluatorBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase;
class UScriptStruct* FStateTreeEvaluatorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvaluatorBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvaluatorBase>()
{
	return FStateTreeEvaluatorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct of StateTree Evaluators.\n * Evaluators calculate and expose data to be used for decision making in a StateTree.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeEvaluatorBase.h" },
		{ "ToolTip", "Base struct of StateTree Evaluators.\nEvaluators calculate and expose data to be used for decision making in a StateTree." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvaluatorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeNodeBase,
	&NewStructOps,
	"StateTreeEvaluatorBase",
	nullptr,
	0,
	sizeof(FStateTreeEvaluatorBase),
	alignof(FStateTreeEvaluatorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton;
}
// End ScriptStruct FStateTreeEvaluatorBase

// Begin ScriptStruct FStateTreeEvaluatorCommonBase
static_assert(std::is_polymorphic<FStateTreeEvaluatorCommonBase>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FStateTreeEvaluatorCommonBase cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase;
class UScriptStruct* FStateTreeEvaluatorCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvaluatorCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvaluatorCommonBase>()
{
	return FStateTreeEvaluatorCommonBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class (namespace) for all common Evaluators that are generally applicable.\n* This allows schemas to safely include all Evaluators child of this struct. \n*/" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeEvaluatorBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Evaluators that are generally applicable.\nThis allows schemas to safely include all Evaluators child of this struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvaluatorCommonBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
	&NewStructOps,
	"StateTreeEvaluatorCommonBase",
	nullptr,
	0,
	sizeof(FStateTreeEvaluatorCommonBase),
	alignof(FStateTreeEvaluatorCommonBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton;
}
// End ScriptStruct FStateTreeEvaluatorCommonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeEvaluatorBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::NewStructOps, TEXT("StateTreeEvaluatorBase"), &Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvaluatorBase), 2442286143U) },
		{ FStateTreeEvaluatorCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::NewStructOps, TEXT("StateTreeEvaluatorCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvaluatorCommonBase), 2659919845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_19595245(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
