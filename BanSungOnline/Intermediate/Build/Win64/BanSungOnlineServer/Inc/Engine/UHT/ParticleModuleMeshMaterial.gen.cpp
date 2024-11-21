// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Material/ParticleModuleMeshMaterial.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshMaterial() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleMeshMaterial
void UParticleModuleMeshMaterial::StaticRegisterNativesUParticleModuleMeshMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshMaterial);
UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister()
{
	return UParticleModuleMeshMaterial::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleMeshMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Material" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Material/ParticleModuleMeshMaterial.h" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterials_MetaData[] = {
		{ "Category", "MeshMaterials" },
		{ "Comment", "/** The array of materials to apply to the mesh particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
		{ "ToolTip", "The array of materials to apply to the mesh particles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_Inner = { "MeshMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials = { "MeshMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleMeshMaterial, MeshMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMaterials_MetaData), NewProp_MeshMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleMaterialBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::ClassParams = {
	&UParticleModuleMeshMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleMeshMaterial()
{
	if (!Z_Registration_Info_UClass_UParticleModuleMeshMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshMaterial.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleMeshMaterial.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshMaterial>()
{
	return UParticleModuleMeshMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshMaterial);
UParticleModuleMeshMaterial::~UParticleModuleMeshMaterial() {}
// End Class UParticleModuleMeshMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMeshMaterial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshMaterial, UParticleModuleMeshMaterial::StaticClass, TEXT("UParticleModuleMeshMaterial"), &Z_Registration_Info_UClass_UParticleModuleMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshMaterial), 1430053094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMeshMaterial_h_2137091129(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMeshMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMeshMaterial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
