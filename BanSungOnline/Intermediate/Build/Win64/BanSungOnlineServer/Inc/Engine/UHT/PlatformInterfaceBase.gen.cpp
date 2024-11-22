// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PlatformInterfaceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInterfaceBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPlatformInterfaceDataType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlatformInterfaceDataType;
static UEnum* EPlatformInterfaceDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlatformInterfaceDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlatformInterfaceDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPlatformInterfaceDataType"));
	}
	return Z_Registration_Info_UEnum_EPlatformInterfaceDataType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPlatformInterfaceDataType>()
{
	return EPlatformInterfaceDataType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum for the types of data used in a PlatformInterfaceData struct. */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "PIDT_Custom.Comment", "/** A custom type where more than one value may be filled out. */" },
		{ "PIDT_Custom.Name", "PIDT_Custom" },
		{ "PIDT_Custom.ToolTip", "A custom type where more than one value may be filled out." },
		{ "PIDT_Float.Name", "PIDT_Float" },
		{ "PIDT_Int.Name", "PIDT_Int" },
		{ "PIDT_MAX.Name", "PIDT_MAX" },
		{ "PIDT_None.Comment", "/** No data type specified. */" },
		{ "PIDT_None.Name", "PIDT_None" },
		{ "PIDT_None.ToolTip", "No data type specified." },
		{ "PIDT_Object.Name", "PIDT_Object" },
		{ "PIDT_String.Name", "PIDT_String" },
		{ "ToolTip", "An enum for the types of data used in a PlatformInterfaceData struct." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PIDT_None", (int64)PIDT_None },
		{ "PIDT_Int", (int64)PIDT_Int },
		{ "PIDT_Float", (int64)PIDT_Float },
		{ "PIDT_String", (int64)PIDT_String },
		{ "PIDT_Object", (int64)PIDT_Object },
		{ "PIDT_Custom", (int64)PIDT_Custom },
		{ "PIDT_MAX", (int64)PIDT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPlatformInterfaceDataType",
	"EPlatformInterfaceDataType",
	Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType()
{
	if (!Z_Registration_Info_UEnum_EPlatformInterfaceDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlatformInterfaceDataType.InnerSingleton, Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlatformInterfaceDataType.InnerSingleton;
}
// End Enum EPlatformInterfaceDataType

// Begin ScriptStruct FPlatformInterfaceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformInterfaceData;
class UScriptStruct* FPlatformInterfaceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformInterfaceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformInterfaceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceData"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformInterfaceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlatformInterfaceData>()
{
	return FPlatformInterfaceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Struct that encompasses the most common types of data. This is the data payload\n * of PlatformInterfaceDelegateResult.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Struct that encompasses the most common types of data. This is the data payload\nof PlatformInterfaceDelegateResult." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
		{ "Comment", "/** An optional tag for this data */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "An optional tag for this data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Specifies which value is valid for this structure */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Specifies which value is valid for this structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Comment", "/** Various typed result values */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Various typed result values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, DataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataName_MetaData), NewProp_DataName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, Type), Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2212594615
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceData, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectValue_MetaData), NewProp_ObjectValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PlatformInterfaceData",
	Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers),
	sizeof(FPlatformInterfaceData),
	alignof(FPlatformInterfaceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformInterfaceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformInterfaceData.InnerSingleton, Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlatformInterfaceData.InnerSingleton;
}
// End ScriptStruct FPlatformInterfaceData

// Begin ScriptStruct FPlatformInterfaceDelegateResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult;
class UScriptStruct* FPlatformInterfaceDelegateResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceDelegateResult"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlatformInterfaceDelegateResult>()
{
	return FPlatformInterfaceDelegateResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Generic structure for returning most any kind of data from C++ to delegate functions */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Generic structure for returning most any kind of data from C++ to delegate functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccessful_MetaData[] = {
		{ "Comment", "/** This is always usable, no matter the type */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "This is always usable, no matter the type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Comment", "/** The result actual data */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "The result actual data" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_SetBit(void* Obj)
{
	((FPlatformInterfaceDelegateResult*)Obj)->bSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlatformInterfaceDelegateResult), &Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccessful_MetaData), NewProp_bSuccessful_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformInterfaceDelegateResult, Data), Z_Construct_UScriptStruct_FPlatformInterfaceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1638336503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PlatformInterfaceDelegateResult",
	Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers),
	sizeof(FPlatformInterfaceDelegateResult),
	alignof(FPlatformInterfaceDelegateResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.InnerSingleton, Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult.InnerSingleton;
}
// End ScriptStruct FPlatformInterfaceDelegateResult

// Begin Delegate FPlatformInterfaceDelegate
struct Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics
{
	struct _Script_Engine_eventPlatformInterfaceDelegate_Parms
	{
		FPlatformInterfaceDelegateResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Generic platform interface delegate signature */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Generic platform interface delegate signature" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventPlatformInterfaceDelegate_Parms, Result), Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2317273474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PlatformInterfaceDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::_Script_Engine_eventPlatformInterfaceDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::_Script_Engine_eventPlatformInterfaceDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlatformInterfaceDelegate_DelegateWrapper(const FScriptDelegate& PlatformInterfaceDelegate, FPlatformInterfaceDelegateResult const& Result)
{
	struct _Script_Engine_eventPlatformInterfaceDelegate_Parms
	{
		FPlatformInterfaceDelegateResult Result;
	};
	_Script_Engine_eventPlatformInterfaceDelegate_Parms Parms;
	Parms.Result=Result;
	PlatformInterfaceDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FPlatformInterfaceDelegate

// Begin ScriptStruct FDelegateArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelegateArray;
class UScriptStruct* FDelegateArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelegateArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelegateArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateArray, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DelegateArray"));
	}
	return Z_Registration_Info_UScriptStruct_DelegateArray.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDelegateArray>()
{
	return FDelegateArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDelegateArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper struct, since UnrealScript doesn't allow arrays of arrays, but\n * arrays of structs of arrays are okay.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Helper struct, since UnrealScript doesn't allow arrays of arrays, but\narrays of structs of arrays are okay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Delegates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_Inner = { "Delegates", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 383607840
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates = { "Delegates", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelegateArray, Delegates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegates_MetaData), NewProp_Delegates_MetaData) }; // 383607840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DelegateArray",
	Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers),
	sizeof(FDelegateArray),
	alignof(FDelegateArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDelegateArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray()
{
	if (!Z_Registration_Info_UScriptStruct_DelegateArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelegateArray.InnerSingleton, Z_Construct_UScriptStruct_FDelegateArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DelegateArray.InnerSingleton;
}
// End ScriptStruct FDelegateArray

// Begin Class UPlatformInterfaceBase
void UPlatformInterfaceBase::StaticRegisterNativesUPlatformInterfaceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformInterfaceBase);
UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister()
{
	return UPlatformInterfaceBase::StaticClass();
}
struct Z_Construct_UClass_UPlatformInterfaceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PlatformInterfaceBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllDelegates_MetaData[] = {
		{ "Comment", "/** Array of delegate arrays. Only add and remove via helper functions, and call via the helper delegate call function */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Array of delegate arrays. Only add and remove via helper functions, and call via the helper delegate call function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllDelegates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllDelegates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformInterfaceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_Inner = { "AllDelegates", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDelegateArray, METADATA_PARAMS(0, nullptr) }; // 3027016065
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates = { "AllDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformInterfaceBase, AllDelegates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllDelegates_MetaData), NewProp_AllDelegates_MetaData) }; // 3027016065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlatformInterfaceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::ClassParams = {
	&UPlatformInterfaceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformInterfaceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlatformInterfaceBase()
{
	if (!Z_Registration_Info_UClass_UPlatformInterfaceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformInterfaceBase.OuterSingleton, Z_Construct_UClass_UPlatformInterfaceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlatformInterfaceBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPlatformInterfaceBase>()
{
	return UPlatformInterfaceBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInterfaceBase);
UPlatformInterfaceBase::~UPlatformInterfaceBase() {}
// End Class UPlatformInterfaceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlatformInterfaceDataType_StaticEnum, TEXT("EPlatformInterfaceDataType"), &Z_Registration_Info_UEnum_EPlatformInterfaceDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2212594615U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlatformInterfaceData::StaticStruct, Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewStructOps, TEXT("PlatformInterfaceData"), &Z_Registration_Info_UScriptStruct_PlatformInterfaceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformInterfaceData), 1638336503U) },
		{ FPlatformInterfaceDelegateResult::StaticStruct, Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewStructOps, TEXT("PlatformInterfaceDelegateResult"), &Z_Registration_Info_UScriptStruct_PlatformInterfaceDelegateResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformInterfaceDelegateResult), 2317273474U) },
		{ FDelegateArray::StaticStruct, Z_Construct_UScriptStruct_FDelegateArray_Statics::NewStructOps, TEXT("DelegateArray"), &Z_Registration_Info_UScriptStruct_DelegateArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelegateArray), 3027016065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformInterfaceBase, UPlatformInterfaceBase::StaticClass, TEXT("UPlatformInterfaceBase"), &Z_Registration_Info_UClass_UPlatformInterfaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformInterfaceBase), 1794953249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_2071215650(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS