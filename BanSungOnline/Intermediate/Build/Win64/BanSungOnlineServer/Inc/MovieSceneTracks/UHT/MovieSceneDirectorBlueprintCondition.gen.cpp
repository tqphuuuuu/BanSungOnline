// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Conditions/MovieSceneDirectorBlueprintCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDirectorBlueprintCondition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneDirectorBlueprintConditionPayloadVariable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable;
class UScriptStruct* FMovieSceneDirectorBlueprintConditionPayloadVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDirectorBlueprintConditionPayloadVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDirectorBlueprintConditionPayloadVariable>()
{
	return FMovieSceneDirectorBlueprintConditionPayloadVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Value definition for any type-agnostic variable (exported as text) */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Value definition for any type-agnostic variable (exported as text)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDirectorBlueprintConditionPayloadVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionPayloadVariable, ObjectValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectValue_MetaData), NewProp_ObjectValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionPayloadVariable, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::NewProp_ObjectValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneDirectorBlueprintConditionPayloadVariable",
	Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::PropPointers),
	sizeof(FMovieSceneDirectorBlueprintConditionPayloadVariable),
	alignof(FMovieSceneDirectorBlueprintConditionPayloadVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable.InnerSingleton;
}
// End ScriptStruct FMovieSceneDirectorBlueprintConditionPayloadVariable

// Begin ScriptStruct FMovieSceneDirectorBlueprintConditionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData;
class UScriptStruct* FMovieSceneDirectorBlueprintConditionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDirectorBlueprintConditionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDirectorBlueprintConditionData>()
{
	return FMovieSceneDirectorBlueprintConditionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data for a director blueprint condition endpoint call.\n */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Data for a director blueprint condition endpoint call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "/** The function to call (normally a generated blueprint function on the sequence director) */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "The function to call (normally a generated blueprint function on the sequence director)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionContextProperty_MetaData[] = {
		{ "Comment", "/** Property pointer for the function parameter that should receive the condition context params */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Property pointer for the function parameter that should receive the condition context params" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadVariables_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "Comment", "/** Array of payload variables to be added to the generated function */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Array of payload variables to be added to the generated function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledFunctionName_MetaData[] = {
		{ "Comment", "/** Name of the generated blueprint function */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Name of the generated blueprint function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionContextPinName_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "Comment", "/** Pin name for passing the condition context params */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Pin name for passing the condition context params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakEndpoint_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "Comment", "/** Endpoint node in the sequence director */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Endpoint node in the sequence director" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ConditionContextProperty;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadVariables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PayloadVariables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PayloadVariables;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompiledFunctionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionContextPinName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakEndpoint;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDirectorBlueprintConditionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_ConditionContextProperty = { "ConditionContextProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, ConditionContextProperty), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionContextProperty_MetaData), NewProp_ConditionContextProperty_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables_ValueProp = { "PayloadVariables", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable, METADATA_PARAMS(0, nullptr) }; // 864610200
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables_Key_KeyProp = { "PayloadVariables_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables = { "PayloadVariables", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, PayloadVariables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadVariables_MetaData), NewProp_PayloadVariables_MetaData) }; // 864610200
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_CompiledFunctionName = { "CompiledFunctionName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, CompiledFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledFunctionName_MetaData), NewProp_CompiledFunctionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_ConditionContextPinName = { "ConditionContextPinName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, ConditionContextPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionContextPinName_MetaData), NewProp_ConditionContextPinName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_WeakEndpoint = { "WeakEndpoint", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDirectorBlueprintConditionData, WeakEndpoint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakEndpoint_MetaData), NewProp_WeakEndpoint_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_ConditionContextProperty,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_PayloadVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_CompiledFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_ConditionContextPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewProp_WeakEndpoint,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneDirectorBlueprintConditionData",
	Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::PropPointers),
	sizeof(FMovieSceneDirectorBlueprintConditionData),
	alignof(FMovieSceneDirectorBlueprintConditionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData.InnerSingleton;
}
// End ScriptStruct FMovieSceneDirectorBlueprintConditionData

// Begin Class UMovieSceneDirectorBlueprintCondition
void UMovieSceneDirectorBlueprintCondition::StaticRegisterNativesUMovieSceneDirectorBlueprintCondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDirectorBlueprintCondition);
UClass* Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_NoRegister()
{
	return UMovieSceneDirectorBlueprintCondition::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Condition class allowing users to create a director blueprint endpoint in the Sequence to evaluate a condition.\n */" },
		{ "DisplayName", "Director Blueprint Condition" },
		{ "IncludePath", "Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
		{ "ToolTip", "Condition class allowing users to create a director blueprint endpoint in the Sequence to evaluate a condition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprintConditionData_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFrequency_MetaData[] = {
		{ "Category", "Sequencer|Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneDirectorBlueprintCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectorBlueprintConditionData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckFrequency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDirectorBlueprintCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_DirectorBlueprintConditionData = { "DirectorBlueprintConditionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDirectorBlueprintCondition, DirectorBlueprintConditionData), Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorBlueprintConditionData_MetaData), NewProp_DirectorBlueprintConditionData_MetaData) }; // 417863333
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDirectorBlueprintCondition, Scope), Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 4141616834
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_CheckFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_CheckFrequency = { "CheckFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDirectorBlueprintCondition, CheckFrequency), Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFrequency_MetaData), NewProp_CheckFrequency_MetaData) }; // 3370937612
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_DirectorBlueprintConditionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_CheckFrequency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::NewProp_CheckFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::ClassParams = {
	&UMovieSceneDirectorBlueprintCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.OuterSingleton, Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDirectorBlueprintCondition>()
{
	return UMovieSceneDirectorBlueprintCondition::StaticClass();
}
UMovieSceneDirectorBlueprintCondition::UMovieSceneDirectorBlueprintCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDirectorBlueprintCondition);
UMovieSceneDirectorBlueprintCondition::~UMovieSceneDirectorBlueprintCondition() {}
// End Class UMovieSceneDirectorBlueprintCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDirectorBlueprintConditionPayloadVariable::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionPayloadVariable_Statics::NewStructOps, TEXT("MovieSceneDirectorBlueprintConditionPayloadVariable"), &Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionPayloadVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDirectorBlueprintConditionPayloadVariable), 864610200U) },
		{ FMovieSceneDirectorBlueprintConditionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDirectorBlueprintConditionData_Statics::NewStructOps, TEXT("MovieSceneDirectorBlueprintConditionData"), &Z_Registration_Info_UScriptStruct_MovieSceneDirectorBlueprintConditionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDirectorBlueprintConditionData), 417863333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDirectorBlueprintCondition, UMovieSceneDirectorBlueprintCondition::StaticClass, TEXT("UMovieSceneDirectorBlueprintCondition"), &Z_Registration_Info_UClass_UMovieSceneDirectorBlueprintCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDirectorBlueprintCondition), 1176840486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_3849833059(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneDirectorBlueprintCondition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
