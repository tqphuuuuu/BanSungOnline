// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/ControlRigPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
struct FControlRigControlPose;
#ifdef CONTROLRIG_ControlRigPose_generated_h
#error "ControlRigPose.generated.h already included, missing '#pragma once' in ControlRigPose.h"
#endif
#define CONTROLRIG_ControlRigPose_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigControlCopy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigControlCopy>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigControlPose_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigControlPose>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDoesMirrorMatch); \
	DECLARE_FUNCTION(execReplaceControlName); \
	DECLARE_FUNCTION(execGetControlNames); \
	DECLARE_FUNCTION(execGetCurrentPose); \
	DECLARE_FUNCTION(execSelectControls); \
	DECLARE_FUNCTION(execPastePose); \
	DECLARE_FUNCTION(execSavePose);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigPoseAsset(); \
	friend struct Z_Construct_UClass_UControlRigPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UControlRigPoseAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigPoseAsset)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigPoseAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigPoseAsset(UControlRigPoseAsset&&); \
	UControlRigPoseAsset(const UControlRigPoseAsset&); \
public: \
	NO_API virtual ~UControlRigPoseAsset();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_118_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigPoseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
