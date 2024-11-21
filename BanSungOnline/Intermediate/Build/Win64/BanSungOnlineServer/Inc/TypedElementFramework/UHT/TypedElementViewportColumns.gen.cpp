// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementViewportColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementViewportColumns() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementViewportOutlineColorColumn
static_assert(std::is_polymorphic<FTypedElementViewportOutlineColorColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementViewportOutlineColorColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn;
class UScriptStruct* FTypedElementViewportOutlineColorColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementViewportOutlineColorColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementViewportOutlineColorColumn>()
{
	return FTypedElementViewportOutlineColorColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column to hold the color that the object is outlined with in the viewport\n */" },
		{ "DisplayName", "Viewport Outline Color" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
		{ "ToolTip", "Column to hold the color that the object is outlined with in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOutlineColorIndex_MetaData[] = {
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionOutlineColorIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementViewportOutlineColorColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::NewProp_SelectionOutlineColorIndex = { "SelectionOutlineColorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementViewportOutlineColorColumn, SelectionOutlineColorIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionOutlineColorIndex_MetaData), NewProp_SelectionOutlineColorIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::NewProp_SelectionOutlineColorIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementViewportOutlineColorColumn",
	Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::PropPointers),
	sizeof(FTypedElementViewportOutlineColorColumn),
	alignof(FTypedElementViewportOutlineColorColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementViewportOutlineColorColumn

// Begin ScriptStruct FTypedElementViewportOverlayColorColumn
static_assert(std::is_polymorphic<FTypedElementViewportOverlayColorColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementViewportOverlayColorColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn;
class UScriptStruct* FTypedElementViewportOverlayColorColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementViewportOverlayColorColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementViewportOverlayColorColumn>()
{
	return FTypedElementViewportOverlayColorColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column to hold the color that the object is overlaid with in the viewport\n */" },
		{ "DisplayName", "Viewport Overlay Color" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
		{ "ToolTip", "Column to hold the color that the object is overlaid with in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementViewportColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementViewportOverlayColorColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::NewProp_OverlayColor = { "OverlayColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementViewportOverlayColorColumn, OverlayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayColor_MetaData), NewProp_OverlayColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::NewProp_OverlayColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementViewportOverlayColorColumn",
	Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::PropPointers),
	sizeof(FTypedElementViewportOverlayColorColumn),
	alignof(FTypedElementViewportOverlayColorColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementViewportOverlayColorColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementViewportOutlineColorColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::NewStructOps, TEXT("TypedElementViewportOutlineColorColumn"), &Z_Registration_Info_UScriptStruct_TypedElementViewportOutlineColorColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementViewportOutlineColorColumn), 1027902558U) },
		{ FTypedElementViewportOverlayColorColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::NewStructOps, TEXT("TypedElementViewportOverlayColorColumn"), &Z_Registration_Info_UScriptStruct_TypedElementViewportOverlayColorColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementViewportOverlayColorColumn), 4139794737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_3470264418(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
