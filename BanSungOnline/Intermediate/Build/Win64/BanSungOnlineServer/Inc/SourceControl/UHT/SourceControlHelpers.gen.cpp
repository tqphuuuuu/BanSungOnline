// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/SourceControl/Public/SourceControlHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers();
SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister();
SOURCECONTROL_API UFunction* Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature();
SOURCECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSourceControlState();
UPackage* Z_Construct_UPackage__Script_SourceControl();
// End Cross Module References

// Begin ScriptStruct FSourceControlState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceControlState;
class UScriptStruct* FSourceControlState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceControlState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceControlState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceControlState, (UObject*)Z_Construct_UPackage__Script_SourceControl(), TEXT("SourceControlState"));
	}
	return Z_Registration_Info_UScriptStruct_SourceControlState.OuterSingleton;
}
template<> SOURCECONTROL_API UScriptStruct* StaticStruct<FSourceControlState>()
{
	return FSourceControlState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceControlState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Snapshot of source control state of a file\n * @see\x09USourceControlHelpers::QueryFileState()\n */" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Snapshot of source control state of a file\n@see        USourceControlHelpers::QueryFileState()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Get the local filename that this state represents */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get the local filename that this state represents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Indicates whether this source control state has valid information (true) or not (false) */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Indicates whether this source control state has valid information (true) or not (false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnknown_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if we know anything about the source control state of this file */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if we know anything about the source control state of this file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCheckIn_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file can be checked in. */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be checked in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCheckOut_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file can be checked out */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be checked out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckedOut_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is checked out */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is checked out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrent_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is up-to-date with the version in source control */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is up-to-date with the version in source control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSourceControlled_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is under source control */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is under source control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdded_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Determine if this file is marked for add\n\x09 * @note\x09if already checked in then not considered mid add\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is marked for add\n@note        if already checked in then not considered mid add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeleted_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is marked for delete */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is marked for delete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIgnored_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is ignored by source control */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is ignored by source control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEdit_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if source control allows this file to be edited */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if source control allows this file to be edited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDelete_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if source control allows this file to be deleted. */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if source control allows this file to be deleted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsModified_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is modified compared to the version in source control. */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is modified compared to the version in source control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanAdd_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** \n\x09 * Determine if this file can be added to source control (i.e. is part of the directory \n\x09 * structure currently under source control) \n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be added to source control (i.e. is part of the directory\nstructure currently under source control)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConflicted_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is in a conflicted state */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is in a conflicted state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRevert_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file can be reverted, i.e. discard changes and the file will no longer be checked-out. */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be reverted, i.e. discard changes and the file will no longer be checked-out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckedOutOther_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/** Determine if this file is checked out by someone else */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is checked out by someone else" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckedOutOther_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Get name of other user who this file already checked out or \"\" if no other user has it checked out\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get name of other user who this file already checked out or \"\" if no other user has it checked out" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static void NewProp_bIsUnknown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnknown;
	static void NewProp_bCanCheckIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCheckIn;
	static void NewProp_bCanCheckOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCheckOut;
	static void NewProp_bIsCheckedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckedOut;
	static void NewProp_bIsCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrent;
	static void NewProp_bIsSourceControlled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSourceControlled;
	static void NewProp_bIsAdded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdded;
	static void NewProp_bIsDeleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeleted;
	static void NewProp_bIsIgnored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIgnored;
	static void NewProp_bCanEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEdit;
	static void NewProp_bCanDelete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDelete;
	static void NewProp_bIsModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModified;
	static void NewProp_bCanAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAdd;
	static void NewProp_bIsConflicted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConflicted;
	static void NewProp_bCanRevert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRevert;
	static void NewProp_bIsCheckedOutOther_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckedOutOther;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheckedOutOther;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceControlState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceControlState, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsUnknown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown = { "bIsUnknown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnknown_MetaData), NewProp_bIsUnknown_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanCheckIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn = { "bCanCheckIn", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCheckIn_MetaData), NewProp_bCanCheckIn_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanCheckOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut = { "bCanCheckOut", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCheckOut_MetaData), NewProp_bCanCheckOut_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsCheckedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut = { "bIsCheckedOut", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckedOut_MetaData), NewProp_bIsCheckedOut_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent = { "bIsCurrent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrent_MetaData), NewProp_bIsCurrent_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsSourceControlled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled = { "bIsSourceControlled", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSourceControlled_MetaData), NewProp_bIsSourceControlled_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsAdded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded = { "bIsAdded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAdded_MetaData), NewProp_bIsAdded_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsDeleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted = { "bIsDeleted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDeleted_MetaData), NewProp_bIsDeleted_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsIgnored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored = { "bIsIgnored", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIgnored_MetaData), NewProp_bIsIgnored_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit = { "bCanEdit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEdit_MetaData), NewProp_bCanEdit_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanDelete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete = { "bCanDelete", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDelete_MetaData), NewProp_bCanDelete_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified = { "bIsModified", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsModified_MetaData), NewProp_bIsModified_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd = { "bCanAdd", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanAdd_MetaData), NewProp_bCanAdd_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsConflicted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted = { "bIsConflicted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConflicted_MetaData), NewProp_bIsConflicted_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bCanRevert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert = { "bCanRevert", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRevert_MetaData), NewProp_bCanRevert_MetaData) };
void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_SetBit(void* Obj)
{
	((FSourceControlState*)Obj)->bIsCheckedOutOther = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther = { "bIsCheckedOutOther", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCheckedOutOther_MetaData), NewProp_bIsCheckedOutOther_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther = { "CheckedOutOther", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceControlState, CheckedOutOther), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckedOutOther_MetaData), NewProp_CheckedOutOther_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceControlState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
	nullptr,
	&NewStructOps,
	"SourceControlState",
	Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers),
	sizeof(FSourceControlState),
	alignof(FSourceControlState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceControlState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceControlState()
{
	if (!Z_Registration_Info_UScriptStruct_SourceControlState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceControlState.InnerSingleton, Z_Construct_UScriptStruct_FSourceControlState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceControlState.InnerSingleton;
}
// End ScriptStruct FSourceControlState

// Begin Delegate FQueryFileStateDelegate
struct Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics
{
	struct SourceControlHelpers_eventQueryFileStateDelegate_Parms
	{
		FSourceControlState FileStateOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Delegate to broadcast FileState upon AsyncQueryFileState completion\n" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Delegate to broadcast FileState upon AsyncQueryFileState completion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileStateOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::NewProp_FileStateOut = { "FileStateOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventQueryFileStateDelegate_Parms, FileStateOut), Z_Construct_UScriptStruct_FSourceControlState, METADATA_PARAMS(0, nullptr) }; // 994954519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::NewProp_FileStateOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "QueryFileStateDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::SourceControlHelpers_eventQueryFileStateDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::SourceControlHelpers_eventQueryFileStateDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USourceControlHelpers::FQueryFileStateDelegate_DelegateWrapper(const FScriptDelegate& QueryFileStateDelegate, FSourceControlState FileStateOut)
{
	struct SourceControlHelpers_eventQueryFileStateDelegate_Parms
	{
		FSourceControlState FileStateOut;
	};
	SourceControlHelpers_eventQueryFileStateDelegate_Parms Parms;
	Parms.FileStateOut=FileStateOut;
	QueryFileStateDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FQueryFileStateDelegate

// Begin Class USourceControlHelpers Function AsyncQueryFileState
struct Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics
{
	struct SourceControlHelpers_eventAsyncQueryFileState_Parms
	{
		FScriptDelegate FileStateCallback;
		FString InFile;
		bool bSilent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09* Query the source control state of the specified file, asynchronously.\n\x09*\n\x09* @param\x09""FileStateCallback Source control state - see USourceControlState. It will have bIsValid set to false if it could not have its values set.\n\x09* @param\x09InFile\x09\x09\x09  The file to query - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09* @param\x09""bSilent\x09\x09\x09  if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09*/" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Query the source control state of the specified file, asynchronously.\n\n@param        FileStateCallback Source control state - see USourceControlState. It will have bIsValid set to false if it could not have its values set.\n@param        InFile                    The file to query - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param        bSilent                   if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_FileStateCallback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_FileStateCallback = { "FileStateCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventAsyncQueryFileState_Parms, FileStateCallback), Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3815156135
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventAsyncQueryFileState_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventAsyncQueryFileState_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventAsyncQueryFileState_Parms), &Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_FileStateCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::NewProp_bSilent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "AsyncQueryFileState", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::SourceControlHelpers_eventAsyncQueryFileState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::SourceControlHelpers_eventAsyncQueryFileState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execAsyncQueryFileState)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_FileStateCallback);
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	USourceControlHelpers::AsyncQueryFileState(FQueryFileStateDelegate(Z_Param_FileStateCallback),Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function AsyncQueryFileState

// Begin Class USourceControlHelpers Function CheckInFile
struct Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics
{
	struct SourceControlHelpers_eventCheckInFile_Parms
	{
		FString InFile;
		FString InDescription;
		bool bSilent;
		bool bKeepCheckedOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check in a file.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09\x09The file to check in - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09InDescription\x09""Description for check in\n\x09 * @param\x09""bSilent\x09\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @param\x09""bKeepCheckedOut Keep files checked-out after checking in. This is helpful for maintaining \"ownership\" of files if further operations are needed.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bKeepCheckedOut", "false" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check in a file.\n@note        Blocks until action is complete.\n\n@param       InFile                  The file to check in - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDescription   Description for check in\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@param       bKeepCheckedOut Keep files checked-out after checking in. This is helpful for maintaining \"ownership\" of files if further operations are needed.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDescription;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_bKeepCheckedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepCheckedOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFile_Parms, InDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDescription_MetaData), NewProp_InDescription_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bKeepCheckedOut_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFile_Parms*)Obj)->bKeepCheckedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bKeepCheckedOut = { "bKeepCheckedOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bKeepCheckedOut_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bKeepCheckedOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckInFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::SourceControlHelpers_eventCheckInFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::SourceControlHelpers_eventCheckInFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckInFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDescription);
	P_GET_UBOOL(Z_Param_bSilent);
	P_GET_UBOOL(Z_Param_bKeepCheckedOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckInFile(Z_Param_InFile,Z_Param_InDescription,Z_Param_bSilent,Z_Param_bKeepCheckedOut);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckInFile

// Begin Class USourceControlHelpers Function CheckInFiles
struct Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics
{
	struct SourceControlHelpers_eventCheckInFiles_Parms
	{
		TArray<FString> InFiles;
		FString InDescription;
		bool bSilent;
		bool bKeepCheckedOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check in specified files.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09\x09\x09""Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09InDescription\x09""Description for check in\n\x09 * @param\x09""bSilent\x09\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @param\x09""bKeepCheckedOut Keep files checked-out after checking in. This is helpful for maintaining \"ownership\" of files if further operations are needed.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bKeepCheckedOut", "false" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check in specified files.\n@note        Blocks until action is complete.\n\n@param       InFiles                 Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDescription   Description for check in\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@param       bKeepCheckedOut Keep files checked-out after checking in. This is helpful for maintaining \"ownership\" of files if further operations are needed.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDescription;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_bKeepCheckedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepCheckedOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFiles_Parms, InDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDescription_MetaData), NewProp_InDescription_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bKeepCheckedOut_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFiles_Parms*)Obj)->bKeepCheckedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bKeepCheckedOut = { "bKeepCheckedOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bKeepCheckedOut_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckInFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckInFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bKeepCheckedOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckInFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::SourceControlHelpers_eventCheckInFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::SourceControlHelpers_eventCheckInFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckInFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDescription);
	P_GET_UBOOL(Z_Param_bSilent);
	P_GET_UBOOL(Z_Param_bKeepCheckedOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckInFiles(Z_Param_Out_InFiles,Z_Param_InDescription,Z_Param_bSilent,Z_Param_bKeepCheckedOut);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckInFiles

// Begin Class USourceControlHelpers Function CheckOutFile
struct Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics
{
	struct SourceControlHelpers_eventCheckOutFile_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check out a file.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09The file to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out a file.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckOutFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::SourceControlHelpers_eventCheckOutFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::SourceControlHelpers_eventCheckOutFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckOutFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutFile(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckOutFile

// Begin Class USourceControlHelpers Function CheckOutFiles
struct Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics
{
	struct SourceControlHelpers_eventCheckOutFiles_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check out specified files.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09\x09""Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out specified files.\n@note        Blocks until action is complete.\n\n@param       InFiles         Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckOutFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::SourceControlHelpers_eventCheckOutFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::SourceControlHelpers_eventCheckOutFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckOutFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutFiles(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckOutFiles

// Begin Class USourceControlHelpers Function CheckOutOrAddFile
struct Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics
{
	struct SourceControlHelpers_eventCheckOutOrAddFile_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check out file or mark it for add.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09The file to check out/add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out file or mark it for add.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to check out/add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutOrAddFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutOrAddFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutOrAddFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutOrAddFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutOrAddFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckOutOrAddFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::SourceControlHelpers_eventCheckOutOrAddFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::SourceControlHelpers_eventCheckOutOrAddFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckOutOrAddFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutOrAddFile(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckOutOrAddFile

// Begin Class USourceControlHelpers Function CheckOutOrAddFiles
struct Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics
{
	struct SourceControlHelpers_eventCheckOutOrAddFiles_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to check out files or mark them for add.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09\x09The files to check out/add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out files or mark them for add.\n@note        Blocks until action is complete.\n\n@param       InFiles         The files to check out/add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutOrAddFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutOrAddFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutOrAddFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCheckOutOrAddFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCheckOutOrAddFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CheckOutOrAddFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::SourceControlHelpers_eventCheckOutOrAddFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::SourceControlHelpers_eventCheckOutOrAddFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCheckOutOrAddFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutOrAddFiles(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CheckOutOrAddFiles

// Begin Class USourceControlHelpers Function CopyFile
struct Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics
{
	struct SourceControlHelpers_eventCopyFile_Parms
	{
		FString InSourceFile;
		FString InDestFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to copy a file.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InSourceFile\x09Source file string to copy from - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09InDestFile\x09\x09Source file string to copy to - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard). If package, then uses same extension as source file.\n\x09 * @param\x09""bSilent\x09\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to copy a file.\n@note        Blocks until action is complete.\n\n@param       InSourceFile    Source file string to copy from - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDestFile              Source file string to copy to - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard). If package, then uses same extension as source file.\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSourceFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDestFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDestFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile = { "InSourceFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCopyFile_Parms, InSourceFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSourceFile_MetaData), NewProp_InSourceFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile = { "InDestFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCopyFile_Parms, InDestFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDestFile_MetaData), NewProp_InDestFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCopyFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCopyFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventCopyFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CopyFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::SourceControlHelpers_eventCopyFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::SourceControlHelpers_eventCopyFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CopyFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCopyFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSourceFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDestFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::CopyFile(Z_Param_InSourceFile,Z_Param_InDestFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CopyFile

// Begin Class USourceControlHelpers Function CurrentProvider
struct Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics
{
	struct SourceControlHelpers_eventCurrentProvider_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Determine the name of the current source control provider.\n\x09 * @return\x09the name of the current source control provider. If one is not set then \"None\" is returned.\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine the name of the current source control provider.\n@return      the name of the current source control provider. If one is not set then \"None\" is returned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventCurrentProvider_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "CurrentProvider", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::SourceControlHelpers_eventCurrentProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::SourceControlHelpers_eventCurrentProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_CurrentProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execCurrentProvider)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USourceControlHelpers::CurrentProvider();
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function CurrentProvider

// Begin Class USourceControlHelpers Function IsAvailable
struct Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics
{
	struct SourceControlHelpers_eventIsAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Quick check if currently set source control provider is enabled and available for use\n\x09 * (server-based providers can use this to return whether the server is available or not)\n\x09 *\n\x09 * @return\x09true if source control is available, false if it is not\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Quick check if currently set source control provider is enabled and available for use\n(server-based providers can use this to return whether the server is available or not)\n\n@return      true if source control is available, false if it is not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventIsAvailable_Parms), &Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "IsAvailable", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::SourceControlHelpers_eventIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::SourceControlHelpers_eventIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_IsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execIsAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::IsAvailable();
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function IsAvailable

// Begin Class USourceControlHelpers Function IsEnabled
struct Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics
{
	struct SourceControlHelpers_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Determine if there is a source control system enabled\n\x09 * @return\x09true if enabled, false if not\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if there is a source control system enabled\n@return      true if enabled, false if not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventIsEnabled_Parms), &Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::SourceControlHelpers_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::SourceControlHelpers_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::IsEnabled();
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function IsEnabled

// Begin Class USourceControlHelpers Function LastErrorMsg
struct Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics
{
	struct SourceControlHelpers_eventLastErrorMsg_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09* Get status text set by SourceControl system if an error occurs regardless whether bSilent is set or not.\n\x09* Only set if there was an error.\n\x09*/" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get status text set by SourceControl system if an error occurs regardless whether bSilent is set or not.\nOnly set if there was an error." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventLastErrorMsg_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "LastErrorMsg", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::SourceControlHelpers_eventLastErrorMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::SourceControlHelpers_eventLastErrorMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execLastErrorMsg)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=USourceControlHelpers::LastErrorMsg();
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function LastErrorMsg

// Begin Class USourceControlHelpers Function MarkFileForAdd
struct Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics
{
	struct SourceControlHelpers_eventMarkFileForAdd_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to mark a file for add. Does nothing (and returns true) if the file is already under SC\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09The file to add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to mark a file for add. Does nothing (and returns true) if the file is already under SC\n@note        Blocks until action is complete.\n\n@param       InFile          The file to add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventMarkFileForAdd_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFileForAdd_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFileForAdd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "MarkFileForAdd", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::SourceControlHelpers_eventMarkFileForAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::SourceControlHelpers_eventMarkFileForAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execMarkFileForAdd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::MarkFileForAdd(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function MarkFileForAdd

// Begin Class USourceControlHelpers Function MarkFileForDelete
struct Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics
{
	struct SourceControlHelpers_eventMarkFileForDelete_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to remove file from source control and\n\x09 * delete the file.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09The file to delete - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to remove file from source control and\ndelete the file.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to delete - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventMarkFileForDelete_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFileForDelete_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFileForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFileForDelete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFileForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "MarkFileForDelete", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::SourceControlHelpers_eventMarkFileForDelete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::SourceControlHelpers_eventMarkFileForDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execMarkFileForDelete)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::MarkFileForDelete(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function MarkFileForDelete

// Begin Class USourceControlHelpers Function MarkFilesForAdd
struct Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics
{
	struct SourceControlHelpers_eventMarkFilesForAdd_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to mark files for add. Does nothing (and returns true) for any file that is already under SC\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09\x09""Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to mark files for add. Does nothing (and returns true) for any file that is already under SC\n@note        Blocks until action is complete.\n\n@param       InFiles         Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventMarkFilesForAdd_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFilesForAdd_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFilesForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFilesForAdd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFilesForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "MarkFilesForAdd", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::SourceControlHelpers_eventMarkFilesForAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::SourceControlHelpers_eventMarkFilesForAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execMarkFilesForAdd)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::MarkFilesForAdd(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function MarkFilesForAdd

// Begin Class USourceControlHelpers Function MarkFilesForDelete
struct Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics
{
	struct SourceControlHelpers_eventMarkFilesForDelete_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to remove files from source control and delete the files.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09The file to delete - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to remove files from source control and delete the files.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to delete - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventMarkFilesForDelete_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFilesForDelete_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFilesForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventMarkFilesForDelete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventMarkFilesForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "MarkFilesForDelete", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::SourceControlHelpers_eventMarkFilesForDelete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::SourceControlHelpers_eventMarkFilesForDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execMarkFilesForDelete)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::MarkFilesForDelete(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function MarkFilesForDelete

// Begin Class USourceControlHelpers Function QueryFileState
struct Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics
{
	struct SourceControlHelpers_eventQueryFileState_Parms
	{
		FString InFile;
		bool bSilent;
		FSourceControlState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to query a file's source control state.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09\x09\x09The file to query - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09\x09\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09Source control state - see USourceControlState. It will have bIsValid set to false if\n\x09 *\x09\x09\x09it could not have its values set.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to query a file's source control state.\n@note        Blocks until action is complete.\n\n@param       InFile                  The file to query - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      Source control state - see USourceControlState. It will have bIsValid set to false if\n                     it could not have its values set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventQueryFileState_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventQueryFileState_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventQueryFileState_Parms), &Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventQueryFileState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSourceControlState, METADATA_PARAMS(0, nullptr) }; // 994954519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "QueryFileState", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::SourceControlHelpers_eventQueryFileState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::SourceControlHelpers_eventQueryFileState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_QueryFileState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execQueryFileState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSourceControlState*)Z_Param__Result=USourceControlHelpers::QueryFileState(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function QueryFileState

// Begin Class USourceControlHelpers Function RevertAndReloadPackages
#if WITH_EDITOR
struct Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics
{
	struct SourceControlHelpers_eventRevertAndReloadPackages_Parms
	{
		TArray<FString> InPackagesToRevert;
		bool bRevertAll;
		bool bReloadWorld;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n     * Reverts the provided files then reloads packages.\n\x09 * @param\x09InPackagesToRevert\x09\x09\x09\x09\x09The packages to revert\n\x09 * @param\x09""bRevertAll\x09\x09\x09\x09\x09\x09\x09Whether to revert all files\n\x09 * @param\x09""bReloadWorld\x09\x09\x09\x09\x09\x09Reload the world\n     * @return true if succeeded.\n     */" },
		{ "CPP_Default_bReloadWorld", "false" },
		{ "CPP_Default_bRevertAll", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Reverts the provided files then reloads packages.\n@param       InPackagesToRevert                                      The packages to revert\n@param       bRevertAll                                                      Whether to revert all files\n@param       bReloadWorld                                            Reload the world\n@return true if succeeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPackagesToRevert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPackagesToRevert_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPackagesToRevert;
	static void NewProp_bRevertAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertAll;
	static void NewProp_bReloadWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadWorld;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_InPackagesToRevert_Inner = { "InPackagesToRevert", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_InPackagesToRevert = { "InPackagesToRevert", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventRevertAndReloadPackages_Parms, InPackagesToRevert), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPackagesToRevert_MetaData), NewProp_InPackagesToRevert_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bRevertAll_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertAndReloadPackages_Parms*)Obj)->bRevertAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bRevertAll = { "bRevertAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertAndReloadPackages_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bRevertAll_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bReloadWorld_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertAndReloadPackages_Parms*)Obj)->bReloadWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bReloadWorld = { "bReloadWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertAndReloadPackages_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bReloadWorld_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertAndReloadPackages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertAndReloadPackages_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_InPackagesToRevert_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_InPackagesToRevert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bRevertAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_bReloadWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "RevertAndReloadPackages", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::SourceControlHelpers_eventRevertAndReloadPackages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::SourceControlHelpers_eventRevertAndReloadPackages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(USourceControlHelpers::execRevertAndReloadPackages)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InPackagesToRevert);
	P_GET_UBOOL(Z_Param_bRevertAll);
	P_GET_UBOOL(Z_Param_bReloadWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::RevertAndReloadPackages(Z_Param_Out_InPackagesToRevert,Z_Param_bRevertAll,Z_Param_bReloadWorld);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class USourceControlHelpers Function RevertAndReloadPackages

// Begin Class USourceControlHelpers Function RevertFile
struct Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics
{
	struct SourceControlHelpers_eventRevertFile_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to revert a file regardless whether any changes will be lost or not.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09The file to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert a file regardless whether any changes will be lost or not.\n@note        Blocks until action is complete.\n\n@param       InFile  The file to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventRevertFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "RevertFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::SourceControlHelpers_eventRevertFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::SourceControlHelpers_eventRevertFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execRevertFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::RevertFile(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function RevertFile

// Begin Class USourceControlHelpers Function RevertFiles
struct Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics
{
	struct SourceControlHelpers_eventRevertFiles_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to revert files regardless whether any changes will be lost or not.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09""Files to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert files regardless whether any changes will be lost or not.\n@note        Blocks until action is complete.\n\n@param       InFiles Files to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventRevertFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "RevertFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::SourceControlHelpers_eventRevertFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::SourceControlHelpers_eventRevertFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execRevertFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::RevertFiles(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function RevertFiles

// Begin Class USourceControlHelpers Function RevertUnchangedFile
struct Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics
{
	struct SourceControlHelpers_eventRevertUnchangedFile_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to revert a file provided no changes have been made.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09""File to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert a file provided no changes have been made.\n@note        Blocks until action is complete.\n\n@param       InFile  File to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventRevertUnchangedFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertUnchangedFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertUnchangedFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertUnchangedFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertUnchangedFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "RevertUnchangedFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::SourceControlHelpers_eventRevertUnchangedFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::SourceControlHelpers_eventRevertUnchangedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execRevertUnchangedFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::RevertUnchangedFile(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function RevertUnchangedFile

// Begin Class USourceControlHelpers Function RevertUnchangedFiles
struct Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics
{
	struct SourceControlHelpers_eventRevertUnchangedFiles_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to revert files provided no changes have been made.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09""Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert files provided no changes have been made.\n@note        Blocks until action is complete.\n\n@param       InFiles Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventRevertUnchangedFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertUnchangedFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertUnchangedFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventRevertUnchangedFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventRevertUnchangedFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "RevertUnchangedFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::SourceControlHelpers_eventRevertUnchangedFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::SourceControlHelpers_eventRevertUnchangedFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execRevertUnchangedFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::RevertUnchangedFiles(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function RevertUnchangedFiles

// Begin Class USourceControlHelpers Function SyncFile
struct Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics
{
	struct SourceControlHelpers_eventSyncFile_Parms
	{
		FString InFile;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to sync a file or directory to the head revision.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFile\x09The file or directory to sync - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to sync a file or directory to the head revision.\n@note        Blocks until action is complete.\n\n@param       InFile  The file or directory to sync - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventSyncFile_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventSyncFile_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventSyncFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventSyncFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventSyncFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "SyncFile", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::SourceControlHelpers_eventSyncFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::SourceControlHelpers_eventSyncFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_SyncFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_SyncFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execSyncFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::SyncFile(Z_Param_InFile,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function SyncFile

// Begin Class USourceControlHelpers Function SyncFiles
struct Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics
{
	struct SourceControlHelpers_eventSyncFiles_Parms
	{
		TArray<FString> InFiles;
		bool bSilent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Revision Control Helpers" },
		{ "Comment", "/**\n\x09 * Use currently set source control provider to sync files or directories to the head revision.\n\x09 * @note\x09""Blocks until action is complete.\n\x09 *\n\x09 * @param\x09InFiles\x09""Files or directories to sync - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n\x09 * @param\x09""bSilent\x09if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n\x09 * @return\x09true if succeeded, false if failed and can call LastErrorMsg() for more info.\n\x09 */" },
		{ "CPP_Default_bSilent", "false" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to sync files or directories to the head revision.\n@note        Blocks until action is complete.\n\n@param       InFiles Files or directories to sync - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFiles;
	static void NewProp_bSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_InFiles_Inner = { "InFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_InFiles = { "InFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceControlHelpers_eventSyncFiles_Parms, InFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFiles_MetaData), NewProp_InFiles_MetaData) };
void Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
{
	((SourceControlHelpers_eventSyncFiles_Parms*)Obj)->bSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventSyncFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SourceControlHelpers_eventSyncFiles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SourceControlHelpers_eventSyncFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_InFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_InFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_bSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, nullptr, "SyncFiles", nullptr, nullptr, Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::SourceControlHelpers_eventSyncFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::SourceControlHelpers_eventSyncFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceControlHelpers_SyncFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_SyncFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceControlHelpers::execSyncFiles)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InFiles);
	P_GET_UBOOL(Z_Param_bSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USourceControlHelpers::SyncFiles(Z_Param_Out_InFiles,Z_Param_bSilent);
	P_NATIVE_END;
}
// End Class USourceControlHelpers Function SyncFiles

// Begin Class USourceControlHelpers
void USourceControlHelpers::StaticRegisterNativesUSourceControlHelpers()
{
	UClass* Class = USourceControlHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncQueryFileState", &USourceControlHelpers::execAsyncQueryFileState },
		{ "CheckInFile", &USourceControlHelpers::execCheckInFile },
		{ "CheckInFiles", &USourceControlHelpers::execCheckInFiles },
		{ "CheckOutFile", &USourceControlHelpers::execCheckOutFile },
		{ "CheckOutFiles", &USourceControlHelpers::execCheckOutFiles },
		{ "CheckOutOrAddFile", &USourceControlHelpers::execCheckOutOrAddFile },
		{ "CheckOutOrAddFiles", &USourceControlHelpers::execCheckOutOrAddFiles },
		{ "CopyFile", &USourceControlHelpers::execCopyFile },
		{ "CurrentProvider", &USourceControlHelpers::execCurrentProvider },
		{ "IsAvailable", &USourceControlHelpers::execIsAvailable },
		{ "IsEnabled", &USourceControlHelpers::execIsEnabled },
		{ "LastErrorMsg", &USourceControlHelpers::execLastErrorMsg },
		{ "MarkFileForAdd", &USourceControlHelpers::execMarkFileForAdd },
		{ "MarkFileForDelete", &USourceControlHelpers::execMarkFileForDelete },
		{ "MarkFilesForAdd", &USourceControlHelpers::execMarkFilesForAdd },
		{ "MarkFilesForDelete", &USourceControlHelpers::execMarkFilesForDelete },
		{ "QueryFileState", &USourceControlHelpers::execQueryFileState },
#if WITH_EDITOR
		{ "RevertAndReloadPackages", &USourceControlHelpers::execRevertAndReloadPackages },
#endif // WITH_EDITOR
		{ "RevertFile", &USourceControlHelpers::execRevertFile },
		{ "RevertFiles", &USourceControlHelpers::execRevertFiles },
		{ "RevertUnchangedFile", &USourceControlHelpers::execRevertUnchangedFile },
		{ "RevertUnchangedFiles", &USourceControlHelpers::execRevertUnchangedFiles },
		{ "SyncFile", &USourceControlHelpers::execSyncFile },
		{ "SyncFiles", &USourceControlHelpers::execSyncFiles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceControlHelpers);
UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister()
{
	return USourceControlHelpers::StaticClass();
}
struct Z_Construct_UClass_USourceControlHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor source control common functionality.\n *\n * @note Many of these source control methods use *smart* file strings which can be one of:\n *   - fully qualified path\n *   - relative path\n *   - long package name\n *   - asset path\n *   - export text path (often stored on clipboard)\n *\n *   For example:\n *\x09 - D:\\Epic\\Dev-Ent\\Projects\\Python3rdBP\\Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n *\x09 - Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n *\x09 - /Game/Mannequin/Animations/ThirdPersonIdle\n *\x09 - /Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle\n *\x09 - AnimSequence'/Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle'\n */" },
		{ "IncludePath", "SourceControlHelpers.h" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ScriptName", "SourceControl" },
		{ "ToolTip", "Editor source control common functionality.\n\n@note Many of these source control methods use *smart* file strings which can be one of:\n  - fully qualified path\n  - relative path\n  - long package name\n  - asset path\n  - export text path (often stored on clipboard)\n\n  For example:\n     - D:\\Epic\\Dev-Ent\\Projects\\Python3rdBP\\Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n     - Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n     - /Game/Mannequin/Animations/ThirdPersonIdle\n     - /Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle\n     - AnimSequence'/Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle'" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceControlHelpers_AsyncQueryFileState, "AsyncQueryFileState" }, // 1363388239
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckInFile, "CheckInFile" }, // 2004768392
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles, "CheckInFiles" }, // 40625699
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile, "CheckOutFile" }, // 3101090788
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles, "CheckOutFiles" }, // 4149901008
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile, "CheckOutOrAddFile" }, // 323152397
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFiles, "CheckOutOrAddFiles" }, // 3518221111
		{ &Z_Construct_UFunction_USourceControlHelpers_CopyFile, "CopyFile" }, // 451907859
		{ &Z_Construct_UFunction_USourceControlHelpers_CurrentProvider, "CurrentProvider" }, // 3103016680
		{ &Z_Construct_UFunction_USourceControlHelpers_IsAvailable, "IsAvailable" }, // 3509832369
		{ &Z_Construct_UFunction_USourceControlHelpers_IsEnabled, "IsEnabled" }, // 2465383805
		{ &Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg, "LastErrorMsg" }, // 2992229754
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd, "MarkFileForAdd" }, // 3355927289
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete, "MarkFileForDelete" }, // 2633551796
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd, "MarkFilesForAdd" }, // 223897880
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForDelete, "MarkFilesForDelete" }, // 2329363493
		{ &Z_Construct_UFunction_USourceControlHelpers_QueryFileState, "QueryFileState" }, // 601563801
		{ &Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature, "QueryFileStateDelegate__DelegateSignature" }, // 3815156135
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertAndReloadPackages, "RevertAndReloadPackages" }, // 1444166536
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertFile, "RevertFile" }, // 3495183417
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertFiles, "RevertFiles" }, // 2979796131
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile, "RevertUnchangedFile" }, // 2107767590
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles, "RevertUnchangedFiles" }, // 717191902
		{ &Z_Construct_UFunction_USourceControlHelpers_SyncFile, "SyncFile" }, // 4178819547
		{ &Z_Construct_UFunction_USourceControlHelpers_SyncFiles, "SyncFiles" }, // 1989307703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USourceControlHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceControlHelpers_Statics::ClassParams = {
	&USourceControlHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceControlHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceControlHelpers()
{
	if (!Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton, Z_Construct_UClass_USourceControlHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceControlHelpers.OuterSingleton;
}
template<> SOURCECONTROL_API UClass* StaticClass<USourceControlHelpers>()
{
	return USourceControlHelpers::StaticClass();
}
USourceControlHelpers::USourceControlHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlHelpers);
USourceControlHelpers::~USourceControlHelpers() {}
// End Class USourceControlHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceControlState::StaticStruct, Z_Construct_UScriptStruct_FSourceControlState_Statics::NewStructOps, TEXT("SourceControlState"), &Z_Registration_Info_UScriptStruct_SourceControlState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceControlState), 994954519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceControlHelpers, USourceControlHelpers::StaticClass, TEXT("USourceControlHelpers"), &Z_Registration_Info_UClass_USourceControlHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceControlHelpers), 1178072263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_3744788576(TEXT("/Script/SourceControl"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
