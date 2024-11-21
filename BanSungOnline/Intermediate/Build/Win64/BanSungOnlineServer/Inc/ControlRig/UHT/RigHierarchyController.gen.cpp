// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyController.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Rigs/RigHierarchyElements.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyController() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController();
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPhysicsSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPhysicsSolverID();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class URigHierarchyController Function AddAnimationChannel_ForBlueprint
struct Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics
{
	struct RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms
	{
		FName InName;
		FRigElementKey InParentControl;
		FRigControlSettings InSettings;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a control to the hierarchy\n\x09 * @param InName The suggested name of the new animation channel - will eventually be corrected by the namespace\n\x09 * @param InParentControl The parent of the new animation channel.\n\x09 * @param InSettings All of the animation channel's settings\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The key for the newly created animation channel.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "DisplayName", "Add Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ScriptName", "AddAnimationChannel" },
		{ "ToolTip", "Adds a control to the hierarchy\n@param InName The suggested name of the new animation channel - will eventually be corrected by the namespace\n@param InParentControl The parent of the new animation channel.\n@param InSettings All of the animation channel's settings\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The key for the newly created animation channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParentControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InParentControl = { "InParentControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms, InParentControl), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms, InSettings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(0, nullptr) }; // 2892787372
void Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InParentControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddAnimationChannel_ForBlueprint", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::RigHierarchyController_eventAddAnimationChannel_ForBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddAnimationChannel_ForBlueprint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParentControl);
	P_GET_STRUCT(FRigControlSettings,Z_Param_InSettings);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddAnimationChannel_ForBlueprint(Z_Param_InName,Z_Param_InParentControl,Z_Param_InSettings,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddAnimationChannel_ForBlueprint

// Begin Class URigHierarchyController Function AddAvailableSpace
struct Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics
{
	struct RigHierarchyController_eventAddAvailableSpace_Parms
	{
		FRigElementKey InControl;
		FRigElementKey InSpace;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a new available space to the given control\n\x09 * @param InControl The control to add the available space for\n\x09 * @param InSpace The space to add to the available spaces list\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a new available space to the given control\n@param InControl The control to add the available space for\n@param InSpace The space to add to the available spaces list\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpace;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_InControl = { "InControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAvailableSpace_Parms, InControl), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_InSpace = { "InSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddAvailableSpace_Parms, InSpace), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddAvailableSpace_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddAvailableSpace_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddAvailableSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_InControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_InSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddAvailableSpace", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::RigHierarchyController_eventAddAvailableSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::RigHierarchyController_eventAddAvailableSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddAvailableSpace)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InControl);
	P_GET_STRUCT(FRigElementKey,Z_Param_InSpace);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAvailableSpace(Z_Param_InControl,Z_Param_InSpace,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddAvailableSpace

// Begin Class URigHierarchyController Function AddBone
struct Z_Construct_UFunction_URigHierarchyController_AddBone_Statics
{
	struct RigHierarchyController_eventAddBone_Parms
	{
		FName InName;
		FRigElementKey InParent;
		FTransform InTransform;
		bool bTransformInGlobal;
		ERigBoneType InBoneType;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a bone to the hierarchy\n\x09 * @param InName The suggested name of the new bone - will eventually be corrected by the namespace\n\x09 * @param InParent The (optional) parent of the new bone. If you don't need a parent, pass FRigElementKey()\n\x09 * @param InTransform The transform for the new bone - either in local or global space, based on bTransformInGlobal\n\x09 * @param bTransformInGlobal Set this to true if the Transform passed is expressed in global space, false for local space.\n\x09 * @param InBoneType The type of bone to add. This can be used to differentiate between imported bones and user defined bones.\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The key for the newly created bone.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_bTransformInGlobal", "true" },
		{ "CPP_Default_InBoneType", "User" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a bone to the hierarchy\n@param InName The suggested name of the new bone - will eventually be corrected by the namespace\n@param InParent The (optional) parent of the new bone. If you don't need a parent, pass FRigElementKey()\n@param InTransform The transform for the new bone - either in local or global space, based on bTransformInGlobal\n@param bTransformInGlobal Set this to true if the Transform passed is expressed in global space, false for local space.\n@param InBoneType The type of bone to add. This can be used to differentiate between imported bones and user defined bones.\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_bTransformInGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformInGlobal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBoneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InBoneType;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddBone_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddBone_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddBone_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bTransformInGlobal_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddBone_Parms*)Obj)->bTransformInGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bTransformInGlobal = { "bTransformInGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddBone_Parms), &Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bTransformInGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InBoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InBoneType = { "InBoneType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddBone_Parms, InBoneType), Z_Construct_UEnum_ControlRig_ERigBoneType, METADATA_PARAMS(0, nullptr) }; // 3895347495
void Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddBone_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddBone_Parms), &Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddBone_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddBone_Parms), &Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bTransformInGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InBoneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_InBoneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddBone", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::RigHierarchyController_eventAddBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::RigHierarchyController_eventAddBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddBone)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_GET_UBOOL(Z_Param_bTransformInGlobal);
	P_GET_ENUM(ERigBoneType,Z_Param_InBoneType);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddBone(Z_Param_InName,Z_Param_InParent,Z_Param_InTransform,Z_Param_bTransformInGlobal,ERigBoneType(Z_Param_InBoneType),Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddBone

// Begin Class URigHierarchyController Function AddChannelHost
struct Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics
{
	struct RigHierarchyController_eventAddChannelHost_Parms
	{
		FRigElementKey InChannel;
		FRigElementKey InHost;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a new channel host to the animation channel\n\x09 * @note This is just an overload of AddAvailableSpace for readability\n\x09 * @param InChannel The animation channel to add the channel host for\n\x09 * @param InHost The host to add to the channel to\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a new channel host to the animation channel\n@note This is just an overload of AddAvailableSpace for readability\n@param InChannel The animation channel to add the channel host for\n@param InHost The host to add to the channel to\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHost;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddChannelHost_Parms, InChannel), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_InHost = { "InHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddChannelHost_Parms, InHost), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddChannelHost_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddChannelHost_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddChannelHost_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_InHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddChannelHost", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::RigHierarchyController_eventAddChannelHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::RigHierarchyController_eventAddChannelHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddChannelHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddChannelHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddChannelHost)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChannel);
	P_GET_STRUCT(FRigElementKey,Z_Param_InHost);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddChannelHost(Z_Param_InChannel,Z_Param_InHost,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddChannelHost

// Begin Class URigHierarchyController Function AddConnector
struct Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics
{
	struct RigHierarchyController_eventAddConnector_Parms
	{
		FName InName;
		FRigConnectorSettings InSettings;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a connector to the hierarchy\n\x09 * @param InName The suggested name of the new connector - will eventually be corrected by the namespace\n\x09 * @param InSettings All of the connector's settings\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The key for the newly created bone.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InSettings", "()" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a connector to the hierarchy\n@param InName The suggested name of the new connector - will eventually be corrected by the namespace\n@param InSettings All of the connector's settings\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddConnector_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddConnector_Parms, InSettings), Z_Construct_UScriptStruct_FRigConnectorSettings, METADATA_PARAMS(0, nullptr) }; // 3308319107
void Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddConnector_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddConnector_Parms), &Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddConnector_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddConnector_Parms), &Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddConnector_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddConnector", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::RigHierarchyController_eventAddConnector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::RigHierarchyController_eventAddConnector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddConnector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddConnector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddConnector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigConnectorSettings,Z_Param_InSettings);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddConnector(Z_Param_InName,Z_Param_InSettings,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddConnector

// Begin Class URigHierarchyController Function AddControl_ForBlueprint
struct Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics
{
	struct RigHierarchyController_eventAddControl_ForBlueprint_Parms
	{
		FName InName;
		FRigElementKey InParent;
		FRigControlSettings InSettings;
		FRigControlValue InValue;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a control to the hierarchy\n\x09 * @param InName The suggested name of the new control - will eventually be corrected by the namespace\n\x09 * @param InParent The (optional) parent of the new control. If you don't need a parent, pass FRigElementKey()\n\x09 * @param InSettings All of the control's settings\n\x09 * @param InValue The value to use for the control\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The key for the newly created control.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "DisplayName", "Add Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ScriptName", "AddControl" },
		{ "ToolTip", "Adds a control to the hierarchy\n@param InName The suggested name of the new control - will eventually be corrected by the namespace\n@param InParent The (optional) parent of the new control. If you don't need a parent, pass FRigElementKey()\n@param InSettings All of the control's settings\n@param InValue The value to use for the control\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The key for the newly created control." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddControl_ForBlueprint_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddControl_ForBlueprint_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddControl_ForBlueprint_Parms, InSettings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(0, nullptr) }; // 2892787372
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddControl_ForBlueprint_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(0, nullptr) }; // 4047065167
void Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddControl_ForBlueprint_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddControl_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddControl_ForBlueprint_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddControl_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddControl_ForBlueprint_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddControl_ForBlueprint", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::RigHierarchyController_eventAddControl_ForBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::RigHierarchyController_eventAddControl_ForBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddControl_ForBlueprint)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_STRUCT(FRigControlSettings,Z_Param_InSettings);
	P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddControl_ForBlueprint(Z_Param_InName,Z_Param_InParent,Z_Param_InSettings,Z_Param_InValue,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddControl_ForBlueprint

// Begin Class URigHierarchyController Function AddCurve
struct Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics
{
	struct RigHierarchyController_eventAddCurve_Parms
	{
		FName InName;
		float InValue;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a curve to the hierarchy\n\x09 * @param InName The suggested name of the new curve - will eventually be corrected by the namespace\n\x09 * @param InValue The value to use for the curve\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The key for the newly created curve.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "CPP_Default_InValue", "0.000000" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a curve to the hierarchy\n@param InName The suggested name of the new curve - will eventually be corrected by the namespace\n@param InValue The value to use for the curve\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created curve." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddCurve_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddCurve_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddCurve_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddCurve_Parms), &Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddCurve_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddCurve_Parms), &Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddCurve", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::RigHierarchyController_eventAddCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::RigHierarchyController_eventAddCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddCurve)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddCurve(Z_Param_InName,Z_Param_InValue,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddCurve

// Begin Class URigHierarchyController Function AddNull
struct Z_Construct_UFunction_URigHierarchyController_AddNull_Statics
{
	struct RigHierarchyController_eventAddNull_Parms
	{
		FName InName;
		FRigElementKey InParent;
		FTransform InTransform;
		bool bTransformInGlobal;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a null to the hierarchy\n\x09 * @param InName The suggested name of the new null - will eventually be corrected by the namespace\n\x09 * @param InParent The (optional) parent of the new null. If you don't need a parent, pass FRigElementKey()\n\x09 * @param InTransform The transform for the new null - either in local or global null, based on bTransformInGlobal\n\x09 * @param bTransformInGlobal Set this to true if the Transform passed is expressed in global null, false for local null.\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The key for the newly created null.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_bTransformInGlobal", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a null to the hierarchy\n@param InName The suggested name of the new null - will eventually be corrected by the namespace\n@param InParent The (optional) parent of the new null. If you don't need a parent, pass FRigElementKey()\n@param InTransform The transform for the new null - either in local or global null, based on bTransformInGlobal\n@param bTransformInGlobal Set this to true if the Transform passed is expressed in global null, false for local null.\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_bTransformInGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformInGlobal;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddNull_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddNull_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddNull_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bTransformInGlobal_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddNull_Parms*)Obj)->bTransformInGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bTransformInGlobal = { "bTransformInGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddNull_Parms), &Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bTransformInGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddNull_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddNull_Parms), &Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddNull_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddNull_Parms), &Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddNull_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bTransformInGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddNull", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::RigHierarchyController_eventAddNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::RigHierarchyController_eventAddNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddNull)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_GET_UBOOL(Z_Param_bTransformInGlobal);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddNull(Z_Param_InName,Z_Param_InParent,Z_Param_InTransform,Z_Param_bTransformInGlobal,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddNull

// Begin Class URigHierarchyController Function AddParent
struct Z_Construct_UFunction_URigHierarchyController_AddParent_Statics
{
	struct RigHierarchyController_eventAddParent_Parms
	{
		FRigElementKey InChild;
		FRigElementKey InParent;
		float InWeight;
		bool bMaintainGlobalTransform;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a new parent to an element. For elements that allow only one parent the parent will be replaced (Same as ::SetParent).\n\x09 * @param InChild The key of the element to add the parent for\n\x09 * @param InParent The key of the new parent to add\n\x09 * @param InWeight The initial weight to give to the parent\n\x09 * @param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bMaintainGlobalTransform", "true" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InWeight", "0.000000" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a new parent to an element. For elements that allow only one parent the parent will be replaced (Same as ::SetParent).\n@param InChild The key of the element to add the parent for\n@param InParent The key of the new parent to add\n@param InWeight The initial weight to give to the parent\n@param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static void NewProp_bMaintainGlobalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainGlobalTransform;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddParent_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddParent_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddParent_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bMaintainGlobalTransform_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddParent_Parms*)Obj)->bMaintainGlobalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bMaintainGlobalTransform = { "bMaintainGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddParent_Parms), &Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bMaintainGlobalTransform_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddParent_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddParent_Parms), &Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddParent_Parms), &Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_InWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bMaintainGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddParent", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::RigHierarchyController_eventAddParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::RigHierarchyController_eventAddParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddParent)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_GET_UBOOL(Z_Param_bMaintainGlobalTransform);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddParent(Z_Param_InChild,Z_Param_InParent,Z_Param_InWeight,Z_Param_bMaintainGlobalTransform,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddParent

// Begin Class URigHierarchyController Function AddPhysicsElement
struct Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics
{
	struct RigHierarchyController_eventAddPhysicsElement_Parms
	{
		FName InName;
		FRigElementKey InParent;
		FRigPhysicsSolverID InSolver;
		FRigPhysicsSettings InSettings;
		FTransform InLocalTransform;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09* Adds a physics element to the hierarchy\n\x09* @param InName The suggested name of the new physics element - will eventually be corrected by the namespace\n\x09* @param InParent The (optional) parent of the new physics element. If you don't need a parent, pass FRigElementKey()\n\x09* @param InSolver The guid identifying the solver to use\n\x09* @param InSettings All of the physics element's settings\n\x09* @param InLocalTransform The transform for the new physics element - in the space of the provided parent\n\x09* @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09* @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09* @return The key for the newly created physics element.\n\x09*/" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a physics element to the hierarchy\n@param InName The suggested name of the new physics element - will eventually be corrected by the namespace\n@param InParent The (optional) parent of the new physics element. If you don't need a parent, pass FRigElementKey()\n@param InSolver The guid identifying the solver to use\n@param InSettings All of the physics element's settings\n@param InLocalTransform The transform for the new physics element - in the space of the provided parent\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created physics element." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSolver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocalTransform;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InSolver = { "InSolver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, InSolver), Z_Construct_UScriptStruct_FRigPhysicsSolverID, METADATA_PARAMS(0, nullptr) }; // 2660901627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, InSettings), Z_Construct_UScriptStruct_FRigPhysicsSettings, METADATA_PARAMS(0, nullptr) }; // 2587549020
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InLocalTransform = { "InLocalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, InLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddPhysicsElement_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddPhysicsElement_Parms), &Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddPhysicsElement_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddPhysicsElement_Parms), &Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddPhysicsElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_InLocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddPhysicsElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::RigHierarchyController_eventAddPhysicsElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::RigHierarchyController_eventAddPhysicsElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddPhysicsElement)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_STRUCT(FRigPhysicsSolverID,Z_Param_InSolver);
	P_GET_STRUCT(FRigPhysicsSettings,Z_Param_InSettings);
	P_GET_STRUCT(FTransform,Z_Param_InLocalTransform);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddPhysicsElement(Z_Param_InName,Z_Param_InParent,Z_Param_InSolver,Z_Param_InSettings,Z_Param_InLocalTransform,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddPhysicsElement

// Begin Class URigHierarchyController Function AddSocket
struct Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics
{
	struct RigHierarchyController_eventAddSocket_Parms
	{
		FName InName;
		FRigElementKey InParent;
		FTransform InTransform;
		bool bTransformInGlobal;
		FLinearColor InColor;
		FString InDescription;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Adds a socket to the hierarchy\n\x09 * @param InName The suggested name of the new socket - will eventually be corrected by the namespace\n\x09 * @param InParent The (optional) parent of the new null. If you don't need a parent, pass FRigElementKey()\n\x09 * @param InTransform The transform for the new socket - either in local or global space, based on bTransformInGlobal\n\x09 * @param bTransformInGlobal Set this to true if the Transform passed is expressed in global space, false for local space.\n\x09 * @param InColor The color of the socket\n\x09 * @param InDescription The description of the socket\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The key for the newly created bone.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_bTransformInGlobal", "true" },
		{ "CPP_Default_InColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_InDescription", "" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Adds a socket to the hierarchy\n@param InName The suggested name of the new socket - will eventually be corrected by the namespace\n@param InParent The (optional) parent of the new null. If you don't need a parent, pass FRigElementKey()\n@param InTransform The transform for the new socket - either in local or global space, based on bTransformInGlobal\n@param bTransformInGlobal Set this to true if the Transform passed is expressed in global space, false for local space.\n@param InColor The color of the socket\n@param InDescription The description of the socket\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The key for the newly created bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static void NewProp_bTransformInGlobal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformInGlobal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDescription;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bTransformInGlobal_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddSocket_Parms*)Obj)->bTransformInGlobal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bTransformInGlobal = { "bTransformInGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddSocket_Parms), &Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bTransformInGlobal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColor_MetaData), NewProp_InColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, InDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDescription_MetaData), NewProp_InDescription_MetaData) };
void Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddSocket_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddSocket_Parms), &Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventAddSocket_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventAddSocket_Parms), &Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventAddSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bTransformInGlobal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_InDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "AddSocket", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::RigHierarchyController_eventAddSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::RigHierarchyController_eventAddSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_AddSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_AddSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execAddSocket)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_GET_UBOOL(Z_Param_bTransformInGlobal);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDescription);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->AddSocket(Z_Param_InName,Z_Param_InParent,Z_Param_InTransform,Z_Param_bTransformInGlobal,Z_Param_Out_InColor,Z_Param_InDescription,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function AddSocket

// Begin Class URigHierarchyController Function ClearSelection
struct Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics
{
	struct RigHierarchyController_eventClearSelection_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Clears the selection\n\x09 * @return Returns true if the selection was applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Clears the selection\n@return Returns true if the selection was applied" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventClearSelection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventClearSelection_Parms), &Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ClearSelection", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::RigHierarchyController_eventClearSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::RigHierarchyController_eventClearSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ClearSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ClearSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execClearSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearSelection();
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ClearSelection

// Begin Class URigHierarchyController Function DeselectElement
struct Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics
{
	struct RigHierarchyController_eventDeselectElement_Parms
	{
		FRigElementKey InKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Deselects or deselects an element in the hierarchy\n\x09 * @param InKey The key of the element to deselect\n\x09 * @return Returns true if the selection was applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Deselects or deselects an element in the hierarchy\n@param InKey The key of the element to deselect\n@return Returns true if the selection was applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventDeselectElement_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventDeselectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventDeselectElement_Parms), &Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "DeselectElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::RigHierarchyController_eventDeselectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::RigHierarchyController_eventDeselectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_DeselectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_DeselectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execDeselectElement)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeselectElement(Z_Param_InKey);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function DeselectElement

// Begin Class URigHierarchyController Function DuplicateElements
struct Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics
{
	struct RigHierarchyController_eventDuplicateElements_Parms
	{
		TArray<FRigElementKey> InKeys;
		bool bSelectNewElements;
		bool bSetupUndo;
		bool bPrintPythonCommands;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Duplicate the given elements\n\x09 * @param InKeys The keys of the elements to duplicate\n\x09 * @param bSelectNewElements If set to true the new elements will be selected\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The keys of the 4d items\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSelectNewElements", "true" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Duplicate the given elements\n@param InKeys The keys of the elements to duplicate\n@param bSelectNewElements If set to true the new elements will be selected\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The keys of the 4d items" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static void NewProp_bSelectNewElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNewElements;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventDuplicateElements_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSelectNewElements_SetBit(void* Obj)
{
	((RigHierarchyController_eventDuplicateElements_Parms*)Obj)->bSelectNewElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSelectNewElements = { "bSelectNewElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventDuplicateElements_Parms), &Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSelectNewElements_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventDuplicateElements_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventDuplicateElements_Parms), &Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
{
	((RigHierarchyController_eventDuplicateElements_Parms*)Obj)->bPrintPythonCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventDuplicateElements_Parms), &Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventDuplicateElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_InKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSelectNewElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_bPrintPythonCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "DuplicateElements", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::RigHierarchyController_eventDuplicateElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::RigHierarchyController_eventDuplicateElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_DuplicateElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_DuplicateElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execDuplicateElements)
{
	P_GET_TARRAY(FRigElementKey,Z_Param_InKeys);
	P_GET_UBOOL(Z_Param_bSelectNewElements);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommands);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->DuplicateElements(Z_Param_InKeys,Z_Param_bSelectNewElements,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function DuplicateElements

// Begin Class URigHierarchyController Function ExportSelectionToText
struct Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics
{
	struct RigHierarchyController_eventExportSelectionToText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Exports the selected items to text\n\x09 * @return The text representation of the selected items\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Exports the selected items to text\n@return The text representation of the selected items" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventExportSelectionToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ExportSelectionToText", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::RigHierarchyController_eventExportSelectionToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::RigHierarchyController_eventExportSelectionToText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execExportSelectionToText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ExportSelectionToText();
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ExportSelectionToText

// Begin Class URigHierarchyController Function ExportToText
struct Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics
{
	struct RigHierarchyController_eventExportToText_Parms
	{
		TArray<FRigElementKey> InKeys;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Exports a list of items to text\n\x09 * @param InKeys The keys to export to text\n\x09 * @return The text representation of the requested elements\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Exports a list of items to text\n@param InKeys The keys to export to text\n@return The text representation of the requested elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventExportToText_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventExportToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_InKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ExportToText", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::RigHierarchyController_eventExportToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::RigHierarchyController_eventExportToText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ExportToText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ExportToText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execExportToText)
{
	P_GET_TARRAY(FRigElementKey,Z_Param_InKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ExportToText(Z_Param_InKeys);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ExportToText

// Begin Class URigHierarchyController Function GeneratePythonCommands
#if WITH_EDITOR
struct Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics
{
	struct RigHierarchyController_eventGeneratePythonCommands_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventGeneratePythonCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "GeneratePythonCommands", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::RigHierarchyController_eventGeneratePythonCommands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::RigHierarchyController_eventGeneratePythonCommands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(URigHierarchyController::execGeneratePythonCommands)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GeneratePythonCommands();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class URigHierarchyController Function GeneratePythonCommands

// Begin Class URigHierarchyController Function GetControlSettings
struct Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics
{
	struct RigHierarchyController_eventGetControlSettings_Parms
	{
		FRigElementKey InKey;
		FRigControlSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Returns the control settings of a given control\n\x09 * @param InKey The key of the control to receive the settings for\n\x09 * @return The settings of the given control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Returns the control settings of a given control\n@param InKey The key of the control to receive the settings for\n@return The settings of the given control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventGetControlSettings_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventGetControlSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(0, nullptr) }; // 2892787372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "GetControlSettings", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::RigHierarchyController_eventGetControlSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::RigHierarchyController_eventGetControlSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_GetControlSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_GetControlSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execGetControlSettings)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigControlSettings*)Z_Param__Result=P_THIS->GetControlSettings(Z_Param_InKey);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function GetControlSettings

// Begin Class URigHierarchyController Function GetHierarchy
struct Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics
{
	struct RigHierarchyController_eventGetHierarchy_Parms
	{
		URigHierarchy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "// Returns the hierarchy currently linked to this controller\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Returns the hierarchy currently linked to this controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventGetHierarchy_Parms, ReturnValue), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "GetHierarchy", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::RigHierarchyController_eventGetHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::RigHierarchyController_eventGetHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_GetHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_GetHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execGetHierarchy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URigHierarchy**)Z_Param__Result=P_THIS->GetHierarchy();
	P_NATIVE_END;
}
// End Class URigHierarchyController Function GetHierarchy

// Begin Class URigHierarchyController Function ImportBones
struct Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics
{
	struct RigHierarchyController_eventImportBones_Parms
	{
		USkeleton* InSkeleton;
		FName InNameSpace;
		bool bReplaceExistingBones;
		bool bRemoveObsoleteBones;
		bool bSelectBones;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports an existing skeleton to the hierarchy\n\x09 * @param InSkeleton The skeleton to import\n\x09 * @param InNameSpace The namespace to prefix the bone names with\n\x09 * @param bReplaceExistingBones If true existing bones will be removed\n\x09 * @param bRemoveObsoleteBones If true bones non-existent in the skeleton will be removed from the hierarchy\n\x09 * @param bSelectBones If true the bones will be selected upon import\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The keys of the imported elements\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bRemoveObsoleteBones", "true" },
		{ "CPP_Default_bReplaceExistingBones", "true" },
		{ "CPP_Default_bSelectBones", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InNameSpace", "None" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports an existing skeleton to the hierarchy\n@param InSkeleton The skeleton to import\n@param InNameSpace The namespace to prefix the bone names with\n@param bReplaceExistingBones If true existing bones will be removed\n@param bRemoveObsoleteBones If true bones non-existent in the skeleton will be removed from the hierarchy\n@param bSelectBones If true the bones will be selected upon import\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The keys of the imported elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNameSpace;
	static void NewProp_bReplaceExistingBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingBones;
	static void NewProp_bRemoveObsoleteBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveObsoleteBones;
	static void NewProp_bSelectBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectBones;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBones_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_InNameSpace = { "InNameSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBones_Parms, InNameSpace), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bReplaceExistingBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBones_Parms*)Obj)->bReplaceExistingBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bReplaceExistingBones = { "bReplaceExistingBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBones_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bReplaceExistingBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bRemoveObsoleteBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBones_Parms*)Obj)->bRemoveObsoleteBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bRemoveObsoleteBones = { "bRemoveObsoleteBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBones_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bRemoveObsoleteBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSelectBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBones_Parms*)Obj)->bSelectBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSelectBones = { "bSelectBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBones_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSelectBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBones_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBones_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBones_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBones_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBones_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_InSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_InNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bReplaceExistingBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bRemoveObsoleteBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSelectBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportBones", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::RigHierarchyController_eventImportBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::RigHierarchyController_eventImportBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execImportBones)
{
	P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
	P_GET_PROPERTY(FNameProperty,Z_Param_InNameSpace);
	P_GET_UBOOL(Z_Param_bReplaceExistingBones);
	P_GET_UBOOL(Z_Param_bRemoveObsoleteBones);
	P_GET_UBOOL(Z_Param_bSelectBones);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportBones(Z_Param_InSkeleton,Z_Param_InNameSpace,Z_Param_bReplaceExistingBones,Z_Param_bRemoveObsoleteBones,Z_Param_bSelectBones,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ImportBones

// Begin Class URigHierarchyController Function ImportBonesFromAsset
#if WITH_EDITOR
struct Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics
{
	struct RigHierarchyController_eventImportBonesFromAsset_Parms
	{
		FString InAssetPath;
		FName InNameSpace;
		bool bReplaceExistingBones;
		bool bRemoveObsoleteBones;
		bool bSelectBones;
		bool bSetupUndo;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports an existing skeleton to the hierarchy\n\x09 * @param InAssetPath The path to the uasset to import from\n\x09 * @param InNameSpace The namespace to prefix the bone names with\n\x09 * @param bReplaceExistingBones If true existing bones will be removed\n\x09 * @param bRemoveObsoleteBones If true bones non-existent in the skeleton will be removed from the hierarchy\n\x09 * @param bSelectBones If true the bones will be selected upon import\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The keys of the imported elements\n\x09 */" },
		{ "CPP_Default_bRemoveObsoleteBones", "true" },
		{ "CPP_Default_bReplaceExistingBones", "true" },
		{ "CPP_Default_bSelectBones", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InNameSpace", "None" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports an existing skeleton to the hierarchy\n@param InAssetPath The path to the uasset to import from\n@param InNameSpace The namespace to prefix the bone names with\n@param bReplaceExistingBones If true existing bones will be removed\n@param bRemoveObsoleteBones If true bones non-existent in the skeleton will be removed from the hierarchy\n@param bSelectBones If true the bones will be selected upon import\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The keys of the imported elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNameSpace;
	static void NewProp_bReplaceExistingBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingBones;
	static void NewProp_bRemoveObsoleteBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveObsoleteBones;
	static void NewProp_bSelectBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectBones;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBonesFromAsset_Parms, InAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_InNameSpace = { "InNameSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBonesFromAsset_Parms, InNameSpace), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bReplaceExistingBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBonesFromAsset_Parms*)Obj)->bReplaceExistingBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bReplaceExistingBones = { "bReplaceExistingBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBonesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bReplaceExistingBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bRemoveObsoleteBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBonesFromAsset_Parms*)Obj)->bRemoveObsoleteBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bRemoveObsoleteBones = { "bRemoveObsoleteBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBonesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bRemoveObsoleteBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSelectBones_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBonesFromAsset_Parms*)Obj)->bSelectBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSelectBones = { "bSelectBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBonesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSelectBones_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportBonesFromAsset_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportBonesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportBonesFromAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_InAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_InNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bReplaceExistingBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bRemoveObsoleteBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSelectBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportBonesFromAsset", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::RigHierarchyController_eventImportBonesFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::RigHierarchyController_eventImportBonesFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(URigHierarchyController::execImportBonesFromAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
	P_GET_PROPERTY(FNameProperty,Z_Param_InNameSpace);
	P_GET_UBOOL(Z_Param_bReplaceExistingBones);
	P_GET_UBOOL(Z_Param_bRemoveObsoleteBones);
	P_GET_UBOOL(Z_Param_bSelectBones);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportBonesFromAsset(Z_Param_InAssetPath,Z_Param_InNameSpace,Z_Param_bReplaceExistingBones,Z_Param_bRemoveObsoleteBones,Z_Param_bSelectBones,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class URigHierarchyController Function ImportBonesFromAsset

// Begin Class URigHierarchyController Function ImportCurves
struct Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics
{
	struct RigHierarchyController_eventImportCurves_Parms
	{
		USkeleton* InSkeleton;
		FName InNameSpace;
		bool bSelectCurves;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports all curves from a skeleton to the hierarchy\n\x09 * @param InSkeleton The skeleton to import the curves from\n\x09 * @param InNameSpace The namespace to prefix the bone names with\n\x09 * @param bSelectCurves If true the curves will be selected upon import\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The keys of the imported elements\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSelectCurves", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InNameSpace", "None" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports all curves from a skeleton to the hierarchy\n@param InSkeleton The skeleton to import the curves from\n@param InNameSpace The namespace to prefix the bone names with\n@param bSelectCurves If true the curves will be selected upon import\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The keys of the imported elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNameSpace;
	static void NewProp_bSelectCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectCurves;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurves_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_InNameSpace = { "InNameSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurves_Parms, InNameSpace), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSelectCurves_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurves_Parms*)Obj)->bSelectCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSelectCurves = { "bSelectCurves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurves_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSelectCurves_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurves_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurves_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurves_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurves_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_InSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_InNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSelectCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportCurves", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::RigHierarchyController_eventImportCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::RigHierarchyController_eventImportCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execImportCurves)
{
	P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
	P_GET_PROPERTY(FNameProperty,Z_Param_InNameSpace);
	P_GET_UBOOL(Z_Param_bSelectCurves);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportCurves(Z_Param_InSkeleton,Z_Param_InNameSpace,Z_Param_bSelectCurves,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ImportCurves

// Begin Class URigHierarchyController Function ImportCurvesFromAsset
#if WITH_EDITOR
struct Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics
{
	struct RigHierarchyController_eventImportCurvesFromAsset_Parms
	{
		FString InAssetPath;
		FName InNameSpace;
		bool bSelectCurves;
		bool bSetupUndo;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports all curves from a skeleton to the hierarchy\n\x09 * @param InAssetPath The path to the uasset to import from\n\x09 * @param InNameSpace The namespace to prefix the bone names with\n\x09 * @param bSelectCurves If true the curves will be selected upon import\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The keys of the imported elements\n\x09 */" },
		{ "CPP_Default_bSelectCurves", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InNameSpace", "None" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports all curves from a skeleton to the hierarchy\n@param InAssetPath The path to the uasset to import from\n@param InNameSpace The namespace to prefix the bone names with\n@param bSelectCurves If true the curves will be selected upon import\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The keys of the imported elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNameSpace;
	static void NewProp_bSelectCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectCurves;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromAsset_Parms, InAssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_InNameSpace = { "InNameSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromAsset_Parms, InNameSpace), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSelectCurves_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurvesFromAsset_Parms*)Obj)->bSelectCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSelectCurves = { "bSelectCurves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurvesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSelectCurves_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurvesFromAsset_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurvesFromAsset_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_InAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_InNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSelectCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportCurvesFromAsset", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::RigHierarchyController_eventImportCurvesFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::RigHierarchyController_eventImportCurvesFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(URigHierarchyController::execImportCurvesFromAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
	P_GET_PROPERTY(FNameProperty,Z_Param_InNameSpace);
	P_GET_UBOOL(Z_Param_bSelectCurves);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportCurvesFromAsset(Z_Param_InAssetPath,Z_Param_InNameSpace,Z_Param_bSelectCurves,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class URigHierarchyController Function ImportCurvesFromAsset

// Begin Class URigHierarchyController Function ImportCurvesFromSkeletalMesh
struct Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics
{
	struct RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms
	{
		USkeletalMesh* InSkeletalMesh;
		FName InNameSpace;
		bool bSelectCurves;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports all curves from a skeletalmesh to the hierarchy\n\x09 * @param InSkeletalMesh The skeletalmesh to import the curves from\n\x09 * @param InNameSpace The namespace to prefix the bone names with\n\x09 * @param bSelectCurves If true the curves will be selected upon import\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @return The keys of the imported elements\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSelectCurves", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InNameSpace", "None" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports all curves from a skeletalmesh to the hierarchy\n@param InSkeletalMesh The skeletalmesh to import the curves from\n@param InNameSpace The namespace to prefix the bone names with\n@param bSelectCurves If true the curves will be selected upon import\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@return The keys of the imported elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNameSpace;
	static void NewProp_bSelectCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectCurves;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_InNameSpace = { "InNameSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms, InNameSpace), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSelectCurves_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms*)Obj)->bSelectCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSelectCurves = { "bSelectCurves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSelectCurves_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_InSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_InNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSelectCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportCurvesFromSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::RigHierarchyController_eventImportCurvesFromSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execImportCurvesFromSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_InNameSpace);
	P_GET_UBOOL(Z_Param_bSelectCurves);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportCurvesFromSkeletalMesh(Z_Param_InSkeletalMesh,Z_Param_InNameSpace,Z_Param_bSelectCurves,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ImportCurvesFromSkeletalMesh

// Begin Class URigHierarchyController Function ImportFromText
struct Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics
{
	struct RigHierarchyController_eventImportFromText_Parms
	{
		FString InContent;
		bool bReplaceExistingElements;
		bool bSelectNewElements;
		bool bSetupUndo;
		bool bPrintPythonCommands;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Imports the content of a text buffer to the hierarchy\n\x09 * @param InContent The string buffer representing the content to import\n\x09 * @param bReplaceExistingElements If set to true existing items will be replaced / updated with the content in the buffer\n\x09 * @param bSelectNewElements If set to true the new elements will be selected\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bReplaceExistingElements", "false" },
		{ "CPP_Default_bSelectNewElements", "true" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Imports the content of a text buffer to the hierarchy\n@param InContent The string buffer representing the content to import\n@param bReplaceExistingElements If set to true existing items will be replaced / updated with the content in the buffer\n@param bSelectNewElements If set to true the new elements will be selected\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InContent;
	static void NewProp_bReplaceExistingElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingElements;
	static void NewProp_bSelectNewElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNewElements;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_InContent = { "InContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportFromText_Parms, InContent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bReplaceExistingElements_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportFromText_Parms*)Obj)->bReplaceExistingElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bReplaceExistingElements = { "bReplaceExistingElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportFromText_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bReplaceExistingElements_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSelectNewElements_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportFromText_Parms*)Obj)->bSelectNewElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSelectNewElements = { "bSelectNewElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportFromText_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSelectNewElements_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportFromText_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportFromText_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
{
	((RigHierarchyController_eventImportFromText_Parms*)Obj)->bPrintPythonCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventImportFromText_Parms), &Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventImportFromText_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_InContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bReplaceExistingElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSelectNewElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_bPrintPythonCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ImportFromText", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::RigHierarchyController_eventImportFromText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::RigHierarchyController_eventImportFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ImportFromText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ImportFromText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execImportFromText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InContent);
	P_GET_UBOOL(Z_Param_bReplaceExistingElements);
	P_GET_UBOOL(Z_Param_bSelectNewElements);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommands);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->ImportFromText(Z_Param_InContent,Z_Param_bReplaceExistingElements,Z_Param_bSelectNewElements,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ImportFromText

// Begin Class URigHierarchyController Function MirrorElements
struct Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics
{
	struct RigHierarchyController_eventMirrorElements_Parms
	{
		TArray<FRigElementKey> InKeys;
		FRigVMMirrorSettings InSettings;
		bool bSelectNewElements;
		bool bSetupUndo;
		bool bPrintPythonCommands;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Mirrors the given elements\n\x09 * @param InKeys The keys of the elements to mirror\n\x09 * @param InSettings The settings to use for the mirror operation\n\x09 * @param bSelectNewElements If set to true the new elements will be selected\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return The keys of the mirrored items\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSelectNewElements", "true" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Mirrors the given elements\n@param InKeys The keys of the elements to mirror\n@param InSettings The settings to use for the mirror operation\n@param bSelectNewElements If set to true the new elements will be selected\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return The keys of the mirrored items" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bSelectNewElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNewElements;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventMirrorElements_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventMirrorElements_Parms, InSettings), Z_Construct_UScriptStruct_FRigVMMirrorSettings, METADATA_PARAMS(0, nullptr) }; // 2535337673
void Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSelectNewElements_SetBit(void* Obj)
{
	((RigHierarchyController_eventMirrorElements_Parms*)Obj)->bSelectNewElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSelectNewElements = { "bSelectNewElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventMirrorElements_Parms), &Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSelectNewElements_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventMirrorElements_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventMirrorElements_Parms), &Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
{
	((RigHierarchyController_eventMirrorElements_Parms*)Obj)->bPrintPythonCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventMirrorElements_Parms), &Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventMirrorElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSelectNewElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_bPrintPythonCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "MirrorElements", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::RigHierarchyController_eventMirrorElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::RigHierarchyController_eventMirrorElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_MirrorElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_MirrorElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execMirrorElements)
{
	P_GET_TARRAY(FRigElementKey,Z_Param_InKeys);
	P_GET_STRUCT(FRigVMMirrorSettings,Z_Param_InSettings);
	P_GET_UBOOL(Z_Param_bSelectNewElements);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommands);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->MirrorElements(Z_Param_InKeys,Z_Param_InSettings,Z_Param_bSelectNewElements,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function MirrorElements

// Begin Class URigHierarchyController Function RemoveAllParents
struct Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics
{
	struct RigHierarchyController_eventRemoveAllParents_Parms
	{
		FRigElementKey InChild;
		bool bMaintainGlobalTransform;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n \x09 * Removes all parents from an element in the hierarchy.\n \x09 * @param InChild The key of the element to remove all parents for\n \x09 * @param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bMaintainGlobalTransform", "true" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Removes all parents from an element in the hierarchy.\n@param InChild The key of the element to remove all parents for\n@param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
	static void NewProp_bMaintainGlobalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainGlobalTransform;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveAllParents_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bMaintainGlobalTransform_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAllParents_Parms*)Obj)->bMaintainGlobalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bMaintainGlobalTransform = { "bMaintainGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAllParents_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bMaintainGlobalTransform_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAllParents_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAllParents_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAllParents_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAllParents_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAllParents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAllParents_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_InChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bMaintainGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RemoveAllParents", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::RigHierarchyController_eventRemoveAllParents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::RigHierarchyController_eventRemoveAllParents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RemoveAllParents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RemoveAllParents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRemoveAllParents)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
	P_GET_UBOOL(Z_Param_bMaintainGlobalTransform);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllParents(Z_Param_InChild,Z_Param_bMaintainGlobalTransform,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RemoveAllParents

// Begin Class URigHierarchyController Function RemoveAvailableSpace
struct Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics
{
	struct RigHierarchyController_eventRemoveAvailableSpace_Parms
	{
		FRigElementKey InControl;
		FRigElementKey InSpace;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Removes an available space from the given control\n\x09 * @param InControl The control to remove the available space from\n\x09 * @param InSpace The space to remove from the available spaces list\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Removes an available space from the given control\n@param InControl The control to remove the available space from\n@param InSpace The space to remove from the available spaces list\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpace;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_InControl = { "InControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveAvailableSpace_Parms, InControl), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_InSpace = { "InSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveAvailableSpace_Parms, InSpace), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAvailableSpace_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAvailableSpace_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveAvailableSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveAvailableSpace_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_InControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_InSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RemoveAvailableSpace", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::RigHierarchyController_eventRemoveAvailableSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::RigHierarchyController_eventRemoveAvailableSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRemoveAvailableSpace)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InControl);
	P_GET_STRUCT(FRigElementKey,Z_Param_InSpace);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAvailableSpace(Z_Param_InControl,Z_Param_InSpace,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RemoveAvailableSpace

// Begin Class URigHierarchyController Function RemoveChannelHost
struct Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics
{
	struct RigHierarchyController_eventRemoveChannelHost_Parms
	{
		FRigElementKey InChannel;
		FRigElementKey InHost;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Removes an channel host from the animation channel\n\x09 * @note This is just an overload of RemoveAvailableSpace for readability\n\x09 * @param InChannel The animation channel to remove the channel host from\n\x09 * @param InHost The host to remove from the channel from\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Removes an channel host from the animation channel\n@note This is just an overload of RemoveAvailableSpace for readability\n@param InChannel The animation channel to remove the channel host from\n@param InHost The host to remove from the channel from\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHost;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveChannelHost_Parms, InChannel), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_InHost = { "InHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveChannelHost_Parms, InHost), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveChannelHost_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveChannelHost_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveChannelHost_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveChannelHost_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_InChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_InHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RemoveChannelHost", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::RigHierarchyController_eventRemoveChannelHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::RigHierarchyController_eventRemoveChannelHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRemoveChannelHost)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChannel);
	P_GET_STRUCT(FRigElementKey,Z_Param_InHost);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveChannelHost(Z_Param_InChannel,Z_Param_InHost,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RemoveChannelHost

// Begin Class URigHierarchyController Function RemoveElement
struct Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics
{
	struct RigHierarchyController_eventRemoveElement_Parms
	{
		FRigElementKey InElement;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Removes an existing element from the hierarchy\n\x09 * @param InElement The key of the element to remove\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Removes an existing element from the hierarchy\n@param InElement The key of the element to remove\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElement;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveElement_Parms, InElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveElement_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveElement_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_InElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RemoveElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::RigHierarchyController_eventRemoveElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::RigHierarchyController_eventRemoveElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RemoveElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RemoveElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRemoveElement)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InElement);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveElement(Z_Param_InElement,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RemoveElement

// Begin Class URigHierarchyController Function RemoveParent
struct Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics
{
	struct RigHierarchyController_eventRemoveParent_Parms
	{
		FRigElementKey InChild;
		FRigElementKey InParent;
		bool bMaintainGlobalTransform;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Removes an existing parent from an element in the hierarchy. For elements that allow only one parent the element will be unparented (same as ::RemoveAllParents)\n\x09 * @param InChild The key of the element to remove the parent for\n\x09 * @param InParent The key of the parent to remove\n\x09 * @param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bMaintainGlobalTransform", "true" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Removes an existing parent from an element in the hierarchy. For elements that allow only one parent the element will be unparented (same as ::RemoveAllParents)\n@param InChild The key of the element to remove the parent for\n@param InParent The key of the parent to remove\n@param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static void NewProp_bMaintainGlobalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainGlobalTransform;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveParent_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRemoveParent_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bMaintainGlobalTransform_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveParent_Parms*)Obj)->bMaintainGlobalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bMaintainGlobalTransform = { "bMaintainGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveParent_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bMaintainGlobalTransform_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveParent_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveParent_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveParent_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveParent_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventRemoveParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRemoveParent_Parms), &Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_InChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bMaintainGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RemoveParent", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::RigHierarchyController_eventRemoveParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::RigHierarchyController_eventRemoveParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RemoveParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RemoveParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRemoveParent)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_UBOOL(Z_Param_bMaintainGlobalTransform);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveParent(Z_Param_InChild,Z_Param_InParent,Z_Param_bMaintainGlobalTransform,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RemoveParent

// Begin Class URigHierarchyController Function RenameElement
struct Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics
{
	struct RigHierarchyController_eventRenameElement_Parms
	{
		FRigElementKey InElement;
		FName InName;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool bClearSelection;
		FRigElementKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Renames an existing element in the hierarchy\n\x09 * @param InElement The key of the element to rename\n\x09 * @param InName The new name to set for the element\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @param bClearSelection True if the selection should be cleared after a rename\n\x09 * @return Returns the new element key used for the element\n\x09 */" },
		{ "CPP_Default_bClearSelection", "true" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Renames an existing element in the hierarchy\n@param InElement The key of the element to rename\n@param InName The new name to set for the element\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@param bClearSelection True if the selection should be cleared after a rename\n@return Returns the new element key used for the element" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElement;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_bClearSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRenameElement_Parms, InElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRenameElement_Parms, InName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventRenameElement_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRenameElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventRenameElement_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRenameElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bClearSelection_SetBit(void* Obj)
{
	((RigHierarchyController_eventRenameElement_Parms*)Obj)->bClearSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bClearSelection = { "bClearSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventRenameElement_Parms), &Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bClearSelection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventRenameElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_InElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_bClearSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "RenameElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::RigHierarchyController_eventRenameElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::RigHierarchyController_eventRenameElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_RenameElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_RenameElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execRenameElement)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InElement);
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_GET_UBOOL(Z_Param_bClearSelection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigElementKey*)Z_Param__Result=P_THIS->RenameElement(Z_Param_InElement,Z_Param_InName,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand,Z_Param_bClearSelection);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function RenameElement

// Begin Class URigHierarchyController Function ReorderElement
struct Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics
{
	struct RigHierarchyController_eventReorderElement_Parms
	{
		FRigElementKey InElement;
		int32 InIndex;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Changes the element's index within its default parent (or the top level)\n\x09 * @param InElement The key of the element to rename\n\x09 * @param InIndex The new index of the element to take within its default parent (or the top level)\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if the element has been reordered accordingly\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Changes the element's index within its default parent (or the top level)\n@param InElement The key of the element to rename\n@param InIndex The new index of the element to take within its default parent (or the top level)\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if the element has been reordered accordingly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventReorderElement_Parms, InElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventReorderElement_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventReorderElement_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventReorderElement_Parms), &Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventReorderElement_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventReorderElement_Parms), &Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventReorderElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventReorderElement_Parms), &Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_InElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "ReorderElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::RigHierarchyController_eventReorderElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::RigHierarchyController_eventReorderElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_ReorderElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_ReorderElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execReorderElement)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InElement);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReorderElement(Z_Param_InElement,Z_Param_InIndex,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function ReorderElement

// Begin Class URigHierarchyController Function SelectElement
struct Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics
{
	struct RigHierarchyController_eventSelectElement_Parms
	{
		FRigElementKey InKey;
		bool bSelect;
		bool bClearSelection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Selects or deselects an element in the hierarchy\n\x09 * @param InKey The key of the element to select\n\x09 * @param bSelect If set to false the element will be deselected\n\x09 * @return Returns true if the selection was applied\n\x09 */" },
		{ "CPP_Default_bClearSelection", "false" },
		{ "CPP_Default_bSelect", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Selects or deselects an element in the hierarchy\n@param InKey The key of the element to select\n@param bSelect If set to false the element will be deselected\n@return Returns true if the selection was applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static void NewProp_bClearSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearSelection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSelectElement_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((RigHierarchyController_eventSelectElement_Parms*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSelectElement_Parms), &Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bClearSelection_SetBit(void* Obj)
{
	((RigHierarchyController_eventSelectElement_Parms*)Obj)->bClearSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bClearSelection = { "bClearSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSelectElement_Parms), &Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bClearSelection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventSelectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSelectElement_Parms), &Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_bClearSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SelectElement", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::RigHierarchyController_eventSelectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::RigHierarchyController_eventSelectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SelectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SelectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSelectElement)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
	P_GET_UBOOL(Z_Param_bSelect);
	P_GET_UBOOL(Z_Param_bClearSelection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectElement(Z_Param_InKey,Z_Param_bSelect,Z_Param_bClearSelection);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SelectElement

// Begin Class URigHierarchyController Function SetAvailableSpaceIndex
struct Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics
{
	struct RigHierarchyController_eventSetAvailableSpaceIndex_Parms
	{
		FRigElementKey InControl;
		FRigElementKey InSpace;
		int32 InIndex;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Reorders an available space for the given control\n\x09 * @param InControl The control to reorder the host for\n\x09 * @param InSpace The space to set the new index for\n\x09 * @param InIndex The new index of the available space\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Reorders an available space for the given control\n@param InControl The control to reorder the host for\n@param InSpace The space to set the new index for\n@param InIndex The new index of the available space\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InControl = { "InControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetAvailableSpaceIndex_Parms, InControl), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InSpace = { "InSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetAvailableSpaceIndex_Parms, InSpace), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetAvailableSpaceIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetAvailableSpaceIndex_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetAvailableSpaceIndex_Parms), &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetAvailableSpaceIndex_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetAvailableSpaceIndex_Parms), &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetAvailableSpaceIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetAvailableSpaceIndex_Parms), &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetAvailableSpaceIndex", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::RigHierarchyController_eventSetAvailableSpaceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::RigHierarchyController_eventSetAvailableSpaceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetAvailableSpaceIndex)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InControl);
	P_GET_STRUCT(FRigElementKey,Z_Param_InSpace);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAvailableSpaceIndex(Z_Param_InControl,Z_Param_InSpace,Z_Param_InIndex,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetAvailableSpaceIndex

// Begin Class URigHierarchyController Function SetControlSettings
struct Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics
{
	struct RigHierarchyController_eventSetControlSettings_Parms
	{
		FRigElementKey InKey;
		FRigControlSettings InSettings;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Sets a control's settings given a control key\n\x09 * @param InKey The key of the control to set the settings for\n\x09 * @param The settings to set\n\x09 * @return Returns true if the settings have been set correctly\n\x09 */" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Sets a control's settings given a control key\n@param InKey The key of the control to set the settings for\n@param The settings to set\n@return Returns true if the settings have been set correctly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetControlSettings_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetControlSettings_Parms, InSettings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(0, nullptr) }; // 2892787372
void Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetControlSettings_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetControlSettings_Parms), &Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetControlSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetControlSettings_Parms), &Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetControlSettings", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::RigHierarchyController_eventSetControlSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::RigHierarchyController_eventSetControlSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetControlSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetControlSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetControlSettings)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
	P_GET_STRUCT(FRigControlSettings,Z_Param_InSettings);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetControlSettings(Z_Param_InKey,Z_Param_InSettings,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetControlSettings

// Begin Class URigHierarchyController Function SetDisplayName
struct Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics
{
	struct RigHierarchyController_eventSetDisplayName_Parms
	{
		FRigElementKey InControl;
		FName InDisplayName;
		bool bRenameElement;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n \x09 * Sets the display name on a control\n \x09 * @param InControl The key of the control to change the display name for\n \x09 * @param InDisplayName The new display name to set for the control\n \x09 * @param bRenameElement True if the control should also be renamed\n \x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n \x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns the new display name used for the control\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bRenameElement", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Sets the display name on a control\n@param InControl The key of the control to change the display name for\n@param InDisplayName The new display name to set for the control\n@param bRenameElement True if the control should also be renamed\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns the new display name used for the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InControl;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InDisplayName;
	static void NewProp_bRenameElement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenameElement;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_InControl = { "InControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetDisplayName_Parms, InControl), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_InDisplayName = { "InDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetDisplayName_Parms, InDisplayName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bRenameElement_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetDisplayName_Parms*)Obj)->bRenameElement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bRenameElement = { "bRenameElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetDisplayName_Parms), &Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bRenameElement_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetDisplayName_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetDisplayName_Parms), &Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetDisplayName_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetDisplayName_Parms), &Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_InControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_InDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bRenameElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::RigHierarchyController_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::RigHierarchyController_eventSetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetDisplayName)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InControl);
	P_GET_PROPERTY(FNameProperty,Z_Param_InDisplayName);
	P_GET_UBOOL(Z_Param_bRenameElement);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->SetDisplayName(Z_Param_InControl,Z_Param_InDisplayName,Z_Param_bRenameElement,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetDisplayName

// Begin Class URigHierarchyController Function SetHierarchy
struct Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics
{
	struct RigHierarchyController_eventSetHierarchy_Parms
	{
		URigHierarchy* InHierarchy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "// Sets the hierarchy currently linked to this controller\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Sets the hierarchy currently linked to this controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InHierarchy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::NewProp_InHierarchy = { "InHierarchy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetHierarchy_Parms, InHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::NewProp_InHierarchy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetHierarchy", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::RigHierarchyController_eventSetHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::RigHierarchyController_eventSetHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetHierarchy)
{
	P_GET_OBJECT(URigHierarchy,Z_Param_InHierarchy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHierarchy(Z_Param_InHierarchy);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetHierarchy

// Begin Class URigHierarchyController Function SetParent
struct Z_Construct_UFunction_URigHierarchyController_SetParent_Statics
{
	struct RigHierarchyController_eventSetParent_Parms
	{
		FRigElementKey InChild;
		FRigElementKey InParent;
		bool bMaintainGlobalTransform;
		bool bSetupUndo;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Sets a new parent to an element. For elements that allow more than one parent the parent list will be replaced.\n\x09 * @param InChild The key of the element to set the parent for\n\x09 * @param InParent The key of the new parent to set\n\x09 * @param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n\x09 * @param bSetupUndo If set to true the stack will record the change for undo / redo\n\x09 * @param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n\x09 * @return Returns true if successful.\n\x09 */" },
		{ "CPP_Default_bMaintainGlobalTransform", "true" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Sets a new parent to an element. For elements that allow more than one parent the parent list will be replaced.\n@param InChild The key of the element to set the parent for\n@param InParent The key of the new parent to set\n@param bMaintainGlobalTransform If set to true the child will stay in the same place spatially, otherwise it will maintain it's local transform (and potential move).\n@param bSetupUndo If set to true the stack will record the change for undo / redo\n@param bPrintPythonCommand If set to true a python command equivalent to this call will be printed out\n@return Returns true if successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
	static void NewProp_bMaintainGlobalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainGlobalTransform;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetParent_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetParent_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bMaintainGlobalTransform_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetParent_Parms*)Obj)->bMaintainGlobalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bMaintainGlobalTransform = { "bMaintainGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetParent_Parms), &Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bMaintainGlobalTransform_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetParent_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetParent_Parms), &Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetParent_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetParent_Parms), &Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetParent_Parms), &Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_InChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_InParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bMaintainGlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetParent", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::RigHierarchyController_eventSetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::RigHierarchyController_eventSetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetParent)
{
	P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
	P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
	P_GET_UBOOL(Z_Param_bMaintainGlobalTransform);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetParent(Z_Param_InChild,Z_Param_InParent,Z_Param_bMaintainGlobalTransform,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetParent

// Begin Class URigHierarchyController Function SetSelection
struct Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics
{
	struct RigHierarchyController_eventSetSelection_Parms
	{
		TArray<FRigElementKey> InKeys;
		bool bPrintPythonCommand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "URigHierarchyController" },
		{ "Comment", "/**\n\x09 * Sets the selection based on a list of keys\n\x09 * @param InKeys The array of keys of the elements to select\n\x09 * @return Returns true if the selection was applied\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
		{ "ToolTip", "Sets the selection based on a list of keys\n@param InKeys The array of keys of the elements to select\n@return Returns true if the selection was applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
	static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1315948141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigHierarchyController_eventSetSelection_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeys_MetaData), NewProp_InKeys_MetaData) }; // 1315948141
void Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetSelection_Parms*)Obj)->bPrintPythonCommand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetSelection_Parms), &Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigHierarchyController_eventSetSelection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigHierarchyController_eventSetSelection_Parms), &Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_InKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_InKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_bPrintPythonCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchyController, nullptr, "SetSelection", nullptr, nullptr, Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::RigHierarchyController_eventSetSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::RigHierarchyController_eventSetSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigHierarchyController_SetSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchyController_SetSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigHierarchyController::execSetSelection)
{
	P_GET_TARRAY_REF(FRigElementKey,Z_Param_Out_InKeys);
	P_GET_UBOOL(Z_Param_bPrintPythonCommand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSelection(Z_Param_Out_InKeys,Z_Param_bPrintPythonCommand);
	P_NATIVE_END;
}
// End Class URigHierarchyController Function SetSelection

// Begin Class URigHierarchyController
void URigHierarchyController::StaticRegisterNativesURigHierarchyController()
{
	UClass* Class = URigHierarchyController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAnimationChannel_ForBlueprint", &URigHierarchyController::execAddAnimationChannel_ForBlueprint },
		{ "AddAvailableSpace", &URigHierarchyController::execAddAvailableSpace },
		{ "AddBone", &URigHierarchyController::execAddBone },
		{ "AddChannelHost", &URigHierarchyController::execAddChannelHost },
		{ "AddConnector", &URigHierarchyController::execAddConnector },
		{ "AddControl_ForBlueprint", &URigHierarchyController::execAddControl_ForBlueprint },
		{ "AddCurve", &URigHierarchyController::execAddCurve },
		{ "AddNull", &URigHierarchyController::execAddNull },
		{ "AddParent", &URigHierarchyController::execAddParent },
		{ "AddPhysicsElement", &URigHierarchyController::execAddPhysicsElement },
		{ "AddSocket", &URigHierarchyController::execAddSocket },
		{ "ClearSelection", &URigHierarchyController::execClearSelection },
		{ "DeselectElement", &URigHierarchyController::execDeselectElement },
		{ "DuplicateElements", &URigHierarchyController::execDuplicateElements },
		{ "ExportSelectionToText", &URigHierarchyController::execExportSelectionToText },
		{ "ExportToText", &URigHierarchyController::execExportToText },
#if WITH_EDITOR
		{ "GeneratePythonCommands", &URigHierarchyController::execGeneratePythonCommands },
#endif // WITH_EDITOR
		{ "GetControlSettings", &URigHierarchyController::execGetControlSettings },
		{ "GetHierarchy", &URigHierarchyController::execGetHierarchy },
		{ "ImportBones", &URigHierarchyController::execImportBones },
#if WITH_EDITOR
		{ "ImportBonesFromAsset", &URigHierarchyController::execImportBonesFromAsset },
#endif // WITH_EDITOR
		{ "ImportCurves", &URigHierarchyController::execImportCurves },
#if WITH_EDITOR
		{ "ImportCurvesFromAsset", &URigHierarchyController::execImportCurvesFromAsset },
#endif // WITH_EDITOR
		{ "ImportCurvesFromSkeletalMesh", &URigHierarchyController::execImportCurvesFromSkeletalMesh },
		{ "ImportFromText", &URigHierarchyController::execImportFromText },
		{ "MirrorElements", &URigHierarchyController::execMirrorElements },
		{ "RemoveAllParents", &URigHierarchyController::execRemoveAllParents },
		{ "RemoveAvailableSpace", &URigHierarchyController::execRemoveAvailableSpace },
		{ "RemoveChannelHost", &URigHierarchyController::execRemoveChannelHost },
		{ "RemoveElement", &URigHierarchyController::execRemoveElement },
		{ "RemoveParent", &URigHierarchyController::execRemoveParent },
		{ "RenameElement", &URigHierarchyController::execRenameElement },
		{ "ReorderElement", &URigHierarchyController::execReorderElement },
		{ "SelectElement", &URigHierarchyController::execSelectElement },
		{ "SetAvailableSpaceIndex", &URigHierarchyController::execSetAvailableSpaceIndex },
		{ "SetControlSettings", &URigHierarchyController::execSetControlSettings },
		{ "SetDisplayName", &URigHierarchyController::execSetDisplayName },
		{ "SetHierarchy", &URigHierarchyController::execSetHierarchy },
		{ "SetParent", &URigHierarchyController::execSetParent },
		{ "SetSelection", &URigHierarchyController::execSetSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigHierarchyController);
UClass* Z_Construct_UClass_URigHierarchyController_NoRegister()
{
	return URigHierarchyController::StaticClass();
}
struct Z_Construct_UClass_URigHierarchyController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rigs/RigHierarchyController.h" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReportWarningsAndErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bReportWarningsAndErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReportWarningsAndErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URigHierarchyController_AddAnimationChannel_ForBlueprint, "AddAnimationChannel_ForBlueprint" }, // 3873992308
		{ &Z_Construct_UFunction_URigHierarchyController_AddAvailableSpace, "AddAvailableSpace" }, // 2723563934
		{ &Z_Construct_UFunction_URigHierarchyController_AddBone, "AddBone" }, // 286131692
		{ &Z_Construct_UFunction_URigHierarchyController_AddChannelHost, "AddChannelHost" }, // 1417389364
		{ &Z_Construct_UFunction_URigHierarchyController_AddConnector, "AddConnector" }, // 2963849802
		{ &Z_Construct_UFunction_URigHierarchyController_AddControl_ForBlueprint, "AddControl_ForBlueprint" }, // 4019476631
		{ &Z_Construct_UFunction_URigHierarchyController_AddCurve, "AddCurve" }, // 4225057171
		{ &Z_Construct_UFunction_URigHierarchyController_AddNull, "AddNull" }, // 1476894669
		{ &Z_Construct_UFunction_URigHierarchyController_AddParent, "AddParent" }, // 2008910152
		{ &Z_Construct_UFunction_URigHierarchyController_AddPhysicsElement, "AddPhysicsElement" }, // 2420709844
		{ &Z_Construct_UFunction_URigHierarchyController_AddSocket, "AddSocket" }, // 2135892957
		{ &Z_Construct_UFunction_URigHierarchyController_ClearSelection, "ClearSelection" }, // 508974256
		{ &Z_Construct_UFunction_URigHierarchyController_DeselectElement, "DeselectElement" }, // 3416644485
		{ &Z_Construct_UFunction_URigHierarchyController_DuplicateElements, "DuplicateElements" }, // 124235063
		{ &Z_Construct_UFunction_URigHierarchyController_ExportSelectionToText, "ExportSelectionToText" }, // 2262043333
		{ &Z_Construct_UFunction_URigHierarchyController_ExportToText, "ExportToText" }, // 3459950880
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_GeneratePythonCommands, "GeneratePythonCommands" }, // 186862866
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_GetControlSettings, "GetControlSettings" }, // 2829778993
		{ &Z_Construct_UFunction_URigHierarchyController_GetHierarchy, "GetHierarchy" }, // 1880962855
		{ &Z_Construct_UFunction_URigHierarchyController_ImportBones, "ImportBones" }, // 1239728104
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_ImportBonesFromAsset, "ImportBonesFromAsset" }, // 345571651
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_ImportCurves, "ImportCurves" }, // 2730856205
#if WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromAsset, "ImportCurvesFromAsset" }, // 777558789
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_URigHierarchyController_ImportCurvesFromSkeletalMesh, "ImportCurvesFromSkeletalMesh" }, // 1799491239
		{ &Z_Construct_UFunction_URigHierarchyController_ImportFromText, "ImportFromText" }, // 607873212
		{ &Z_Construct_UFunction_URigHierarchyController_MirrorElements, "MirrorElements" }, // 1979520463
		{ &Z_Construct_UFunction_URigHierarchyController_RemoveAllParents, "RemoveAllParents" }, // 1672968974
		{ &Z_Construct_UFunction_URigHierarchyController_RemoveAvailableSpace, "RemoveAvailableSpace" }, // 2965400274
		{ &Z_Construct_UFunction_URigHierarchyController_RemoveChannelHost, "RemoveChannelHost" }, // 3446649391
		{ &Z_Construct_UFunction_URigHierarchyController_RemoveElement, "RemoveElement" }, // 2703313717
		{ &Z_Construct_UFunction_URigHierarchyController_RemoveParent, "RemoveParent" }, // 1138687086
		{ &Z_Construct_UFunction_URigHierarchyController_RenameElement, "RenameElement" }, // 1068248513
		{ &Z_Construct_UFunction_URigHierarchyController_ReorderElement, "ReorderElement" }, // 2678960244
		{ &Z_Construct_UFunction_URigHierarchyController_SelectElement, "SelectElement" }, // 3575896986
		{ &Z_Construct_UFunction_URigHierarchyController_SetAvailableSpaceIndex, "SetAvailableSpaceIndex" }, // 489183169
		{ &Z_Construct_UFunction_URigHierarchyController_SetControlSettings, "SetControlSettings" }, // 2356751741
		{ &Z_Construct_UFunction_URigHierarchyController_SetDisplayName, "SetDisplayName" }, // 3142615453
		{ &Z_Construct_UFunction_URigHierarchyController_SetHierarchy, "SetHierarchy" }, // 4010236475
		{ &Z_Construct_UFunction_URigHierarchyController_SetParent, "SetParent" }, // 808950352
		{ &Z_Construct_UFunction_URigHierarchyController_SetSelection, "SetSelection" }, // 4011256919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigHierarchyController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URigHierarchyController_Statics::NewProp_bReportWarningsAndErrors_SetBit(void* Obj)
{
	((URigHierarchyController*)Obj)->bReportWarningsAndErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigHierarchyController_Statics::NewProp_bReportWarningsAndErrors = { "bReportWarningsAndErrors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigHierarchyController), &Z_Construct_UClass_URigHierarchyController_Statics::NewProp_bReportWarningsAndErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReportWarningsAndErrors_MetaData), NewProp_bReportWarningsAndErrors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigHierarchyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchyController_Statics::NewProp_bReportWarningsAndErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchyController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URigHierarchyController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchyController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigHierarchyController_Statics::ClassParams = {
	&URigHierarchyController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URigHierarchyController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchyController_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchyController_Statics::Class_MetaDataParams), Z_Construct_UClass_URigHierarchyController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigHierarchyController()
{
	if (!Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton, Z_Construct_UClass_URigHierarchyController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigHierarchyController.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<URigHierarchyController>()
{
	return URigHierarchyController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigHierarchyController);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchyController)
// End Class URigHierarchyController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigHierarchyController, URigHierarchyController::StaticClass, TEXT("URigHierarchyController"), &Z_Registration_Info_UClass_URigHierarchyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigHierarchyController), 394999724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_3242814294(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
