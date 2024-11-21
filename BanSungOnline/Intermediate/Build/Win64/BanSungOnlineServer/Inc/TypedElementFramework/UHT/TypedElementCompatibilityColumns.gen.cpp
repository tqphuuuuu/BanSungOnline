// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementCompatibilityColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCompatibilityColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementActorTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWorldColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementUObjectColumn
static_assert(std::is_polymorphic<FTypedElementUObjectColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementUObjectColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn;
class UScriptStruct* FTypedElementUObjectColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementUObjectColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementUObjectColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementUObjectColumn>()
{
	return FTypedElementUObjectColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing a non-owning reference to a UObject.\n */" },
		{ "DisplayName", "UObject reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column containing a non-owning reference to a UObject." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementUObjectColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementUObjectColumn",
	nullptr,
	0,
	sizeof(FTypedElementUObjectColumn),
	alignof(FTypedElementUObjectColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementUObjectColumn

// Begin ScriptStruct FTypedElementUObjectIdColumn
static_assert(std::is_polymorphic<FTypedElementUObjectIdColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementUObjectIdColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn;
class UScriptStruct* FTypedElementUObjectIdColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementUObjectIdColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementUObjectIdColumn>()
{
	return FTypedElementUObjectIdColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing information to uniquely identify the UObject, e.g. for use by the garbage collection.\n */" },
		{ "DisplayName", "UObject ID" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column containing information to uniquely identify the UObject, e.g. for use by the garbage collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementUObjectIdColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementUObjectIdColumn, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementUObjectIdColumn, SerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerialNumber_MetaData), NewProp_SerialNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::NewProp_SerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementUObjectIdColumn",
	Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::PropPointers),
	sizeof(FTypedElementUObjectIdColumn),
	alignof(FTypedElementUObjectIdColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementUObjectIdColumn

// Begin ScriptStruct FTypedElementExternalObjectColumn
static_assert(std::is_polymorphic<FTypedElementExternalObjectColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementExternalObjectColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn;
class UScriptStruct* FTypedElementExternalObjectColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementExternalObjectColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementExternalObjectColumn>()
{
	return FTypedElementExternalObjectColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column containing a non-owning reference to an arbitrary object. It's strongly recommended\n * to also add a FTypedElementScriptStructTypeInfoColumn to make sure the type can be safely\n * recovered.\n */" },
		{ "DisplayName", "External object reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column containing a non-owning reference to an arbitrary object. It's strongly recommended\nto also add a FTypedElementScriptStructTypeInfoColumn to make sure the type can be safely\nrecovered." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementExternalObjectColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementExternalObjectColumn",
	nullptr,
	0,
	sizeof(FTypedElementExternalObjectColumn),
	alignof(FTypedElementExternalObjectColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementExternalObjectColumn

// Begin ScriptStruct FTypedElementClassDefaultObjectTag
static_assert(std::is_polymorphic<FTypedElementClassDefaultObjectTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementClassDefaultObjectTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag;
class UScriptStruct* FTypedElementClassDefaultObjectTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementClassDefaultObjectTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementClassDefaultObjectTag>()
{
	return FTypedElementClassDefaultObjectTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to identify a row with a Class Default Object (CDO).\n * If there's a FTypedElementUObjectColumn, the stored object will be a CDO if this tag is present.\n */" },
		{ "DisplayName", "Class Default Object" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Tag to identify a row with a Class Default Object (CDO).\nIf there's a FTypedElementUObjectColumn, the stored object will be a CDO if this tag is present." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementClassDefaultObjectTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementClassDefaultObjectTag",
	nullptr,
	0,
	sizeof(FTypedElementClassDefaultObjectTag),
	alignof(FTypedElementClassDefaultObjectTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag.InnerSingleton;
}
// End ScriptStruct FTypedElementClassDefaultObjectTag

// Begin ScriptStruct FTypedElementActorTag
static_assert(std::is_polymorphic<FTypedElementActorTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementActorTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementActorTag;
class UScriptStruct* FTypedElementActorTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementActorTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementActorTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementActorTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementActorTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementActorTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementActorTag>()
{
	return FTypedElementActorTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementActorTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to identify a row with an actor. If there's a FTypedElementUObjectColumn, the stored object will be\n * an actor if this tag is present.\n */" },
		{ "DisplayName", "Actor" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Tag to identify a row with an actor. If there's a FTypedElementUObjectColumn, the stored object will be\nan actor if this tag is present." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementActorTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementActorTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementActorTag",
	nullptr,
	0,
	sizeof(FTypedElementActorTag),
	alignof(FTypedElementActorTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementActorTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementActorTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementActorTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementActorTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementActorTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementActorTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementActorTag.InnerSingleton;
}
// End ScriptStruct FTypedElementActorTag

// Begin ScriptStruct FTypedElementWorldColumn
static_assert(std::is_polymorphic<FTypedElementWorldColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementWorldColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementWorldColumn;
class UScriptStruct* FTypedElementWorldColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementWorldColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementWorldColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementWorldColumn>()
{
	return FTypedElementWorldColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that stores a reference to the world.\n */" },
		{ "DisplayName", "World" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Column that stores a reference to the world." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementWorldColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementWorldColumn",
	nullptr,
	0,
	sizeof(FTypedElementWorldColumn),
	alignof(FTypedElementWorldColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWorldColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWorldColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementWorldColumn

// Begin ScriptStruct FTypedElementPropertyBagPlaceholderTag
static_assert(std::is_polymorphic<FTypedElementPropertyBagPlaceholderTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementPropertyBagPlaceholderTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag;
class UScriptStruct* FTypedElementPropertyBagPlaceholderTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPropertyBagPlaceholderTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPropertyBagPlaceholderTag>()
{
	return FTypedElementPropertyBagPlaceholderTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to signal that a row represents a property bag \"placeholder-typed\" object reference.\n * This object has an unknown base type and will generally be associated with a \"property\n * bag\" containing any serialized data that was loaded for it as a set of \"loose\" properties.\n */" },
		{ "DisplayName", "Property bag placeholder" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Tag to signal that a row represents a property bag \"placeholder-typed\" object reference.\nThis object has an unknown base type and will generally be associated with a \"property\nbag\" containing any serialized data that was loaded for it as a set of \"loose\" properties." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPropertyBagPlaceholderTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementPropertyBagPlaceholderTag",
	nullptr,
	0,
	sizeof(FTypedElementPropertyBagPlaceholderTag),
	alignof(FTypedElementPropertyBagPlaceholderTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag.InnerSingleton;
}
// End ScriptStruct FTypedElementPropertyBagPlaceholderTag

// Begin ScriptStruct FTypedElementLoosePropertyTag
static_assert(std::is_polymorphic<FTypedElementLoosePropertyTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementLoosePropertyTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag;
class UScriptStruct* FTypedElementLoosePropertyTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementLoosePropertyTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementLoosePropertyTag>()
{
	return FTypedElementLoosePropertyTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to signal that a row contains an object with at least one loose property associated with it.\n */" },
		{ "DisplayName", "Loose property" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "Tag to signal that a row contains an object with at least one loose property associated with it." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementLoosePropertyTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementLoosePropertyTag",
	nullptr,
	0,
	sizeof(FTypedElementLoosePropertyTag),
	alignof(FTypedElementLoosePropertyTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag.InnerSingleton;
}
// End ScriptStruct FTypedElementLoosePropertyTag

// Begin ScriptStruct FTypedElementPropertyBagPlaceholderTypeInfoColumn
static_assert(std::is_polymorphic<FTypedElementPropertyBagPlaceholderTypeInfoColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementPropertyBagPlaceholderTypeInfoColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn;
class UScriptStruct* FTypedElementPropertyBagPlaceholderTypeInfoColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementPropertyBagPlaceholderTypeInfoColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementPropertyBagPlaceholderTypeInfoColumn>()
{
	return FTypedElementPropertyBagPlaceholderTypeInfoColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A column that stores an inferred base type for placeholder-typed object references. Note that\n * this will not be the same as the placeholder object type (stored in the class type info column).\n * This column can be used to query for a \"base type\" determined from the serialization context,\n * for systems that need to look/behave differently based on an inferred base type context (e.g. UI).\n */" },
		{ "DisplayName", "Placeholder type info" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementCompatibilityColumns.h" },
		{ "ToolTip", "A column that stores an inferred base type for placeholder-typed object references. Note that\nthis will not be the same as the placeholder object type (stored in the class type info column).\nThis column can be used to query for a \"base type\" determined from the serialization context,\nfor systems that need to look/behave differently based on an inferred base type context (e.g. UI)." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPropertyBagPlaceholderTypeInfoColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementPropertyBagPlaceholderTypeInfoColumn",
	nullptr,
	0,
	sizeof(FTypedElementPropertyBagPlaceholderTypeInfoColumn),
	alignof(FTypedElementPropertyBagPlaceholderTypeInfoColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementPropertyBagPlaceholderTypeInfoColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementUObjectColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementUObjectColumn_Statics::NewStructOps, TEXT("TypedElementUObjectColumn"), &Z_Registration_Info_UScriptStruct_TypedElementUObjectColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementUObjectColumn), 272736460U) },
		{ FTypedElementUObjectIdColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementUObjectIdColumn_Statics::NewStructOps, TEXT("TypedElementUObjectIdColumn"), &Z_Registration_Info_UScriptStruct_TypedElementUObjectIdColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementUObjectIdColumn), 1203461169U) },
		{ FTypedElementExternalObjectColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementExternalObjectColumn_Statics::NewStructOps, TEXT("TypedElementExternalObjectColumn"), &Z_Registration_Info_UScriptStruct_TypedElementExternalObjectColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementExternalObjectColumn), 261181508U) },
		{ FTypedElementClassDefaultObjectTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementClassDefaultObjectTag_Statics::NewStructOps, TEXT("TypedElementClassDefaultObjectTag"), &Z_Registration_Info_UScriptStruct_TypedElementClassDefaultObjectTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementClassDefaultObjectTag), 3985062867U) },
		{ FTypedElementActorTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementActorTag_Statics::NewStructOps, TEXT("TypedElementActorTag"), &Z_Registration_Info_UScriptStruct_TypedElementActorTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementActorTag), 421102622U) },
		{ FTypedElementWorldColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementWorldColumn_Statics::NewStructOps, TEXT("TypedElementWorldColumn"), &Z_Registration_Info_UScriptStruct_TypedElementWorldColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementWorldColumn), 888331194U) },
		{ FTypedElementPropertyBagPlaceholderTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTag_Statics::NewStructOps, TEXT("TypedElementPropertyBagPlaceholderTag"), &Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPropertyBagPlaceholderTag), 3488986054U) },
		{ FTypedElementLoosePropertyTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementLoosePropertyTag_Statics::NewStructOps, TEXT("TypedElementLoosePropertyTag"), &Z_Registration_Info_UScriptStruct_TypedElementLoosePropertyTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementLoosePropertyTag), 1255582470U) },
		{ FTypedElementPropertyBagPlaceholderTypeInfoColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPropertyBagPlaceholderTypeInfoColumn_Statics::NewStructOps, TEXT("TypedElementPropertyBagPlaceholderTypeInfoColumn"), &Z_Registration_Info_UScriptStruct_TypedElementPropertyBagPlaceholderTypeInfoColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPropertyBagPlaceholderTypeInfoColumn), 2406322051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_3314970004(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementCompatibilityColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
