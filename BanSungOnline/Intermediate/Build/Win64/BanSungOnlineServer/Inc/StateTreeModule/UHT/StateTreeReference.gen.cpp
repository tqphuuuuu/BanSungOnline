// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeReference.h"
#include "Runtime/CoreUObject/Public/StructUtils/PropertyBag.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeReference() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReferenceOverrides();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeReference;
class UScriptStruct* FStateTreeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReference, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeReference"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeReference>()
{
	return FStateTreeReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct to hold reference to a StateTree asset along with values to parameterized it.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Struct to hold reference to a StateTree asset along with values to parameterized it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverrides_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Array of overridden properties. Non-overridden properties will inherit the values from the StateTree default parameters. */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Array of overridden properties. Non-overridden properties will inherit the values from the StateTree default parameters." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReference, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTree_MetaData), NewProp_StateTree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReference, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 2222206664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_PropertyOverrides_Inner = { "PropertyOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_PropertyOverrides = { "PropertyOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReference, PropertyOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverrides_MetaData), NewProp_PropertyOverrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_PropertyOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_PropertyOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeReference",
	Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers),
	sizeof(FStateTreeReference),
	alignof(FStateTreeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton;
}
// End ScriptStruct FStateTreeReference

// Begin ScriptStruct FStateTreeReferenceOverrideItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem;
class UScriptStruct* FStateTreeReferenceOverrideItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeReferenceOverrideItem"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeReferenceOverrideItem>()
{
	return FStateTreeReferenceOverrideItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Item describing a state tree override for a state with a specific tag.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Item describing a state tree override for a state with a specific tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Exact tag used to match against a tag on a linked State Tree state. */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Exact tag used to match against a tag on a linked State Tree state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeReference_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** State Tree and parameters to replace the linked state asset with. */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "SchemaCanBeOverriden", "" },
		{ "ToolTip", "State Tree and parameters to replace the linked state asset with." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeReferenceOverrideItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReferenceOverrideItem, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTag_MetaData), NewProp_StateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewProp_StateTreeReference = { "StateTreeReference", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReferenceOverrideItem, StateTreeReference), Z_Construct_UScriptStruct_FStateTreeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeReference_MetaData), NewProp_StateTreeReference_MetaData) }; // 1033739970
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewProp_StateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewProp_StateTreeReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeReferenceOverrideItem",
	Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::PropPointers),
	sizeof(FStateTreeReferenceOverrideItem),
	alignof(FStateTreeReferenceOverrideItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem.InnerSingleton;
}
// End ScriptStruct FStateTreeReferenceOverrideItem

// Begin ScriptStruct FStateTreeReferenceOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides;
class UScriptStruct* FStateTreeReferenceOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReferenceOverrides, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeReferenceOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeReferenceOverrides>()
{
	return FStateTreeReferenceOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Overrides for linked State Trees. This table is used to override State Tree references on linked states.\n * If a linked state's tag is exact match of the tag specified on the table, the reference from the table is used instead.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Overrides for linked State Trees. This table is used to override State Tree references on linked states.\nIf a linked state's tag is exact match of the tag specified on the table, the reference from the table is used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideItems_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeReferenceOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewProp_OverrideItems_Inner = { "OverrideItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem, METADATA_PARAMS(0, nullptr) }; // 3937915052
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewProp_OverrideItems = { "OverrideItems", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeReferenceOverrides, OverrideItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideItems_MetaData), NewProp_OverrideItems_MetaData) }; // 3937915052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewProp_OverrideItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewProp_OverrideItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeReferenceOverrides",
	Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::PropPointers),
	sizeof(FStateTreeReferenceOverrides),
	alignof(FStateTreeReferenceOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReferenceOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides.InnerSingleton;
}
// End ScriptStruct FStateTreeReferenceOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeReference::StaticStruct, Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewStructOps, TEXT("StateTreeReference"), &Z_Registration_Info_UScriptStruct_StateTreeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeReference), 1033739970U) },
		{ FStateTreeReferenceOverrideItem::StaticStruct, Z_Construct_UScriptStruct_FStateTreeReferenceOverrideItem_Statics::NewStructOps, TEXT("StateTreeReferenceOverrideItem"), &Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrideItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeReferenceOverrideItem), 3937915052U) },
		{ FStateTreeReferenceOverrides::StaticStruct, Z_Construct_UScriptStruct_FStateTreeReferenceOverrides_Statics::NewStructOps, TEXT("StateTreeReferenceOverrides"), &Z_Registration_Info_UScriptStruct_StateTreeReferenceOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeReferenceOverrides), 1517764015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_2815112409(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
