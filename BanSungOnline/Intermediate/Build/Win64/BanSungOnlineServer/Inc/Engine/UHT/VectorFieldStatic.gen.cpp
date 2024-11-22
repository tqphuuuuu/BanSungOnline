// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VectorField/VectorFieldStatic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldStatic() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorField();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVectorFieldStatic
void UVectorFieldStatic::StaticRegisterNativesUVectorFieldStatic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldStatic);
UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister()
{
	return UVectorFieldStatic::StaticClass();
}
struct Z_Construct_UClass_UVectorFieldStatic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "VectorFieldBounds" },
		{ "IncludePath", "VectorField/VectorFieldStatic.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Whether to keep vector field data accessible to the CPU. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Whether to keep vector field data accessible to the CPU." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
	static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldStatic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldStatic, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldStatic, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldStatic, SizeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeZ_MetaData), NewProp_SizeZ_MetaData) };
void Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
{
	((UVectorFieldStatic*)Obj)->bAllowCPUAccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVectorFieldStatic), &Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCPUAccess_MetaData), NewProp_bAllowCPUAccess_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldStatic, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldStatic, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVectorFieldStatic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVectorField,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams = {
	&UVectorFieldStatic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVectorFieldStatic()
{
	if (!Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton, Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVectorFieldStatic>()
{
	return UVectorFieldStatic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldStatic);
UVectorFieldStatic::~UVectorFieldStatic() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVectorFieldStatic)
// End Class UVectorFieldStatic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldStatic, UVectorFieldStatic::StaticClass, TEXT("UVectorFieldStatic"), &Z_Registration_Info_UClass_UVectorFieldStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldStatic), 2206308261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_691559068(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS