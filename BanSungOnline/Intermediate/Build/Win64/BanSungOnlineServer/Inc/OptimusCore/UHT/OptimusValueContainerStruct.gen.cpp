// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusValueContainerStruct.h"
#include "Runtime/CoreUObject/Public/StructUtils/PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusValueContainerStruct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusValueContainerStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct;
class UScriptStruct* FOptimusValueContainerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValueContainerStruct, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusValueContainerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusValueContainerStruct>()
{
	return FOptimusValueContainerStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusValueContainerStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/OptimusValueContainerStruct.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusValueContainerStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValueContainerStruct, Value), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2222206664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusValueContainerStruct",
	Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::PropPointers),
	sizeof(FOptimusValueContainerStruct),
	alignof(FOptimusValueContainerStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueContainerStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.InnerSingleton, Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct.InnerSingleton;
}
// End ScriptStruct FOptimusValueContainerStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainerStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusValueContainerStruct::StaticStruct, Z_Construct_UScriptStruct_FOptimusValueContainerStruct_Statics::NewStructOps, TEXT("OptimusValueContainerStruct"), &Z_Registration_Info_UScriptStruct_OptimusValueContainerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusValueContainerStruct), 2317148538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainerStruct_h_2762694189(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainerStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValueContainerStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
