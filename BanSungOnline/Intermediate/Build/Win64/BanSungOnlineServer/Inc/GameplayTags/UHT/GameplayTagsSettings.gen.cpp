// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagsSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagsManager.h"
#include "Runtime/GameplayTags/Public/GameplayTagRedirectors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagCategoryRemap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap;
class UScriptStruct* FGameplayTagCategoryRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCategoryRemap"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagCategoryRemap>()
{
	return FGameplayTagCategoryRemap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCategory_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapCategories_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemapCategories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemapCategories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory = { "BaseCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagCategoryRemap, BaseCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCategory_MetaData), NewProp_BaseCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner = { "RemapCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories = { "RemapCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagCategoryRemap, RemapCategories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapCategories_MetaData), NewProp_RemapCategories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"GameplayTagCategoryRemap",
	Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers),
	sizeof(FGameplayTagCategoryRemap),
	alignof(FGameplayTagCategoryRemap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton;
}
// End ScriptStruct FGameplayTagCategoryRemap

// Begin Class UGameplayTagsList
void UGameplayTagsList::StaticRegisterNativesUGameplayTagsList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsList);
UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister()
{
	return UGameplayTagsList::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagsList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[] = {
		{ "Comment", "/** Relative path to the ini file that is backing this list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of tags saved to this file */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of tags saved to this file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName = { "ConfigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsList, ConfigFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigFileName_MetaData), NewProp_ConfigFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner = { "GameplayTagList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagTableRow, METADATA_PARAMS(0, nullptr) }; // 1004660030
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList = { "GameplayTagList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsList, GameplayTagList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagList_MetaData), NewProp_GameplayTagList_MetaData) }; // 1004660030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagsList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams = {
	&UGameplayTagsList::StaticClass,
	"GameplayTagsList",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagsList()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton, Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsList>()
{
	return UGameplayTagsList::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsList);
UGameplayTagsList::~UGameplayTagsList() {}
// End Class UGameplayTagsList

// Begin Class URestrictedGameplayTagsList
void URestrictedGameplayTagsList::StaticRegisterNativesURestrictedGameplayTagsList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestrictedGameplayTagsList);
UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister()
{
	return URestrictedGameplayTagsList::StaticClass();
}
struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[] = {
		{ "Comment", "/** Relative path to the ini file that is backing this list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedGameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of restricted tags saved to this file */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of restricted tags saved to this file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestrictedGameplayTagList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedGameplayTagList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestrictedGameplayTagsList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName = { "ConfigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URestrictedGameplayTagsList, ConfigFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigFileName_MetaData), NewProp_ConfigFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner = { "RestrictedGameplayTagList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, METADATA_PARAMS(0, nullptr) }; // 151921750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList = { "RestrictedGameplayTagList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URestrictedGameplayTagsList, RestrictedGameplayTagList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestrictedGameplayTagList_MetaData), NewProp_RestrictedGameplayTagList_MetaData) }; // 151921750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams = {
	&URestrictedGameplayTagsList::StaticClass,
	"GameplayTags",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams), Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URestrictedGameplayTagsList()
{
	if (!Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton, Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UClass* StaticClass<URestrictedGameplayTagsList>()
{
	return URestrictedGameplayTagsList::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URestrictedGameplayTagsList);
URestrictedGameplayTagsList::~URestrictedGameplayTagsList() {}
// End Class URestrictedGameplayTagsList

// Begin ScriptStruct FRestrictedConfigInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RestrictedConfigInfo;
class UScriptStruct* FRestrictedConfigInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedConfigInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FRestrictedConfigInfo>()
{
	return FRestrictedConfigInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owners_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RestrictedConfigName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Owners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Owners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedConfigInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName = { "RestrictedConfigName", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRestrictedConfigInfo, RestrictedConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestrictedConfigName_MetaData), NewProp_RestrictedConfigName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner = { "Owners", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners = { "Owners", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRestrictedConfigInfo, Owners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owners_MetaData), NewProp_Owners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"RestrictedConfigInfo",
	Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers),
	sizeof(FRestrictedConfigInfo),
	alignof(FRestrictedConfigInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton, Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton;
}
// End ScriptStruct FRestrictedConfigInfo

// Begin Class UGameplayTagsSettings
void UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsSettings);
UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister()
{
	return UGameplayTagsSettings::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Class for importing GameplayTags directly from a config file.\n *\x09""FGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\n *\x09""Editing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n *\x09\n *\x09Primary advantages of this approach are:\n *\x09-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n *\x09-New tags are mergeable since .ini are text and non exclusive checkout.\n *\x09\n *\x09To do:\n *\x09-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\n *\x09the user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag).\n *\x09\n */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Class for importing GameplayTags directly from a config file.\nFGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\nEditing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n\nPrimary advantages of this approach are:\n-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n-New tags are mergeable since .ini are text and non exclusive checkout.\n\nTo do:\n-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\nthe user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportTagsFromConfig_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** If true, will import tags from ini files in the config/tags folder */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will import tags from ini files in the config/tags folder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarnOnInvalidTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** If true, will give load warnings when reading in saved tag references that are not in the dictionary */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will give load warnings when reading in saved tag references that are not in the dictionary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearInvalidTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowEditorTagUnloading_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** If true, will allow unloading of tags in the editor when plugins are removed */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will allow unloading of tags in the editor when plugins are removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowGameTagUnloading_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** If true, will allow unloading of tags in a non-editor gebuild when plugins are removed, this is potentially unsafe and affects requests to unload during play in editor */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will allow unloading of tags in a non-editor gebuild when plugins are removed, this is potentially unsafe and affects requests to unload during play in editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastReplication_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicReplication_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** If true, will replicate gameplay tags dynamically by index per connection. Slightly higher cost than FastReplication, but tags can differ between client and server */" },
		{ "EditCondition", "!FastReplication" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will replicate gameplay tags dynamically by index per connection. Slightly higher cost than FastReplication, but tags can differ between client and server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidTagCharacters_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** These characters cannot be used in gameplay tags, in addition to special ones like newline*/" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "These characters cannot be used in gameplay tags, in addition to special ones like newline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryRemapping_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTableList_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of data tables to load tags from */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of data tables to load tags from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagRedirects_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of active tag redirects */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of active tag redirects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonlyReplicatedTags_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** List of most frequently replicated tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of most frequently replicated tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBitsForContainerSize_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** Numbers of bits to use for replicating container size, set this based on how large your containers tend to be */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Numbers of bits to use for replicating container size, set this based on how large your containers tend to be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetIndexFirstBitSegment_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigFiles_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** A list of .ini files used to store restricted gameplay tags. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "A list of .ini files used to store restricted gameplay tags." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedTagList_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** Restricted Gameplay Tags.\n\x09 * \n\x09 *  Restricted tags are intended to be top level tags that are important for your data hierarchy and modified by very few people.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Restricted Gameplay Tags.\n\nRestricted tags are intended to be top level tags that are important for your data hierarchy and modified by very few people." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTagSource_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Add a new gameplay tag config file for saving plugin or game-specific tags. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Add a new gameplay tag config file for saving plugin or game-specific tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupUnusedTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Find and remove unused tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Find and remove unused tags" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_ImportTagsFromConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportTagsFromConfig;
	static void NewProp_WarnOnInvalidTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnOnInvalidTags;
	static void NewProp_ClearInvalidTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearInvalidTags;
	static void NewProp_AllowEditorTagUnloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowEditorTagUnloading;
	static void NewProp_AllowGameTagUnloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowGameTagUnloading;
	static void NewProp_FastReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FastReplication;
	static void NewProp_bDynamicReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicReplication;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidTagCharacters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryRemapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryRemapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagTableList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTableList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagRedirects;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CommonlyReplicatedTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonlyReplicatedTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBitsForContainerSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NetIndexFirstBitSegment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestrictedConfigFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedConfigFiles;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RestrictedTagList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewTagSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CleanupUnusedTags;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->ImportTagsFromConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig = { "ImportTagsFromConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportTagsFromConfig_MetaData), NewProp_ImportTagsFromConfig_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->WarnOnInvalidTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags = { "WarnOnInvalidTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarnOnInvalidTags_MetaData), NewProp_WarnOnInvalidTags_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->ClearInvalidTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags = { "ClearInvalidTags", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearInvalidTags_MetaData), NewProp_ClearInvalidTags_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->AllowEditorTagUnloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading = { "AllowEditorTagUnloading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowEditorTagUnloading_MetaData), NewProp_AllowEditorTagUnloading_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->AllowGameTagUnloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading = { "AllowGameTagUnloading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowGameTagUnloading_MetaData), NewProp_AllowGameTagUnloading_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->FastReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication = { "FastReplication", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastReplication_MetaData), NewProp_FastReplication_MetaData) };
void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_bDynamicReplication_SetBit(void* Obj)
{
	((UGameplayTagsSettings*)Obj)->bDynamicReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_bDynamicReplication = { "bDynamicReplication", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_bDynamicReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicReplication_MetaData), NewProp_bDynamicReplication_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters = { "InvalidTagCharacters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, InvalidTagCharacters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidTagCharacters_MetaData), NewProp_InvalidTagCharacters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner = { "CategoryRemapping", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, METADATA_PARAMS(0, nullptr) }; // 859589355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping = { "CategoryRemapping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, CategoryRemapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryRemapping_MetaData), NewProp_CategoryRemapping_MetaData) }; // 859589355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner = { "GameplayTagTableList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList = { "GameplayTagTableList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagTableList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagTableList_MetaData), NewProp_GameplayTagTableList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner = { "GameplayTagRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagRedirect, METADATA_PARAMS(0, nullptr) }; // 1444178698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects = { "GameplayTagRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagRedirects_MetaData), NewProp_GameplayTagRedirects_MetaData) }; // 1444178698
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner = { "CommonlyReplicatedTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags = { "CommonlyReplicatedTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, CommonlyReplicatedTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonlyReplicatedTags_MetaData), NewProp_CommonlyReplicatedTags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize = { "NumBitsForContainerSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, NumBitsForContainerSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBitsForContainerSize_MetaData), NewProp_NumBitsForContainerSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment = { "NetIndexFirstBitSegment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, NetIndexFirstBitSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetIndexFirstBitSegment_MetaData), NewProp_NetIndexFirstBitSegment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner = { "RestrictedConfigFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRestrictedConfigInfo, METADATA_PARAMS(0, nullptr) }; // 3817237047
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles = { "RestrictedConfigFiles", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedConfigFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestrictedConfigFiles_MetaData), NewProp_RestrictedConfigFiles_MetaData) }; // 3817237047
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList = { "RestrictedTagList", nullptr, (EPropertyFlags)0x0010040800002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedTagList), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestrictedTagList_MetaData), NewProp_RestrictedTagList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NewTagSource = { "NewTagSource", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, NewTagSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTagSource_MetaData), NewProp_NewTagSource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CleanupUnusedTags = { "CleanupUnusedTags", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsSettings, CleanupUnusedTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupUnusedTags_MetaData), NewProp_CleanupUnusedTags_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_bDynamicReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NewTagSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CleanupUnusedTags,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTagsList,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams = {
	&UGameplayTagsSettings::StaticClass,
	"GameplayTags",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagsSettings()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton, Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsSettings>()
{
	return UGameplayTagsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsSettings);
UGameplayTagsSettings::~UGameplayTagsSettings() {}
// End Class UGameplayTagsSettings

// Begin Class UGameplayTagsDeveloperSettings
void UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsDeveloperSettings);
UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister()
{
	return UGameplayTagsDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Gameplay Tag Editing" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoriteTagSource_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Stores the favorite tag source, used as the default ini when adding new tags, can be toggled on/off using the button next to the tag source picker */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Stores the favorite tag source, used as the default ini when adding new tags, can be toggled on/off using the button next to the tag source picker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperConfigName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FavoriteTagSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName = { "DeveloperConfigName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, DeveloperConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperConfigName_MetaData), NewProp_DeveloperConfigName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource = { "FavoriteTagSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, FavoriteTagSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoriteTagSource_MetaData), NewProp_FavoriteTagSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams = {
	&UGameplayTagsDeveloperSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsDeveloperSettings>()
{
	return UGameplayTagsDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsDeveloperSettings);
UGameplayTagsDeveloperSettings::~UGameplayTagsDeveloperSettings() {}
// End Class UGameplayTagsDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagCategoryRemap::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewStructOps, TEXT("GameplayTagCategoryRemap"), &Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagCategoryRemap), 859589355U) },
		{ FRestrictedConfigInfo::StaticStruct, Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewStructOps, TEXT("RestrictedConfigInfo"), &Z_Registration_Info_UScriptStruct_RestrictedConfigInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRestrictedConfigInfo), 3817237047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsList, UGameplayTagsList::StaticClass, TEXT("UGameplayTagsList"), &Z_Registration_Info_UClass_UGameplayTagsList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsList), 3426912800U) },
		{ Z_Construct_UClass_URestrictedGameplayTagsList, URestrictedGameplayTagsList::StaticClass, TEXT("URestrictedGameplayTagsList"), &Z_Registration_Info_UClass_URestrictedGameplayTagsList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestrictedGameplayTagsList), 1141726770U) },
		{ Z_Construct_UClass_UGameplayTagsSettings, UGameplayTagsSettings::StaticClass, TEXT("UGameplayTagsSettings"), &Z_Registration_Info_UClass_UGameplayTagsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsSettings), 2102151248U) },
		{ Z_Construct_UClass_UGameplayTagsDeveloperSettings, UGameplayTagsDeveloperSettings::StaticClass, TEXT("UGameplayTagsDeveloperSettings"), &Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsDeveloperSettings), 3363799176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_2275506018(TEXT("/Script/GameplayTags"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
