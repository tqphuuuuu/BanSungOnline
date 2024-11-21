// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsAssetSolverType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSolverIterations();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPhysicsAssetSolverSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings;
class UScriptStruct* FPhysicsAssetSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicsAssetSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicsAssetSolverSettings>()
{
	return FPhysicsAssetSolverSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Solver iterations settings for use by RigidBody AnimNode (RBAN) in the Anim Graph. Each RBAN node runs its own solver with these settings.\n *\n * @note These settings have no effect when the Physics Asset is used in a world simulation (i.e., as a ragdoll on a SkeletalMeshComponent).\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver iterations settings for use by RigidBody AnimNode (RBAN) in the Anim Graph. Each RBAN node runs its own solver with these settings.\n\n@note These settings have no effect when the Physics Asset is used in a world simulation (i.e., as a ragdoll on a SkeletalMeshComponent)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of position iterations to run. The position solve is responsible for depenetration.\n\x09 * Increasing this will improve simulation stability, but increase the cost.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of position iterations to run. The position solve is responsible for depenetration.\nIncreasing this will improve simulation stability, but increase the cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of velocity iterations to run. The velocity solve is responsible for restitution (bounce) and friction. \n\x09 * This should usually be 1, but could be 0 if you don't care about friction and restitution.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of velocity iterations to run. The velocity solve is responsible for restitution (bounce) and friction.\nThis should usually be 1, but could be 0 if you don't care about friction and restitution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: The number of projection iterations to run. The projection phase is a final pass over the constraints, applying\n\x09 * a semi-physical correction to any joint errors remaining after the position and velocity solves. It can be\n\x09 * very helpful to stabilize joint chains, but can cause issues with collision response. The projection magnitude\n\x09 * can be controlled per-constraint in the constraint settings (assuming ProjectionIteration is not zero).\n\x09 * This should be left as 1 in almost all cases.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The number of projection iterations to run. The projection phase is a final pass over the constraints, applying\na semi-physical correction to any joint errors remaining after the position and velocity solves. It can be\nvery helpful to stabilize joint chains, but can cause issues with collision response. The projection magnitude\ncan be controlled per-constraint in the constraint settings (assuming ProjectionIteration is not zero).\nThis should be left as 1 in almost all cases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: The distance at which collisions are ignored. In general you need this to be a bit larger than the typical relative body\n\x09 * movement in your simulation, but small enough so that we don't have to speculatively create too many unused collisions.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The distance at which collisions are ignored. In general you need this to be a bit larger than the typical relative body\nmovement in your simulation, but small enough so that we don't have to speculatively create too many unused collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: When bodies are penetrating, this is the maximum velocity delta that can be applied in one frame.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: When bodies are penetrating, this is the maximum velocity delta that can be applied in one frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedTimeStep_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * RBAN: The recommended fixed timestep for the RBAN solver. Set to 0 to run with variable timestep (default).\n\x09 * NOTE: If this value is non-zero and less than the current frame time, the simulation will step multiple times\n\x09 * which increases the cost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: The recommended fixed timestep for the RBAN solver. Set to 0 to run with variable timestep (default).\nNOTE: If this value is non-zero and less than the current frame time, the simulation will step multiple times\nwhich increases the cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearJointSolver_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/**\n\x09 * RBAN: Whether to use the linear or non-linear solver for RBAN Joints. The linear solver is significantly cheaper than\n\x09 * the non-linear solver when you are running multiple iterations, but is more likely to suffer from jitter. \n\x09 * In general you should try to use the linear solver and increase the PositionIterations to improve stability if \n\x09 * possible, only using the non-linear solver as a last resort.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: Whether to use the linear or non-linear solver for RBAN Joints. The linear solver is significantly cheaper than\nthe non-linear solver when you are running multiple iterations, but is more likely to suffer from jitter.\nIn general you should try to use the linear solver and increase the PositionIterations to improve stability if\npossible, only using the non-linear solver as a last resort." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseManifolds_MetaData[] = {
		{ "Category", "CollisionSettings" },
		{ "Comment", "/**\n\x09 * RBAN: It enables the use of multi-point contact manifolds, which are created only once at the start of each tick.\n\x09 * When disabled, a single-point contact is generated in each solver iteration which is more expensive.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "RBAN: It enables the use of multi-point contact manifolds, which are created only once at the start of each tick.\nWhen disabled, a single-point contact is generated in each solver iteration which is more expensive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VelocityIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectionIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTimeStep;
	static void NewProp_bUseLinearJointSolver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearJointSolver;
	static void NewProp_bUseManifolds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManifolds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsAssetSolverSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations = { "PositionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, PositionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionIterations_MetaData), NewProp_PositionIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations = { "VelocityIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, VelocityIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityIterations_MetaData), NewProp_VelocityIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations = { "ProjectionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, ProjectionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionIterations_MetaData), NewProp_ProjectionIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, CullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistance_MetaData), NewProp_CullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity = { "MaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, MaxDepenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationVelocity_MetaData), NewProp_MaxDepenetrationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep = { "FixedTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsAssetSolverSettings, FixedTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedTimeStep_MetaData), NewProp_FixedTimeStep_MetaData) };
void Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_SetBit(void* Obj)
{
	((FPhysicsAssetSolverSettings*)Obj)->bUseLinearJointSolver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver = { "bUseLinearJointSolver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsAssetSolverSettings), &Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLinearJointSolver_MetaData), NewProp_bUseLinearJointSolver_MetaData) };
void Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseManifolds_SetBit(void* Obj)
{
	((FPhysicsAssetSolverSettings*)Obj)->bUseManifolds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseManifolds = { "bUseManifolds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsAssetSolverSettings), &Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseManifolds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseManifolds_MetaData), NewProp_bUseManifolds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_PositionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_VelocityIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_ProjectionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_CullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_MaxDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_FixedTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseLinearJointSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewProp_bUseManifolds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PhysicsAssetSolverSettings",
	Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::PropPointers),
	sizeof(FPhysicsAssetSolverSettings),
	alignof(FPhysicsAssetSolverSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings.InnerSingleton;
}
// End ScriptStruct FPhysicsAssetSolverSettings

// Begin ScriptStruct FSolverIterations
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverIterations;
class UScriptStruct* FSolverIterations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverIterations, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SolverIterations"));
	}
	return Z_Registration_Info_UScriptStruct_SolverIterations.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSolverIterations>()
{
	return FSolverIterations::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSolverIterations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Solver settings for use by the Legacy RigidBody AnimNode (RBAN) solver.\n * These settings are no longer used by default and will eventually be deprecated and then removed.\n * \n * @note These settings have no effect when the Physics Asset is used in a world simulation (ragdoll).\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver settings for use by the Legacy RigidBody AnimNode (RBAN) solver.\nThese settings are no longer used by default and will eventually be deprecated and then removed.\n\n@note These settings have no effect when the Physics Asset is used in a world simulation (ragdoll)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of solver iterations. Increase this if collision and joints are fighting, or joint chains are stretching.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of solver iterations. Increase this if collision and joints are fighting, or joint chains are stretching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-iterations. Increasing this can help with chains of long-thin bodies.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-iterations. Increasing this can help with chains of long-thin bodies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of collision sub-iterations. Increasing this can help with collision jitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of collision sub-iterations. Increasing this can help with collision jitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/** Increase this if bodies remain penetrating */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Increase this if bodies remain penetrating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-push-out iterations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-push-out iterations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPushOutIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "50" },
		{ "Comment", "/**\n\x09 * The recommended number of joint sub-push-out iterations. Increasing this can help with collision penetration problems.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "The recommended number of joint sub-push-out iterations. Increasing this can help with collision penetration problems." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverPushOutIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointPushOutIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionPushOutIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverIterations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, SolverIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverIterations_MetaData), NewProp_SolverIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations = { "JointIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, JointIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointIterations_MetaData), NewProp_JointIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, CollisionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionIterations_MetaData), NewProp_CollisionIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations = { "SolverPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, SolverPushOutIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverPushOutIterations_MetaData), NewProp_SolverPushOutIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations = { "JointPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, JointPushOutIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointPushOutIterations_MetaData), NewProp_JointPushOutIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations = { "CollisionPushOutIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolverIterations, CollisionPushOutIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPushOutIterations_MetaData), NewProp_CollisionPushOutIterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_SolverPushOutIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_JointPushOutIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverIterations_Statics::NewProp_CollisionPushOutIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverIterations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SolverIterations",
	Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::PropPointers),
	sizeof(FSolverIterations),
	alignof(FSolverIterations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverIterations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolverIterations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSolverIterations()
{
	if (!Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton, Z_Construct_UScriptStruct_FSolverIterations_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SolverIterations.InnerSingleton;
}
// End ScriptStruct FSolverIterations

// Begin Enum EPhysicsAssetSolverType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsAssetSolverType;
static UEnum* EPhysicsAssetSolverType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysicsAssetSolverType"));
	}
	return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPhysicsAssetSolverType>()
{
	return EPhysicsAssetSolverType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "RBAN.Name", "EPhysicsAssetSolverType::RBAN" },
		{ "World.Name", "EPhysicsAssetSolverType::World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhysicsAssetSolverType::RBAN", (int64)EPhysicsAssetSolverType::RBAN },
		{ "EPhysicsAssetSolverType::World", (int64)EPhysicsAssetSolverType::World },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPhysicsAssetSolverType",
	"EPhysicsAssetSolverType",
	Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPhysicsAssetSolverType()
{
	if (!Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton, Z_Construct_UEnum_Engine_EPhysicsAssetSolverType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysicsAssetSolverType.InnerSingleton;
}
// End Enum EPhysicsAssetSolverType

// Begin Class UPhysicsAsset Function GetConstraintByBoneNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics
{
	struct PhysicsAsset_eventGetConstraintByBoneNames_Parms
	{
		FName Bone1Name;
		FName Bone2Name;
		FConstraintInstanceAccessor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets a constraint by its joint name\n\x09* @param Bone1Name name of the first bone in the joint\n\x09* @param Bone2Name name of the second bone in the joint\n\x09* @return ConstraintInstance accessor to the constraint data\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets a constraint by its joint name\n@param Bone1Name name of the first bone in the joint\n@param Bone2Name name of the second bone in the joint\n@return ConstraintInstance accessor to the constraint data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone1Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone2Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone1Name = { "Bone1Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, Bone1Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone2Name = { "Bone2Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, Bone2Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByBoneNames_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(0, nullptr) }; // 1862825663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone1Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_Bone2Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraintByBoneNames", nullptr, nullptr, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PhysicsAsset_eventGetConstraintByBoneNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::PhysicsAsset_eventGetConstraintByBoneNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPhysicsAsset::execGetConstraintByBoneNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Bone1Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Bone2Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraintByBoneNames(Z_Param_Bone1Name,Z_Param_Bone2Name);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPhysicsAsset Function GetConstraintByBoneNames

// Begin Class UPhysicsAsset Function GetConstraintByName
#if WITH_EDITOR
struct Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics
{
	struct PhysicsAsset_eventGetConstraintByName_Parms
	{
		FName ConstraintName;
		FConstraintInstanceAccessor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets a constraint by its joint name\n\x09* @param ConstraintName name of the constraint\n\x09* @return ConstraintInstance accessor to the constraint data\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets a constraint by its joint name\n@param ConstraintName name of the constraint\n@return ConstraintInstance accessor to the constraint data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByName_Parms, ConstraintName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraintByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(0, nullptr) }; // 1862825663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ConstraintName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraintByName", nullptr, nullptr, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PhysicsAsset_eventGetConstraintByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::PhysicsAsset_eventGetConstraintByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPhysicsAsset::execGetConstraintByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraintByName(Z_Param_ConstraintName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPhysicsAsset Function GetConstraintByName

// Begin Class UPhysicsAsset Function GetConstraints
#if WITH_EDITOR
struct Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics
{
	struct PhysicsAsset_eventGetConstraints_Parms
	{
		bool bIncludesTerminated;
		TArray<FConstraintInstanceAccessor> OutConstraints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Constraints" },
		{ "Comment", "/** Gets all constraints\n\x09* @param IncludesTerminated whether or not to return terminated constraints\n\x09* @param OutConstraints returned list of constraints matching the parameters\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Gets all constraints\n@param IncludesTerminated whether or not to return terminated constraints\n@param OutConstraints returned list of constraints matching the parameters" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludesTerminated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludesTerminated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConstraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit(void* Obj)
{
	((PhysicsAsset_eventGetConstraints_Parms*)Obj)->bIncludesTerminated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated = { "bIncludesTerminated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsAsset_eventGetConstraints_Parms), &Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints_Inner = { "OutConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(0, nullptr) }; // 1862825663
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints = { "OutConstraints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsAsset_eventGetConstraints_Parms, OutConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1862825663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_bIncludesTerminated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::NewProp_OutConstraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsAsset, nullptr, "GetConstraints", nullptr, nullptr, Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PhysicsAsset_eventGetConstraints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::PhysicsAsset_eventGetConstraints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsAsset_GetConstraints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsAsset_GetConstraints_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPhysicsAsset::execGetConstraints)
{
	P_GET_UBOOL(Z_Param_bIncludesTerminated);
	P_GET_TARRAY_REF(FConstraintInstanceAccessor,Z_Param_Out_OutConstraints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConstraints(Z_Param_bIncludesTerminated,Z_Param_Out_OutConstraints);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPhysicsAsset Function GetConstraints

// Begin Class UPhysicsAsset
void UPhysicsAsset::StaticRegisterNativesUPhysicsAsset()
{
#if WITH_EDITOR
	UClass* Class = UPhysicsAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConstraintByBoneNames", &UPhysicsAsset::execGetConstraintByBoneNames },
		{ "GetConstraintByName", &UPhysicsAsset::execGetConstraintByName },
		{ "GetConstraints", &UPhysicsAsset::execGetConstraints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAsset);
UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister()
{
	return UPhysicsAsset::StaticClass();
}
struct Z_Construct_UClass_UPhysicsAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "OldSolverSettings" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\n * The asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\n * A SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\n * The asset can be configured inside the Physics Asset Editor.\n *\n * @see https://docs.unrealengine.com/InteractiveExperiences/Physics/PhysicsAssetEditor\n * @see USkeletalMesh\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\nThe asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\nA SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\nThe asset can be configured inside the Physics Asset Editor.\n\n@see https://docs.unrealengine.com/InteractiveExperiences/Physics/PhysicsAssetEditor\n@see USkeletalMesh" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSkelMesh_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Default skeletal mesh to use when previewing this PhysicsAsset etc. \n\x09 *\x09Is the one that was used as the basis for creating this Asset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Default skeletal mesh to use when previewing this PhysicsAsset etc.\nIs the one that was used as the basis for creating this Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConstraintProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsBodies_MetaData[] = {
		{ "Comment", "/** Index of bodies that are marked bConsiderForBounds */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Index of bodies that are marked bConsiderForBounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_Inner_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\n\x09*\x09""Does not include body position - those are taken from mesh.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09""Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\n\x09*\x09""Does not include body position - those are taken from mesh.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_Inner_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of RB_ConstraintSetup objects. \n\x09 *\x09Stores information about a joint between two bodies, such as position relative to each body, joint limits etc.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of RB_ConstraintSetup objects. \n\x09 *\x09Stores information about a joint between two bodies, such as position relative to each body, joint limits etc.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** \n\x09 * Solver settings when the asset is used with a RigidBody Anim Node (RBAN).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver settings when the asset is used with a RigidBody Anim Node (RBAN)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[] = {
		{ "Category", "OldSolverSettings" },
		{ "Comment", "/** \n\x09 * Old solver settings shown for reference. These will be removed at some point.\n\x09 * When you open an old asset you should see that the settings were transferred to \"SolverSettings\" above. \n\x09 * You should usually see:\n\x09 * SolverSettings.PositionIterations = OldSettings.SolverIterations * OldSetting.JointIterations;\n\x09 * SolverSettings.VelocityIterations = 1;\n\x09 * SolverSettings.ProjectionIterations = 1;\n\x09*/" },
		{ "DisplayName", "[Not Used] Old Solver Settings" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Old solver settings shown for reference. These will be removed at some point.\nWhen you open an old asset you should see that the settings were transferred to \"SolverSettings\" above.\nYou should usually see:\nSolverSettings.PositionIterations = OldSettings.SolverIterations * OldSetting.JointIterations;\nSolverSettings.VelocityIterations = 1;\nSolverSettings.ProjectionIterations = 1;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverType_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** \n\x09 * Solver type used in physics asset editor. This can be used to make what you see in the asset editor more closely resembles what you\n\x09 * see in game (though there will be differences owing to framerate variation etc). If your asset will primarily be used as a ragdoll \n\x09 * select \"World\", but if it will be used in the AnimGraph select \"RBAN\".\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Solver type used in physics asset editor. This can be used to make what you see in the asset editor more closely resembles what you\nsee in game (though there will be differences owing to framerate variation etc). If your asset will primarily be used as a ragdoll\nselect \"World\", but if it will be used in the AnimGraph select \"RBAN\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotForDedicatedServer_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, we skip instancing bodies for this PhysicsAsset on dedicated servers */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true, we skip instancing bodies for this PhysicsAsset on dedicated servers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSkelMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PhysicalAnimationProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationProfiles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintProfiles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentPhysicalAnimationProfileName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentConstraintProfileName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoundsBodies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundsBodies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalBodySetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalBodySetups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SolverIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolverType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolverType;
	static void NewProp_bNotForDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotForDedicatedServer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraintByBoneNames, "GetConstraintByBoneNames" }, // 1591444031
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraintByName, "GetConstraintByName" }, // 3267361610
		{ &Z_Construct_UFunction_UPhysicsAsset_GetConstraints, "GetConstraints" }, // 850664586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh = { "DefaultSkelMesh", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, DefaultSkelMesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSkelMesh_MetaData), NewProp_DefaultSkelMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014010800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData), NewProp_PreviewSkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner = { "PhysicalAnimationProfiles", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles = { "PhysicalAnimationProfiles", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, PhysicalAnimationProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalAnimationProfiles_MetaData), NewProp_PhysicalAnimationProfiles_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner = { "ConstraintProfiles", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles = { "ConstraintProfiles", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, ConstraintProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintProfiles_MetaData), NewProp_ConstraintProfiles_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName = { "CurrentPhysicalAnimationProfileName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, CurrentPhysicalAnimationProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhysicalAnimationProfileName_MetaData), NewProp_CurrentPhysicalAnimationProfileName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName = { "CurrentConstraintProfileName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, CurrentConstraintProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentConstraintProfileName_MetaData), NewProp_CurrentConstraintProfileName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner = { "BoundsBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies = { "BoundsBodies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, BoundsBodies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsBodies_MetaData), NewProp_BoundsBodies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner = { "SkeletalBodySetups", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalBodySetups_Inner_MetaData), NewProp_SkeletalBodySetups_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups = { "SkeletalBodySetups", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, SkeletalBodySetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalBodySetups_MetaData), NewProp_SkeletalBodySetups_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_Inner_MetaData), NewProp_ConstraintSetup_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, ConstraintSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_MetaData), NewProp_ConstraintSetup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, SolverSettings), Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverSettings_MetaData), NewProp_SolverSettings_MetaData) }; // 1028639987
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, SolverIterations), Z_Construct_UScriptStruct_FSolverIterations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverIterations_MetaData), NewProp_SolverIterations_MetaData) }; // 3996572885
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType = { "SolverType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, SolverType), Z_Construct_UEnum_Engine_EPhysicsAssetSolverType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverType_MetaData), NewProp_SolverType_MetaData) }; // 1890099313
void Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit(void* Obj)
{
	((UPhysicsAsset*)Obj)->bNotForDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer = { "bNotForDedicatedServer", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPhysicsAsset), &Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotForDedicatedServer_MetaData), NewProp_bNotForDedicatedServer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner = { "BodySetup", nullptr, (EPropertyFlags)0x0106000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_Inner_MetaData), NewProp_BodySetup_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0144008020000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsAsset, BodySetup_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SolverType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UPhysicsAsset, IInterface_PreviewMeshProvider), false },  // 1431543565
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams = {
	&UPhysicsAsset::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsAsset()
{
	if (!Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton, Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsAsset>()
{
	return UPhysicsAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAsset);
UPhysicsAsset::~UPhysicsAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset)
// End Class UPhysicsAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhysicsAssetSolverType_StaticEnum, TEXT("EPhysicsAssetSolverType"), &Z_Registration_Info_UEnum_EPhysicsAssetSolverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1890099313U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicsAssetSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics::NewStructOps, TEXT("PhysicsAssetSolverSettings"), &Z_Registration_Info_UScriptStruct_PhysicsAssetSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsAssetSolverSettings), 1028639987U) },
		{ FSolverIterations::StaticStruct, Z_Construct_UScriptStruct_FSolverIterations_Statics::NewStructOps, TEXT("SolverIterations"), &Z_Registration_Info_UScriptStruct_SolverIterations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverIterations), 3996572885U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAsset, UPhysicsAsset::StaticClass, TEXT("UPhysicsAsset"), &Z_Registration_Info_UClass_UPhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAsset), 1850140372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_4157505779(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
