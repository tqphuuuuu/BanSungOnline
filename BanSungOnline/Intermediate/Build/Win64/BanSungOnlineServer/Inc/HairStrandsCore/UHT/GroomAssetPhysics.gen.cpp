// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomAssetPhysics.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetPhysics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairBendConstraint();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairCollisionConstraint();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairExternalForces();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairMaterialConstraints();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationConstraints();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationForces();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSetup();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSolver();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSolverSettings();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairStrandsParameters();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairStretchConstraint();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EGroomNiagaraSolvers
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomNiagaraSolvers;
static UEnum* EGroomNiagaraSolvers_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomNiagaraSolvers"));
	}
	return Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomNiagaraSolvers>()
{
	return EGroomNiagaraSolvers_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AngularSprings.DisplayName", "Groom Springs" },
		{ "AngularSprings.Name", "EGroomNiagaraSolvers::AngularSprings" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of niagara solvers */" },
		{ "CosseratRods.DisplayName", "Groom Rods" },
		{ "CosseratRods.Name", "EGroomNiagaraSolvers::CosseratRods" },
		{ "CustomSolver.DisplayName", "Custom Solver" },
		{ "CustomSolver.Name", "EGroomNiagaraSolvers::CustomSolver" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomNiagaraSolvers::None" },
		{ "ToolTip", "List of niagara solvers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomNiagaraSolvers::None", (int64)EGroomNiagaraSolvers::None },
		{ "EGroomNiagaraSolvers::CosseratRods", (int64)EGroomNiagaraSolvers::CosseratRods },
		{ "EGroomNiagaraSolvers::AngularSprings", (int64)EGroomNiagaraSolvers::AngularSprings },
		{ "EGroomNiagaraSolvers::CustomSolver", (int64)EGroomNiagaraSolvers::CustomSolver },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomNiagaraSolvers",
	"EGroomNiagaraSolvers",
	Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers()
{
	if (!Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton;
}
// End Enum EGroomNiagaraSolvers

// Begin Enum EGroomStrandsSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomStrandsSize;
static UEnum* EGroomStrandsSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomStrandsSize"));
	}
	return Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomStrandsSize>()
{
	return EGroomStrandsSize_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomStrandsSize::None" },
		{ "Size16.DisplayName", "16" },
		{ "Size16.Name", "EGroomStrandsSize::Size16" },
		{ "Size2.DisplayName", "2" },
		{ "Size2.Name", "EGroomStrandsSize::Size2" },
		{ "Size32.DisplayName", "32" },
		{ "Size32.Name", "EGroomStrandsSize::Size32" },
		{ "Size4.DisplayName", "4" },
		{ "Size4.Name", "EGroomStrandsSize::Size4" },
		{ "Size8.DisplayName", "8" },
		{ "Size8.Name", "EGroomStrandsSize::Size8" },
		{ "ToolTip", "Size of each strands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomStrandsSize::None", (int64)EGroomStrandsSize::None },
		{ "EGroomStrandsSize::Size2", (int64)EGroomStrandsSize::Size2 },
		{ "EGroomStrandsSize::Size4", (int64)EGroomStrandsSize::Size4 },
		{ "EGroomStrandsSize::Size8", (int64)EGroomStrandsSize::Size8 },
		{ "EGroomStrandsSize::Size16", (int64)EGroomStrandsSize::Size16 },
		{ "EGroomStrandsSize::Size32", (int64)EGroomStrandsSize::Size32 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomStrandsSize",
	"EGroomStrandsSize",
	Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize()
{
	if (!Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton;
}
// End Enum EGroomStrandsSize

// Begin Enum EGroomInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationType;
static UEnum* EGroomInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationType>()
{
	return EGroomInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of interpolation type */" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.DisplayName", "No skinning" },
		{ "None.Name", "EGroomInterpolationType::None" },
		{ "OffsetTransform.DisplayName", "Offset Transform" },
		{ "OffsetTransform.Name", "EGroomInterpolationType::OffsetTransform" },
		{ "RigidTransform.DisplayName", "Rigid Transform" },
		{ "RigidTransform.Name", "EGroomInterpolationType::RigidTransform" },
		{ "SmoothTransform.DisplayName", "Smooth Transform" },
		{ "SmoothTransform.Name", "EGroomInterpolationType::SmoothTransform" },
		{ "ToolTip", "List of interpolation type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroomInterpolationType::None", (int64)EGroomInterpolationType::None },
		{ "EGroomInterpolationType::RigidTransform", (int64)EGroomInterpolationType::RigidTransform },
		{ "EGroomInterpolationType::OffsetTransform", (int64)EGroomInterpolationType::OffsetTransform },
		{ "EGroomInterpolationType::SmoothTransform", (int64)EGroomInterpolationType::SmoothTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EGroomInterpolationType",
	"EGroomInterpolationType",
	Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton;
}
// End Enum EGroomInterpolationType

// Begin ScriptStruct FHairSolverSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSolverSettings;
class UScriptStruct* FHairSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSolverSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSolverSettings>()
{
	return FHairSolverSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSolverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSimulation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the simulation on that group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSolver_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Niagara solver to be used for simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSystem_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "EditCondition", "NiagaraSolver == EGroomNiagaraSolvers::CustomSolver" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Custom niagara system to be used if custom solver is picked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityPreloading_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "EditCondition", "NiagaraSolver == EGroomNiagaraSolvers::AngularSprings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Optimisation of the rest state configuration to compensate from the gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSteps_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of sub steps to be done per frame. The actual solver calls are done at 24 fps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of iterations to solve the constraints with the xpbd solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceVisible_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Force the Niagara solver component to be visible" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSimulation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NiagaraSolver_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NiagaraSolver;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CustomSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityPreloading;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubSteps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCount;
	static void NewProp_bForceVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSolverSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_SetBit(void* Obj)
{
	((FHairSolverSettings*)Obj)->EnableSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation = { "EnableSimulation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSolverSettings), &Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSimulation_MetaData), NewProp_EnableSimulation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver = { "NiagaraSolver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSolverSettings, NiagaraSolver), Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSolver_MetaData), NewProp_NiagaraSolver_MetaData) }; // 765392287
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem = { "CustomSystem", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSolverSettings, CustomSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSystem_MetaData), NewProp_CustomSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading = { "GravityPreloading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSolverSettings, GravityPreloading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityPreloading_MetaData), NewProp_GravityPreloading_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps = { "SubSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSolverSettings, SubSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSteps_MetaData), NewProp_SubSteps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSolverSettings, IterationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterationCount_MetaData), NewProp_IterationCount_MetaData) };
void Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_bForceVisible_SetBit(void* Obj)
{
	((FHairSolverSettings*)Obj)->bForceVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_bForceVisible = { "bForceVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSolverSettings), &Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_bForceVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceVisible_MetaData), NewProp_bForceVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_bForceVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSolverSettings",
	Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers),
	sizeof(FHairSolverSettings),
	alignof(FHairSolverSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSolverSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSolverSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairSolverSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton;
}
// End ScriptStruct FHairSolverSettings

// Begin ScriptStruct FHairExternalForces
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairExternalForces;
class UScriptStruct* FHairExternalForces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairExternalForces, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairExternalForces"));
	}
	return Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairExternalForces>()
{
	return FHairExternalForces::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairExternalForces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityVector_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Acceleration vector in cm/s2 to be used for the gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDrag_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Coefficient between 0 and 1 to be used for the air drag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirVelocity_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Velocity of the surrounding air in cm/s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AirVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairExternalForces>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector = { "GravityVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairExternalForces, GravityVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityVector_MetaData), NewProp_GravityVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag = { "AirDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairExternalForces, AirDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDrag_MetaData), NewProp_AirDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity = { "AirVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairExternalForces, AirVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirVelocity_MetaData), NewProp_AirVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairExternalForces",
	Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers),
	sizeof(FHairExternalForces),
	alignof(FHairExternalForces),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairExternalForces_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairExternalForces()
{
	if (!Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton, Z_Construct_UScriptStruct_FHairExternalForces_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton;
}
// End ScriptStruct FHairExternalForces

// Begin ScriptStruct FHairBendConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairBendConstraint;
class UScriptStruct* FHairBendConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairBendConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairBendConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairBendConstraint>()
{
	return FHairBendConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairBendConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolveBend_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the bend constraint during the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectBend_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the bend constraint after the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDamping_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the bend constraint between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendStiffness_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the bend constraint in GPa" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendScale_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "DisplayName", "Stiffness Scale" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the bend stiffness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Bend Scale" },
	};
#endif // WITH_METADATA
	static void NewProp_SolveBend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveBend;
	static void NewProp_ProjectBend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectBend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairBendConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_SetBit(void* Obj)
{
	((FHairBendConstraint*)Obj)->SolveBend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend = { "SolveBend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairBendConstraint), &Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolveBend_MetaData), NewProp_SolveBend_MetaData) };
void Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_SetBit(void* Obj)
{
	((FHairBendConstraint*)Obj)->ProjectBend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend = { "ProjectBend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairBendConstraint), &Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectBend_MetaData), NewProp_ProjectBend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping = { "BendDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairBendConstraint, BendDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDamping_MetaData), NewProp_BendDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness = { "BendStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairBendConstraint, BendStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendStiffness_MetaData), NewProp_BendStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale = { "BendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairBendConstraint, BendScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendScale_MetaData), NewProp_BendScale_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairBendConstraint",
	Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers),
	sizeof(FHairBendConstraint),
	alignof(FHairBendConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairBendConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairBendConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairBendConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton;
}
// End ScriptStruct FHairBendConstraint

// Begin ScriptStruct FHairStretchConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairStretchConstraint;
class UScriptStruct* FHairStretchConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairStretchConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairStretchConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairStretchConstraint>()
{
	return FHairStretchConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairStretchConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolveStretch_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the stretch constraint during the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectStretch_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the stretch constraint after the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchDamping_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the stretch constraint between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchStiffness_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the stretch constraint in GPa" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchScale_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "DisplayName", "Stiffness Scale" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the stretch stiffness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Stretch Scale" },
	};
#endif // WITH_METADATA
	static void NewProp_SolveStretch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveStretch;
	static void NewProp_ProjectStretch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectStretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StretchScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairStretchConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_SetBit(void* Obj)
{
	((FHairStretchConstraint*)Obj)->SolveStretch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch = { "SolveStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairStretchConstraint), &Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolveStretch_MetaData), NewProp_SolveStretch_MetaData) };
void Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_SetBit(void* Obj)
{
	((FHairStretchConstraint*)Obj)->ProjectStretch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch = { "ProjectStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairStretchConstraint), &Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectStretch_MetaData), NewProp_ProjectStretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping = { "StretchDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStretchConstraint, StretchDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchDamping_MetaData), NewProp_StretchDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness = { "StretchStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStretchConstraint, StretchStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchStiffness_MetaData), NewProp_StretchStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale = { "StretchScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStretchConstraint, StretchScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchScale_MetaData), NewProp_StretchScale_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairStretchConstraint",
	Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers),
	sizeof(FHairStretchConstraint),
	alignof(FHairStretchConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairStretchConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton;
}
// End ScriptStruct FHairStretchConstraint

// Begin ScriptStruct FHairCollisionConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairCollisionConstraint;
class UScriptStruct* FHairCollisionConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairCollisionConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairCollisionConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairCollisionConstraint>()
{
	return FHairCollisionConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolveCollision_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the collision constraint during the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectCollision_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the collision constraint after the xpbd loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[] = {
		{ "Category", "Collision Constraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Static friction used for collision against the physics asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KineticFriction_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Kinetic friction used for collision against the physics asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsViscosity_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Viscosity parameter between 0 and 1 that will be used for self collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDimension_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Dimension of the grid used to compute the viscosity force" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Radius that will be used for the collision detection against the physics asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the collision radius will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Collision Radius" },
	};
#endif // WITH_METADATA
	static void NewProp_SolveCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveCollision;
	static void NewProp_ProjectCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KineticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsViscosity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairCollisionConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_SetBit(void* Obj)
{
	((FHairCollisionConstraint*)Obj)->SolveCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision = { "SolveCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairCollisionConstraint), &Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolveCollision_MetaData), NewProp_SolveCollision_MetaData) };
void Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_SetBit(void* Obj)
{
	((FHairCollisionConstraint*)Obj)->ProjectCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision = { "ProjectCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairCollisionConstraint), &Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectCollision_MetaData), NewProp_ProjectCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, StaticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFriction_MetaData), NewProp_StaticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction = { "KineticFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, KineticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KineticFriction_MetaData), NewProp_KineticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity = { "StrandsViscosity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, StrandsViscosity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsViscosity_MetaData), NewProp_StrandsViscosity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension = { "GridDimension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, GridDimension), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDimension_MetaData), NewProp_GridDimension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairCollisionConstraint, RadiusScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusScale_MetaData), NewProp_RadiusScale_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairCollisionConstraint",
	Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers),
	sizeof(FHairCollisionConstraint),
	alignof(FHairCollisionConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairCollisionConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton;
}
// End ScriptStruct FHairCollisionConstraint

// Begin ScriptStruct FHairMaterialConstraints
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairMaterialConstraints;
class UScriptStruct* FHairMaterialConstraints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairMaterialConstraints, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairMaterialConstraints"));
	}
	return Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairMaterialConstraints>()
{
	return FHairMaterialConstraints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Bend constraint settings to be applied to the hair strands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stretch constraint settings to be applied to the hair strands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Collision constraint settings to be applied to the hair strands" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StretchConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairMaterialConstraints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint = { "BendConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairMaterialConstraints, BendConstraint), Z_Construct_UScriptStruct_FHairBendConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendConstraint_MetaData), NewProp_BendConstraint_MetaData) }; // 1883486764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint = { "StretchConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairMaterialConstraints, StretchConstraint), Z_Construct_UScriptStruct_FHairStretchConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchConstraint_MetaData), NewProp_StretchConstraint_MetaData) }; // 371372714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint = { "CollisionConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairMaterialConstraints, CollisionConstraint), Z_Construct_UScriptStruct_FHairCollisionConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionConstraint_MetaData), NewProp_CollisionConstraint_MetaData) }; // 562036974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairMaterialConstraints",
	Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers),
	sizeof(FHairMaterialConstraints),
	alignof(FHairMaterialConstraints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairMaterialConstraints()
{
	if (!Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton, Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton;
}
// End ScriptStruct FHairMaterialConstraints

// Begin ScriptStruct FHairStrandsParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairStrandsParameters;
class UScriptStruct* FHairStrandsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairStrandsParameters, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairStrandsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairStrandsParameters>()
{
	return FHairStrandsParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairStrandsParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsSize_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of particles per guide that will be used for simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsDensity_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Density of the strands in g/cm3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsSmoothing_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Smoothing between 0 and 1 of the incoming guides curves for better stability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsThickness_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands thickness in cm that will be used for mass and inertia computation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the strands thickness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Strands Thickness" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StrandsSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StrandsSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThicknessScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairStrandsParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize = { "StrandsSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStrandsParameters, StrandsSize), Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsSize_MetaData), NewProp_StrandsSize_MetaData) }; // 638885356
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity = { "StrandsDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStrandsParameters, StrandsDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsDensity_MetaData), NewProp_StrandsDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing = { "StrandsSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStrandsParameters, StrandsSmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsSmoothing_MetaData), NewProp_StrandsSmoothing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness = { "StrandsThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStrandsParameters, StrandsThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsThickness_MetaData), NewProp_StrandsThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairStrandsParameters, ThicknessScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThicknessScale_MetaData), NewProp_ThicknessScale_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairStrandsParameters",
	Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers),
	sizeof(FHairStrandsParameters),
	alignof(FHairStrandsParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairStrandsParameters()
{
	if (!Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton, Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton;
}
// End ScriptStruct FHairStrandsParameters

// Begin ScriptStruct FHairGroupsPhysics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsPhysics;
class UScriptStruct* FHairGroupsPhysics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsPhysics, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsPhysics"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsPhysics>()
{
	return FHairGroupsPhysics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForces_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "External Forces for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConstraints_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Material Constraints for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsParameters_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands Parameters for the hair physics" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialConstraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrandsParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsPhysics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsPhysics, SolverSettings), Z_Construct_UScriptStruct_FHairSolverSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverSettings_MetaData), NewProp_SolverSettings_MetaData) }; // 2138739134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsPhysics, ExternalForces), Z_Construct_UScriptStruct_FHairExternalForces, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForces_MetaData), NewProp_ExternalForces_MetaData) }; // 3605555794
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints = { "MaterialConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsPhysics, MaterialConstraints), Z_Construct_UScriptStruct_FHairMaterialConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConstraints_MetaData), NewProp_MaterialConstraints_MetaData) }; // 2707796354
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters = { "StrandsParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsPhysics, StrandsParameters), Z_Construct_UScriptStruct_FHairStrandsParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsParameters_MetaData), NewProp_StrandsParameters_MetaData) }; // 2867197203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairGroupsPhysics",
	Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers),
	sizeof(FHairGroupsPhysics),
	alignof(FHairGroupsPhysics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton;
}
// End ScriptStruct FHairGroupsPhysics

// Begin ScriptStruct FHairSimulationSolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSolver;
class UScriptStruct* FHairSimulationSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSolver, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSolver"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSolver>()
{
	return FHairSimulationSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSimulationSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimulation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the simulation of the groom groups/LODs if both this boolean and the one in the groom asset are true" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
{
	((FHairSimulationSolver*)Obj)->bEnableSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSimulationSolver), &Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSimulation_MetaData), NewProp_bEnableSimulation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSimulationSolver",
	Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers),
	sizeof(FHairSimulationSolver),
	alignof(FHairSimulationSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSolver()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton;
}
// End ScriptStruct FHairSimulationSolver

// Begin ScriptStruct FHairSimulationForces
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationForces;
class UScriptStruct* FHairSimulationForces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationForces, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationForces"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationForces>()
{
	return FHairSimulationForces::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSimulationForces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityVector_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Acceleration vector in cm/s2 to be used for the gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDrag_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Coefficient between 0 and 1 to be used for the air drag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirVelocity_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Velocity of the surrounding air in cm/s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AirVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationForces>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector = { "GravityVector", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationForces, GravityVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityVector_MetaData), NewProp_GravityVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag = { "AirDrag", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationForces, AirDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDrag_MetaData), NewProp_AirDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity = { "AirVelocity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationForces, AirVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirVelocity_MetaData), NewProp_AirVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSimulationForces",
	Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers),
	sizeof(FHairSimulationForces),
	alignof(FHairSimulationForces),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSimulationForces_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationForces()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationForces_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton;
}
// End ScriptStruct FHairSimulationForces

// Begin ScriptStruct FHairSimulationConstraints
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationConstraints;
class UScriptStruct* FHairSimulationConstraints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationConstraints, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationConstraints"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationConstraints>()
{
	return FHairSimulationConstraints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDamping_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the bend constraint between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendStiffness_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the bend constraint in GPa" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchDamping_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the stretch constraint between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchStiffness_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the stretch constraint in GPa" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[] = {
		{ "Category", "Collision Constraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Static friction used for collision against the physics asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KineticFriction_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Kinetic friction used for collision against the physics asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrandsViscosity_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Viscosity parameter between 0 and 1 that will be used for self collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Radius that will be used for the collision detection against the physics asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BendStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KineticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsViscosity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationConstraints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping = { "BendDamping", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, BendDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDamping_MetaData), NewProp_BendDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness = { "BendStiffness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, BendStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendStiffness_MetaData), NewProp_BendStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping = { "StretchDamping", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, StretchDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchDamping_MetaData), NewProp_StretchDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness = { "StretchStiffness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, StretchStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchStiffness_MetaData), NewProp_StretchStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, StaticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFriction_MetaData), NewProp_StaticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction = { "KineticFriction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, KineticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KineticFriction_MetaData), NewProp_KineticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity = { "StrandsViscosity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, StrandsViscosity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrandsViscosity_MetaData), NewProp_StrandsViscosity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationConstraints, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSimulationConstraints",
	Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers),
	sizeof(FHairSimulationConstraints),
	alignof(FHairSimulationConstraints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationConstraints()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton;
}
// End ScriptStruct FHairSimulationConstraints

// Begin ScriptStruct FHairSimulationSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSetup;
class UScriptStruct* FHairSimulationSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSetup, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSetup"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSetup>()
{
	return FHairSimulationSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSimulationSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to control if we want to reset trhe simulation at some point in time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to make the simulation strands visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands simulation is done in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "The amount of linear velocities sent to the local groom space from the reference bone" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "The amount of angular velocities sent to the local groom space from the reference bone" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBone_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Bone used for the simulation local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Teleport distance threshold to reset the simulation" },
	};
#endif // WITH_METADATA
	static void NewProp_bResetSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSimulation;
	static void NewProp_bDebugSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugSimulation;
	static void NewProp_bLocalSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearVelocityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_SetBit(void* Obj)
{
	((FHairSimulationSetup*)Obj)->bResetSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation = { "bResetSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetSimulation_MetaData), NewProp_bResetSimulation_MetaData) };
void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_SetBit(void* Obj)
{
	((FHairSimulationSetup*)Obj)->bDebugSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation = { "bDebugSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugSimulation_MetaData), NewProp_bDebugSimulation_MetaData) };
void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_SetBit(void* Obj)
{
	((FHairSimulationSetup*)Obj)->bLocalSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation = { "bLocalSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalSimulation_MetaData), NewProp_bLocalSimulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSetup, LinearVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocityScale_MetaData), NewProp_LinearVelocityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSetup, AngularVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityScale_MetaData), NewProp_AngularVelocityScale_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone = { "LocalBone", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSetup, LocalBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBone_MetaData), NewProp_LocalBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSetup, TeleportDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportDistance_MetaData), NewProp_TeleportDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSimulationSetup",
	Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers),
	sizeof(FHairSimulationSetup),
	alignof(FHairSimulationSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSetup()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton;
}
// End ScriptStruct FHairSimulationSetup

// Begin ScriptStruct FHairSimulationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSettings;
class UScriptStruct* FHairSimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSettings>()
{
	return FHairSimulationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHairSimulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to control if we are going to override the groom asset physics settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSetup_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForces_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "External Forces for the hair physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConstraints_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Material Constraints for the hair physics" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationSetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialConstraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_SetBit(void* Obj)
{
	((FHairSimulationSettings*)Obj)->bOverrideSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings = { "bOverrideSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairSimulationSettings), &Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSettings_MetaData), NewProp_bOverrideSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup = { "SimulationSetup", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSettings, SimulationSetup), Z_Construct_UScriptStruct_FHairSimulationSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationSetup_MetaData), NewProp_SimulationSetup_MetaData) }; // 1603792576
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSettings, SolverSettings), Z_Construct_UScriptStruct_FHairSimulationSolver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverSettings_MetaData), NewProp_SolverSettings_MetaData) }; // 1183609958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSettings, ExternalForces), Z_Construct_UScriptStruct_FHairSimulationForces, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalForces_MetaData), NewProp_ExternalForces_MetaData) }; // 1601725761
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints = { "MaterialConstraints", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairSimulationSettings, MaterialConstraints), Z_Construct_UScriptStruct_FHairSimulationConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConstraints_MetaData), NewProp_MaterialConstraints_MetaData) }; // 3033519772
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"HairSimulationSettings",
	Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers),
	sizeof(FHairSimulationSettings),
	alignof(FHairSimulationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton;
}
// End ScriptStruct FHairSimulationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGroomNiagaraSolvers_StaticEnum, TEXT("EGroomNiagaraSolvers"), &Z_Registration_Info_UEnum_EGroomNiagaraSolvers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 765392287U) },
		{ EGroomStrandsSize_StaticEnum, TEXT("EGroomStrandsSize"), &Z_Registration_Info_UEnum_EGroomStrandsSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 638885356U) },
		{ EGroomInterpolationType_StaticEnum, TEXT("EGroomInterpolationType"), &Z_Registration_Info_UEnum_EGroomInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1805633905U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHairSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewStructOps, TEXT("HairSolverSettings"), &Z_Registration_Info_UScriptStruct_HairSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSolverSettings), 2138739134U) },
		{ FHairExternalForces::StaticStruct, Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewStructOps, TEXT("HairExternalForces"), &Z_Registration_Info_UScriptStruct_HairExternalForces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairExternalForces), 3605555794U) },
		{ FHairBendConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewStructOps, TEXT("HairBendConstraint"), &Z_Registration_Info_UScriptStruct_HairBendConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairBendConstraint), 1883486764U) },
		{ FHairStretchConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewStructOps, TEXT("HairStretchConstraint"), &Z_Registration_Info_UScriptStruct_HairStretchConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairStretchConstraint), 371372714U) },
		{ FHairCollisionConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewStructOps, TEXT("HairCollisionConstraint"), &Z_Registration_Info_UScriptStruct_HairCollisionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairCollisionConstraint), 562036974U) },
		{ FHairMaterialConstraints::StaticStruct, Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewStructOps, TEXT("HairMaterialConstraints"), &Z_Registration_Info_UScriptStruct_HairMaterialConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairMaterialConstraints), 2707796354U) },
		{ FHairStrandsParameters::StaticStruct, Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewStructOps, TEXT("HairStrandsParameters"), &Z_Registration_Info_UScriptStruct_HairStrandsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairStrandsParameters), 2867197203U) },
		{ FHairGroupsPhysics::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewStructOps, TEXT("HairGroupsPhysics"), &Z_Registration_Info_UScriptStruct_HairGroupsPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsPhysics), 849769880U) },
		{ FHairSimulationSolver::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewStructOps, TEXT("HairSimulationSolver"), &Z_Registration_Info_UScriptStruct_HairSimulationSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSolver), 1183609958U) },
		{ FHairSimulationForces::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewStructOps, TEXT("HairSimulationForces"), &Z_Registration_Info_UScriptStruct_HairSimulationForces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationForces), 1601725761U) },
		{ FHairSimulationConstraints::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewStructOps, TEXT("HairSimulationConstraints"), &Z_Registration_Info_UScriptStruct_HairSimulationConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationConstraints), 3033519772U) },
		{ FHairSimulationSetup::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewStructOps, TEXT("HairSimulationSetup"), &Z_Registration_Info_UScriptStruct_HairSimulationSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSetup), 1603792576U) },
		{ FHairSimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewStructOps, TEXT("HairSimulationSettings"), &Z_Registration_Info_UScriptStruct_HairSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSettings), 541303691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_4197173601(TEXT("/Script/HairStrandsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
