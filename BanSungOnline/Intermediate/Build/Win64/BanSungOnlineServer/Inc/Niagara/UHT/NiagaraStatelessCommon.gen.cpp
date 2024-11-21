// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessCommon() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraStatelessFeatureMask
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask;
static UEnum* ENiagaraStatelessFeatureMask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatelessFeatureMask"));
	}
	return Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatelessFeatureMask>()
{
	return ENiagaraStatelessFeatureMask_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "ENiagaraStatelessFeatureMask::All" },
		{ "Bitflags", "" },
		{ "ExecuteAll.Hidden", "" },
		{ "ExecuteAll.Name", "ENiagaraStatelessFeatureMask::ExecuteAll" },
		{ "ExecuteCPU.Comment", "// We can execute on the CPU\n" },
		{ "ExecuteCPU.Name", "ENiagaraStatelessFeatureMask::ExecuteCPU" },
		{ "ExecuteCPU.ToolTip", "We can execute on the CPU" },
		{ "ExecuteGPU.Comment", "// We can execute on the GPU (Might be broken down into GPUCompute | GPUGraphics | GPUAsyncCompute in future but this will remain the master mask)\n" },
		{ "ExecuteGPU.Name", "ENiagaraStatelessFeatureMask::ExecuteGPU" },
		{ "ExecuteGPU.ToolTip", "We can execute on the GPU (Might be broken down into GPUCompute | GPUGraphics | GPUAsyncCompute in future but this will remain the master mask)" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessCommon.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraStatelessFeatureMask::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraStatelessFeatureMask::ExecuteGPU", (int64)ENiagaraStatelessFeatureMask::ExecuteGPU },
		{ "ENiagaraStatelessFeatureMask::ExecuteCPU", (int64)ENiagaraStatelessFeatureMask::ExecuteCPU },
		{ "ENiagaraStatelessFeatureMask::None", (int64)ENiagaraStatelessFeatureMask::None },
		{ "ENiagaraStatelessFeatureMask::ExecuteAll", (int64)ENiagaraStatelessFeatureMask::ExecuteAll },
		{ "ENiagaraStatelessFeatureMask::All", (int64)ENiagaraStatelessFeatureMask::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraStatelessFeatureMask",
	"ENiagaraStatelessFeatureMask",
	Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton;
}
// End Enum ENiagaraStatelessFeatureMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraStatelessFeatureMask_StaticEnum, TEXT("ENiagaraStatelessFeatureMask"), &Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2379563537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h_440272879(TEXT("/Script/Niagara"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
