// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Blueprint/StateTreeEvaluatorBlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEvaluatorBlueprintBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTreeEvaluatorBlueprintBase Function ReceiveTick
struct StateTreeEvaluatorBlueprintBase_eventReceiveTick_Parms
{
	float DeltaTime;
};
static const FName NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
void UStateTreeEvaluatorBlueprintBase::ReceiveTick(const float DeltaTime)
{
	StateTreeEvaluatorBlueprintBase_eventReceiveTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeEvaluatorBlueprintBase_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::PropPointers), sizeof(StateTreeEvaluatorBlueprintBase_eventReceiveTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeEvaluatorBlueprintBase_eventReceiveTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeEvaluatorBlueprintBase Function ReceiveTick

// Begin Class UStateTreeEvaluatorBlueprintBase Function ReceiveTreeStart
static const FName NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart = FName(TEXT("ReceiveTreeStart"));
void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart()
{
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "TreeStart" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase, nullptr, "ReceiveTreeStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeEvaluatorBlueprintBase Function ReceiveTreeStart

// Begin Class UStateTreeEvaluatorBlueprintBase Function ReceiveTreeStop
static const FName NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop = FName(TEXT("ReceiveTreeStop"));
void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop()
{
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "TreeStop" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase, nullptr, "ReceiveTreeStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeEvaluatorBlueprintBase Function ReceiveTreeStop

// Begin Class UStateTreeEvaluatorBlueprintBase
void UStateTreeEvaluatorBlueprintBase::StaticRegisterNativesUStateTreeEvaluatorBlueprintBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeEvaluatorBlueprintBase);
UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister()
{
	return UStateTreeEvaluatorBlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for Blueprint based evaluators. \n */" },
		{ "IncludePath", "Blueprint/StateTreeEvaluatorBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Base class for Blueprint based evaluators." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTick, "ReceiveTick" }, // 2215605640
		{ &Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart, "ReceiveTreeStart" }, // 353261198
		{ &Z_Construct_UFunction_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop, "ReceiveTreeStop" }, // 2303431220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeEvaluatorBlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::ClassParams = {
	&UStateTreeEvaluatorBlueprintBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase()
{
	if (!Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeEvaluatorBlueprintBase>()
{
	return UStateTreeEvaluatorBlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeEvaluatorBlueprintBase);
UStateTreeEvaluatorBlueprintBase::~UStateTreeEvaluatorBlueprintBase() {}
// End Class UStateTreeEvaluatorBlueprintBase

// Begin ScriptStruct FStateTreeBlueprintEvaluatorWrapper
static_assert(std::is_polymorphic<FStateTreeBlueprintEvaluatorWrapper>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FStateTreeBlueprintEvaluatorWrapper cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper;
class UScriptStruct* FStateTreeBlueprintEvaluatorWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBlueprintEvaluatorWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBlueprintEvaluatorWrapper>()
{
	return FStateTreeBlueprintEvaluatorWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper for Blueprint based Evaluators.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
		{ "ToolTip", "Wrapper for Blueprint based Evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeEvaluatorBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EvaluatorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBlueprintEvaluatorWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::NewProp_EvaluatorClass = { "EvaluatorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBlueprintEvaluatorWrapper, EvaluatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluatorClass_MetaData), NewProp_EvaluatorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::NewProp_EvaluatorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
	&NewStructOps,
	"StateTreeBlueprintEvaluatorWrapper",
	Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::PropPointers),
	sizeof(FStateTreeBlueprintEvaluatorWrapper),
	alignof(FStateTreeBlueprintEvaluatorWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper.InnerSingleton;
}
// End ScriptStruct FStateTreeBlueprintEvaluatorWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeBlueprintEvaluatorWrapper::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBlueprintEvaluatorWrapper_Statics::NewStructOps, TEXT("StateTreeBlueprintEvaluatorWrapper"), &Z_Registration_Info_UScriptStruct_StateTreeBlueprintEvaluatorWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBlueprintEvaluatorWrapper), 3990396883U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase, UStateTreeEvaluatorBlueprintBase::StaticClass, TEXT("UStateTreeEvaluatorBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeEvaluatorBlueprintBase), 239634808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_2428572776(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeEvaluatorBlueprintBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
