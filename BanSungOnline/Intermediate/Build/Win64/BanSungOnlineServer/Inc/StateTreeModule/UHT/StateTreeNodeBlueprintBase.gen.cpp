// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Blueprint/StateTreeNodeBlueprintBase.h"
#include "StateTreeModule/Public/StateTreeEvents.h"
#include "StateTreeModule/Public/StateTreePropertyRef.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeNodeBlueprintBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting();
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeBlueprintPropertyCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory;
static UEnum* EStateTreeBlueprintPropertyCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBlueprintPropertyCategory"));
	}
	return Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBlueprintPropertyCategory>()
{
	return EStateTreeBlueprintPropertyCategory_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ContextObject.Name", "EStateTreeBlueprintPropertyCategory::ContextObject" },
		{ "Input.Name", "EStateTreeBlueprintPropertyCategory::Input" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "NotSet.Name", "EStateTreeBlueprintPropertyCategory::NotSet" },
		{ "Output.Name", "EStateTreeBlueprintPropertyCategory::Output" },
		{ "Parameter.Name", "EStateTreeBlueprintPropertyCategory::Parameter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateTreeBlueprintPropertyCategory::NotSet", (int64)EStateTreeBlueprintPropertyCategory::NotSet },
		{ "EStateTreeBlueprintPropertyCategory::Input", (int64)EStateTreeBlueprintPropertyCategory::Input },
		{ "EStateTreeBlueprintPropertyCategory::Parameter", (int64)EStateTreeBlueprintPropertyCategory::Parameter },
		{ "EStateTreeBlueprintPropertyCategory::Output", (int64)EStateTreeBlueprintPropertyCategory::Output },
		{ "EStateTreeBlueprintPropertyCategory::ContextObject", (int64)EStateTreeBlueprintPropertyCategory::ContextObject },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeBlueprintPropertyCategory",
	"EStateTreeBlueprintPropertyCategory",
	Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory()
{
	if (!Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton;
}
// End Enum EStateTreeBlueprintPropertyCategory

// Begin Class UStateTreeNodeBlueprintBase Function GetPropertyDescriptionByPropertyName
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics
{
	struct StateTreeNodeBlueprintBase_eventGetPropertyDescriptionByPropertyName_Parms
	{
		FName PropertyName;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "StateTree" },
		{ "Comment", "/** @return text describing the property, either direct value or binding description. Used internally. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "@return text describing the property, either direct value or binding description. Used internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventGetPropertyDescriptionByPropertyName_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventGetPropertyDescriptionByPropertyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "GetPropertyDescriptionByPropertyName", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::StateTreeNodeBlueprintBase_eventGetPropertyDescriptionByPropertyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::StateTreeNodeBlueprintBase_eventGetPropertyDescriptionByPropertyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execGetPropertyDescriptionByPropertyName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetPropertyDescriptionByPropertyName(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UStateTreeNodeBlueprintBase Function GetPropertyDescriptionByPropertyName

// Begin Class UStateTreeNodeBlueprintBase Function GetPropertyReference
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics
{
	struct StateTreeNodeBlueprintBase_eventGetPropertyReference_Parms
	{
		FStateTreeBlueprintPropertyRef PropertyRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Returns a reference to selected property in State Tree. */" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Returns a reference to selected property in State Tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::NewProp_PropertyRef = { "PropertyRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventGetPropertyReference_Parms, PropertyRef), Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyRef_MetaData), NewProp_PropertyRef_MetaData) }; // 1605173553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::NewProp_PropertyRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "GetPropertyReference", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::StateTreeNodeBlueprintBase_eventGetPropertyReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::StateTreeNodeBlueprintBase_eventGetPropertyReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeNodeBlueprintBase Function GetPropertyReference

// Begin Class UStateTreeNodeBlueprintBase Function IsPropertyRefValid
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics
{
	struct StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms
	{
		FStateTreeBlueprintPropertyRef PropertyRef;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if reference to selected property in State Tree is accessible. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Returns true if reference to selected property in State Tree is accessible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyRef;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_PropertyRef = { "PropertyRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms, PropertyRef), Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyRef_MetaData), NewProp_PropertyRef_MetaData) }; // 1605173553
void Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms), &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_PropertyRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "IsPropertyRefValid", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::StateTreeNodeBlueprintBase_eventIsPropertyRefValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execIsPropertyRefValid)
{
	P_GET_STRUCT_REF(FStateTreeBlueprintPropertyRef,Z_Param_Out_PropertyRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPropertyRefValid(Z_Param_Out_PropertyRef);
	P_NATIVE_END;
}
// End Class UStateTreeNodeBlueprintBase Function IsPropertyRefValid

// Begin Class UStateTreeNodeBlueprintBase Function ReceiveGetDescription
struct StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms
{
	TEnumAsByte<EStateTreeNodeFormatting> Formatting;
	FText ReturnValue;
};
static const FName NAME_UStateTreeNodeBlueprintBase_ReceiveGetDescription = FName(TEXT("ReceiveGetDescription"));
FText UStateTreeNodeBlueprintBase::ReceiveGetDescription(EStateTreeNodeFormatting Formatting) const
{
	StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms Parms;
	Parms.Formatting=Formatting;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeNodeBlueprintBase_ReceiveGetDescription);
		const_cast<UStateTreeNodeBlueprintBase*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event to implement to get node description. */" },
		{ "DisplayName", "Get Description" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Event to implement to get node description." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Formatting;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::NewProp_Formatting = { "Formatting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms, Formatting), Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting, METADATA_PARAMS(0, nullptr) }; // 3287387911
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::NewProp_Formatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "ReceiveGetDescription", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::PropPointers), sizeof(StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeNodeBlueprintBase_eventReceiveGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeNodeBlueprintBase Function ReceiveGetDescription

// Begin Class UStateTreeNodeBlueprintBase Function RequestTransition
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics
{
	struct StateTreeNodeBlueprintBase_eventRequestTransition_Parms
	{
		FStateTreeStateLink TargetState;
		EStateTreeTransitionPriority Priority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** Request state transition. */" },
		{ "CPP_Default_Priority", "Normal" },
		{ "DisplayName", "StateTree Request Transition" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Request state transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventRequestTransition_Parms, TargetState), Z_Construct_UScriptStruct_FStateTreeStateLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetState_MetaData), NewProp_TargetState_MetaData) }; // 1927682115
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventRequestTransition_Parms, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 2934257566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "RequestTransition", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::StateTreeNodeBlueprintBase_eventRequestTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::StateTreeNodeBlueprintBase_eventRequestTransition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execRequestTransition)
{
	P_GET_STRUCT_REF(FStateTreeStateLink,Z_Param_Out_TargetState);
	P_GET_ENUM(EStateTreeTransitionPriority,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestTransition(Z_Param_Out_TargetState,EStateTreeTransitionPriority(Z_Param_Priority));
	P_NATIVE_END;
}
// End Class UStateTreeNodeBlueprintBase Function RequestTransition

// Begin Class UStateTreeNodeBlueprintBase Function SendEvent
struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics
{
	struct StateTreeNodeBlueprintBase_eventSendEvent_Parms
	{
		FStateTreeEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** Sends event to the StateTree. */" },
		{ "DisplayName", "StateTree Send Event" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Sends event to the StateTree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventSendEvent_Parms, Event), Z_Construct_UScriptStruct_FStateTreeEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 1586505974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "SendEvent", nullptr, nullptr, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::StateTreeNodeBlueprintBase_eventSendEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::StateTreeNodeBlueprintBase_eventSendEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execSendEvent)
{
	P_GET_STRUCT_REF(FStateTreeEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UStateTreeNodeBlueprintBase Function SendEvent

// Begin Class UStateTreeNodeBlueprintBase
void UStateTreeNodeBlueprintBase::StaticRegisterNativesUStateTreeNodeBlueprintBase()
{
	UClass* Class = UStateTreeNodeBlueprintBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPropertyDescriptionByPropertyName", &UStateTreeNodeBlueprintBase::execGetPropertyDescriptionByPropertyName },
		{ "GetPropertyReference", &UStateTreeNodeBlueprintBase::execGetPropertyReference },
		{ "IsPropertyRefValid", &UStateTreeNodeBlueprintBase::execIsPropertyRefValid },
		{ "RequestTransition", &UStateTreeNodeBlueprintBase::execRequestTransition },
		{ "SendEvent", &UStateTreeNodeBlueprintBase::execSendEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeNodeBlueprintBase);
UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister()
{
	return UStateTreeNodeBlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwner_MetaData[] = {
		{ "Comment", "/** Cached owner while the node is active. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Cached owner while the node is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedFrameStateTree_MetaData[] = {
		{ "Comment", "/** Cached State Tree of owning execution frame. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Cached State Tree of owning execution frame." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** Description of the node. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Description of the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/**\n\x09 * Name of the icon in format:\n\x09 *\x09\x09StyleSetName | StyleName [ | SmallStyleName | StatusOverlayStyleName]\n\x09 *\x09\x09SmallStyleName and StatusOverlayStyleName are optional.\n\x09 *\x09\x09""Example: \"StateTreeEditorStyle|Node.Animation\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Name of the icon in format:\n             StyleSetName | StyleName [ | SmallStyleName | StatusOverlayStyleName]\n             SmallStyleName and StatusOverlayStyleName are optional.\n             Example: \"StateTreeEditorStyle|Node.Animation\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconColor_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** Color of the icon. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Color of the icon." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedFrameStateTree;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyDescriptionByPropertyName, "GetPropertyDescriptionByPropertyName" }, // 2805543523
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_GetPropertyReference, "GetPropertyReference" }, // 3082409299
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_IsPropertyRefValid, "IsPropertyRefValid" }, // 1335310749
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_ReceiveGetDescription, "ReceiveGetDescription" }, // 871602702
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition, "RequestTransition" }, // 3916401879
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent, "SendEvent" }, // 1299379900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeNodeBlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner = { "CachedOwner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, CachedOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwner_MetaData), NewProp_CachedOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedFrameStateTree = { "CachedFrameStateTree", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, CachedFrameStateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedFrameStateTree_MetaData), NewProp_CachedFrameStateTree_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_IconColor = { "IconColor", nullptr, (EPropertyFlags)0x0040000800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, IconColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconColor_MetaData), NewProp_IconColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedFrameStateTree,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_IconColor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::ClassParams = {
	&UStateTreeNodeBlueprintBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase()
{
	if (!Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeNodeBlueprintBase>()
{
	return UStateTreeNodeBlueprintBase::StaticClass();
}
UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeNodeBlueprintBase);
UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase() {}
// End Class UStateTreeNodeBlueprintBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeBlueprintPropertyCategory_StaticEnum, TEXT("EStateTreeBlueprintPropertyCategory"), &Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 259998531U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeNodeBlueprintBase, UStateTreeNodeBlueprintBase::StaticClass, TEXT("UStateTreeNodeBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeNodeBlueprintBase), 616155861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_1835309821(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
