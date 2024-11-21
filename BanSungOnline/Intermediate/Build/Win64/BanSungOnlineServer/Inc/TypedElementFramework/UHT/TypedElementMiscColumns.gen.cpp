// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementMiscColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementMiscColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FNameColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementSyncBackToWorldTag
static_assert(std::is_polymorphic<FTypedElementSyncBackToWorldTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementSyncBackToWorldTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag;
class UScriptStruct* FTypedElementSyncBackToWorldTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSyncBackToWorldTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSyncBackToWorldTag>()
{
	return FTypedElementSyncBackToWorldTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that there are one or more bits of information in the row that\n * need to be copied out the Data Storage and into the original object. This tag\n * will automatically be removed at the end of a tick.\n */" },
		{ "DisplayName", "Sync back to world" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "Tag to indicate that there are one or more bits of information in the row that\nneed to be copied out the Data Storage and into the original object. This tag\nwill automatically be removed at the end of a tick." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSyncBackToWorldTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementSyncBackToWorldTag",
	nullptr,
	0,
	sizeof(FTypedElementSyncBackToWorldTag),
	alignof(FTypedElementSyncBackToWorldTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag.InnerSingleton;
}
// End ScriptStruct FTypedElementSyncBackToWorldTag

// Begin ScriptStruct FTypedElementSyncFromWorldTag
static_assert(std::is_polymorphic<FTypedElementSyncFromWorldTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementSyncFromWorldTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag;
class UScriptStruct* FTypedElementSyncFromWorldTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSyncFromWorldTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSyncFromWorldTag>()
{
	return FTypedElementSyncFromWorldTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to signal that data a processor copies out of the world must be synced to the data storage.\n * Useful for when an Actor was recently spawned or reloaded in the world.\n * Currently used if any property changes since there is no mechanism to selectively run\n * queries for specific changed properties.\n */" },
		{ "DisplayName", "Sync from world" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "Tag to signal that data a processor copies out of the world must be synced to the data storage.\nUseful for when an Actor was recently spawned or reloaded in the world.\nCurrently used if any property changes since there is no mechanism to selectively run\nqueries for specific changed properties." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSyncFromWorldTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementSyncFromWorldTag",
	nullptr,
	0,
	sizeof(FTypedElementSyncFromWorldTag),
	alignof(FTypedElementSyncFromWorldTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag.InnerSingleton;
}
// End ScriptStruct FTypedElementSyncFromWorldTag

// Begin ScriptStruct FTypedElementSyncFromWorldInteractiveTag
static_assert(std::is_polymorphic<FTypedElementSyncFromWorldInteractiveTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementSyncFromWorldInteractiveTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag;
class UScriptStruct* FTypedElementSyncFromWorldInteractiveTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSyncFromWorldInteractiveTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSyncFromWorldInteractiveTag>()
{
	return FTypedElementSyncFromWorldInteractiveTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to signal that data a processor copies out of the world must be synced to the data storage.\n * Useful for when an Actor was recently spawned or reloaded in the world. This version is not\n * automatically removed and intended for interactive operations that will take a few frames\n * to complete such as dragging.\n * Currently used if any property changes since there is no mechanism to selectively run\n * queries for specific changed properties.\n */" },
		{ "DisplayName", "Sync from world (interactive)" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "Tag to signal that data a processor copies out of the world must be synced to the data storage.\nUseful for when an Actor was recently spawned or reloaded in the world. This version is not\nautomatically removed and intended for interactive operations that will take a few frames\nto complete such as dragging.\nCurrently used if any property changes since there is no mechanism to selectively run\nqueries for specific changed properties." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSyncFromWorldInteractiveTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementSyncFromWorldInteractiveTag",
	nullptr,
	0,
	sizeof(FTypedElementSyncFromWorldInteractiveTag),
	alignof(FTypedElementSyncFromWorldInteractiveTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag.InnerSingleton;
}
// End ScriptStruct FTypedElementSyncFromWorldInteractiveTag

// Begin ScriptStruct FTypedElementRowReferenceColumn
static_assert(std::is_polymorphic<FTypedElementRowReferenceColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementRowReferenceColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn;
class UScriptStruct* FTypedElementRowReferenceColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementRowReferenceColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementRowReferenceColumn>()
{
	return FTypedElementRowReferenceColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A general reference to another row. \n */" },
		{ "DisplayName", "Row reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "A general reference to another row." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementRowReferenceColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementRowReferenceColumn",
	nullptr,
	0,
	sizeof(FTypedElementRowReferenceColumn),
	alignof(FTypedElementRowReferenceColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementRowReferenceColumn

// Begin ScriptStruct FNameColumn
static_assert(std::is_polymorphic<FNameColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FNameColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameColumn;
class UScriptStruct* FNameColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("NameColumn"));
	}
	return Z_Registration_Info_UScriptStruct_NameColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FNameColumn>()
{
	return FNameColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A name for this row.\n * \n * This can be used as a dynamic column to specify names for multiple items in a row.\n */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "ToolTip", "A name for this row.\n\nThis can be used as a dynamic column to specify names for multiple items in a row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementMiscColumns.h" },
		{ "Searchable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameColumn_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameColumn, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameColumn_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"NameColumn",
	Z_Construct_UScriptStruct_FNameColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameColumn_Statics::PropPointers),
	sizeof(FNameColumn),
	alignof(FNameColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameColumn()
{
	if (!Z_Registration_Info_UScriptStruct_NameColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameColumn.InnerSingleton, Z_Construct_UScriptStruct_FNameColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameColumn.InnerSingleton;
}
// End ScriptStruct FNameColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementSyncBackToWorldTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSyncBackToWorldTag_Statics::NewStructOps, TEXT("TypedElementSyncBackToWorldTag"), &Z_Registration_Info_UScriptStruct_TypedElementSyncBackToWorldTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSyncBackToWorldTag), 1081374970U) },
		{ FTypedElementSyncFromWorldTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSyncFromWorldTag_Statics::NewStructOps, TEXT("TypedElementSyncFromWorldTag"), &Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSyncFromWorldTag), 3413250975U) },
		{ FTypedElementSyncFromWorldInteractiveTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSyncFromWorldInteractiveTag_Statics::NewStructOps, TEXT("TypedElementSyncFromWorldInteractiveTag"), &Z_Registration_Info_UScriptStruct_TypedElementSyncFromWorldInteractiveTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSyncFromWorldInteractiveTag), 3069789273U) },
		{ FTypedElementRowReferenceColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementRowReferenceColumn_Statics::NewStructOps, TEXT("TypedElementRowReferenceColumn"), &Z_Registration_Info_UScriptStruct_TypedElementRowReferenceColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementRowReferenceColumn), 656418499U) },
		{ FNameColumn::StaticStruct, Z_Construct_UScriptStruct_FNameColumn_Statics::NewStructOps, TEXT("NameColumn"), &Z_Registration_Info_UScriptStruct_NameColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameColumn), 3925453420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_2202171876(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementMiscColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
