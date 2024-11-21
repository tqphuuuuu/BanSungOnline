// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreePropertyFunctionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyFunctionBase() {}

// Begin Cross Module References
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreePropertyFunctionBase
static_assert(std::is_polymorphic<FStateTreePropertyFunctionBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreePropertyFunctionBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase;
class UScriptStruct* FStateTreePropertyFunctionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyFunctionBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyFunctionBase>()
{
	return FStateTreePropertyFunctionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all property functions.\n * PropertyFunction is a node which is executed just before evaluating owner's bindings.\n *\n * The property function's instance data is expected to have one property marked as output.\n * This property is used to find which properties the function can be used for,\n * and that property is hidden in the UI. It is expected that there's just one output property.\n *\n * Example:\n *\n *\x09USTRUCT()\n *\x09struct FStateTreeBooleanOperationPropertyFunctionInstanceData\n *\x09{\n *\x09\x09GENERATED_BODY()\n *\n *\x09\x09UPROPERTY(EditAnywhere, Category = Param)\n *\x09\x09""bool bLeft = false;\n *\n *\x09\x09UPROPERTY(EditAnywhere, Category = Param)\n *\x09\x09""bool bRight = false;\n *\n *      // This property is used to find which properties the function can be used for.\n *\x09\x09UPROPERTY(EditAnywhere, Category = Output)\n *\x09\x09""bool bResult = false;\n *\x09};\n *\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreePropertyFunctionBase.h" },
		{ "ToolTip", "Base struct for all property functions.\nPropertyFunction is a node which is executed just before evaluating owner's bindings.\n\nThe property function's instance data is expected to have one property marked as output.\nThis property is used to find which properties the function can be used for,\nand that property is hidden in the UI. It is expected that there's just one output property.\n\nExample:\n\n    USTRUCT()\n    struct FStateTreeBooleanOperationPropertyFunctionInstanceData\n    {\n            GENERATED_BODY()\n\n            UPROPERTY(EditAnywhere, Category = Param)\n            bool bLeft = false;\n\n            UPROPERTY(EditAnywhere, Category = Param)\n            bool bRight = false;\n\n     // This property is used to find which properties the function can be used for.\n            UPROPERTY(EditAnywhere, Category = Output)\n            bool bResult = false;\n    };" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyFunctionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeNodeBase,
	&NewStructOps,
	"StateTreePropertyFunctionBase",
	nullptr,
	0,
	sizeof(FStateTreePropertyFunctionBase),
	alignof(FStateTreePropertyFunctionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyFunctionBase

// Begin ScriptStruct FStateTreePropertyFunctionCommonBase
static_assert(std::is_polymorphic<FStateTreePropertyFunctionCommonBase>() == std::is_polymorphic<FStateTreePropertyFunctionBase>(), "USTRUCT FStateTreePropertyFunctionCommonBase cannot be polymorphic unless super FStateTreePropertyFunctionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase;
class UScriptStruct* FStateTreePropertyFunctionCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyFunctionCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyFunctionCommonBase>()
{
	return FStateTreePropertyFunctionCommonBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreePropertyFunctionBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyFunctionCommonBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase,
	&NewStructOps,
	"StateTreePropertyFunctionCommonBase",
	nullptr,
	0,
	sizeof(FStateTreePropertyFunctionCommonBase),
	alignof(FStateTreePropertyFunctionCommonBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase.InnerSingleton;
}
// End ScriptStruct FStateTreePropertyFunctionCommonBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreePropertyFunctionBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyFunctionBase_Statics::NewStructOps, TEXT("StateTreePropertyFunctionBase"), &Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyFunctionBase), 374850306U) },
		{ FStateTreePropertyFunctionCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase_Statics::NewStructOps, TEXT("StateTreePropertyFunctionCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreePropertyFunctionCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyFunctionCommonBase), 3761401768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h_2623616857(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyFunctionBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
