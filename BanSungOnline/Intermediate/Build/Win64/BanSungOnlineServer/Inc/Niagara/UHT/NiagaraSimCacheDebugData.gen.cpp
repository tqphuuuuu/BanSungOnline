// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/NiagaraSimCacheDebugData.h"
#include "Niagara/Public/NiagaraParameterStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheDebugData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheDebugData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraSimCacheDebugDataFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame;
class UScriptStruct* FNiagaraSimCacheDebugDataFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheDebugDataFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheDebugDataFrame>()
{
	return FNiagaraSimCacheDebugDataFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NiagaraSimCacheDebugData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugParameterStores_MetaData[] = {
		{ "ModuleRelativePath", "Internal/NiagaraSimCacheDebugData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugParameterStores_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugParameterStores_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DebugParameterStores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheDebugDataFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores_ValueProp = { "DebugParameterStores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(0, nullptr) }; // 3025266078
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores_Key_KeyProp = { "DebugParameterStores_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores = { "DebugParameterStores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimCacheDebugDataFrame, DebugParameterStores), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugParameterStores_MetaData), NewProp_DebugParameterStores_MetaData) }; // 3025266078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewProp_DebugParameterStores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSimCacheDebugDataFrame",
	Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::PropPointers),
	sizeof(FNiagaraSimCacheDebugDataFrame),
	alignof(FNiagaraSimCacheDebugDataFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame.InnerSingleton;
}
// End ScriptStruct FNiagaraSimCacheDebugDataFrame

// Begin Class UNiagaraSimCacheDebugData
void UNiagaraSimCacheDebugData::StaticRegisterNativesUNiagaraSimCacheDebugData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimCacheDebugData);
UClass* Z_Construct_UClass_UNiagaraSimCacheDebugData_NoRegister()
{
	return UNiagaraSimCacheDebugData::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Contains data useful for debugging a Niagara system\n" },
		{ "IncludePath", "NiagaraSimCacheDebugData.h" },
		{ "ModuleRelativePath", "Internal/NiagaraSimCacheDebugData.h" },
		{ "ToolTip", "Contains data useful for debugging a Niagara system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "ModuleRelativePath", "Internal/NiagaraSimCacheDebugData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimCacheDebugData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame, METADATA_PARAMS(0, nullptr) }; // 3289803613
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSimCacheDebugData, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) }; // 3289803613
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::NewProp_Frames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::NewProp_Frames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::ClassParams = {
	&UNiagaraSimCacheDebugData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSimCacheDebugData()
{
	if (!Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton, Z_Construct_UClass_UNiagaraSimCacheDebugData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSimCacheDebugData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSimCacheDebugData>()
{
	return UNiagaraSimCacheDebugData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimCacheDebugData);
UNiagaraSimCacheDebugData::~UNiagaraSimCacheDebugData() {}
// End Class UNiagaraSimCacheDebugData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraSimCacheDebugDataFrame::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheDebugDataFrame_Statics::NewStructOps, TEXT("NiagaraSimCacheDebugDataFrame"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheDebugDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheDebugDataFrame), 3289803613U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSimCacheDebugData, UNiagaraSimCacheDebugData::StaticClass, TEXT("UNiagaraSimCacheDebugData"), &Z_Registration_Info_UClass_UNiagaraSimCacheDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimCacheDebugData), 2506767976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_1270411410(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSimCacheDebugData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
