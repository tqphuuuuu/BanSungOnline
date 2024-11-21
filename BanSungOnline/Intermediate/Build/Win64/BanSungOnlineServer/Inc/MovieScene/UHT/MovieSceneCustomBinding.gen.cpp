// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCustomBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomBinding();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBindingResolveResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult;
class UScriptStruct* FMovieSceneBindingResolveResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingResolveResult"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingResolveResult>()
{
	return FMovieSceneBindingResolveResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The resolved object */" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
		{ "ToolTip", "The resolved object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingResolveResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingResolveResult, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingResolveResult",
	Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::PropPointers),
	sizeof(FMovieSceneBindingResolveResult),
	alignof(FMovieSceneBindingResolveResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingResolveResult

// Begin ScriptStruct FMovieSceneBindingResolveContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext;
class UScriptStruct* FMovieSceneBindingResolveContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingResolveContext"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingResolveContext>()
{
	return FMovieSceneBindingResolveContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Blueprint-specific resolution context for custom bindings.\n*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
		{ "ToolTip", "* Blueprint-specific resolution context for custom bindings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* The world context*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
		{ "ToolTip", "The world context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections). */" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
		{ "ToolTip", "Binding for the bound object currently evaluating this condition if applicable (BindingId will be invalid for conditions on global tracks/sections)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingResolveContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingResolveContext, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingResolveContext, Binding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Binding_MetaData), NewProp_Binding_MetaData) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::NewProp_Binding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingResolveContext",
	Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::PropPointers),
	sizeof(FMovieSceneBindingResolveContext),
	alignof(FMovieSceneBindingResolveContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingResolveContext

// Begin Class UMovieSceneCustomBinding Function GetBaseCustomPriority
struct Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics
{
	struct MovieSceneCustomBinding_eventGetBaseCustomPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Binding" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomBinding_eventGetBaseCustomPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomBinding, nullptr, "GetBaseCustomPriority", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::MovieSceneCustomBinding_eventGetBaseCustomPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::MovieSceneCustomBinding_eventGetBaseCustomPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCustomBinding::execGetBaseCustomPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneCustomBinding::GetBaseCustomPriority();
	P_NATIVE_END;
}
// End Class UMovieSceneCustomBinding Function GetBaseCustomPriority

// Begin Class UMovieSceneCustomBinding Function GetBaseEnginePriority
struct Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics
{
	struct MovieSceneCustomBinding_eventGetBaseEnginePriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Binding" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCustomBinding_eventGetBaseEnginePriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCustomBinding, nullptr, "GetBaseEnginePriority", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::MovieSceneCustomBinding_eventGetBaseEnginePriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::MovieSceneCustomBinding_eventGetBaseEnginePriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCustomBinding::execGetBaseEnginePriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneCustomBinding::GetBaseEnginePriority();
	P_NATIVE_END;
}
// End Class UMovieSceneCustomBinding Function GetBaseEnginePriority

// Begin Class UMovieSceneCustomBinding
void UMovieSceneCustomBinding::StaticRegisterNativesUMovieSceneCustomBinding()
{
	UClass* Class = UMovieSceneCustomBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBaseCustomPriority", &UMovieSceneCustomBinding::execGetBaseCustomPriority },
		{ "GetBaseEnginePriority", &UMovieSceneCustomBinding::execGetBaseEnginePriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCustomBinding);
UClass* Z_Construct_UClass_UMovieSceneCustomBinding_NoRegister()
{
	return UMovieSceneCustomBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCustomBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A custom binding. Allows users to define their own binding resolution types, including dynamic 'Replaceable' bindings with previews in editor, as well as Spawnable types.\n */" },
		{ "IncludePath", "Bindings/MovieSceneCustomBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneCustomBinding.h" },
		{ "ToolTip", "A custom binding. Allows users to define their own binding resolution types, including dynamic 'Replaceable' bindings with previews in editor, as well as Spawnable types." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseCustomPriority, "GetBaseCustomPriority" }, // 779358070
		{ &Z_Construct_UFunction_UMovieSceneCustomBinding_GetBaseEnginePriority, "GetBaseEnginePriority" }, // 1001489366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCustomBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneCustomBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCustomBinding_Statics::ClassParams = {
	&UMovieSceneCustomBinding::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCustomBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCustomBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCustomBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCustomBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCustomBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneCustomBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCustomBinding.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCustomBinding>()
{
	return UMovieSceneCustomBinding::StaticClass();
}
UMovieSceneCustomBinding::UMovieSceneCustomBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCustomBinding);
UMovieSceneCustomBinding::~UMovieSceneCustomBinding() {}
// End Class UMovieSceneCustomBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBindingResolveResult::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingResolveResult_Statics::NewStructOps, TEXT("MovieSceneBindingResolveResult"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingResolveResult), 1483197288U) },
		{ FMovieSceneBindingResolveContext::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingResolveContext_Statics::NewStructOps, TEXT("MovieSceneBindingResolveContext"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingResolveContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingResolveContext), 2031192382U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCustomBinding, UMovieSceneCustomBinding::StaticClass, TEXT("UMovieSceneCustomBinding"), &Z_Registration_Info_UClass_UMovieSceneCustomBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCustomBinding), 3692765998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_1775375550(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneCustomBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
