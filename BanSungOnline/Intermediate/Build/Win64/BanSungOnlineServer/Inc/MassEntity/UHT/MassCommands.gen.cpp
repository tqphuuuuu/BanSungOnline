// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCommands() {}

// Begin Cross Module References
MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassCommandOperationType();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Enum EMassCommandOperationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassCommandOperationType;
static UEnum* EMassCommandOperationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassCommandOperationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassCommandOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassCommandOperationType, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassCommandOperationType"));
	}
	return Z_Registration_Info_UEnum_EMassCommandOperationType.OuterSingleton;
}
template<> MASSENTITY_API UEnum* StaticEnum<EMassCommandOperationType>()
{
	return EMassCommandOperationType_StaticEnum();
}
struct Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Comment", "// signifies commands performing entity creation\n" },
		{ "Add.Name", "EMassCommandOperationType::Add" },
		{ "Add.ToolTip", "signifies commands performing entity creation" },
		{ "ChangeComposition.Comment", "// signifies commands removing fragments or tags from entities\n" },
		{ "ChangeComposition.Name", "EMassCommandOperationType::ChangeComposition" },
		{ "ChangeComposition.ToolTip", "signifies commands removing fragments or tags from entities" },
		{ "Comment", "/**\n * Enum used by MassBatchCommands to declare their \"type\". This data is later used to group commands so that command \n * effects are applied in a controllable fashion \n * Important: if changed make sure to update FMassCommandBuffer::Flush.CommandTypeOrder as well\n */" },
		{ "Create.Comment", "// default value. Commands marked this way will be always executed last. Programmers are encouraged to instead use one of the meaningful values below.\n" },
		{ "Create.Name", "EMassCommandOperationType::Create" },
		{ "Create.ToolTip", "default value. Commands marked this way will be always executed last. Programmers are encouraged to instead use one of the meaningful values below." },
		{ "Destroy.Comment", "// signifies commands setting values to pre-existing fragments. The fragments might be added if missing,\n// depending on specific command, so this group will always be executed after the Add group\n" },
		{ "Destroy.Name", "EMassCommandOperationType::Destroy" },
		{ "Destroy.ToolTip", "signifies commands setting values to pre-existing fragments. The fragments might be added if missing,\ndepending on specific command, so this group will always be executed after the Add group" },
		{ "MAX.Comment", "// signifies commands removing entities\n" },
		{ "MAX.Name", "EMassCommandOperationType::MAX" },
		{ "MAX.ToolTip", "signifies commands removing entities" },
		{ "ModuleRelativePath", "Public/MassCommands.h" },
		{ "None.Name", "EMassCommandOperationType::None" },
		{ "Remove.Comment", "// signifies commands adding fragments or tags to entities\n" },
		{ "Remove.Name", "EMassCommandOperationType::Remove" },
		{ "Remove.ToolTip", "signifies commands adding fragments or tags to entities" },
		{ "Set.Comment", "// signifies commands both adding and removing fragments and/or tags from entities\n" },
		{ "Set.Name", "EMassCommandOperationType::Set" },
		{ "Set.ToolTip", "signifies commands both adding and removing fragments and/or tags from entities" },
		{ "ToolTip", "Enum used by MassBatchCommands to declare their \"type\". This data is later used to group commands so that command\neffects are applied in a controllable fashion\nImportant: if changed make sure to update FMassCommandBuffer::Flush.CommandTypeOrder as well" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassCommandOperationType::None", (int64)EMassCommandOperationType::None },
		{ "EMassCommandOperationType::Create", (int64)EMassCommandOperationType::Create },
		{ "EMassCommandOperationType::Add", (int64)EMassCommandOperationType::Add },
		{ "EMassCommandOperationType::Remove", (int64)EMassCommandOperationType::Remove },
		{ "EMassCommandOperationType::ChangeComposition", (int64)EMassCommandOperationType::ChangeComposition },
		{ "EMassCommandOperationType::Set", (int64)EMassCommandOperationType::Set },
		{ "EMassCommandOperationType::Destroy", (int64)EMassCommandOperationType::Destroy },
		{ "EMassCommandOperationType::MAX", (int64)EMassCommandOperationType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	"EMassCommandOperationType",
	"EMassCommandOperationType",
	Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassEntity_EMassCommandOperationType()
{
	if (!Z_Registration_Info_UEnum_EMassCommandOperationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassCommandOperationType.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassCommandOperationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassCommandOperationType.InnerSingleton;
}
// End Enum EMassCommandOperationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassCommands_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassCommandOperationType_StaticEnum, TEXT("EMassCommandOperationType"), &Z_Registration_Info_UEnum_EMassCommandOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3670962238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassCommands_h_2041292650(TEXT("/Script/MassEntity"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassCommands_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassCommands_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
