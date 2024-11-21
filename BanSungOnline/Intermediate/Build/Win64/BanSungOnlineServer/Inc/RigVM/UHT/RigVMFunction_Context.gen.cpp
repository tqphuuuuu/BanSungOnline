// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Execution/RigVMFunction_Context.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Context() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_IsHostBeingDebugged
static_assert(std::is_polymorphic<FRigVMFunction_IsHostBeingDebugged>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_IsHostBeingDebugged cannot be polymorphic unless super FRigVMStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged;
class UScriptStruct* FRigVMFunction_IsHostBeingDebugged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_IsHostBeingDebugged"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_IsHostBeingDebugged_Execute;
		Arguments_FRigVMFunction_IsHostBeingDebugged_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_IsHostBeingDebugged::Execute"), &FRigVMFunction_IsHostBeingDebugged::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.OuterSingleton, Arguments_FRigVMFunction_IsHostBeingDebugged_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_IsHostBeingDebugged>()
{
	return FRigVMFunction_IsHostBeingDebugged::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Returns true if a graph is run with its asset editor open. This is editor only - in shipping it always returns false.\n */" },
		{ "DisplayName", "Is Asset Editor Open" },
		{ "Keywords", "Debug,Open,Inspect" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Context.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Returns true if a graph is run with its asset editor open. This is editor only - in shipping it always returns false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the graph is currently open in the asset editor\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Context.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the graph is currently open in the asset editor" },
	};
#endif // WITH_METADATA
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_IsHostBeingDebugged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigVMFunction_IsHostBeingDebugged*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_IsHostBeingDebugged), &Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMStruct,
	&NewStructOps,
	"RigVMFunction_IsHostBeingDebugged",
	Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::PropPointers),
	sizeof(FRigVMFunction_IsHostBeingDebugged),
	alignof(FRigVMFunction_IsHostBeingDebugged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged.InnerSingleton;
}
void FRigVMFunction_IsHostBeingDebugged::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_IsHostBeingDebugged::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result
	);
}
// End ScriptStruct FRigVMFunction_IsHostBeingDebugged

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_IsHostBeingDebugged::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_IsHostBeingDebugged_Statics::NewStructOps, TEXT("RigVMFunction_IsHostBeingDebugged"), &Z_Registration_Info_UScriptStruct_RigVMFunction_IsHostBeingDebugged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_IsHostBeingDebugged), 510505389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h_3300545889(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Context_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
