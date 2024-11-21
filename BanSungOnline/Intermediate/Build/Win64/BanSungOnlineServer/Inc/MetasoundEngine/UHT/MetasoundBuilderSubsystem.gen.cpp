// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundBuilderSubsystem.h"
#include "MetasoundEngine/Public/MetasoundBuilderBase.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
#include "Runtime/AudioExtensions/Public/AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundBuilderSubsystem() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatchBuilder();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSourceBuilder();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat();
METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Delegate FOnCreateAuditionGeneratorHandleDelegate
struct Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics
{
	struct _Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms
	{
		UMetasoundGeneratorHandle* GeneratorHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// namespace Metasound::Engine\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "namespace Metasound::Engine" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::NewProp_GeneratorHandle = { "GeneratorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms, GeneratorHandle), Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::NewProp_GeneratorHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine, nullptr, "OnCreateAuditionGeneratorHandleDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateAuditionGeneratorHandleDelegate_DelegateWrapper(const FScriptDelegate& OnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle* GeneratorHandle)
{
	struct _Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms
	{
		UMetasoundGeneratorHandle* GeneratorHandle;
	};
	_Script_MetasoundEngine_eventOnCreateAuditionGeneratorHandleDelegate_Parms Parms;
	Parms.GeneratorHandle=GeneratorHandle;
	OnCreateAuditionGeneratorHandleDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateAuditionGeneratorHandleDelegate

// Begin Class UMetaSoundPatchBuilder
void UMetaSoundPatchBuilder::StaticRegisterNativesUMetaSoundPatchBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundPatchBuilder);
UClass* Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister()
{
	return UMetaSoundPatchBuilder::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundPatchBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Builder in charge of building a MetaSound Patch */" },
		{ "DisplayName", "MetaSound Patch Builder" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Builder in charge of building a MetaSound Patch" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundPatchBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMetaSoundBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::ClassParams = {
	&UMetaSoundPatchBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundPatchBuilder()
{
	if (!Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton, Z_Construct_UClass_UMetaSoundPatchBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundPatchBuilder.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundPatchBuilder>()
{
	return UMetaSoundPatchBuilder::StaticClass();
}
UMetaSoundPatchBuilder::UMetaSoundPatchBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundPatchBuilder);
UMetaSoundPatchBuilder::~UMetaSoundPatchBuilder() {}
// End Class UMetaSoundPatchBuilder

// Begin Class UMetaSoundSourceBuilder Function Audition
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics
{
	struct MetaSoundSourceBuilder_eventAudition_Parms
	{
		UObject* Parent;
		UAudioComponent* AudioComponent;
		FScriptDelegate OnCreateGenerator;
		bool bLiveUpdatesEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|MetaSound|Builder" },
		{ "CPP_Default_bLiveUpdatesEnabled", "false" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "WorldContext", "Parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCreateGenerator;
	static void NewProp_bLiveUpdatesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveUpdatesEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_OnCreateGenerator = { "OnCreateGenerator", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventAudition_Parms, OnCreateGenerator), Z_Construct_UDelegateFunction_MetasoundEngine_OnCreateAuditionGeneratorHandleDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2659177958
void Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled_SetBit(void* Obj)
{
	((MetaSoundSourceBuilder_eventAudition_Parms*)Obj)->bLiveUpdatesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled = { "bLiveUpdatesEnabled", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundSourceBuilder_eventAudition_Parms), &Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_OnCreateGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::NewProp_bLiveUpdatesEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "Audition", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::MetaSoundSourceBuilder_eventAudition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::MetaSoundSourceBuilder_eventAudition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execAudition)
{
	P_GET_OBJECT(UObject,Z_Param_Parent);
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCreateGenerator);
	P_GET_UBOOL(Z_Param_bLiveUpdatesEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Audition(Z_Param_Parent,Z_Param_AudioComponent,FOnCreateAuditionGeneratorHandleDelegate(Z_Param_OnCreateGenerator),Z_Param_bLiveUpdatesEnabled);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function Audition

// Begin Class UMetaSoundSourceBuilder Function GetLiveUpdatesEnabled
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics
{
	struct MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns whether or not live updates are both globally enabled (via cvar) and are enabled on this builder's last built sound, which may or may not still be playing.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns whether or not live updates are both globally enabled (via cvar) and are enabled on this builder's last built sound, which may or may not still be playing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms), &Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "GetLiveUpdatesEnabled", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::MetaSoundSourceBuilder_eventGetLiveUpdatesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execGetLiveUpdatesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLiveUpdatesEnabled();
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function GetLiveUpdatesEnabled

// Begin Class UMetaSoundSourceBuilder Function SetBlockRateOverride
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics
{
	struct MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms
	{
		float BlockRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's BlockRate override\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's BlockRate override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::NewProp_BlockRate = { "BlockRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms, BlockRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::NewProp_BlockRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetBlockRateOverride", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::MetaSoundSourceBuilder_eventSetBlockRateOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetBlockRateOverride)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlockRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockRateOverride(Z_Param_BlockRate);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetBlockRateOverride

// Begin Class UMetaSoundSourceBuilder Function SetFormat
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics
{
	struct MetaSoundSourceBuilder_eventSetFormat_Parms
	{
		EMetaSoundOutputAudioFormat OutputFormat;
		EMetaSoundBuilderResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the output audio format of the source\n" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the output audio format of the source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetFormat_Parms, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(0, nullptr) }; // 528543909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetFormat_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetFormat", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::MetaSoundSourceBuilder_eventSetFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::MetaSoundSourceBuilder_eventSetFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetFormat)
{
	P_GET_ENUM(EMetaSoundOutputAudioFormat,Z_Param_OutputFormat);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFormat(EMetaSoundOutputAudioFormat(Z_Param_OutputFormat),(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetFormat

// Begin Class UMetaSoundSourceBuilder Function SetQuality
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics
{
	struct MetaSoundSourceBuilder_eventSetQuality_Parms
	{
		FName Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's Quality level\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's Quality level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetQuality", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::MetaSoundSourceBuilder_eventSetQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::MetaSoundSourceBuilder_eventSetQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetQuality)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetQuality

// Begin Class UMetaSoundSourceBuilder Function SetSampleRateOverride
struct Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics
{
	struct MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms
	{
		int32 SampleRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Sets the MetaSound's SampleRate override\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the MetaSound's SampleRate override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundSourceBuilder, nullptr, "SetSampleRateOverride", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::MetaSoundSourceBuilder_eventSetSampleRateOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundSourceBuilder::execSetSampleRateOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleRateOverride(Z_Param_SampleRate);
	P_NATIVE_END;
}
// End Class UMetaSoundSourceBuilder Function SetSampleRateOverride

// Begin Class UMetaSoundSourceBuilder
void UMetaSoundSourceBuilder::StaticRegisterNativesUMetaSoundSourceBuilder()
{
	UClass* Class = UMetaSoundSourceBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Audition", &UMetaSoundSourceBuilder::execAudition },
		{ "GetLiveUpdatesEnabled", &UMetaSoundSourceBuilder::execGetLiveUpdatesEnabled },
		{ "SetBlockRateOverride", &UMetaSoundSourceBuilder::execSetBlockRateOverride },
		{ "SetFormat", &UMetaSoundSourceBuilder::execSetFormat },
		{ "SetQuality", &UMetaSoundSourceBuilder::execSetQuality },
		{ "SetSampleRateOverride", &UMetaSoundSourceBuilder::execSetSampleRateOverride },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSourceBuilder);
UClass* Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister()
{
	return UMetaSoundSourceBuilder::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundSourceBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Builder in charge of building a MetaSound Source */" },
		{ "DisplayName", "MetaSound Source Builder" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Builder in charge of building a MetaSound Source" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_Audition, "Audition" }, // 432387909
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_GetLiveUpdatesEnabled, "GetLiveUpdatesEnabled" }, // 4276872320
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetBlockRateOverride, "SetBlockRateOverride" }, // 4167276216
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetFormat, "SetFormat" }, // 4017255034
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetQuality, "SetQuality" }, // 675531923
		{ &Z_Construct_UFunction_UMetaSoundSourceBuilder_SetSampleRateOverride, "SetSampleRateOverride" }, // 2622111891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSourceBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMetaSoundBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::ClassParams = {
	&UMetaSoundSourceBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundSourceBuilder()
{
	if (!Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton, Z_Construct_UClass_UMetaSoundSourceBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundSourceBuilder.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSourceBuilder>()
{
	return UMetaSoundSourceBuilder::StaticClass();
}
UMetaSoundSourceBuilder::UMetaSoundSourceBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSourceBuilder);
UMetaSoundSourceBuilder::~UMetaSoundSourceBuilder() {}
// End Class UMetaSoundSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateBoolArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms
	{
		TArray<bool> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Bool Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateBoolArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateBoolArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateBoolArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateBoolArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateBoolMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms
	{
		bool Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Bool Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bool Literal" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateBoolMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateBoolMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateBoolMetaSoundLiteral)
{
	P_GET_UBOOL(Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateBoolMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateBoolMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateFloatArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms
	{
		TArray<float> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Float Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateFloatArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateFloatArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateFloatArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateFloatArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateFloatMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms
	{
		float Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Float Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Float Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateFloatMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateFloatMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateFloatMetaSoundLiteral)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateFloatMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateFloatMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateIntArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms
	{
		TArray<int32> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Int Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateIntArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateIntArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateIntArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateIntArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateIntMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms
	{
		int32 Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Int Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Int32 Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateIntMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateIntMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateIntMetaSoundLiteral)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateIntMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateIntMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateMetaSoundLiteralFromParam
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms
	{
		FAudioParameter Param;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Literal From AudioParameter" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Param Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms, Param), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_MetaData), NewProp_Param_MetaData) }; // 2092353974
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateMetaSoundLiteralFromParam", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::MetaSoundBuilderSubsystem_eventCreateMetaSoundLiteralFromParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateMetaSoundLiteralFromParam)
{
	P_GET_STRUCT_REF(FAudioParameter,Z_Param_Out_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateMetaSoundLiteralFromParam(Z_Param_Out_Param);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateMetaSoundLiteralFromParam

// Begin Class UMetaSoundBuilderSubsystem Function CreateObjectArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms
	{
		TArray<UObject*> Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Object Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateObjectArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateObjectArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateObjectArrayMetaSoundLiteral(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateObjectArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateObjectMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms
	{
		UObject* Value;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound Object Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateObjectMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateObjectMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateObjectMetaSoundLiteral)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateObjectMetaSoundLiteral(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateObjectMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreatePatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms
	{
		FName BuilderName;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreatePatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreatePatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->CreatePatchBuilder(Z_Param_BuilderName,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreatePatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreatePatchPresetBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms
	{
		FName BuilderName;
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedPatchClass;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedPatchClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Preset Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedPatchClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReferencedPatchClass = { "ReferencedPatchClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, ReferencedPatchClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedPatchClass_MetaData), NewProp_ReferencedPatchClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReferencedPatchClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreatePatchPresetBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreatePatchPresetBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreatePatchPresetBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedPatchClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->CreatePatchPresetBuilder(Z_Param_BuilderName,Z_Param_Out_ReferencedPatchClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreatePatchPresetBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms
	{
		FName BuilderName;
		FMetaSoundBuilderNodeOutputHandle OnPlayNodeOutput;
		FMetaSoundBuilderNodeInputHandle OnFinishedNodeInput;
		TArray<FMetaSoundBuilderNodeInputHandle> AudioOutNodeInputs;
		EMetaSoundBuilderResult OutResult;
		EMetaSoundOutputAudioFormat OutputFormat;
		bool bIsOneShot;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "CPP_Default_bIsOneShot", "true" },
		{ "CPP_Default_OutputFormat", "Mono" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnPlayNodeOutput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFinishedNodeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioOutNodeInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioOutNodeInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
	static void NewProp_bIsOneShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnPlayNodeOutput = { "OnPlayNodeOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OnPlayNodeOutput), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle, METADATA_PARAMS(0, nullptr) }; // 731065117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnFinishedNodeInput = { "OnFinishedNodeInput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OnFinishedNodeInput), Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs_Inner = { "AudioOutNodeInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs = { "AudioOutNodeInputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, AudioOutNodeInputs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 943726435
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(0, nullptr) }; // 528543909
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms*)Obj)->bIsOneShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnPlayNodeOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OnFinishedNodeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_AudioOutNodeInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_bIsOneShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeOutputHandle,Z_Param_Out_OnPlayNodeOutput);
	P_GET_STRUCT_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_OnFinishedNodeInput);
	P_GET_TARRAY_REF(FMetaSoundBuilderNodeInputHandle,Z_Param_Out_AudioOutNodeInputs);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_GET_ENUM(EMetaSoundOutputAudioFormat,Z_Param_OutputFormat);
	P_GET_UBOOL(Z_Param_bIsOneShot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->CreateSourceBuilder(Z_Param_BuilderName,Z_Param_Out_OnPlayNodeOutput,Z_Param_Out_OnFinishedNodeInput,Z_Param_Out_AudioOutNodeInputs,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult),EMetaSoundOutputAudioFormat(Z_Param_OutputFormat),Z_Param_bIsOneShot);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateSourcePresetBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms
	{
		FName BuilderName;
		TScriptInterface<IMetaSoundDocumentInterface> ReferencedSourceClass;
		EMetaSoundBuilderResult OutResult;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedSourceClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Preset Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReferencedSourceClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReferencedSourceClass = { "ReferencedSourceClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, ReferencedSourceClass), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedSourceClass_MetaData), NewProp_ReferencedSourceClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, OutResult), Z_Construct_UEnum_MetasoundEngine_EMetaSoundBuilderResult, METADATA_PARAMS(0, nullptr) }; // 1238801088
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReferencedSourceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateSourcePresetBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::MetaSoundBuilderSubsystem_eventCreateSourcePresetBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateSourcePresetBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_TINTERFACE_REF(IMetaSoundDocumentInterface,Z_Param_Out_ReferencedSourceClass);
	P_GET_ENUM_REF(EMetaSoundBuilderResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->CreateSourcePresetBuilder(Z_Param_BuilderName,Z_Param_Out_ReferencedSourceClass,(EMetaSoundBuilderResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateSourcePresetBuilder

// Begin Class UMetaSoundBuilderSubsystem Function CreateStringArrayMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms
	{
		TArray<FString> Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound String Array Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Array Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateStringArrayMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringArrayMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateStringArrayMetaSoundLiteral)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateStringArrayMetaSoundLiteral(Z_Param_Out_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateStringArrayMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function CreateStringMetaSoundLiteral
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics
{
	struct MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms
	{
		FString Value;
		FName DataType;
		FMetasoundFrontendLiteral ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "DisplayName", "Create MetaSound String Literal" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String Literal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, DataType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms, ReturnValue), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1401040219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "CreateStringMetaSoundLiteral", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::MetaSoundBuilderSubsystem_eventCreateStringMetaSoundLiteral_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execCreateStringMetaSoundLiteral)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMetasoundFrontendLiteral*)Z_Param__Result=P_THIS->CreateStringMetaSoundLiteral(Z_Param_Value,Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function CreateStringMetaSoundLiteral

// Begin Class UMetaSoundBuilderSubsystem Function FindBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundBuilderBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "DisplayName", "Find Builder By Name" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::MetaSoundBuilderSubsystem_eventFindBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::MetaSoundBuilderSubsystem_eventFindBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundBuilderBase**)Z_Param__Result=P_THIS->FindBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindBuilder

// Begin Class UMetaSoundBuilderSubsystem Function FindBuilderOfDocument
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms
	{
		TScriptInterface<IMetaSoundDocumentInterface> InMetaSound;
		UMetaSoundBuilderBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the builder associated with the given MetaSound (if one exists, transient or asset).\n" },
		{ "DisplayName", "Find Builder By MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the builder associated with the given MetaSound (if one exists, transient or asset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaSound_MetaData[] = {
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InMetaSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_InMetaSound = { "InMetaSound", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms, InMetaSound), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaSound_MetaData), NewProp_InMetaSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_InMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindBuilderOfDocument", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::MetaSoundBuilderSubsystem_eventFindBuilderOfDocument_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindBuilderOfDocument)
{
	P_GET_TINTERFACE(IMetaSoundDocumentInterface,Z_Param_InMetaSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundBuilderBase**)Z_Param__Result=P_THIS->FindBuilderOfDocument(Z_Param_InMetaSound);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindBuilderOfDocument

// Begin Class UMetaSoundBuilderSubsystem Function FindPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundPatchBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the patch builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the patch builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Patch Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventFindPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundPatchBuilder**)Z_Param__Result=P_THIS->FindPatchBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function FindSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundSourceBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Returns the source builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Returns the source builder manually registered with the MetaSound Builder Subsystem with the provided custom name (if previously registered)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Source Builder" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms, ReturnValue), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "FindSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventFindSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execFindSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMetaSoundSourceBuilder**)Z_Param__Result=P_THIS->FindSourceBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function FindSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function IsInterfaceRegistered
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics
{
	struct MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms
	{
		FName InInterfaceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Registered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InInterfaceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_InInterfaceName = { "InInterfaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms, InInterfaceName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_InInterfaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "IsInterfaceRegistered", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::MetaSoundBuilderSubsystem_eventIsInterfaceRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execIsInterfaceRegistered)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InInterfaceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInterfaceRegistered(Z_Param_InInterfaceName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function IsInterfaceRegistered

// Begin Class UMetaSoundBuilderSubsystem Function RegisterBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundBuilderBase* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundBuilderBase,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterBuilder

// Begin Class UMetaSoundBuilderSubsystem Function RegisterPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundPatchBuilder* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundPatchBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundPatchBuilder,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPatchBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function RegisterSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms
	{
		FName BuilderName;
		UMetaSoundSourceBuilder* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "Comment", "// Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Adds builder to subsystem's registry to make it persistent and easily accessible by multiple systems or Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms, Builder), Z_Construct_UClass_UMetaSoundSourceBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "RegisterSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventRegisterSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execRegisterSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_GET_OBJECT(UMetaSoundSourceBuilder,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSourceBuilder(Z_Param_BuilderName,Z_Param_Builder);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function RegisterSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem Function SetTargetPage
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics
{
	struct MetaSoundBuilderSubsystem_eventSetTargetPage_Parms
	{
		FName PageName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSounds|Pages" },
		{ "Comment", "// Sets the targeted page for all MetaSound graph & input default to resolve against.\n// If target page is not implemented (or cooked in a runtime build) for the active platform,\n// uses order of cooked pages(see 'Page Settings' for order) falling back to lower index - ordered page\n// implemented in MetaSound asset. If no fallback is found, uses default graph/input default.\n" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "Sets the targeted page for all MetaSound graph & input default to resolve against.\nIf target page is not implemented (or cooked in a runtime build) for the active platform,\nuses order of cooked pages(see 'Page Settings' for order) falling back to lower index - ordered page\nimplemented in MetaSound asset. If no fallback is found, uses default graph/input default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "TargetPageChanged" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PageName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_PageName = { "PageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventSetTargetPage_Parms, PageName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventSetTargetPage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventSetTargetPage_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_PageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "SetTargetPage", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::MetaSoundBuilderSubsystem_eventSetTargetPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::MetaSoundBuilderSubsystem_eventSetTargetPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execSetTargetPage)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTargetPage(Z_Param_PageName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function SetTargetPage

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterBuilder

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterPatchBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterPatchBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterPatchBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterPatchBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterPatchBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterPatchBuilder

// Begin Class UMetaSoundBuilderSubsystem Function UnregisterSourceBuilder
struct Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics
{
	struct MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms
	{
		FName BuilderName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|MetaSound|Builder" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Unregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BuilderName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_BuilderName = { "BuilderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms, BuilderName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms), &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_BuilderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundBuilderSubsystem, nullptr, "UnregisterSourceBuilder", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::MetaSoundBuilderSubsystem_eventUnregisterSourceBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundBuilderSubsystem::execUnregisterSourceBuilder)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BuilderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterSourceBuilder(Z_Param_BuilderName);
	P_NATIVE_END;
}
// End Class UMetaSoundBuilderSubsystem Function UnregisterSourceBuilder

// Begin Class UMetaSoundBuilderSubsystem
void UMetaSoundBuilderSubsystem::StaticRegisterNativesUMetaSoundBuilderSubsystem()
{
	UClass* Class = UMetaSoundBuilderSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBoolArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateBoolArrayMetaSoundLiteral },
		{ "CreateBoolMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateBoolMetaSoundLiteral },
		{ "CreateFloatArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateFloatArrayMetaSoundLiteral },
		{ "CreateFloatMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateFloatMetaSoundLiteral },
		{ "CreateIntArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateIntArrayMetaSoundLiteral },
		{ "CreateIntMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateIntMetaSoundLiteral },
		{ "CreateMetaSoundLiteralFromParam", &UMetaSoundBuilderSubsystem::execCreateMetaSoundLiteralFromParam },
		{ "CreateObjectArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateObjectArrayMetaSoundLiteral },
		{ "CreateObjectMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateObjectMetaSoundLiteral },
		{ "CreatePatchBuilder", &UMetaSoundBuilderSubsystem::execCreatePatchBuilder },
		{ "CreatePatchPresetBuilder", &UMetaSoundBuilderSubsystem::execCreatePatchPresetBuilder },
		{ "CreateSourceBuilder", &UMetaSoundBuilderSubsystem::execCreateSourceBuilder },
		{ "CreateSourcePresetBuilder", &UMetaSoundBuilderSubsystem::execCreateSourcePresetBuilder },
		{ "CreateStringArrayMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateStringArrayMetaSoundLiteral },
		{ "CreateStringMetaSoundLiteral", &UMetaSoundBuilderSubsystem::execCreateStringMetaSoundLiteral },
		{ "FindBuilder", &UMetaSoundBuilderSubsystem::execFindBuilder },
		{ "FindBuilderOfDocument", &UMetaSoundBuilderSubsystem::execFindBuilderOfDocument },
		{ "FindPatchBuilder", &UMetaSoundBuilderSubsystem::execFindPatchBuilder },
		{ "FindSourceBuilder", &UMetaSoundBuilderSubsystem::execFindSourceBuilder },
		{ "IsInterfaceRegistered", &UMetaSoundBuilderSubsystem::execIsInterfaceRegistered },
		{ "RegisterBuilder", &UMetaSoundBuilderSubsystem::execRegisterBuilder },
		{ "RegisterPatchBuilder", &UMetaSoundBuilderSubsystem::execRegisterPatchBuilder },
		{ "RegisterSourceBuilder", &UMetaSoundBuilderSubsystem::execRegisterSourceBuilder },
		{ "SetTargetPage", &UMetaSoundBuilderSubsystem::execSetTargetPage },
		{ "UnregisterBuilder", &UMetaSoundBuilderSubsystem::execUnregisterBuilder },
		{ "UnregisterPatchBuilder", &UMetaSoundBuilderSubsystem::execUnregisterPatchBuilder },
		{ "UnregisterSourceBuilder", &UMetaSoundBuilderSubsystem::execUnregisterSourceBuilder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBuilderSubsystem);
UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem_NoRegister()
{
	return UMetaSoundBuilderSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The subsystem in charge of tracking MetaSound builders */" },
		{ "DisplayName", "MetaSound Builder Subsystem" },
		{ "IncludePath", "MetasoundBuilderSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
		{ "ToolTip", "The subsystem in charge of tracking MetaSound builders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundBuilderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NamedBuilders_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamedBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamedBuilders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral, "CreateBoolArrayMetaSoundLiteral" }, // 2067059754
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral, "CreateBoolMetaSoundLiteral" }, // 3420499803
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral, "CreateFloatArrayMetaSoundLiteral" }, // 1981793711
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral, "CreateFloatMetaSoundLiteral" }, // 2044444500
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral, "CreateIntArrayMetaSoundLiteral" }, // 1233952407
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral, "CreateIntMetaSoundLiteral" }, // 326189789
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam, "CreateMetaSoundLiteralFromParam" }, // 2276362450
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral, "CreateObjectArrayMetaSoundLiteral" }, // 3412463259
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral, "CreateObjectMetaSoundLiteral" }, // 1752617438
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchBuilder, "CreatePatchBuilder" }, // 4058012636
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder, "CreatePatchPresetBuilder" }, // 3889068763
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourceBuilder, "CreateSourceBuilder" }, // 439811534
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder, "CreateSourcePresetBuilder" }, // 2368453349
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral, "CreateStringArrayMetaSoundLiteral" }, // 898349415
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral, "CreateStringMetaSoundLiteral" }, // 1659301519
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilder, "FindBuilder" }, // 3778794455
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindBuilderOfDocument, "FindBuilderOfDocument" }, // 781446057
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindPatchBuilder, "FindPatchBuilder" }, // 2031110610
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_FindSourceBuilder, "FindSourceBuilder" }, // 3009493785
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_IsInterfaceRegistered, "IsInterfaceRegistered" }, // 2485618497
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterBuilder, "RegisterBuilder" }, // 1303738904
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterPatchBuilder, "RegisterPatchBuilder" }, // 783648486
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_RegisterSourceBuilder, "RegisterSourceBuilder" }, // 1327437994
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_SetTargetPage, "SetTargetPage" }, // 3706957731
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterBuilder, "UnregisterBuilder" }, // 3866363739
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterPatchBuilder, "UnregisterPatchBuilder" }, // 2723986781
		{ &Z_Construct_UFunction_UMetaSoundBuilderSubsystem_UnregisterSourceBuilder, "UnregisterSourceBuilder" }, // 393085495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBuilderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_ValueProp = { "NamedBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_Key_KeyProp = { "NamedBuilders_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders = { "NamedBuilders", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundBuilderSubsystem, NamedBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedBuilders_MetaData), NewProp_NamedBuilders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::NewProp_NamedBuilders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::ClassParams = {
	&UMetaSoundBuilderSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundBuilderSubsystem()
{
	if (!Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundBuilderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundBuilderSubsystem>()
{
	return UMetaSoundBuilderSubsystem::StaticClass();
}
UMetaSoundBuilderSubsystem::UMetaSoundBuilderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBuilderSubsystem);
UMetaSoundBuilderSubsystem::~UMetaSoundBuilderSubsystem() {}
// End Class UMetaSoundBuilderSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundPatchBuilder, UMetaSoundPatchBuilder::StaticClass, TEXT("UMetaSoundPatchBuilder"), &Z_Registration_Info_UClass_UMetaSoundPatchBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundPatchBuilder), 4000233925U) },
		{ Z_Construct_UClass_UMetaSoundSourceBuilder, UMetaSoundSourceBuilder::StaticClass, TEXT("UMetaSoundSourceBuilder"), &Z_Registration_Info_UClass_UMetaSoundSourceBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSourceBuilder), 3735580699U) },
		{ Z_Construct_UClass_UMetaSoundBuilderSubsystem, UMetaSoundBuilderSubsystem::StaticClass, TEXT("UMetaSoundBuilderSubsystem"), &Z_Registration_Info_UClass_UMetaSoundBuilderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBuilderSubsystem), 4194646392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_3542031956(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
