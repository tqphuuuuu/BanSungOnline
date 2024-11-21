// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Common/TypedElementCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCommonTypes() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FEditorDataStorageColumn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorDataStorageColumn;
class UScriptStruct* FEditorDataStorageColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorDataStorageColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("EditorDataStorageColumn"));
	}
	return Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FEditorDataStorageColumn>()
{
	return FEditorDataStorageColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures for a column.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Common/TypedElementCommonTypes.h" },
		{ "ToolTip", "Base for the data structures for a column." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorDataStorageColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"EditorDataStorageColumn",
	nullptr,
	0,
	sizeof(FEditorDataStorageColumn),
	alignof(FEditorDataStorageColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn()
{
	if (!Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.InnerSingleton, Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditorDataStorageColumn.InnerSingleton;
}
// End ScriptStruct FEditorDataStorageColumn

// Begin ScriptStruct FEditorDataStorageTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorDataStorageTag;
class UScriptStruct* FEditorDataStorageTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorDataStorageTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorDataStorageTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorDataStorageTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("EditorDataStorageTag"));
	}
	return Z_Registration_Info_UScriptStruct_EditorDataStorageTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FEditorDataStorageTag>()
{
	return FEditorDataStorageTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures that act as tags to rows. Tags should not have any data.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Common/TypedElementCommonTypes.h" },
		{ "ToolTip", "Base for the data structures that act as tags to rows. Tags should not have any data." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorDataStorageTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"EditorDataStorageTag",
	nullptr,
	0,
	sizeof(FEditorDataStorageTag),
	alignof(FEditorDataStorageTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag()
{
	if (!Z_Registration_Info_UScriptStruct_EditorDataStorageTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorDataStorageTag.InnerSingleton, Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EditorDataStorageTag.InnerSingleton;
}
// End ScriptStruct FEditorDataStorageTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementCommonTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEditorDataStorageColumn::StaticStruct, Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::NewStructOps, TEXT("EditorDataStorageColumn"), &Z_Registration_Info_UScriptStruct_EditorDataStorageColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorDataStorageColumn), 652831563U) },
		{ FEditorDataStorageTag::StaticStruct, Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::NewStructOps, TEXT("EditorDataStorageTag"), &Z_Registration_Info_UScriptStruct_EditorDataStorageTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorDataStorageTag), 771874343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementCommonTypes_h_3724632468(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementCommonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Common_TypedElementCommonTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
