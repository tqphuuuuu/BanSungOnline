// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkComponentController.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkRole.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature();
LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References

// Begin Delegate FLiveLinkTickDelegate
struct Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics
{
	struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "LiveLinkTickDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLiveLinkTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickDelegate, float DeltaTime)
{
	struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	LiveLinkTickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLiveLinkTickDelegate

// Begin Delegate FOnControllerMapUpdatedDelegate
struct Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "OnControllerMapUpdatedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerMapUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnControllerMapUpdatedDelegate)
{
	OnControllerMapUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControllerMapUpdatedDelegate

// Begin Class ULiveLinkComponentController Function GetControlledComponent
struct Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics
{
	struct LiveLinkComponentController_eventGetControlledComponent_Parms
	{
		TSubclassOf<ULiveLinkRole> InRoleClass;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Returns the component controlled by the LiveLink controller of the input Role. Returns null if there is no controller for that Role */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Returns the component controlled by the LiveLink controller of the input Role. Returns null if there is no controller for that Role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InRoleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::NewProp_InRoleClass = { "InRoleClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventGetControlledComponent_Parms, InRoleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventGetControlledComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::NewProp_InRoleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "GetControlledComponent", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::LiveLinkComponentController_eventGetControlledComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::LiveLinkComponentController_eventGetControlledComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkComponentController::execGetControlledComponent)
{
	P_GET_OBJECT(UClass,Z_Param_InRoleClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetControlledComponent(Z_Param_InRoleClass);
	P_NATIVE_END;
}
// End Class ULiveLinkComponentController Function GetControlledComponent

// Begin Class ULiveLinkComponentController Function GetSubjectRepresentation
struct Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics
{
	struct LiveLinkComponentController_eventGetSubjectRepresentation_Parms
	{
		FLiveLinkSubjectRepresentation ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Return Representation of Subject that is used in the controller */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Return Representation of Subject that is used in the controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventGetSubjectRepresentation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(0, nullptr) }; // 126873938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "GetSubjectRepresentation", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::LiveLinkComponentController_eventGetSubjectRepresentation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::LiveLinkComponentController_eventGetSubjectRepresentation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkComponentController::execGetSubjectRepresentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLiveLinkSubjectRepresentation*)Z_Param__Result=P_THIS->GetSubjectRepresentation();
	P_NATIVE_END;
}
// End Class ULiveLinkComponentController Function GetSubjectRepresentation

// Begin Class ULiveLinkComponentController Function SetControlledComponent
struct Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics
{
	struct LiveLinkComponentController_eventSetControlledComponent_Parms
	{
		TSubclassOf<ULiveLinkRole> InRoleClass;
		UActorComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Set the component to control for the LiveLink controller of the input Role */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Set the component to control for the LiveLink controller of the input Role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InRoleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::NewProp_InRoleClass = { "InRoleClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventSetControlledComponent_Parms, InRoleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventSetControlledComponent_Parms, InComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::NewProp_InRoleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "SetControlledComponent", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::LiveLinkComponentController_eventSetControlledComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::LiveLinkComponentController_eventSetControlledComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkComponentController::execSetControlledComponent)
{
	P_GET_OBJECT(UClass,Z_Param_InRoleClass);
	P_GET_OBJECT(UActorComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlledComponent(Z_Param_InRoleClass,Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class ULiveLinkComponentController Function SetControlledComponent

// Begin Class ULiveLinkComponentController Function SetSubjectRepresentation
struct Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics
{
	struct LiveLinkComponentController_eventSetSubjectRepresentation_Parms
	{
		FLiveLinkSubjectRepresentation InSubjectRepresentation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set Representation of Subject that is used in the controller and update the controller map */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Set Representation of Subject that is used in the controller and update the controller map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSubjectRepresentation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::NewProp_InSubjectRepresentation = { "InSubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkComponentController_eventSetSubjectRepresentation_Parms, InSubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(0, nullptr) }; // 126873938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::NewProp_InSubjectRepresentation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "SetSubjectRepresentation", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::LiveLinkComponentController_eventSetSubjectRepresentation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::LiveLinkComponentController_eventSetSubjectRepresentation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkComponentController::execSetSubjectRepresentation)
{
	P_GET_STRUCT(FLiveLinkSubjectRepresentation,Z_Param_InSubjectRepresentation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubjectRepresentation(Z_Param_InSubjectRepresentation);
	P_NATIVE_END;
}
// End Class ULiveLinkComponentController Function SetSubjectRepresentation

// Begin Class ULiveLinkComponentController
void ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController()
{
	UClass* Class = ULiveLinkComponentController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetControlledComponent", &ULiveLinkComponentController::execGetControlledComponent },
		{ "GetSubjectRepresentation", &ULiveLinkComponentController::execGetSubjectRepresentation },
		{ "SetControlledComponent", &ULiveLinkComponentController::execSetControlledComponent },
		{ "SetSubjectRepresentation", &ULiveLinkComponentController::execSetSubjectRepresentation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkComponentController);
UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister()
{
	return ULiveLinkComponentController::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkComponentController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "DisplayName", "LiveLink Controller" },
		{ "IncludePath", "LiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectRepresentation_MetaData[] = {
		{ "BlueprintGetter", "GetSubjectRepresentation" },
		{ "BlueprintSetter", "SetSubjectRepresentation" },
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_ValueProp_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerMapUpdatedDelegate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time the controller map is updated\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time the controller map is updated" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateLiveLink_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If false, will not evaluate live link, effectively pausing.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If false, will not evaluate live link, effectively pausing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInPreviewEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If true, will tick when the world is a preview (i.e Blueprint editors)\n" },
		{ "EditCondition", "bUpdateInEditor" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If true, will tick when the world is a preview (i.e Blueprint editors)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControllerMap;
	static void NewProp_bUpdateInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInEditor;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerMapUpdatedDelegate;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableEvaluateLiveLinkWhenSpawnable;
	static void NewProp_bEvaluateLiveLink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateLiveLink;
	static void NewProp_bUpdateInPreviewEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInPreviewEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkComponentController_GetControlledComponent, "GetControlledComponent" }, // 268567828
		{ &Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation, "GetSubjectRepresentation" }, // 80618652
		{ &Z_Construct_UFunction_ULiveLinkComponentController_SetControlledComponent, "SetControlledComponent" }, // 1833212079
		{ &Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation, "SetSubjectRepresentation" }, // 167265154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectRepresentation_MetaData), NewProp_SubjectRepresentation_MetaData) }; // 126873938
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0116000822080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, Controller_DEPRECATED), Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp = { "ControllerMap", nullptr, (EPropertyFlags)0x0106000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerMap_ValueProp_MetaData), NewProp_ControllerMap_ValueProp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp = { "ControllerMap_Key", nullptr, (EPropertyFlags)0x0106000000080009, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap = { "ControllerMap", nullptr, (EPropertyFlags)0x011400820200001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, ControllerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerMap_MetaData), NewProp_ControllerMap_MetaData) };
void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit(void* Obj)
{
	((ULiveLinkComponentController*)Obj)->bUpdateInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor = { "bUpdateInEditor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInEditor_MetaData), NewProp_bUpdateInEditor_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLiveLinkUpdated_MetaData), NewProp_OnLiveLinkUpdated_MetaData) }; // 746703322
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate = { "OnControllerMapUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, OnControllerMapUpdatedDelegate), Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerMapUpdatedDelegate_MetaData), NewProp_OnControllerMapUpdatedDelegate_MetaData) }; // 163884662
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkComponentController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToControl_MetaData), NewProp_ComponentToControl_MetaData) }; // 3869904073
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj)
{
	((ULiveLinkComponentController*)Obj)->bDisableEvaluateLiveLinkWhenSpawnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable = { "bDisableEvaluateLiveLinkWhenSpawnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData), NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData) };
void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit(void* Obj)
{
	((ULiveLinkComponentController*)Obj)->bEvaluateLiveLink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink = { "bEvaluateLiveLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateLiveLink_MetaData), NewProp_bEvaluateLiveLink_MetaData) };
void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_SetBit(void* Obj)
{
	((ULiveLinkComponentController*)Obj)->bUpdateInPreviewEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor = { "bUpdateInPreviewEditor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInPreviewEditor_MetaData), NewProp_bUpdateInPreviewEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkComponentController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams = {
	&ULiveLinkComponentController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkComponentController()
{
	if (!Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton, Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton;
}
template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentController>()
{
	return ULiveLinkComponentController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentController);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController)
// End Class ULiveLinkComponentController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkComponentController, ULiveLinkComponentController::StaticClass, TEXT("ULiveLinkComponentController"), &Z_Registration_Info_UClass_ULiveLinkComponentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkComponentController), 1955443469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_2078004947(TEXT("/Script/LiveLinkComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
