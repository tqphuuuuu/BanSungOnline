// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Blueprint/StateTreeConsiderationBlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeConsiderationBlueprintBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConsiderationBlueprintBase();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Class UStateTreeConsiderationBlueprintBase Function ReceiveGetScore
struct StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UStateTreeConsiderationBlueprintBase_ReceiveGetScore = FName(TEXT("ReceiveGetScore"));
float UStateTreeConsiderationBlueprintBase::ReceiveGetScore() const
{
	StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UStateTreeConsiderationBlueprintBase_ReceiveGetScore);
		const_cast<UStateTreeConsiderationBlueprintBase*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "GetScore" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConsiderationBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeConsiderationBlueprintBase, nullptr, "ReceiveGetScore", nullptr, nullptr, Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::PropPointers), sizeof(StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(StateTreeConsiderationBlueprintBase_eventReceiveGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UStateTreeConsiderationBlueprintBase Function ReceiveGetScore

// Begin Class UStateTreeConsiderationBlueprintBase
void UStateTreeConsiderationBlueprintBase::StaticRegisterNativesUStateTreeConsiderationBlueprintBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeConsiderationBlueprintBase);
UClass* Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_NoRegister()
{
	return UStateTreeConsiderationBlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for Blueprint based Considerations.\n */" },
		{ "IncludePath", "Blueprint/StateTreeConsiderationBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConsiderationBlueprintBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Base class for Blueprint based Considerations." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeConsiderationBlueprintBase_ReceiveGetScore, "ReceiveGetScore" }, // 2127118841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeConsiderationBlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::ClassParams = {
	&UStateTreeConsiderationBlueprintBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeConsiderationBlueprintBase()
{
	if (!Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.OuterSingleton;
}
template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeConsiderationBlueprintBase>()
{
	return UStateTreeConsiderationBlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeConsiderationBlueprintBase);
UStateTreeConsiderationBlueprintBase::~UStateTreeConsiderationBlueprintBase() {}
// End Class UStateTreeConsiderationBlueprintBase

// Begin ScriptStruct FStateTreeBlueprintConsiderationWrapper
static_assert(std::is_polymorphic<FStateTreeBlueprintConsiderationWrapper>() == std::is_polymorphic<FStateTreeConsiderationBase>(), "USTRUCT FStateTreeBlueprintConsiderationWrapper cannot be polymorphic unless super FStateTreeConsiderationBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper;
class UScriptStruct* FStateTreeBlueprintConsiderationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBlueprintConsiderationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBlueprintConsiderationWrapper>()
{
	return FStateTreeBlueprintConsiderationWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper for Blueprint based Considerations.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConsiderationBlueprintBase.h" },
		{ "ToolTip", "Wrapper for Blueprint based Considerations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsiderationClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConsiderationBlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConsiderationClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBlueprintConsiderationWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::NewProp_ConsiderationClass = { "ConsiderationClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBlueprintConsiderationWrapper, ConsiderationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStateTreeConsiderationBlueprintBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsiderationClass_MetaData), NewProp_ConsiderationClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::NewProp_ConsiderationClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConsiderationBase,
	&NewStructOps,
	"StateTreeBlueprintConsiderationWrapper",
	Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::PropPointers),
	sizeof(FStateTreeBlueprintConsiderationWrapper),
	alignof(FStateTreeBlueprintConsiderationWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper.InnerSingleton;
}
// End ScriptStruct FStateTreeBlueprintConsiderationWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeBlueprintConsiderationWrapper::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper_Statics::NewStructOps, TEXT("StateTreeBlueprintConsiderationWrapper"), &Z_Registration_Info_UScriptStruct_StateTreeBlueprintConsiderationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBlueprintConsiderationWrapper), 1647853911U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeConsiderationBlueprintBase, UStateTreeConsiderationBlueprintBase::StaticClass, TEXT("UStateTreeConsiderationBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeConsiderationBlueprintBase), 445869579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_2558499407(TEXT("/Script/StateTreeModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConsiderationBlueprintBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
