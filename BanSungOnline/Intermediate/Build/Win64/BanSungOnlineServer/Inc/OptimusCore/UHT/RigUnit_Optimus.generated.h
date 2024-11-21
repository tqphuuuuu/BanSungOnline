// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRig/RigUnit_Optimus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_RigUnit_Optimus_generated_h
#error "RigUnit_Optimus.generated.h already included, missing '#pragma once' in RigUnit_Optimus.h"
#endif
#define OPTIMUSCORE_RigUnit_Optimus_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_OptimusDeformer>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformerSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_OptimusDeformerSettings>();


#define FRigUnit_AddOptimusDeformer_Execute() \
	void FRigUnit_AddOptimusDeformer::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FGuid& DeformerInstanceGuid \
	)

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AddOptimusDeformer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FGuid& DeformerInstanceGuid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FGuid& DeformerInstanceGuid = *(FGuid*)RigVMMemoryHandles[0].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			DeformerInstanceGuid \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigUnit_AddOptimusDeformer>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusVariableBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_OptimusVariableBase>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerIntVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerIntArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2Variable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt2Variable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2ArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt2ArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3Variable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt3Variable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3ArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt3ArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4Variable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt4Variable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4ArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerInt4ArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerFloatVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerFloatArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2Variable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVector2Variable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_211_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVector2ArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVectorVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVectorArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4Variable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVector4Variable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4ArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerVector4ArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerLinearColorVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_278_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerLinearColorArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerQuatVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerQuatArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_313_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerRotatorVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_324_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerRotatorArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerTransformVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerTransformArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerNameVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerNameArrayVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_379_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerBoolVariable>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_390_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolArrayVariable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FRigVMTrait_SetDeformerBoolArrayVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
