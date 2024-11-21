// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode Function GetDisplayName
struct Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics
{
	struct OptimusNode_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the display name to use on the graphical node in the graph editor.\n\x09 * @return The display name to show to the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the display name to use on the graphical node in the graph editor.\n@return The display name to show to the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNode_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::OptimusNode_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::OptimusNode_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusNode_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusNode::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UOptimusNode Function GetDisplayName

// Begin Class UOptimusNode Function GetGraphPosition
struct Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics
{
	struct OptimusNode_eventGetGraphPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the position in the graph UI where the node is shown.\n\x09 * @return The coordinates of the node's position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the position in the graph UI where the node is shown.\n@return The coordinates of the node's position." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNode_eventGetGraphPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetGraphPosition", nullptr, nullptr, Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::OptimusNode_eventGetGraphPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::OptimusNode_eventGetGraphPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusNode_GetGraphPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusNode::execGetGraphPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetGraphPosition();
	P_NATIVE_END;
}
// End Class UOptimusNode Function GetGraphPosition

// Begin Class UOptimusNode Function GetNodeCategory
struct Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics
{
	struct OptimusNode_eventGetNodeCategory_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** \n\x09 * Returns the node class category. This is used for categorizing the node for display.\n\x09 * @return The node class category.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the node class category. This is used for categorizing the node for display.\n@return The node class category." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNode_eventGetNodeCategory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetNodeCategory", nullptr, nullptr, Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::OptimusNode_eventGetNodeCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::OptimusNode_eventGetNodeCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusNode_GetNodeCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusNode::execGetNodeCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetNodeCategory();
	P_NATIVE_END;
}
// End Class UOptimusNode Function GetNodeCategory

// Begin Class UOptimusNode Function GetNodeName
struct Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics
{
	struct OptimusNode_eventGetNodeName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the node class name. This name is immutable for the given node class.\n\x09 * @return The node class name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the node class name. This name is immutable for the given node class.\n@return The node class name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetNodeName", nullptr, nullptr, Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::OptimusNode_eventGetNodeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::OptimusNode_eventGetNodeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusNode_GetNodeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusNode::execGetNodeName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetNodeName();
	P_NATIVE_END;
}
// End Class UOptimusNode Function GetNodeName

// Begin Class UOptimusNode Function SetGraphPosition
struct Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics
{
	struct OptimusNode_eventSetGraphPosition_Parms
	{
		FVector2D InPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Sets the position in the graph UI that the node should be shown at.\n\x09 * @param InPosition The coordinates of the node's position.\n\x09 * @return true if setting the position was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Sets the position in the graph UI that the node should be shown at.\n@param InPosition The coordinates of the node's position.\n@return true if setting the position was successful." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusNode_eventSetGraphPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosition_MetaData), NewProp_InPosition_MetaData) };
void Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusNode_eventSetGraphPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusNode_eventSetGraphPosition_Parms), &Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "SetGraphPosition", nullptr, nullptr, Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::OptimusNode_eventSetGraphPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::OptimusNode_eventSetGraphPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusNode_SetGraphPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusNode::execSetGraphPosition)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetGraphPosition(Z_Param_Out_InPosition);
	P_NATIVE_END;
}
// End Class UOptimusNode Function SetGraphPosition

// Begin Class UOptimusNode
void UOptimusNode::StaticRegisterNativesUOptimusNode()
{
	UClass* Class = UOptimusNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayName", &UOptimusNode::execGetDisplayName },
		{ "GetGraphPosition", &UOptimusNode::execGetGraphPosition },
		{ "GetNodeCategory", &UOptimusNode::execGetNodeCategory },
		{ "GetNodeName", &UOptimusNode::execGetNodeName },
		{ "SetGraphPosition", &UOptimusNode::execSetGraphPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode);
UClass* Z_Construct_UClass_UOptimusNode_NoRegister()
{
	return UOptimusNode::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNode.h" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// The display name to show. This is non-transactional because it is controlled by our \n// action system rather than the transacting system for undo.\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The display name to show. This is non-transactional because it is controlled by our\naction system rather than the transacting system for undo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphPosition_MetaData[] = {
		{ "Comment", "// Node layout data\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Node layout data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[] = {
		{ "Comment", "// The list of pins. Non-transactional for the same reason as above. \n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The list of pins. Non-transactional for the same reason as above." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedPins_MetaData[] = {
		{ "Comment", "// The list of pins that should be shown as expanded in the graph view.\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The list of pins that should be shown as expanded in the graph view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiagnosticLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pins;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExpandedPins_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExpandedPins;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DiagnosticLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DiagnosticLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusNode_GetDisplayName, "GetDisplayName" }, // 1338845360
		{ &Z_Construct_UFunction_UOptimusNode_GetGraphPosition, "GetGraphPosition" }, // 1153398765
		{ &Z_Construct_UFunction_UOptimusNode_GetNodeCategory, "GetNodeCategory" }, // 1401312668
		{ &Z_Construct_UFunction_UOptimusNode_GetNodeName, "GetNodeName" }, // 157813460
		{ &Z_Construct_UFunction_UOptimusNode_SetGraphPosition, "SetGraphPosition" }, // 4173842911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition = { "GraphPosition", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode, GraphPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphPosition_MetaData), NewProp_GraphPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0144000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pins_MetaData), NewProp_Pins_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_ElementProp = { "ExpandedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins = { "ExpandedPins", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode, ExpandedPins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandedPins_MetaData), NewProp_ExpandedPins_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel = { "DiagnosticLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode, DiagnosticLevel), Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiagnosticLevel_MetaData), NewProp_DiagnosticLevel_MetaData) }; // 2049571901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_Statics::ClassParams = {
	&UOptimusNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptimusNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode()
{
	if (!Z_Registration_Info_UClass_UOptimusNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode.OuterSingleton, Z_Construct_UClass_UOptimusNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode>()
{
	return UOptimusNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode)
// End Class UOptimusNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode, UOptimusNode::StaticClass, TEXT("UOptimusNode"), &Z_Registration_Info_UClass_UOptimusNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode), 3009184643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_1053276633(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
