// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Conditions/MovieSceneCondition.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCondition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCondition_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConditionContainer();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConditionContext();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneConditionScope
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneConditionScope;
static UEnum* EMovieSceneConditionScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneConditionScope"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneConditionScope.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneConditionScope>()
{
	return EMovieSceneConditionScope_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Binding.Comment", "/* Condition may have different results for different object bindings. */" },
		{ "Binding.Name", "EMovieSceneConditionScope::Binding" },
		{ "Binding.ToolTip", "Condition may have different results for different object bindings." },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Defines the scope of a particular condition type.\n* By default, the condition scope will determine whether conditions need to be re-evaluated for different bindings or entities in the Sequence.\n*/" },
		{ "Global.Comment", "/* Condition has the same result regardless of the binding or entity.*/" },
		{ "Global.Name", "EMovieSceneConditionScope::Global" },
		{ "Global.ToolTip", "Condition has the same result regardless of the binding or entity." },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "OwnerObject.Comment", "/* Condition may have different results for each different outer object owner (i.e. track, section) in the Sequence.*/" },
		{ "OwnerObject.Name", "EMovieSceneConditionScope::OwnerObject" },
		{ "OwnerObject.ToolTip", "Condition may have different results for each different outer object owner (i.e. track, section) in the Sequence." },
		{ "ToolTip", "* Defines the scope of a particular condition type.\n* By default, the condition scope will determine whether conditions need to be re-evaluated for different bindings or entities in the Sequence." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneConditionScope::Global", (int64)EMovieSceneConditionScope::Global },
		{ "EMovieSceneConditionScope::Binding", (int64)EMovieSceneConditionScope::Binding },
		{ "EMovieSceneConditionScope::OwnerObject", (int64)EMovieSceneConditionScope::OwnerObject },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneConditionScope",
	"EMovieSceneConditionScope",
	Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneConditionScope.InnerSingleton;
}
// End Enum EMovieSceneConditionScope

// Begin Enum EMovieSceneConditionCheckFrequency
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency;
static UEnum* EMovieSceneConditionCheckFrequency_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneConditionCheckFrequency"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneConditionCheckFrequency>()
{
	return EMovieSceneConditionCheckFrequency_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Defines how often a condition needs to be checked. \n*  Most conditions should return 'Once', but if the condition result can change during playback, 'OnTick' can be chosen to have the condition re-evaluated each tick.\n*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "Once.Comment", "/* Condition result will not change during sequence playback and only needs to get checked once. */" },
		{ "Once.Name", "EMovieSceneConditionCheckFrequency::Once" },
		{ "Once.ToolTip", "Condition result will not change during sequence playback and only needs to get checked once." },
		{ "OnTick.Comment", "/* Condition result may change during sequence playback and should be checked per tick. */" },
		{ "OnTick.Name", "EMovieSceneConditionCheckFrequency::OnTick" },
		{ "OnTick.ToolTip", "Condition result may change during sequence playback and should be checked per tick." },
		{ "ToolTip", "Defines how often a condition needs to be checked.\n*  Most conditions should return 'Once', but if the condition result can change during playback, 'OnTick' can be chosen to have the condition re-evaluated each tick." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneConditionCheckFrequency::Once", (int64)EMovieSceneConditionCheckFrequency::Once },
		{ "EMovieSceneConditionCheckFrequency::OnTick", (int64)EMovieSceneConditionCheckFrequency::OnTick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneConditionCheckFrequency",
	"EMovieSceneConditionCheckFrequency",
	Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency.InnerSingleton;
}
// End Enum EMovieSceneConditionCheckFrequency

// Begin ScriptStruct FMovieSceneConditionContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneConditionContext;
class UScriptStruct* FMovieSceneConditionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneConditionContext, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneConditionContext"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneConditionContext>()
{
	return FMovieSceneConditionContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Blueprint-friendly struct containing any context needed to evaluate conditions. \n*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "* Blueprint-friendly struct containing any context needed to evaluate conditions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* The world context*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "The world context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections). */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjects_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* Array of objects bound to the binding currently evaluating this condition if applicable (will be empty for conditions on global tracks/sections)*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "Array of objects bound to the binding currently evaluating this condition if applicable (will be empty for conditions on global tracks/sections)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneConditionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneConditionContext, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneConditionContext, Binding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Binding_MetaData), NewProp_Binding_MetaData) }; // 2936931176
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_BoundObjects_Inner = { "BoundObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_BoundObjects = { "BoundObjects", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneConditionContext, BoundObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundObjects_MetaData), NewProp_BoundObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_BoundObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewProp_BoundObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneConditionContext",
	Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::PropPointers),
	sizeof(FMovieSceneConditionContext),
	alignof(FMovieSceneConditionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConditionContext()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConditionContext.InnerSingleton;
}
// End ScriptStruct FMovieSceneConditionContext

// Begin ScriptStruct FMovieSceneConditionContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer;
class UScriptStruct* FMovieSceneConditionContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneConditionContainer, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneConditionContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneConditionContainer>()
{
	return FMovieSceneConditionContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Container struct for instanced UMovieSceneConditions, existing only to allow property type customization for choosing conditions.\n*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "* Container struct for instanced UMovieSceneConditions, existing only to allow property type customization for choosing conditions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "AllowEditInlineCustomization", "" },
		{ "Category", "Sequencer|Condition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneConditionContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneConditionContainer, Condition), Z_Construct_UClass_UMovieSceneCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneConditionContainer",
	Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::PropPointers),
	sizeof(FMovieSceneConditionContainer),
	alignof(FMovieSceneConditionContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConditionContainer()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer.InnerSingleton;
}
// End ScriptStruct FMovieSceneConditionContainer

// Begin Class UMovieSceneCondition Function BP_EvaluateCondition
struct MovieSceneCondition_eventBP_EvaluateCondition_Parms
{
	FMovieSceneConditionContext ConditionContext;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneCondition_eventBP_EvaluateCondition_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMovieSceneCondition_BP_EvaluateCondition = FName(TEXT("BP_EvaluateCondition"));
bool UMovieSceneCondition::BP_EvaluateCondition(FMovieSceneConditionContext const& ConditionContext) const
{
	MovieSceneCondition_eventBP_EvaluateCondition_Parms Parms;
	Parms.ConditionContext=ConditionContext;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneCondition_BP_EvaluateCondition);
		const_cast<UMovieSceneCondition*>(this)->ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Override to implement your condition.*/" },
		{ "DisplayName", "On Evaluate Condition" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "Override to implement your condition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ConditionContext = { "ConditionContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCondition_eventBP_EvaluateCondition_Parms, ConditionContext), Z_Construct_UScriptStruct_FMovieSceneConditionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionContext_MetaData), NewProp_ConditionContext_MetaData) }; // 2640216738
void Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneCondition_eventBP_EvaluateCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneCondition_eventBP_EvaluateCondition_Parms), &Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ConditionContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCondition, nullptr, "BP_EvaluateCondition", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::PropPointers), sizeof(MovieSceneCondition_eventBP_EvaluateCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneCondition_eventBP_EvaluateCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMovieSceneCondition Function BP_EvaluateCondition

// Begin Class UMovieSceneCondition Function BP_GetCheckFrequency
struct MovieSceneCondition_eventBP_GetCheckFrequency_Parms
{
	EMovieSceneConditionCheckFrequency ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneCondition_eventBP_GetCheckFrequency_Parms()
		: ReturnValue((EMovieSceneConditionCheckFrequency)0)
	{
	}
};
static const FName NAME_UMovieSceneCondition_BP_GetCheckFrequency = FName(TEXT("BP_GetCheckFrequency"));
EMovieSceneConditionCheckFrequency UMovieSceneCondition::BP_GetCheckFrequency() const
{
	MovieSceneCondition_eventBP_GetCheckFrequency_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneCondition_BP_GetCheckFrequency);
		const_cast<UMovieSceneCondition*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Returns the check frequency of the condition, which determines whether the condition result can change during playback and needs to get re-evaluated. */" },
		{ "DisplayName", "Get Check Frequency" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "Returns the check frequency of the condition, which determines whether the condition result can change during playback and needs to get re-evaluated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCondition_eventBP_GetCheckFrequency_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneConditionCheckFrequency, METADATA_PARAMS(0, nullptr) }; // 3370937612
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCondition, nullptr, "BP_GetCheckFrequency", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::PropPointers), sizeof(MovieSceneCondition_eventBP_GetCheckFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneCondition_eventBP_GetCheckFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCondition::execBP_GetCheckFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovieSceneConditionCheckFrequency*)Z_Param__Result=P_THIS->BP_GetCheckFrequency_Implementation();
	P_NATIVE_END;
}
// End Class UMovieSceneCondition Function BP_GetCheckFrequency

// Begin Class UMovieSceneCondition Function BP_GetScope
struct MovieSceneCondition_eventBP_GetScope_Parms
{
	EMovieSceneConditionScope ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneCondition_eventBP_GetScope_Parms()
		: ReturnValue((EMovieSceneConditionScope)0)
	{
	}
};
static const FName NAME_UMovieSceneCondition_BP_GetScope = FName(TEXT("BP_GetScope"));
EMovieSceneConditionScope UMovieSceneCondition::BP_GetScope() const
{
	MovieSceneCondition_eventBP_GetScope_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneCondition_BP_GetScope);
		const_cast<UMovieSceneCondition*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Returns the scope of the condition, which determines whether the condition needs to be re-evaluated for different bindings or entities in the Sequence. */" },
		{ "DisplayName", "Get Scope" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "Returns the scope of the condition, which determines whether the condition needs to be re-evaluated for different bindings or entities in the Sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCondition_eventBP_GetScope_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneConditionScope, METADATA_PARAMS(0, nullptr) }; // 4141616834
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCondition, nullptr, "BP_GetScope", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::PropPointers), sizeof(MovieSceneCondition_eventBP_GetScope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneCondition_eventBP_GetScope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCondition::execBP_GetScope)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovieSceneConditionScope*)Z_Param__Result=P_THIS->BP_GetScope_Implementation();
	P_NATIVE_END;
}
// End Class UMovieSceneCondition Function BP_GetScope

// Begin Class UMovieSceneCondition
void UMovieSceneCondition::StaticRegisterNativesUMovieSceneCondition()
{
	UClass* Class = UMovieSceneCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_GetCheckFrequency", &UMovieSceneCondition::execBP_GetCheckFrequency },
		{ "BP_GetScope", &UMovieSceneCondition::execBP_GetScope },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCondition);
UClass* Z_Construct_UClass_UMovieSceneCondition_NoRegister()
{
	return UMovieSceneCondition::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract condition class. Conditions can be applied to sections, tracks, and track rows to determine whether or not they are evaluated at runtime.\n * This allows developers to create Sequences with dynamic behavior based on gameplay state, local player state, player hardware, etc.\n */" },
		{ "IncludePath", "Conditions/MovieSceneCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Abstract condition class. Conditions can be applied to sections, tracks, and track rows to determine whether or not they are evaluated at runtime.\nThis allows developers to create Sequences with dynamic behavior based on gameplay state, local player state, player hardware, etc." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorForceTrue_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* If true, will skip evaluating the condition and always return true. Useful for authoring or debugging. */" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "If true, will skip evaluating the condition and always return true. Useful for authoring or debugging." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* If true, inverts the result of the condition check.*/" },
		{ "ModuleRelativePath", "Public/Conditions/MovieSceneCondition.h" },
		{ "ToolTip", "If true, inverts the result of the condition check." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bEditorForceTrue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorForceTrue;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCondition_BP_EvaluateCondition, "BP_EvaluateCondition" }, // 1596611869
		{ &Z_Construct_UFunction_UMovieSceneCondition_BP_GetCheckFrequency, "BP_GetCheckFrequency" }, // 1317758406
		{ &Z_Construct_UFunction_UMovieSceneCondition_BP_GetScope, "BP_GetScope" }, // 1876696908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bEditorForceTrue_SetBit(void* Obj)
{
	((UMovieSceneCondition*)Obj)->bEditorForceTrue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bEditorForceTrue = { "bEditorForceTrue", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCondition), &Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bEditorForceTrue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorForceTrue_MetaData), NewProp_bEditorForceTrue_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UMovieSceneCondition*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCondition), &Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCondition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bEditorForceTrue,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCondition_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCondition_Statics::ClassParams = {
	&UMovieSceneCondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneCondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCondition_Statics::PropPointers),
	0,
	0x003030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCondition()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton, Z_Construct_UClass_UMovieSceneCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCondition.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCondition>()
{
	return UMovieSceneCondition::StaticClass();
}
UMovieSceneCondition::UMovieSceneCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCondition);
UMovieSceneCondition::~UMovieSceneCondition() {}
// End Class UMovieSceneCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneConditionScope_StaticEnum, TEXT("EMovieSceneConditionScope"), &Z_Registration_Info_UEnum_EMovieSceneConditionScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4141616834U) },
		{ EMovieSceneConditionCheckFrequency_StaticEnum, TEXT("EMovieSceneConditionCheckFrequency"), &Z_Registration_Info_UEnum_EMovieSceneConditionCheckFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3370937612U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneConditionContext::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneConditionContext_Statics::NewStructOps, TEXT("MovieSceneConditionContext"), &Z_Registration_Info_UScriptStruct_MovieSceneConditionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneConditionContext), 2640216738U) },
		{ FMovieSceneConditionContainer::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneConditionContainer_Statics::NewStructOps, TEXT("MovieSceneConditionContainer"), &Z_Registration_Info_UScriptStruct_MovieSceneConditionContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneConditionContainer), 3431843205U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCondition, UMovieSceneCondition::StaticClass, TEXT("UMovieSceneCondition"), &Z_Registration_Info_UClass_UMovieSceneCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCondition), 3043932140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_968010556(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Conditions_MovieSceneCondition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
