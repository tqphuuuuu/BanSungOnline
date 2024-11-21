// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassEntityQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityQuery() {}

// Begin Cross Module References
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityQuery();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragmentRequirements();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassEntityQuery
static_assert(std::is_polymorphic<FMassEntityQuery>() == std::is_polymorphic<FMassFragmentRequirements>(), "USTRUCT FMassEntityQuery cannot be polymorphic unless super FMassFragmentRequirements is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityQuery;
class UScriptStruct* FMassEntityQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityQuery, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityQuery"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityQuery>()
{
	return FMassEntityQuery::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassEntityQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  FMassEntityQuery is a structure that is used to trigger calculations on cached set of valid archetypes as described \n *  by requirements. See the parent classes FMassFragmentRequirements and FMassSubsystemRequirements for setting up the \n *\x09required fragments and subsystems.\n * \n *  A query to be considered valid needs declared at least one EMassFragmentPresence::All, EMassFragmentPresence::Any \n *  EMassFragmentPresence::Optional fragment requirement.\n */" },
		{ "ModuleRelativePath", "Public/MassEntityQuery.h" },
		{ "ToolTip", "FMassEntityQuery is a structure that is used to trigger calculations on cached set of valid archetypes as described\nby requirements. See the parent classes FMassFragmentRequirements and FMassSubsystemRequirements for setting up the\n   required fragments and subsystems.\n\nA query to be considered valid needs declared at least one EMassFragmentPresence::All, EMassFragmentPresence::Any\nEMassFragmentPresence::Optional fragment requirement." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityQuery>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityQuery_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	Z_Construct_UScriptStruct_FMassFragmentRequirements,
	&NewStructOps,
	"MassEntityQuery",
	nullptr,
	0,
	sizeof(FMassEntityQuery),
	alignof(FMassEntityQuery),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityQuery_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassEntityQuery()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityQuery_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton;
}
// End ScriptStruct FMassEntityQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityQuery_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassEntityQuery::StaticStruct, Z_Construct_UScriptStruct_FMassEntityQuery_Statics::NewStructOps, TEXT("MassEntityQuery"), &Z_Registration_Info_UScriptStruct_MassEntityQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityQuery), 572902412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityQuery_h_1168495009(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityQuery_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
