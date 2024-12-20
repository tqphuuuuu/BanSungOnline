// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceIntRenderTarget2D.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceIntRenderTarget2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceIntRenderTarget2D
void UNiagaraDataInterfaceIntRenderTarget2D::StaticRegisterNativesUNiagaraDataInterfaceIntRenderTarget2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceIntRenderTarget2D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_NoRegister()
{
	return UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Render Target" },
		{ "DisplayName", "Integer Render Target 2D" },
		{ "Experimental", "" },
		{ "IncludePath", "NiagaraDataInterfaceIntRenderTarget2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceIntRenderTarget2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceIntRenderTarget2D.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceIntRenderTarget2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDisplayRange_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/* The range to normaliez the preview display to. */" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bPreviewRenderTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceIntRenderTarget2D.h" },
		{ "ToolTip", "The range to normaliez the preview display to." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceIntRenderTarget2D.h" },
		{ "ToolTip", "When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewRenderTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewRenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewDisplayRange;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceIntRenderTarget2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceIntRenderTarget2D, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceIntRenderTarget2D*)Obj)->bPreviewRenderTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_bPreviewRenderTarget = { "bPreviewRenderTarget", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceIntRenderTarget2D), &Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_bPreviewRenderTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewRenderTarget_MetaData), NewProp_bPreviewRenderTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_PreviewDisplayRange = { "PreviewDisplayRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceIntRenderTarget2D, PreviewDisplayRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewDisplayRange_MetaData), NewProp_PreviewDisplayRange_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetUserParameter_MetaData), NewProp_RenderTargetUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_Size,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_bPreviewRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_PreviewDisplayRange,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::NewProp_RenderTargetUserParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::ClassParams = {
	&UNiagaraDataInterfaceIntRenderTarget2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceIntRenderTarget2D>()
{
	return UNiagaraDataInterfaceIntRenderTarget2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceIntRenderTarget2D);
UNiagaraDataInterfaceIntRenderTarget2D::~UNiagaraDataInterfaceIntRenderTarget2D() {}
// End Class UNiagaraDataInterfaceIntRenderTarget2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceIntRenderTarget2D, UNiagaraDataInterfaceIntRenderTarget2D::StaticClass, TEXT("UNiagaraDataInterfaceIntRenderTarget2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceIntRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceIntRenderTarget2D), 1071255855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h_3605066137(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceIntRenderTarget2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
