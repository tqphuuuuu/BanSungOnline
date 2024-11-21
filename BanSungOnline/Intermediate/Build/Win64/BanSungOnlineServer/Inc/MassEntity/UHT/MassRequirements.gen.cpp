// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassRequirements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRequirements() {}

// Begin Cross Module References
MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassFragmentAccess();
MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassFragmentPresence();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragmentRequirements();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSubsystemRequirements();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Enum EMassFragmentAccess
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassFragmentAccess;
static UEnum* EMassFragmentAccess_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassFragmentAccess.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassFragmentAccess.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassFragmentAccess, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassFragmentAccess"));
	}
	return Z_Registration_Info_UEnum_EMassFragmentAccess.OuterSingleton;
}
template<> MASSENTITY_API UEnum* StaticEnum<EMassFragmentAccess>()
{
	return EMassFragmentAccess_StaticEnum();
}
struct Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MAX.Name", "EMassFragmentAccess::MAX" },
		{ "ModuleRelativePath", "Public/MassRequirements.h" },
		{ "None.Comment", "/** no binding required */" },
		{ "None.Name", "EMassFragmentAccess::None" },
		{ "None.ToolTip", "no binding required" },
		{ "ReadOnly.Comment", "/** We want to read the data for the fragment */" },
		{ "ReadOnly.Name", "EMassFragmentAccess::ReadOnly" },
		{ "ReadOnly.ToolTip", "We want to read the data for the fragment" },
		{ "ReadWrite.Comment", "/** We want to read and write the data for the fragment */" },
		{ "ReadWrite.Name", "EMassFragmentAccess::ReadWrite" },
		{ "ReadWrite.ToolTip", "We want to read and write the data for the fragment" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassFragmentAccess::None", (int64)EMassFragmentAccess::None },
		{ "EMassFragmentAccess::ReadOnly", (int64)EMassFragmentAccess::ReadOnly },
		{ "EMassFragmentAccess::ReadWrite", (int64)EMassFragmentAccess::ReadWrite },
		{ "EMassFragmentAccess::MAX", (int64)EMassFragmentAccess::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	"EMassFragmentAccess",
	"EMassFragmentAccess",
	Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassEntity_EMassFragmentAccess()
{
	if (!Z_Registration_Info_UEnum_EMassFragmentAccess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassFragmentAccess.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassFragmentAccess_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassFragmentAccess.InnerSingleton;
}
// End Enum EMassFragmentAccess

// Begin Enum EMassFragmentPresence
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassFragmentPresence;
static UEnum* EMassFragmentPresence_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassFragmentPresence.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassFragmentPresence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassFragmentPresence, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassFragmentPresence"));
	}
	return Z_Registration_Info_UEnum_EMassFragmentPresence.OuterSingleton;
}
template<> MASSENTITY_API UEnum* StaticEnum<EMassFragmentPresence>()
{
	return EMassFragmentPresence_StaticEnum();
}
struct Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "/** All of the required fragments must be present */" },
		{ "All.Name", "EMassFragmentPresence::All" },
		{ "All.ToolTip", "All of the required fragments must be present" },
		{ "Any.Comment", "/** One of the required fragments must be present */" },
		{ "Any.Name", "EMassFragmentPresence::Any" },
		{ "Any.ToolTip", "One of the required fragments must be present" },
		{ "MAX.Name", "EMassFragmentPresence::MAX" },
		{ "ModuleRelativePath", "Public/MassRequirements.h" },
		{ "None.Comment", "/** None of the required fragments can be present */" },
		{ "None.Name", "EMassFragmentPresence::None" },
		{ "None.ToolTip", "None of the required fragments can be present" },
		{ "Optional.Comment", "/** If fragment is present we'll use it, but it missing stop processing of a given archetype */" },
		{ "Optional.Name", "EMassFragmentPresence::Optional" },
		{ "Optional.ToolTip", "If fragment is present we'll use it, but it missing stop processing of a given archetype" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassFragmentPresence::All", (int64)EMassFragmentPresence::All },
		{ "EMassFragmentPresence::Any", (int64)EMassFragmentPresence::Any },
		{ "EMassFragmentPresence::None", (int64)EMassFragmentPresence::None },
		{ "EMassFragmentPresence::Optional", (int64)EMassFragmentPresence::Optional },
		{ "EMassFragmentPresence::MAX", (int64)EMassFragmentPresence::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	"EMassFragmentPresence",
	"EMassFragmentPresence",
	Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassEntity_EMassFragmentPresence()
{
	if (!Z_Registration_Info_UEnum_EMassFragmentPresence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassFragmentPresence.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassFragmentPresence_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassFragmentPresence.InnerSingleton;
}
// End Enum EMassFragmentPresence

// Begin ScriptStruct FMassSubsystemRequirements
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSubsystemRequirements;
class UScriptStruct* FMassSubsystemRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSubsystemRequirements, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassSubsystemRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassSubsystemRequirements>()
{
	return FMassSubsystemRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  FMassSubsystemRequirements is a structure that declares runtime subsystem access type given calculations require.\n */" },
		{ "ModuleRelativePath", "Public/MassRequirements.h" },
		{ "ToolTip", "FMassSubsystemRequirements is a structure that declares runtime subsystem access type given calculations require." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSubsystemRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassSubsystemRequirements",
	nullptr,
	0,
	sizeof(FMassSubsystemRequirements),
	alignof(FMassSubsystemRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassSubsystemRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.InnerSingleton, Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassSubsystemRequirements.InnerSingleton;
}
// End ScriptStruct FMassSubsystemRequirements

// Begin ScriptStruct FMassFragmentRequirements
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFragmentRequirements;
class UScriptStruct* FMassFragmentRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFragmentRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFragmentRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragmentRequirements, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassFragmentRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_MassFragmentRequirements.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassFragmentRequirements>()
{
	return FMassFragmentRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  FMassFragmentRequirements is a structure that describes properties required of an archetype that's a subject of calculations.\n */" },
		{ "ModuleRelativePath", "Public/MassRequirements.h" },
		{ "ToolTip", "FMassFragmentRequirements is a structure that describes properties required of an archetype that's a subject of calculations." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFragmentRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassFragmentRequirements",
	nullptr,
	0,
	sizeof(FMassFragmentRequirements),
	alignof(FMassFragmentRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassFragmentRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_MassFragmentRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFragmentRequirements.InnerSingleton, Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassFragmentRequirements.InnerSingleton;
}
// End ScriptStruct FMassFragmentRequirements

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassFragmentAccess_StaticEnum, TEXT("EMassFragmentAccess"), &Z_Registration_Info_UEnum_EMassFragmentAccess, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1884846722U) },
		{ EMassFragmentPresence_StaticEnum, TEXT("EMassFragmentPresence"), &Z_Registration_Info_UEnum_EMassFragmentPresence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 438846112U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassSubsystemRequirements::StaticStruct, Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics::NewStructOps, TEXT("MassSubsystemRequirements"), &Z_Registration_Info_UScriptStruct_MassSubsystemRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSubsystemRequirements), 3737131489U) },
		{ FMassFragmentRequirements::StaticStruct, Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics::NewStructOps, TEXT("MassFragmentRequirements"), &Z_Registration_Info_UScriptStruct_MassFragmentRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFragmentRequirements), 2132794173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_2616736635(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassRequirements_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
