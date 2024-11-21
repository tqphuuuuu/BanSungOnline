// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusValidatedName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusValidatedName() {}

// Begin Cross Module References
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusValidatedName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusValidatedName;
class UScriptStruct* FOptimusValidatedName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValidatedName, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusValidatedName"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusValidatedName>()
{
	return FOptimusValidatedName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusValidatedName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure containing a FName that has been validated for use as a variable or function name in HLSL code. \n * When using this as a UPROPERTY, the UI will use a property customization that validates text entry.\n */" },
		{ "ModuleRelativePath", "Public/OptimusValidatedName.h" },
		{ "ToolTip", "Structure containing a FName that has been validated for use as a variable or function name in HLSL code.\nWhen using this as a UPROPERTY, the UI will use a property customization that validates text entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/OptimusValidatedName.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusValidatedName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusValidatedName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusValidatedName",
	Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers),
	sizeof(FOptimusValidatedName),
	alignof(FOptimusValidatedName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton, Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton;
}
// End ScriptStruct FOptimusValidatedName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusValidatedName::StaticStruct, Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewStructOps, TEXT("OptimusValidatedName"), &Z_Registration_Info_UScriptStruct_OptimusValidatedName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusValidatedName), 603411049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_1005253716(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
