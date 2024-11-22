// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraTickBehaviorEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTickBehaviorEnum() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraTickBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraTickBehavior;
static UEnum* ENiagaraTickBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraTickBehavior"));
	}
	return Z_Registration_Info_UEnum_ENiagaraTickBehavior.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraTickBehavior>()
{
	return ENiagaraTickBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Niagara ticking behaviour */" },
		{ "ForceTickFirst.Comment", "/** Niagara will tick in the first tick group (default is TG_PrePhysics). */" },
		{ "ForceTickFirst.Name", "ENiagaraTickBehavior::ForceTickFirst" },
		{ "ForceTickFirst.ToolTip", "Niagara will tick in the first tick group (default is TG_PrePhysics)." },
		{ "ForceTickLast.Comment", "/** Niagara will tick in the last tick group (default is TG_LastDemotable). */" },
		{ "ForceTickLast.Name", "ENiagaraTickBehavior::ForceTickLast" },
		{ "ForceTickLast.ToolTip", "Niagara will tick in the last tick group (default is TG_LastDemotable)." },
		{ "ModuleRelativePath", "Public/NiagaraTickBehaviorEnum.h" },
		{ "ToolTip", "Niagara ticking behaviour" },
		{ "UseComponentTickGroup.Comment", "/** Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component. */" },
		{ "UseComponentTickGroup.Name", "ENiagaraTickBehavior::UseComponentTickGroup" },
		{ "UseComponentTickGroup.ToolTip", "Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component." },
		{ "UsePrereqs.Comment", "/** Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option. */" },
		{ "UsePrereqs.Name", "ENiagaraTickBehavior::UsePrereqs" },
		{ "UsePrereqs.ToolTip", "Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraTickBehavior::UsePrereqs", (int64)ENiagaraTickBehavior::UsePrereqs },
		{ "ENiagaraTickBehavior::UseComponentTickGroup", (int64)ENiagaraTickBehavior::UseComponentTickGroup },
		{ "ENiagaraTickBehavior::ForceTickFirst", (int64)ENiagaraTickBehavior::ForceTickFirst },
		{ "ENiagaraTickBehavior::ForceTickLast", (int64)ENiagaraTickBehavior::ForceTickLast },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraTickBehavior",
	"ENiagaraTickBehavior",
	Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior()
{
	if (!Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraTickBehavior.InnerSingleton;
}
// End Enum ENiagaraTickBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraTickBehavior_StaticEnum, TEXT("ENiagaraTickBehavior"), &Z_Registration_Info_UEnum_ENiagaraTickBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1327848616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h_969800126(TEXT("/Script/Niagara"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS