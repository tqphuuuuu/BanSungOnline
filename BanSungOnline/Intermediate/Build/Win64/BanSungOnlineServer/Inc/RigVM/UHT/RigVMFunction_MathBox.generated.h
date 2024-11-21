// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathBox_generated_h
#error "RigVMFunction_MathBox.generated.h already included, missing '#pragma once' in RigVMFunction_MathBox.h"
#endif
#define RIGVM_RigVMFunction_MathBox_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxBase>();


#define FRigVMFunction_MathBoxFromArray_Execute() \
	void FRigVMFunction_MathBoxFromArray::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FBox& Box, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& Center, \
		FVector& Size \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FBox& Box, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& Center, \
		FVector& Size \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		FBox& Box = *(FBox*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Center = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Size = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Box, \
			Minimum, \
			Maximum, \
			Center, \
			Size \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxFromArray>();


#define FRigVMFunction_MathBoxIsValid_Execute() \
	void FRigVMFunction_MathBoxIsValid::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		bool& Valid \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		bool& Valid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Valid \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxIsValid>();


#define FRigVMFunction_MathBoxGetCenter_Execute() \
	void FRigVMFunction_MathBoxGetCenter::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Center \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Center \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Center = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Center \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxGetCenter>();


#define FRigVMFunction_MathBoxGetSize_Execute() \
	void FRigVMFunction_MathBoxGetSize::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Size, \
		FVector& Extent \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Size, \
		FVector& Extent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Size = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Extent = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Size, \
			Extent \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxGetSize>();


#define FRigVMFunction_MathBoxShift_Execute() \
	void FRigVMFunction_MathBoxShift::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Amount = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Amount, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxShift>();


#define FRigVMFunction_MathBoxMoveTo_Execute() \
	void FRigVMFunction_MathBoxMoveTo::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Center, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Center, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Center = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Center, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxMoveTo>();


#define FRigVMFunction_MathBoxExpand_Execute() \
	void FRigVMFunction_MathBoxExpand::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Amount = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Amount, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxExpand>();


#define FRigVMFunction_MathBoxTransform_Execute() \
	void FRigVMFunction_MathBoxTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Transform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxTransform>();


#define FRigVMFunction_MathBoxGetDistance_Execute() \
	void FRigVMFunction_MathBoxGetDistance::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Position, \
		const bool Square, \
		bool& Valid, \
		float& Distance \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Position, \
		const bool Square, \
		bool& Valid, \
		float& Distance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const bool Square = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		float& Distance = *(float*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Position, \
			Square, \
			Valid, \
			Distance \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxGetDistance>();


#define FRigVMFunction_MathBoxIsInside_Execute() \
	void FRigVMFunction_MathBoxIsInside::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Position, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Position, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Position, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxIsInside>();


#define FRigVMFunction_MathBoxGetVolume_Execute() \
	void FRigVMFunction_MathBoxGetVolume::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		float& Volume \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		float& Volume \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetData(false); \
		float& Volume = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Volume \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathBoxGetVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
