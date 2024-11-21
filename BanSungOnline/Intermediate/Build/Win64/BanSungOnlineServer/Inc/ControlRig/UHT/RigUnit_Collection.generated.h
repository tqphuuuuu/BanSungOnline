// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Collection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Collection_generated_h
#error "RigUnit_Collection.generated.h already included, missing '#pragma once' in RigUnit_Collection.h"
#endif
#define CONTROLRIG_RigUnit_Collection_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBaseMutable>();


#define FRigUnit_CollectionChain_Execute() \
	void FRigUnit_CollectionChain::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			FirstItem, \
			LastItem, \
			Reverse, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChain>();


#define FRigUnit_CollectionChainArray_Execute() \
	void FRigUnit_CollectionChainArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			FirstItem, \
			LastItem, \
			Reverse, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChainArray>();


#define FRigUnit_CollectionNameSearch_Execute() \
	void FRigUnit_CollectionNameSearch::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PartialName, \
			TypeToSearch, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearch>();


#define FRigUnit_CollectionNameSearchArray_Execute() \
	void FRigUnit_CollectionNameSearchArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PartialName, \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearchArray>();


#define FRigUnit_CollectionChildren_Execute() \
	void FRigUnit_CollectionChildren::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildren>();


#define FRigUnit_CollectionChildrenArray_Execute() \
	void FRigUnit_CollectionChildrenArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const bool bDefaultChildren, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const bool bDefaultChildren, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bDefaultChildren = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			bDefaultChildren, \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildrenArray>();


#define FRigUnit_CollectionGetAll_Execute() \
	void FRigUnit_CollectionGetAll::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetAll>();


#define FRigUnit_CollectionReplaceItems_Execute() \
	void FRigUnit_CollectionReplaceItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItems>();


#define FRigUnit_CollectionReplaceItemsArray_Execute() \
	void FRigUnit_CollectionReplaceItemsArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Result \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItemsArray>();


#define FRigUnit_CollectionItems_Execute() \
	void FRigUnit_CollectionItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItems>();


#define FRigUnit_CollectionGetItems_Execute() \
	void FRigUnit_CollectionGetItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetItems>();


#define FRigUnit_CollectionGetParentIndices_Execute() \
	void FRigUnit_CollectionGetParentIndices::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			ParentIndices \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndices>();


#define FRigUnit_CollectionGetParentIndicesItemArray_Execute() \
	void FRigUnit_CollectionGetParentIndicesItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_415_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			ParentIndices \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndicesItemArray>();


#define FRigUnit_CollectionUnion_Execute() \
	void FRigUnit_CollectionUnion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_438_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionUnion>();


#define FRigUnit_CollectionIntersection_Execute() \
	void FRigUnit_CollectionIntersection::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_471_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionIntersection>();


#define FRigUnit_CollectionDifference_Execute() \
	void FRigUnit_CollectionDifference::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_500_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionDifference>();


#define FRigUnit_CollectionReverse_Execute() \
	void FRigUnit_CollectionReverse::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_528_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKeyCollection& Reversed = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Reversed \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReverse>();


#define FRigUnit_CollectionCount_Execute() \
	void FRigUnit_CollectionCount::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_553_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Count \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionCount>();


#define FRigUnit_CollectionItemAtIndex_Execute() \
	void FRigUnit_CollectionItemAtIndex::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_580_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Index = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Index, \
			Item \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItemAtIndex>();


#define FRigUnit_CollectionLoop_Execute() \
	void FRigUnit_CollectionLoop::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_611_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FName& BlockToRun = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[4].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BlockToRun, \
			Collection, \
			Item, \
			Index, \
			Count, \
			Ratio \
		); \
	} \
	typedef FRigUnit_CollectionBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionLoop>();


#define FRigUnit_CollectionAddItem_Execute() \
	void FRigUnit_CollectionAddItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_669_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Result = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Item, \
			Result \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionAddItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
