// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Actions/OptimusAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusAction() {}

// Begin Cross Module References
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusCompoundAction();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAction;
class UScriptStruct* FOptimusAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAction>()
{
	return FOptimusAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Base action class. This is a UStruct so that we can use UE's RAII to check for type\n// similarity.\n" },
		{ "ModuleRelativePath", "Private/Actions/OptimusAction.h" },
		{ "ToolTip", "Base action class. This is a UStruct so that we can use UE's RAII to check for type\nsimilarity." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusAction",
	nullptr,
	0,
	sizeof(FOptimusAction),
	alignof(FOptimusAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton;
}
// End ScriptStruct FOptimusAction

// Begin ScriptStruct FOptimusCompoundAction
static_assert(std::is_polymorphic<FOptimusCompoundAction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusCompoundAction cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusCompoundAction;
class UScriptStruct* FOptimusCompoundAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusCompoundAction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusCompoundAction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusCompoundAction>()
{
	return FOptimusCompoundAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusAction.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusCompoundAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusCompoundAction",
	nullptr,
	0,
	sizeof(FOptimusCompoundAction),
	alignof(FOptimusCompoundAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusCompoundAction()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton;
}
// End ScriptStruct FOptimusCompoundAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusAction::StaticStruct, Z_Construct_UScriptStruct_FOptimusAction_Statics::NewStructOps, TEXT("OptimusAction"), &Z_Registration_Info_UScriptStruct_OptimusAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAction), 267708960U) },
		{ FOptimusCompoundAction::StaticStruct, Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::NewStructOps, TEXT("OptimusCompoundAction"), &Z_Registration_Info_UScriptStruct_OptimusCompoundAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusCompoundAction), 4140327909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_122475995(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
