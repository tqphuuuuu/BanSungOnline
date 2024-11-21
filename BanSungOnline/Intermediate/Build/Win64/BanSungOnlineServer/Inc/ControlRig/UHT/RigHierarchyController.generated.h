// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigHierarchyController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigHierarchy;
class USkeletalMesh;
class USkeleton;
enum class ERigBoneType : uint8;
struct FLinearColor;
struct FRigConnectorSettings;
struct FRigControlSettings;
struct FRigControlValue;
struct FRigElementKey;
struct FRigPhysicsSettings;
struct FRigPhysicsSolverID;
struct FRigVMMirrorSettings;
#ifdef CONTROLRIG_RigHierarchyController_generated_h
#error "RigHierarchyController.generated.h already included, missing '#pragma once' in RigHierarchyController.h"
#endif
#define CONTROLRIG_RigHierarchyController_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMirrorElements); \
	DECLARE_FUNCTION(execDuplicateElements); \
	DECLARE_FUNCTION(execRemoveChannelHost); \
	DECLARE_FUNCTION(execAddChannelHost); \
	DECLARE_FUNCTION(execSetAvailableSpaceIndex); \
	DECLARE_FUNCTION(execRemoveAvailableSpace); \
	DECLARE_FUNCTION(execAddAvailableSpace); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execRemoveAllParents); \
	DECLARE_FUNCTION(execRemoveParent); \
	DECLARE_FUNCTION(execAddParent); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execReorderElement); \
	DECLARE_FUNCTION(execRenameElement); \
	DECLARE_FUNCTION(execRemoveElement); \
	DECLARE_FUNCTION(execImportFromText); \
	DECLARE_FUNCTION(execExportToText); \
	DECLARE_FUNCTION(execExportSelectionToText); \
	DECLARE_FUNCTION(execImportCurvesFromSkeletalMesh); \
	DECLARE_FUNCTION(execImportCurves); \
	DECLARE_FUNCTION(execImportBones); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execGetControlSettings); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execAddConnector); \
	DECLARE_FUNCTION(execAddPhysicsElement); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execAddAnimationChannel_ForBlueprint); \
	DECLARE_FUNCTION(execAddControl_ForBlueprint); \
	DECLARE_FUNCTION(execAddNull); \
	DECLARE_FUNCTION(execAddBone); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execSetHierarchy); \
	DECLARE_FUNCTION(execGetHierarchy);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execImportCurvesFromAsset); \
	DECLARE_FUNCTION(execImportBonesFromAsset);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchyController, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigHierarchyController(); \
	friend struct Z_Construct_UClass_URigHierarchyController_Statics; \
public: \
	DECLARE_CLASS(URigHierarchyController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(URigHierarchyController) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigHierarchyController(URigHierarchyController&&); \
	URigHierarchyController(const URigHierarchyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigHierarchyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigHierarchyController)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class URigHierarchyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
