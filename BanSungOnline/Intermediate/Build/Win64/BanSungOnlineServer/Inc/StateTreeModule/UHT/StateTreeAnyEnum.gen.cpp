// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeAnyEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeAnyEnum() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAnyEnum();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeAnyEnum
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeAnyEnum;
class UScriptStruct* FStateTreeAnyEnum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAnyEnum, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeAnyEnum"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeAnyEnum>()
{
	return FStateTreeAnyEnum::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum that can be any type in the UI. Helper class to deal with any enum in property binding.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "Enum that can be any type in the UI. Helper class to deal with any enum in property binding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Enum" },
		{ "Comment", "/** The enum integer value. */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "The enum integer value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "Category", "Enum" },
		{ "Comment", "/** The enum class associated with this enum. */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "The enum class associated with this enum." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeAnyEnum>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeAnyEnum, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeAnyEnum, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeAnyEnum",
	Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers),
	sizeof(FStateTreeAnyEnum),
	alignof(FStateTreeAnyEnum),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAnyEnum()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton;
}
// End ScriptStruct FStateTreeAnyEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeAnyEnum::StaticStruct, Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewStructOps, TEXT("StateTreeAnyEnum"), &Z_Registration_Info_UScriptStruct_StateTreeAnyEnum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeAnyEnum), 2033272328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_1589228354(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
