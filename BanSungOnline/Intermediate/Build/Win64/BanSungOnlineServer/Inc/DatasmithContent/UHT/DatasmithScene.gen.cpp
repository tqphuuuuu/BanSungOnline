// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithScene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithScene() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
// End Cross Module References

// Begin Class UDatasmithScene
void UDatasmithScene::StaticRegisterNativesUDatasmithScene()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithScene);
UClass* Z_Construct_UClass_UDatasmithScene_NoRegister()
{
	return UDatasmithScene::StaticClass();
}
struct Z_Construct_UClass_UDatasmithScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithScene.h" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this Datasmith scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Importing data and options used for this Datasmith scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulkDataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the static meshes related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the static meshes related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clothes_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the textures related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the textures related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctions_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the material functions related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the material functions related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the materials related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the materials related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequences_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the level sequences related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the level sequences related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSets_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the level variant sets related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the level variant sets related to this Datasmith Scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulkDataVersion;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Clothes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Clothes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Clothes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Textures_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Textures_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialFunctions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialFunctions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialFunctions;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Materials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequences_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelSequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LevelSequences;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelVariantSets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelVariantSets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LevelVariantSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0116000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, AssetImportData), Z_Construct_UClass_UDatasmithSceneImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion = { "BulkDataVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, BulkDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulkDataVersion_MetaData), NewProp_BulkDataVersion_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp = { "StaticMeshes_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, StaticMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_ValueProp = { "Clothes", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_Key_KeyProp = { "Clothes_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes = { "Clothes", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, Clothes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clothes_MetaData), NewProp_Clothes_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, Textures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_ValueProp = { "MaterialFunctions", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_Key_KeyProp = { "MaterialFunctions_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions = { "MaterialFunctions", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, MaterialFunctions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFunctions_MetaData), NewProp_MaterialFunctions_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, Materials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp = { "LevelSequences", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp = { "LevelSequences_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences = { "LevelSequences", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, LevelSequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequences_MetaData), NewProp_LevelSequences_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_ValueProp = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_Key_KeyProp = { "LevelVariantSets_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, LevelVariantSets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelVariantSets_MetaData), NewProp_LevelVariantSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0114008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithScene, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UDatasmithScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDatasmithScene_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UDatasmithScene, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithScene_Statics::ClassParams = {
	&UDatasmithScene::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers, nullptr),
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers), 0),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithScene()
{
	if (!Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton, Z_Construct_UClass_UDatasmithScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithScene>()
{
	return UDatasmithScene::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithScene);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithScene)
// End Class UDatasmithScene

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithScene, UDatasmithScene::StaticClass, TEXT("UDatasmithScene"), &Z_Registration_Info_UClass_UDatasmithScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithScene), 3384388734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_4243586510(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
