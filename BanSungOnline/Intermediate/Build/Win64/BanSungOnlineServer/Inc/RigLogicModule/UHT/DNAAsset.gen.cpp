// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogicModule/Public/DNAAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDNAAsset();
RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDNAAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

// Begin Class UDNAAsset
void UDNAAsset::StaticRegisterNativesUDNAAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNAAsset);
UClass* Z_Construct_UClass_UDNAAsset_NoRegister()
{
	return UDNAAsset::StaticClass();
}
struct Z_Construct_UClass_UDNAAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset holding the data needed to generate/update/animate a RigLogic character\n  * It is imported from character's DNA file as a bit stream, and separated out it into runtime (behavior) and design-time chunks;\n  * Currently, the design-time part still loads the geometry, as it is needed for the skeletal mesh update; once SkeletalMeshDNAReader is\n  * fully implemented, it will be able to read the geometry directly from the SkeletalMesh and won't load it into this asset \n  **/" },
		{ "DisplayName", "MetaHuman DNA data" },
		{ "IncludePath", "DNAAsset.h" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
		{ "ToolTip", "An asset holding the data needed to generate/update/animate a RigLogic character\nIt is imported from character's DNA file as a bit stream, and separated out it into runtime (behavior) and design-time chunks;\nCurrently, the design-time part still loads the geometry, as it is needed for the skeletal mesh update; once SkeletalMeshDNAReader is\nfully implemented, it will be able to read the geometry directly from the SkeletalMesh and won't load it into this asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DnaFileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepDNAAfterInitialization_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** In non-editor builds, the DNA source data will be unloaded to save memory after the runtime\n\x09  * data has been initialized from it.\n\x09  * \n\x09  * Set this property to true to keep the DNA in memory, e.g. if you need to modify it at\n\x09  * runtime. For most use cases, this shouldn't be needed.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
		{ "ToolTip", "In non-editor builds, the DNA source data will be unloaded to save memory after the runtime\ndata has been initialized from it.\n\nSet this property to true to keep the DNA in memory, e.g. if you need to modify it at\nruntime. For most use cases, this shouldn't be needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "Comment", "/** Collection of runtime metadata related to a specific character.\n\x09  * The value field is a FString and requires casting for a derived types.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
		{ "ToolTip", "Collection of runtime metadata related to a specific character.\nThe value field is a FString and requires casting for a derived types." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DnaFileName;
	static void NewProp_bKeepDNAAfterInitialization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepDNAAfterInitialization;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNAAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDNAAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName = { "DnaFileName", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDNAAsset, DnaFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DnaFileName_MetaData), NewProp_DnaFileName_MetaData) };
void Z_Construct_UClass_UDNAAsset_Statics::NewProp_bKeepDNAAfterInitialization_SetBit(void* Obj)
{
	((UDNAAsset*)Obj)->bKeepDNAAfterInitialization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_bKeepDNAAfterInitialization = { "bKeepDNAAfterInitialization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDNAAsset), &Z_Construct_UClass_UDNAAsset_Statics::NewProp_bKeepDNAAfterInitialization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepDNAAfterInitialization_MetaData), NewProp_bKeepDNAAfterInitialization_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDNAAsset, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDNAAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_bKeepDNAAfterInitialization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_MetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDNAAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNAAsset_Statics::ClassParams = {
	&UDNAAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDNAAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDNAAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDNAAsset()
{
	if (!Z_Registration_Info_UClass_UDNAAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNAAsset.OuterSingleton, Z_Construct_UClass_UDNAAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDNAAsset.OuterSingleton;
}
template<> RIGLOGICMODULE_API UClass* StaticClass<UDNAAsset>()
{
	return UDNAAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDNAAsset);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDNAAsset)
// End Class UDNAAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDNAAsset, UDNAAsset::StaticClass, TEXT("UDNAAsset"), &Z_Registration_Info_UClass_UDNAAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNAAsset), 823668095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_3294646477(TEXT("/Script/RigLogicModule"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
