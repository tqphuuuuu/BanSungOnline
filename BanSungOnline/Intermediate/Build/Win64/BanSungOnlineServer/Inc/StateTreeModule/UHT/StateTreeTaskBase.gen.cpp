// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeTaskBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTaskBase() {}

// Begin Cross Module References
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeTaskBase
static_assert(std::is_polymorphic<FStateTreeTaskBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeTaskBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTaskBase;
class UScriptStruct* FStateTreeTaskBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTaskBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTaskBase>()
{
	return FStateTreeTaskBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for StateTree Tasks.\n * Tasks are logic executed in an active state.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
		{ "ToolTip", "Base struct for StateTree Tasks.\nTasks are logic executed in an active state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTaskEnabled_MetaData[] = {
		{ "Comment", "/** True if the node is Enabled (i.e. not explicitly disabled in the asset). */" },
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
		{ "ToolTip", "True if the node is Enabled (i.e. not explicitly disabled in the asset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionHandlingPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTaskEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTaskEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionHandlingPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionHandlingPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTaskBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_bTaskEnabled_SetBit(void* Obj)
{
	((FStateTreeTaskBase*)Obj)->bTaskEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_bTaskEnabled = { "bTaskEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStateTreeTaskBase), &Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_bTaskEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTaskEnabled_MetaData), NewProp_bTaskEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_TransitionHandlingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_TransitionHandlingPriority = { "TransitionHandlingPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTaskBase, TransitionHandlingPriority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionHandlingPriority_MetaData), NewProp_TransitionHandlingPriority_MetaData) }; // 2934257566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_bTaskEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_TransitionHandlingPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewProp_TransitionHandlingPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeNodeBase,
	&NewStructOps,
	"StateTreeTaskBase",
	Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::PropPointers),
	sizeof(FStateTreeTaskBase),
	alignof(FStateTreeTaskBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton;
}
// End ScriptStruct FStateTreeTaskBase

// Begin ScriptStruct FStateTreeTaskCommonBase
static_assert(std::is_polymorphic<FStateTreeTaskCommonBase>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FStateTreeTaskCommonBase cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase;
class UScriptStruct* FStateTreeTaskCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTaskCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTaskCommonBase>()
{
	return FStateTreeTaskCommonBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all common Tasks that are generally applicable.\n * This allows schemas to safely include all conditions child of this struct. \n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Tasks that are generally applicable.\nThis allows schemas to safely include all conditions child of this struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTaskCommonBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeTaskBase,
	&NewStructOps,
	"StateTreeTaskCommonBase",
	nullptr,
	0,
	sizeof(FStateTreeTaskCommonBase),
	alignof(FStateTreeTaskCommonBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton;
}
// End ScriptStruct FStateTreeTaskCommonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeTaskBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewStructOps, TEXT("StateTreeTaskBase"), &Z_Registration_Info_UScriptStruct_StateTreeTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTaskBase), 2478199104U) },
		{ FStateTreeTaskCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::NewStructOps, TEXT("StateTreeTaskCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTaskCommonBase), 973669678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_1488253584(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
