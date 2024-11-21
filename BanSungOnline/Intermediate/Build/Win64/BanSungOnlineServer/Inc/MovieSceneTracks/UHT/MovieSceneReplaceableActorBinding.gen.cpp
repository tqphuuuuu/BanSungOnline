// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Bindings/MovieSceneReplaceableActorBinding.h"
#include "Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneReplaceableActorBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneReplaceableActorBinding
void UMovieSceneReplaceableActorBinding::StaticRegisterNativesUMovieSceneReplaceableActorBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaceableActorBinding);
UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_NoRegister()
{
	return UMovieSceneReplaceableActorBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* An implementation of UMovieSceneReplaceableBindingBase that uses UMovieSceneSpawnableActorBinding as the preview spawnable,\n* and has no implementation of ResolveRuntimeBindingInternal, relying instead of Sequencer's built in BindingOverride mechanism for binding at runtime.\n*/" },
		{ "DisplayName", "Replaceable Actor" },
		{ "IncludePath", "Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "* An implementation of UMovieSceneReplaceableBindingBase that uses UMovieSceneSpawnableActorBinding as the preview spawnable,\n* and has no implementation of ResolveRuntimeBindingInternal, relying instead of Sequencer's built in BindingOverride mechanism for binding at runtime." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaceableActorBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneReplaceableBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::ClassParams = {
	&UMovieSceneReplaceableActorBinding::StaticClass,
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
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaceableActorBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneReplaceableActorBinding>()
{
	return UMovieSceneReplaceableActorBinding::StaticClass();
}
UMovieSceneReplaceableActorBinding::UMovieSceneReplaceableActorBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaceableActorBinding);
UMovieSceneReplaceableActorBinding::~UMovieSceneReplaceableActorBinding() {}
// End Class UMovieSceneReplaceableActorBinding

// Begin Class UMovieSceneReplaceableActorBinding_BPBase Function BP_InitReplaceableBinding
struct MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms
{
	UObject* SourceObject;
	UMovieScene* OwnerMovieScene;
};
static const FName NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding = FName(TEXT("BP_InitReplaceableBinding"));
void UMovieSceneReplaceableActorBinding_BPBase::BP_InitReplaceableBinding(UObject* SourceObject, UMovieScene* OwnerMovieScene)
{
	MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms Parms;
	Parms.SourceObject=SourceObject;
	Parms.OwnerMovieScene=OwnerMovieScene;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Called after binding creation to allow the replaceable to initialize any data members from the source object. */" },
		{ "DisplayName", "Init Replaceable Binding" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Called after binding creation to allow the replaceable to initialize any data members from the source object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovieScene_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovieScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::NewProp_OwnerMovieScene = { "OwnerMovieScene", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms, OwnerMovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovieScene_MetaData), NewProp_OwnerMovieScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::NewProp_OwnerMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase, nullptr, "BP_InitReplaceableBinding", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::PropPointers), sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_InitReplaceableBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneReplaceableActorBinding_BPBase::execBP_InitReplaceableBinding)
{
	P_GET_OBJECT(UObject,Z_Param_SourceObject);
	P_GET_OBJECT(UMovieScene,Z_Param_OwnerMovieScene);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_InitReplaceableBinding_Implementation(Z_Param_SourceObject,Z_Param_OwnerMovieScene);
	P_NATIVE_END;
}
// End Class UMovieSceneReplaceableActorBinding_BPBase Function BP_InitReplaceableBinding

// Begin Class UMovieSceneReplaceableActorBinding_BPBase Function BP_ResolveRuntimeBinding
struct MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms
{
	FMovieSceneBindingResolveContext ResolveContext;
	FMovieSceneBindingResolveResult ReturnValue;
};
static const FName NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding = FName(TEXT("BP_ResolveRuntimeBinding"));
FMovieSceneBindingResolveResult UMovieSceneReplaceableActorBinding_BPBase::BP_ResolveRuntimeBinding(FMovieSceneBindingResolveContext const& ResolveContext) const
{
	MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms Parms;
	Parms.ResolveContext=ResolveContext;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding);
		const_cast<UMovieSceneReplaceableActorBinding_BPBase*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/*\n\x09* Must be implemented. Called during non-editor/runtime to resolve the binding dynamically. In editor worlds/Sequencer will instead use the PreviewSpawnable binding to spawn a preview object.\n\x09* If no object is returned, Sequencer's BindingOverrides can still be used to dynamically bind the object.\n\x09*/" },
		{ "DisplayName", "Resolve Runtime Binding" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "* Must be implemented. Called during non-editor/runtime to resolve the binding dynamically. In editor worlds/Sequencer will instead use the PreviewSpawnable binding to spawn a preview object.\n* If no object is returned, Sequencer's BindingOverrides can still be used to dynamically bind the object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolveContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolveContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::NewProp_ResolveContext = { "ResolveContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms, ResolveContext), Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolveContext_MetaData), NewProp_ResolveContext_MetaData) }; // 2031192382
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult, METADATA_PARAMS(0, nullptr) }; // 1483197288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::NewProp_ResolveContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase, nullptr, "BP_ResolveRuntimeBinding", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::PropPointers), sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_ResolveRuntimeBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMovieSceneReplaceableActorBinding_BPBase Function BP_ResolveRuntimeBinding

// Begin Class UMovieSceneReplaceableActorBinding_BPBase Function BP_SupportsBindingCreationFromObject
struct MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms
{
	const UObject* SourceObject;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject = FName(TEXT("BP_SupportsBindingCreationFromObject"));
bool UMovieSceneReplaceableActorBinding_BPBase::BP_SupportsBindingCreationFromObject(const UObject* SourceObject) const
{
	MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms Parms;
	Parms.SourceObject=SourceObject;
	UFunction* Func = FindFunctionChecked(NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject);
		const_cast<UMovieSceneReplaceableActorBinding_BPBase*>(this)->ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Called on the binding to determine whether this binding type supports creating a binding from the passed in object. */" },
		{ "DisplayName", "Supports Binding Creation From Object" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Called on the binding to determine whether this binding type supports creating a binding from the passed in object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
void Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms), &Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase, nullptr, "BP_SupportsBindingCreationFromObject", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::PropPointers), sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneReplaceableActorBinding_BPBase_eventBP_SupportsBindingCreationFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneReplaceableActorBinding_BPBase::execBP_SupportsBindingCreationFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_SourceObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_SupportsBindingCreationFromObject_Implementation(Z_Param_SourceObject);
	P_NATIVE_END;
}
// End Class UMovieSceneReplaceableActorBinding_BPBase Function BP_SupportsBindingCreationFromObject

// Begin Class UMovieSceneReplaceableActorBinding_BPBase
void UMovieSceneReplaceableActorBinding_BPBase::StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase()
{
	UClass* Class = UMovieSceneReplaceableActorBinding_BPBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_InitReplaceableBinding", &UMovieSceneReplaceableActorBinding_BPBase::execBP_InitReplaceableBinding },
		{ "BP_SupportsBindingCreationFromObject", &UMovieSceneReplaceableActorBinding_BPBase::execBP_SupportsBindingCreationFromObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaceableActorBinding_BPBase);
UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_NoRegister()
{
	return UMovieSceneReplaceableActorBinding_BPBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Base class for Custom Replaceable Binding classes implemented by Blueprints */" },
		{ "DisplayName", "Replaceable Blueprint Base" },
		{ "IncludePath", "Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Base class for Custom Replaceable Binding classes implemented by Blueprints" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingTypePrettyName_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/* Name to show in Sequencer for the custom binding type.*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Name to show in Sequencer for the custom binding type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingTypeTooltip_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/* Tooltip to show in Sequencer for the custom binding type.*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Tooltip to show in Sequencer for the custom binding type." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBindingPriority_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/*\n\x09Priority with which to consider this binding type over others when considering binding an object to Sequencer.\n\x09""As a guideline, a priority of BaseEnginePriority will ensure that engine types(such as Spawnable Actor, Replaceable Actor) will\n\x09""be higher priority than your custom binding, and so your binding type will not automatically be created(but may be converted to manually).\n\x09""A priority of BaseCustomPriority and higher will ensure that your binding type is considered more highly than engine types,\n\x09so if your binding type's 'SupportsBindingCreationFromObject' returns true for an object, your binding type will be created by default\n\x09rather than an engine type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Priority with which to consider this binding type over others when considering binding an object to Sequencer.\nAs a guideline, a priority of BaseEnginePriority will ensure that engine types(such as Spawnable Actor, Replaceable Actor) will\nbe higher priority than your custom binding, and so your binding type will not automatically be created(but may be converted to manually).\nA priority of BaseCustomPriority and higher will ensure that your binding type is considered more highly than engine types,\nso if your binding type's 'SupportsBindingCreationFromObject' returns true for an object, your binding type will be created by default\nrather than an engine type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSpawnableType_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "Preview" },
		{ "Comment", "// Preview Spawnable Type to use for this replaceable\n" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableActorBinding.h" },
		{ "ToolTip", "Preview Spawnable Type to use for this replaceable" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_BindingTypePrettyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BindingTypeTooltip;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomBindingPriority;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewSpawnableType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding, "BP_InitReplaceableBinding" }, // 2725919794
		{ &Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding, "BP_ResolveRuntimeBinding" }, // 360255394
		{ &Z_Construct_UFunction_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject, "BP_SupportsBindingCreationFromObject" }, // 2948129442
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaceableActorBinding_BPBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_BindingTypePrettyName = { "BindingTypePrettyName", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableActorBinding_BPBase, BindingTypePrettyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingTypePrettyName_MetaData), NewProp_BindingTypePrettyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_BindingTypeTooltip = { "BindingTypeTooltip", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableActorBinding_BPBase, BindingTypeTooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingTypeTooltip_MetaData), NewProp_BindingTypeTooltip_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_CustomBindingPriority = { "CustomBindingPriority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableActorBinding_BPBase, CustomBindingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBindingPriority_MetaData), NewProp_CustomBindingPriority_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_PreviewSpawnableType = { "PreviewSpawnableType", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableActorBinding_BPBase, PreviewSpawnableType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSpawnableType_MetaData), NewProp_PreviewSpawnableType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_BindingTypePrettyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_BindingTypeTooltip,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_CustomBindingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::NewProp_PreviewSpawnableType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneReplaceableBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::ClassParams = {
	&UMovieSceneReplaceableActorBinding_BPBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::PropPointers),
	0,
	0x00A810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneReplaceableActorBinding_BPBase>()
{
	return UMovieSceneReplaceableActorBinding_BPBase::StaticClass();
}
UMovieSceneReplaceableActorBinding_BPBase::UMovieSceneReplaceableActorBinding_BPBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaceableActorBinding_BPBase);
UMovieSceneReplaceableActorBinding_BPBase::~UMovieSceneReplaceableActorBinding_BPBase() {}
// End Class UMovieSceneReplaceableActorBinding_BPBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneReplaceableActorBinding, UMovieSceneReplaceableActorBinding::StaticClass, TEXT("UMovieSceneReplaceableActorBinding"), &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaceableActorBinding), 4026290368U) },
		{ Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase, UMovieSceneReplaceableActorBinding_BPBase::StaticClass, TEXT("UMovieSceneReplaceableActorBinding_BPBase"), &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaceableActorBinding_BPBase), 2828504338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_4076023975(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableActorBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
