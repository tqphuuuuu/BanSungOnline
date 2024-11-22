// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceCubeTexture.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCubeTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceCubeTexture
void UNiagaraDataInterfaceCubeTexture::StaticRegisterNativesUNiagaraDataInterfaceCubeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCubeTexture);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_NoRegister()
{
	return UNiagaraDataInterfaceCubeTexture::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Data Interface allowing sampling of a texture */" },
		{ "DisplayName", "Cube Texture Sample" },
		{ "IncludePath", "NiagaraDataInterfaceCubeTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCubeTexture.h" },
		{ "ToolTip", "Data Interface allowing sampling of a texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.TextureCube,/Script/Engine.TextureRenderTargetCube" },
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCubeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureUserParameter_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCubeTexture.h" },
		{ "ToolTip", "When valid the user parameter is used as the texture rather than the one on the data interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureUserParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCubeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCubeTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::NewProp_TextureUserParameter = { "TextureUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCubeTexture, TextureUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureUserParameter_MetaData), NewProp_TextureUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::NewProp_TextureUserParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::ClassParams = {
	&UNiagaraDataInterfaceCubeTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCubeTexture>()
{
	return UNiagaraDataInterfaceCubeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCubeTexture);
UNiagaraDataInterfaceCubeTexture::~UNiagaraDataInterfaceCubeTexture() {}
// End Class UNiagaraDataInterfaceCubeTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCubeTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCubeTexture, UNiagaraDataInterfaceCubeTexture::StaticClass, TEXT("UNiagaraDataInterfaceCubeTexture"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCubeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCubeTexture), 1815480533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCubeTexture_h_2055112563(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCubeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCubeTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS