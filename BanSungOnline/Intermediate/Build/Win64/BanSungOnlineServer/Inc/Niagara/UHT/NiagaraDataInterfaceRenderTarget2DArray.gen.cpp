// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRenderTarget2DArray.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTarget2DArray() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceRenderTarget2DArray
void UNiagaraDataInterfaceRenderTarget2DArray::StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2DArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRenderTarget2DArray);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_NoRegister()
{
	return UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Rendering" },
		{ "DisplayName", "Render Target 2D Array" },
		{ "IncludePath", "NiagaraDataInterfaceRenderTarget2DArray.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the format of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "11" },
		{ "EditCondition", "!bInheritUserParameterSettings && bOverrideFormat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
		{ "ToolTip", "When enabled overrides the format of the render target, otherwise uses the project default setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFilter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the filter of the render target, otherwise uses the project default setting. */" },
		{ "DisplayPriority", "12" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
		{ "ToolTip", "When enabled overrides the filter of the render target, otherwise uses the project default setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritUserParameterSettings_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/**\n\x09When enabled texture parameters (size / etc) are taken from the user provided render target.\n\x09If no valid user parameter is set the system will be invalid.\n\x09Note: The resource will be recreated if UAV access is not available, which will reset the contents.\n\x09*/" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
		{ "ToolTip", "When enabled texture parameters (size / etc) are taken from the user provided render target.\nIf no valid user parameter is set the system will be invalid.\nNote: The resource will be recreated if UAV access is not available, which will reset the contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "10" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTarget2DArray.h" },
		{ "ToolTip", "When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFilter;
	static void NewProp_bInheritUserParameterSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritUserParameterSettings;
	static void NewProp_bOverrideFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewRenderTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewRenderTarget;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRenderTarget2DArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2DArray, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_OverrideRenderTargetFormat = { "OverrideRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRenderTargetFormat_MetaData), NewProp_OverrideRenderTargetFormat_MetaData) }; // 338846453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_OverrideRenderTargetFilter = { "OverrideRenderTargetFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRenderTargetFilter_MetaData), NewProp_OverrideRenderTargetFilter_MetaData) }; // 525537855
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bInheritUserParameterSettings_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2DArray*)Obj)->bInheritUserParameterSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bInheritUserParameterSettings = { "bInheritUserParameterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2DArray), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bInheritUserParameterSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritUserParameterSettings_MetaData), NewProp_bInheritUserParameterSettings_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2DArray*)Obj)->bOverrideFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2DArray), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFormat_MetaData), NewProp_bOverrideFormat_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bPreviewRenderTarget_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceRenderTarget2DArray*)Obj)->bPreviewRenderTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bPreviewRenderTarget = { "bPreviewRenderTarget", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTarget2DArray), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bPreviewRenderTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewRenderTarget_MetaData), NewProp_bPreviewRenderTarget_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetUserParameter_MetaData), NewProp_RenderTargetUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_OverrideRenderTargetFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_OverrideRenderTargetFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bInheritUserParameterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_bPreviewRenderTarget,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::NewProp_RenderTargetUserParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::ClassParams = {
	&UNiagaraDataInterfaceRenderTarget2DArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRenderTarget2DArray>()
{
	return UNiagaraDataInterfaceRenderTarget2DArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRenderTarget2DArray);
UNiagaraDataInterfaceRenderTarget2DArray::~UNiagaraDataInterfaceRenderTarget2DArray() {}
// End Class UNiagaraDataInterfaceRenderTarget2DArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRenderTarget2DArray, UNiagaraDataInterfaceRenderTarget2DArray::StaticClass, TEXT("UNiagaraDataInterfaceRenderTarget2DArray"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRenderTarget2DArray), 1358621764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h_2703086876(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRenderTarget2DArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
