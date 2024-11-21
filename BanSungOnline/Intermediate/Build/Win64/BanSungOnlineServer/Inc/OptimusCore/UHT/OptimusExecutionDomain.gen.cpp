// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusExecutionDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusExecutionDomain() {}

// Begin Cross Module References
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusExecutionDomainType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusExecutionDomainType;
static UEnum* EOptimusExecutionDomainType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusExecutionDomainType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusExecutionDomainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusExecutionDomainType"));
	}
	return Z_Registration_Info_UEnum_EOptimusExecutionDomainType.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusExecutionDomainType>()
{
	return EOptimusExecutionDomainType_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DomainName.Name", "EOptimusExecutionDomainType::DomainName" },
		{ "Expression.Name", "EOptimusExecutionDomainType::Expression" },
		{ "ModuleRelativePath", "Public/OptimusExecutionDomain.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusExecutionDomainType::DomainName", (int64)EOptimusExecutionDomainType::DomainName },
		{ "EOptimusExecutionDomainType::Expression", (int64)EOptimusExecutionDomainType::Expression },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusExecutionDomainType",
	"EOptimusExecutionDomainType",
	Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType()
{
	if (!Z_Registration_Info_UEnum_EOptimusExecutionDomainType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusExecutionDomainType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusExecutionDomainType.InnerSingleton;
}
// End Enum EOptimusExecutionDomainType

// Begin ScriptStruct FOptimusExecutionDomain
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusExecutionDomain;
class UScriptStruct* FOptimusExecutionDomain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusExecutionDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusExecutionDomain"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusExecutionDomain>()
{
	return FOptimusExecutionDomain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A struct to hold onto a single-level domain for controlling a kernel's execution domain. \n  * The reason it's in a struct is so that we can apply a property panel customization for it\n  * to make it easier to select from a pre-defined list of execution domains.\n*/" },
		{ "ModuleRelativePath", "Public/OptimusExecutionDomain.h" },
		{ "ToolTip", "A struct to hold onto a single-level domain for controlling a kernel's execution domain.\nThe reason it's in a struct is so that we can apply a property panel customization for it\nto make it easier to select from a pre-defined list of execution domains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Domain" },
		{ "ModuleRelativePath", "Public/OptimusExecutionDomain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Domain" },
		{ "Comment", "// The name of the execution domain that this kernel operates on.\n" },
		{ "ModuleRelativePath", "Public/OptimusExecutionDomain.h" },
		{ "ToolTip", "The name of the execution domain that this kernel operates on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Category", "Domain" },
		{ "ModuleRelativePath", "Public/OptimusExecutionDomain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusExecutionDomain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusExecutionDomain, Type), Z_Construct_UEnum_OptimusCore_EOptimusExecutionDomainType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3724607125
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusExecutionDomain, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusExecutionDomain, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusExecutionDomain",
	Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers),
	sizeof(FOptimusExecutionDomain),
	alignof(FOptimusExecutionDomain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton, Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton;
}
// End ScriptStruct FOptimusExecutionDomain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusExecutionDomainType_StaticEnum, TEXT("EOptimusExecutionDomainType"), &Z_Registration_Info_UEnum_EOptimusExecutionDomainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3724607125U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusExecutionDomain::StaticStruct, Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewStructOps, TEXT("OptimusExecutionDomain"), &Z_Registration_Info_UScriptStruct_OptimusExecutionDomain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusExecutionDomain), 3137940066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_1431459048(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusExecutionDomain_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
