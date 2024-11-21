// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputDelegateBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding;
class UScriptStruct* FBlueprintInputDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputDelegateBinding>()
{
	return FBlueprintInputDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bConsumeInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
	static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
	static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
{
	((FBlueprintInputDelegateBinding*)Obj)->bConsumeInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumeInput_MetaData), NewProp_bConsumeInput_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
{
	((FBlueprintInputDelegateBinding*)Obj)->bExecuteWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuteWhenPaused_MetaData), NewProp_bExecuteWhenPaused_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
{
	((FBlueprintInputDelegateBinding*)Obj)->bOverrideParentBinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideParentBinding_MetaData), NewProp_bOverrideParentBinding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintInputDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputDelegateBinding),
	alignof(FBlueprintInputDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputDelegateBinding

// Begin Class UInputDelegateBinding
void UInputDelegateBinding::StaticRegisterNativesUInputDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDelegateBinding);
UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister()
{
	return UInputDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams = {
	&UInputDelegateBinding::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputDelegateBinding>()
{
	return UInputDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDelegateBinding);
UInputDelegateBinding::~UInputDelegateBinding() {}
// End Class UInputDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputDelegateBinding), 346936235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDelegateBinding, UInputDelegateBinding::StaticClass, TEXT("UInputDelegateBinding"), &Z_Registration_Info_UClass_UInputDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDelegateBinding), 2960642123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_3561808561(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
